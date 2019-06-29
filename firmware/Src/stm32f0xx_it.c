#include "stm32f0xx.h"
#include "stm32f0xx_it.h"


void NMI_Handler(void)
{
}

void HardFault_Handler(void)
{
  while (1)
  {
  }
}


void SVC_Handler(void)
{
}

void PendSV_Handler(void)
{
}

void SysTick_Handler(void)
{
}


void EXTI0_1_IRQHandler(void)
{
  if (LL_EXTI_IsActiveFlag_0_31(LL_EXTI_LINE_0) != RESET)
  {
    LL_EXTI_ClearFlag_0_31(LL_EXTI_LINE_0);
    if(dir)
	  r+=stepangle;
	else  
	  r-=stepangle;
  }
  if (LL_EXTI_IsActiveFlag_0_31(LL_EXTI_LINE_1) != RESET)
  {
    LL_EXTI_ClearFlag_0_31(LL_EXTI_LINE_1);
    if(DIRIN==1)
	  dir=1;
	else
	  dir=0;
  }
}

void EXTI2_3_IRQHandler(void)
{
  if (LL_EXTI_IsActiveFlag_0_31(LL_EXTI_LINE_2) != RESET)
  {
    LL_EXTI_ClearFlag_0_31(LL_EXTI_LINE_2);
	if(ENIN==1)
	  enmode=1;
	else
	{
	  enmode=0;
      LL_TIM_OC_SetCompareCH1(TIM3,0);  
	  LL_TIM_OC_SetCompareCH2(TIM3,0);  
	}
  }
}

/**
* @brief This function handles TIM6 global interrupt.
*/
void TIM6_IRQHandler(void)
{
  if(LL_TIM_IsActiveFlag_UPDATE(TIM6) == 1)
  {
    LL_TIM_ClearFlag_UPDATE(TIM6); 
	LL_IWDG_ReloadCounter(IWDG);
    if(enmode==1)
	{
	  if(closemode==1) 
	  {    
		y=*(volatile uint16_t*)((ReadValue(READ_ANGLE_VALUE)>>1)*2+0x08008000);
		y=y*360.0/16384;
        if(y-y_1>180.0) 
	      wrap_count--;      
        else if(y-y_1<-180.0) 
	      wrap_count++; 
        yw=y+360.0*wrap_count;             
	    e=r-yw; 
        if((e>1.8)||(e>1.8))
          LED_H;
        else
          LED_L;			
//        if(e>36.0)
//          e=36.0;
//        else if(e<-36.0)
//          e=-36.0;			
        iterm+=ki*e;                          
        if(iterm>UMAXCL)
	      iterm=UMAXCL;
        else if(iterm<-UMAXCL) 
		  iterm=-UMAXCL;          
           
        dterm=LPFA*dterm-LPFB*kd*(yw-yw_1);          
        u=kp*e+iterm+dterm; 	

        y_1=y;  //copy current value of y to previous value (y_1) for next control cycle before PA angle added   
        yw_1=yw;
	
	    if(u>0)             //You can experiment with "Phase Advance" by increasing PA when operating at high speeds
        {
		  y+=1.5;
		}
        else 
        {
		  y-=1.5;
		  u=-u;
		}
        if(u>UMAXCL)     // limit control effort
          u=UMAXCL;       //saturation limits max current command	                  //digitalWrite(ledPin, LOW);
        Output(y,roundf(u));    // update phase currents
      }          
      else 
	  {
		if(r==r_1)
		{
		  hccount++;
		  if(hccount>=1000)
		    hccount=1000;
		}
		else
		  hccount=0;
		
        if(hccount>=1000)
		  Output(r,UMAXOP/2);
		else
		  Output(r,UMAXOP);
		r_1=r;
	  }
    }
  }
}


