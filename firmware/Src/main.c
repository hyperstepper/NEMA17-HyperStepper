#include "main.h"

const int sin_1[] = 
{
    +0,    +2,    +4,    +5,    +7,    +9,   +11,   +13,   +14,   +16,
   +18,   +20,   +21,   +23,   +25,   +27,   +29,   +30,   +32,   +34,
   +36,   +38,   +39,   +41,   +43,   +45,   +46,   +48,   +50,   +52,
   +54,   +55,   +57,   +59,   +61,   +63,   +64,   +66,   +68,   +70,
   +71,   +73,   +75,   +77,   +79,   +80,   +82,   +84,   +86,   +87,
   +89,   +91,   +93,   +95,   +96,   +98,  +100,  +102,  +103,  +105,
  +107,  +109,  +111,  +112,  +114,  +116,  +118,  +119,  +121,  +123,
  +125,  +127,  +128,  +130,  +132,  +134,  +135,  +137,  +139,  +141,
  +143,  +144,  +146,  +148,  +150,  +151,  +153,  +155,  +157,  +158,
  +160,  +162,  +164,  +165,  +167,  +169,  +171,  +173,  +174,  +176,
  +178,  +180,  +181,  +183,  +185,  +187,  +188,  +190,  +192,  +194,
  +195,  +197,  +199,  +201,  +202,  +204,  +206,  +208,  +209,  +211,
  +213,  +215,  +216,  +218,  +220,  +222,  +223,  +225,  +227,  +229,
  +230,  +232,  +234,  +236,  +237,  +239,  +241,  +243,  +244,  +246,
  +248,  +249,  +251,  +253,  +255,  +256,  +258,  +260,  +262,  +263,
  +265,  +267,  +268,  +270,  +272,  +274,  +275,  +277,  +279,  +281,
  +282,  +284,  +286,  +287,  +289,  +291,  +293,  +294,  +296,  +298,
  +299,  +301,  +303,  +305,  +306,  +308,  +310,  +311,  +313,  +315,
  +316,  +318,  +320,  +322,  +323,  +325,  +327,  +328,  +330,  +332,
  +333,  +335,  +337,  +338,  +340,  +342,  +343,  +345,  +347,  +349,
  +350,  +352,  +354,  +355,  +357,  +359,  +360,  +362,  +364,  +365,
  +367,  +369,  +370,  +372,  +374,  +375,  +377,  +379,  +380,  +382,
  +384,  +385,  +387,  +389,  +390,  +392,  +394,  +395,  +397,  +398,
  +400,  +402,  +403,  +405,  +407,  +408,  +410,  +412,  +413,  +415,
  +416,  +418,  +420,  +421,  +423,  +425,  +426,  +428,  +430,  +431,
  +433,  +434,  +436,  +438,  +439,  +441,  +442,  +444,  +446,  +447,
  +449,  +450,  +452,  +454,  +455,  +457,  +458,  +460,  +462,  +463,
  +465,  +466,  +468,  +470,  +471,  +473,  +474,  +476,  +478,  +479,
  +481,  +482,  +484,  +485,  +487,  +489,  +490,  +492,  +493,  +495,
  +496,  +498,  +500,  +501,  +503,  +504,  +506,  +507,  +509,  +510,
  +512,  +514,  +515,  +517,  +518,  +520,  +521,  +523,  +524,  +526,
  +527,  +529,  +530,  +532,  +533,  +535,  +537,  +538,  +540,  +541,
  +543,  +544,  +546,  +547,  +549,  +550,  +552,  +553,  +555,  +556,
  +558,  +559,  +561,  +562,  +564,  +565,  +567,  +568,  +570,  +571,
  +573,  +574,  +576,  +577,  +579,  +580,  +581,  +583,  +584,  +586,
  +587,  +589,  +590,  +592,  +593,  +595,  +596,  +598,  +599,  +600,
  +602,  +603,  +605,  +606,  +608,  +609,  +611,  +612,  +613,  +615,
  +616,  +618,  +619,  +621,  +622,  +623,  +625,  +626,  +628,  +629,
  +630,  +632,  +633,  +635,  +636,  +637,  +639,  +640,  +642,  +643,
  +644,  +646,  +647,  +649,  +650,  +651,  +653,  +654,  +655,  +657,
  +658,  +660,  +661,  +662,  +664,  +665,  +666,  +668,  +669,  +670,
  +672,  +673,  +674,  +676,  +677,  +679,  +680,  +681,  +683,  +684,
  +685,  +687,  +688,  +689,  +690,  +692,  +693,  +694,  +696,  +697,
  +698,  +700,  +701,  +702,  +704,  +705,  +706,  +707,  +709,  +710,
  +711,  +713,  +714,  +715,  +716,  +718,  +719,  +720,  +722,  +723,
  +724,  +725,  +727,  +728,  +729,  +730,  +732,  +733,  +734,  +735,
  +737,  +738,  +739,  +740,  +742,  +743,  +744,  +745,  +746,  +748,
  +749,  +750,  +751,  +753,  +754,  +755,  +756,  +757,  +759,  +760,
  +761,  +762,  +763,  +765,  +766,  +767,  +768,  +769,  +770,  +772,
  +773,  +774,  +775,  +776,  +777,  +779,  +780,  +781,  +782,  +783,
  +784,  +786,  +787,  +788,  +789,  +790,  +791,  +792,  +794,  +795,
  +796,  +797,  +798,  +799,  +800,  +801,  +802,  +804,  +805,  +806,
  +807,  +808,  +809,  +810,  +811,  +812,  +813,  +815,  +816,  +817,
  +818,  +819,  +820,  +821,  +822,  +823,  +824,  +825,  +826,  +827,
  +828,  +829,  +831,  +832,  +833,  +834,  +835,  +836,  +837,  +838,
  +839,  +840,  +841,  +842,  +843,  +844,  +845,  +846,  +847,  +848,
  +849,  +850,  +851,  +852,  +853,  +854,  +855,  +856,  +857,  +858,
  +859,  +860,  +861,  +862,  +863,  +864,  +865,  +866,  +866,  +867,
  +868,  +869,  +870,  +871,  +872,  +873,  +874,  +875,  +876,  +877,
  +878,  +879,  +880,  +880,  +881,  +882,  +883,  +884,  +885,  +886,
  +887,  +888,  +889,  +889,  +890,  +891,  +892,  +893,  +894,  +895,
  +896,  +896,  +897,  +898,  +899,  +900,  +901,  +902,  +902,  +903,
  +904,  +905,  +906,  +907,  +907,  +908,  +909,  +910,  +911,  +912,
  +912,  +913,  +914,  +915,  +916,  +916,  +917,  +918,  +919,  +920,
  +920,  +921,  +922,  +923,  +923,  +924,  +925,  +926,  +927,  +927,
  +928,  +929,  +930,  +930,  +931,  +932,  +933,  +933,  +934,  +935,
  +935,  +936,  +937,  +938,  +938,  +939,  +940,  +940,  +941,  +942,
  +943,  +943,  +944,  +945,  +945,  +946,  +947,  +947,  +948,  +949,
  +949,  +950,  +951,  +951,  +952,  +953,  +953,  +954,  +955,  +955,
  +956,  +957,  +957,  +958,  +959,  +959,  +960,  +960,  +961,  +962,
  +962,  +963,  +963,  +964,  +965,  +965,  +966,  +966,  +967,  +968,
  +968,  +969,  +969,  +970,  +971,  +971,  +972,  +972,  +973,  +973,
  +974,  +974,  +975,  +976,  +976,  +977,  +977,  +978,  +978,  +979,
  +979,  +980,  +980,  +981,  +981,  +982,  +982,  +983,  +983,  +984,
  +984,  +985,  +985,  +986,  +986,  +987,  +987,  +988,  +988,  +989,
  +989,  +990,  +990,  +990,  +991,  +991,  +992,  +992,  +993,  +993,
  +994,  +994,  +994,  +995,  +995,  +996,  +996,  +997,  +997,  +997,
  +998,  +998,  +999,  +999,  +999, +1000, +1000, +1000, +1001, +1001,
 +1002, +1002, +1002, +1003, +1003, +1003, +1004, +1004, +1004, +1005,
 +1005, +1006, +1006, +1006, +1007, +1007, +1007, +1007, +1008, +1008,
 +1008, +1009, +1009, +1009, +1010, +1010, +1010, +1011, +1011, +1011,
 +1011, +1012, +1012, +1012, +1012, +1013, +1013, +1013, +1014, +1014,
 +1014, +1014, +1015, +1015, +1015, +1015, +1015, +1016, +1016, +1016,
 +1016, +1017, +1017, +1017, +1017, +1017, +1018, +1018, +1018, +1018,
 +1018, +1019, +1019, +1019, +1019, +1019, +1019, +1020, +1020, +1020,
 +1020, +1020, +1020, +1021, +1021, +1021, +1021, +1021, +1021, +1021,
 +1022, +1022, +1022, +1022, +1022, +1022, +1022, +1022, +1022, +1022,
 +1023, +1023, +1023, +1023, +1023, +1023, +1023, +1023, +1023, +1023,
 +1023, +1023, +1023, +1024, +1024, +1024, +1024, +1024, +1024, +1024,
 +1024, +1024, +1024, +1024, +1024, +1024, +1024, +1024, +1024, +1024,
 +1024, +1024, +1024, +1024, +1024, +1024, +1024, +1024, +1024, +1024,
 +1024, +1024, +1024, +1024, +1024, +1024, +1024, +1024, +1023, +1023,
 +1023, +1023, +1023, +1023, +1023, +1023, +1023, +1023, +1023, +1023,
 +1023, +1023, +1022, +1022, +1022, +1022, +1022, +1022, +1022, +1022,
 +1022, +1021, +1021, +1021, +1021, +1021, +1021, +1021, +1020, +1020,
 +1020, +1020, +1020, +1020, +1019, +1019, +1019, +1019, +1019, +1019,
 +1018, +1018, +1018, +1018, +1018, +1017, +1017, +1017, +1017, +1017,
 +1016, +1016, +1016, +1016, +1015, +1015, +1015, +1015, +1015, +1014,
 +1014, +1014, +1014, +1013, +1013, +1013, +1012, +1012, +1012, +1012,
 +1011, +1011, +1011, +1011, +1010, +1010, +1010, +1009, +1009, +1009,
 +1008, +1008, +1008, +1008, +1007, +1007, +1007, +1006, +1006, +1006,
 +1005, +1005, +1005, +1004, +1004, +1003, +1003, +1003, +1002, +1002,
 +1002, +1001, +1001, +1001, +1000, +1000,  +999,  +999,  +999,  +998,
  +998,  +997,  +997,  +997,  +996,  +996,  +995,  +995,  +994,  +994,
  +994,  +993,  +993,  +992,  +992,  +991,  +991,  +990,  +990,  +990,
  +989,  +989,  +988,  +988,  +987,  +987,  +986,  +986,  +985,  +985,
  +984,  +984,  +983,  +983,  +982,  +982,  +981,  +981,  +980,  +980,
  +979,  +979,  +978,  +978,  +977,  +977,  +976,  +976,  +975,  +974,
  +974,  +973,  +973,  +972,  +972,  +971,  +971,  +970,  +969,  +969,
  +968,  +968,  +967,  +966,  +966,  +965,  +965,  +964,  +963,  +963,
  +962,  +962,  +961,  +960,  +960,  +959,  +959,  +958,  +957,  +957,
  +956,  +955,  +955,  +954,  +953,  +953,  +952,  +951,  +951,  +950,
  +949,  +949,  +948,  +947,  +947,  +946,  +945,  +945,  +944,  +943,
  +943,  +942,  +941,  +941,  +940,  +939,  +938,  +938,  +937,  +936,
  +935,  +935,  +934,  +933,  +933,  +932,  +931,  +930,  +930,  +929,
  +928,  +927,  +927,  +926,  +925,  +924,  +924,  +923,  +922,  +921,
  +920,  +920,  +919,  +918,  +917,  +916,  +916,  +915,  +914,  +913,
  +912,  +912,  +911,  +910,  +909,  +908,  +908,  +907,  +906,  +905,
  +904,  +903,  +902,  +902,  +901,  +900,  +899,  +898,  +897,  +897,
  +896,  +895,  +894,  +893,  +892,  +891,  +890,  +890,  +889,  +888,
  +887,  +886,  +885,  +884,  +883,  +882,  +881,  +881,  +880,  +879,
  +878,  +877,  +876,  +875,  +874,  +873,  +872,  +871,  +870,  +869,
  +868,  +867,  +867,  +866,  +865,  +864,  +863,  +862,  +861,  +860,
  +859,  +858,  +857,  +856,  +855,  +854,  +853,  +852,  +851,  +850,
  +849,  +848,  +847,  +846,  +845,  +844,  +843,  +842,  +841,  +840,
  +839,  +838,  +837,  +836,  +835,  +834,  +833,  +832,  +831,  +830,
  +828,  +827,  +826,  +825,  +824,  +823,  +822,  +821,  +820,  +819,
  +818,  +817,  +816,  +815,  +814,  +812,  +811,  +810,  +809,  +808,
  +807,  +806,  +805,  +804,  +803,  +801,  +800,  +799,  +798,  +797,
  +796,  +795,  +794,  +792,  +791,  +790,  +789,  +788,  +787,  +786,
  +784,  +783,  +782,  +781,  +780,  +779,  +778,  +776,  +775,  +774,
  +773,  +772,  +771,  +769,  +768,  +767,  +766,  +765,  +763,  +762,
  +761,  +760,  +759,  +757,  +756,  +755,  +754,  +753,  +751,  +750,
  +749,  +748,  +747,  +745,  +744,  +743,  +742,  +740,  +739,  +738,
  +737,  +735,  +734,  +733,  +732,  +730,  +729,  +728,  +727,  +725,
  +724,  +723,  +722,  +720,  +719,  +718,  +717,  +715,  +714,  +713,
  +711,  +710,  +709,  +708,  +706,  +705,  +704,  +702,  +701,  +700,
  +698,  +697,  +696,  +694,  +693,  +692,  +691,  +689,  +688,  +687,
  +685,  +684,  +683,  +681,  +680,  +679,  +677,  +676,  +675,  +673,
  +672,  +671,  +669,  +668,  +666,  +665,  +664,  +662,  +661,  +660,
  +658,  +657,  +656,  +654,  +653,  +651,  +650,  +649,  +647,  +646,
  +644,  +643,  +642,  +640,  +639,  +638,  +636,  +635,  +633,  +632,
  +630,  +629,  +628,  +626,  +625,  +623,  +622,  +621,  +619,  +618,
  +616,  +615,  +613,  +612,  +611,  +609,  +608,  +606,  +605,  +603,
  +602,  +601,  +599,  +598,  +596,  +595,  +593,  +592,  +590,  +589,
  +587,  +586,  +584,  +583,  +582,  +580,  +579,  +577,  +576,  +574,
  +573,  +571,  +570,  +568,  +567,  +565,  +564,  +562,  +561,  +559,
  +558,  +556,  +555,  +553,  +552,  +550,  +549,  +547,  +546,  +544,
  +543,  +541,  +540,  +538,  +537,  +535,  +534,  +532,  +531,  +529,
  +527,  +526,  +524,  +523,  +521,  +520,  +518,  +517,  +515,  +514,
  +512,  +511,  +509,  +507,  +506,  +504,  +503,  +501,  +500,  +498,
  +497,  +495,  +493,  +492,  +490,  +489,  +487,  +486,  +484,  +482,
  +481,  +479,  +478,  +476,  +474,  +473,  +471,  +470,  +468,  +467,
  +465,  +463,  +462,  +460,  +459,  +457,  +455,  +454,  +452,  +451,
  +449,  +447,  +446,  +444,  +443,  +441,  +439,  +438,  +436,  +434,
  +433,  +431,  +430,  +428,  +426,  +425,  +423,  +421,  +420,  +418,
  +417,  +415,  +413,  +412,  +410,  +408,  +407,  +405,  +403,  +402,
  +400,  +399,  +397,  +395,  +394,  +392,  +390,  +389,  +387,  +385,
  +384,  +382,  +380,  +379,  +377,  +375,  +374,  +372,  +370,  +369,
  +367,  +365,  +364,  +362,  +360,  +359,  +357,  +355,  +354,  +352,
  +350,  +349,  +347,  +345,  +344,  +342,  +340,  +339,  +337,  +335,
  +333,  +332,  +330,  +328,  +327,  +325,  +323,  +322,  +320,  +318,
  +317,  +315,  +313,  +311,  +310,  +308,  +306,  +305,  +303,  +301,
  +299,  +298,  +296,  +294,  +293,  +291,  +289,  +287,  +286,  +284,
  +282,  +281,  +279,  +277,  +275,  +274,  +272,  +270,  +269,  +267,
  +265,  +263,  +262,  +260,  +258,  +256,  +255,  +253,  +251,  +250,
  +248,  +246,  +244,  +243,  +241,  +239,  +237,  +236,  +234,  +232,
  +230,  +229,  +227,  +225,  +223,  +222,  +220,  +218,  +216,  +215,
  +213,  +211,  +209,  +208,  +206,  +204,  +202,  +201,  +199,  +197,
  +195,  +194,  +192,  +190,  +188,  +187,  +185,  +183,  +181,  +180,
  +178,  +176,  +174,  +173,  +171,  +169,  +167,  +166,  +164,  +162,
  +160,  +159,  +157,  +155,  +153,  +151,  +150,  +148,  +146,  +144,
  +143,  +141,  +139,  +137,  +136,  +134,  +132,  +130,  +128,  +127,
  +125,  +123,  +121,  +120,  +118,  +116,  +114,  +112,  +111,  +109,
  +107,  +105,  +104,  +102,  +100,   +98,   +96,   +95,   +93,   +91,
   +89,   +88,   +86,   +84,   +82,   +80,   +79,   +77,   +75,   +73,
   +72,   +70,   +68,   +66,   +64,   +63,   +61,   +59,   +57,   +55,
   +54,   +52,   +50,   +48,   +47,   +45,   +43,   +41,   +39,   +38,
   +36,   +34,   +32,   +30,   +29,   +27,   +25,   +23,   +22,   +20,
   +18,   +16,   +14,   +13,   +11,    +9,    +7,    +5,    +4,    +2,
    +0,    -2,    -3,    -5,    -7,    -9,   -11,   -12,   -14,   -16,
   -18,   -20,   -21,   -23,   -25,   -27,   -28,   -30,   -32,   -34,
   -36,   -37,   -39,   -41,   -43,   -45,   -46,   -48,   -50,   -52,
   -53,   -55,   -57,   -59,   -61,   -62,   -64,   -66,   -68,   -70,
   -71,   -73,   -75,   -77,   -78,   -80,   -82,   -84,   -86,   -87,
   -89,   -91,   -93,   -94,   -96,   -98,  -100,  -102,  -103,  -105,
  -107,  -109,  -110,  -112,  -114,  -116,  -118,  -119,  -121,  -123,
  -125,  -126,  -128,  -130,  -132,  -134,  -135,  -137,  -139,  -141,
  -142,  -144,  -146,  -148,  -149,  -151,  -153,  -155,  -157,  -158,
  -160,  -162,  -164,  -165,  -167,  -169,  -171,  -172,  -174,  -176,
  -178,  -179,  -181,  -183,  -185,  -187,  -188,  -190,  -192,  -194,
  -195,  -197,  -199,  -201,  -202,  -204,  -206,  -208,  -209,  -211,
  -213,  -215,  -216,  -218,  -220,  -222,  -223,  -225,  -227,  -229,
  -230,  -232,  -234,  -235,  -237,  -239,  -241,  -242,  -244,  -246,
  -248,  -249,  -251,  -253,  -255,  -256,  -258,  -260,  -261,  -263,
  -265,  -267,  -268,  -270,  -272,  -274,  -275,  -277,  -279,  -280,
  -282,  -284,  -286,  -287,  -289,  -291,  -292,  -294,  -296,  -298,
  -299,  -301,  -303,  -304,  -306,  -308,  -310,  -311,  -313,  -315,
  -316,  -318,  -320,  -321,  -323,  -325,  -327,  -328,  -330,  -332,
  -333,  -335,  -337,  -338,  -340,  -342,  -343,  -345,  -347,  -348,
  -350,  -352,  -353,  -355,  -357,  -359,  -360,  -362,  -364,  -365,
  -367,  -369,  -370,  -372,  -374,  -375,  -377,  -379,  -380,  -382,
  -383,  -385,  -387,  -388,  -390,  -392,  -393,  -395,  -397,  -398,
  -400,  -402,  -403,  -405,  -407,  -408,  -410,  -411,  -413,  -415,
  -416,  -418,  -420,  -421,  -423,  -425,  -426,  -428,  -429,  -431,
  -433,  -434,  -436,  -438,  -439,  -441,  -442,  -444,  -446,  -447,
  -449,  -450,  -452,  -454,  -455,  -457,  -458,  -460,  -462,  -463,
  -465,  -466,  -468,  -470,  -471,  -473,  -474,  -476,  -477,  -479,
  -481,  -482,  -484,  -485,  -487,  -489,  -490,  -492,  -493,  -495,
  -496,  -498,  -499,  -501,  -503,  -504,  -506,  -507,  -509,  -510,
  -512,  -513,  -515,  -517,  -518,  -520,  -521,  -523,  -524,  -526,
  -527,  -529,  -530,  -532,  -533,  -535,  -536,  -538,  -540,  -541,
  -543,  -544,  -546,  -547,  -549,  -550,  -552,  -553,  -555,  -556,
  -558,  -559,  -561,  -562,  -564,  -565,  -567,  -568,  -570,  -571,
  -573,  -574,  -575,  -577,  -578,  -580,  -581,  -583,  -584,  -586,
  -587,  -589,  -590,  -592,  -593,  -595,  -596,  -597,  -599,  -600,
  -602,  -603,  -605,  -606,  -608,  -609,  -610,  -612,  -613,  -615,
  -616,  -618,  -619,  -620,  -622,  -623,  -625,  -626,  -628,  -629,
  -630,  -632,  -633,  -635,  -636,  -637,  -639,  -640,  -642,  -643,
  -644,  -646,  -647,  -648,  -650,  -651,  -653,  -654,  -655,  -657,
  -658,  -659,  -661,  -662,  -664,  -665,  -666,  -668,  -669,  -670,
  -672,  -673,  -674,  -676,  -677,  -678,  -680,  -681,  -682,  -684,
  -685,  -686,  -688,  -689,  -690,  -692,  -693,  -694,  -696,  -697,
  -698,  -700,  -701,  -702,  -703,  -705,  -706,  -707,  -709,  -710,
  -711,  -713,  -714,  -715,  -716,  -718,  -719,  -720,  -721,  -723,
  -724,  -725,  -727,  -728,  -729,  -730,  -732,  -733,  -734,  -735,
  -737,  -738,  -739,  -740,  -741,  -743,  -744,  -745,  -746,  -748,
  -749,  -750,  -751,  -752,  -754,  -755,  -756,  -757,  -759,  -760,
  -761,  -762,  -763,  -764,  -766,  -767,  -768,  -769,  -770,  -772,
  -773,  -774,  -775,  -776,  -777,  -779,  -780,  -781,  -782,  -783,
  -784,  -785,  -787,  -788,  -789,  -790,  -791,  -792,  -793,  -795,
  -796,  -797,  -798,  -799,  -800,  -801,  -802,  -804,  -805,  -806,
  -807,  -808,  -809,  -810,  -811,  -812,  -813,  -814,  -816,  -817,
  -818,  -819,  -820,  -821,  -822,  -823,  -824,  -825,  -826,  -827,
  -828,  -829,  -830,  -832,  -833,  -834,  -835,  -836,  -837,  -838,
  -839,  -840,  -841,  -842,  -843,  -844,  -845,  -846,  -847,  -848,
  -849,  -850,  -851,  -852,  -853,  -854,  -855,  -856,  -857,  -858,
  -859,  -860,  -861,  -862,  -863,  -864,  -865,  -865,  -866,  -867,
  -868,  -869,  -870,  -871,  -872,  -873,  -874,  -875,  -876,  -877,
  -878,  -879,  -880,  -880,  -881,  -882,  -883,  -884,  -885,  -886,
  -887,  -888,  -889,  -889,  -890,  -891,  -892,  -893,  -894,  -895,
  -896,  -896,  -897,  -898,  -899,  -900,  -901,  -902,  -902,  -903,
  -904,  -905,  -906,  -907,  -907,  -908,  -909,  -910,  -911,  -912,
  -912,  -913,  -914,  -915,  -916,  -916,  -917,  -918,  -919,  -920,
  -920,  -921,  -922,  -923,  -923,  -924,  -925,  -926,  -926,  -927,
  -928,  -929,  -930,  -930,  -931,  -932,  -932,  -933,  -934,  -935,
  -935,  -936,  -937,  -938,  -938,  -939,  -940,  -940,  -941,  -942,
  -943,  -943,  -944,  -945,  -945,  -946,  -947,  -947,  -948,  -949,
  -949,  -950,  -951,  -951,  -952,  -953,  -953,  -954,  -955,  -955,
  -956,  -957,  -957,  -958,  -958,  -959,  -960,  -960,  -961,  -962,
  -962,  -963,  -963,  -964,  -965,  -965,  -966,  -966,  -967,  -968,
  -968,  -969,  -969,  -970,  -970,  -971,  -972,  -972,  -973,  -973,
  -974,  -974,  -975,  -975,  -976,  -977,  -977,  -978,  -978,  -979,
  -979,  -980,  -980,  -981,  -981,  -982,  -982,  -983,  -983,  -984,
  -984,  -985,  -985,  -986,  -986,  -987,  -987,  -988,  -988,  -989,
  -989,  -990,  -990,  -990,  -991,  -991,  -992,  -992,  -993,  -993,
  -994,  -994,  -994,  -995,  -995,  -996,  -996,  -997,  -997,  -997,
  -998,  -998,  -999,  -999,  -999, -1000, -1000, -1000, -1001, -1001,
 -1002, -1002, -1002, -1003, -1003, -1003, -1004, -1004, -1004, -1005,
 -1005, -1005, -1006, -1006, -1007, -1007, -1007, -1007, -1008, -1008,
 -1008, -1009, -1009, -1009, -1010, -1010, -1010, -1011, -1011, -1011,
 -1011, -1012, -1012, -1012, -1012, -1013, -1013, -1013, -1014, -1014,
 -1014, -1014, -1015, -1015, -1015, -1015, -1015, -1016, -1016, -1016,
 -1016, -1017, -1017, -1017, -1017, -1017, -1018, -1018, -1018, -1018,
 -1018, -1019, -1019, -1019, -1019, -1019, -1019, -1020, -1020, -1020,
 -1020, -1020, -1020, -1021, -1021, -1021, -1021, -1021, -1021, -1021,
 -1021, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
 -1023, -1023, -1023, -1023, -1023, -1023, -1023, -1023, -1023, -1023,
 -1023, -1023, -1023, -1024, -1024, -1024, -1024, -1024, -1024, -1024,
 -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024,
 -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024,
 -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1024, -1023, -1023,
 -1023, -1023, -1023, -1023, -1023, -1023, -1023, -1023, -1023, -1023,
 -1023, -1023, -1022, -1022, -1022, -1022, -1022, -1022, -1022, -1022,
 -1022, -1021, -1021, -1021, -1021, -1021, -1021, -1021, -1020, -1020,
 -1020, -1020, -1020, -1020, -1019, -1019, -1019, -1019, -1019, -1019,
 -1018, -1018, -1018, -1018, -1018, -1017, -1017, -1017, -1017, -1017,
 -1016, -1016, -1016, -1016, -1015, -1015, -1015, -1015, -1015, -1014,
 -1014, -1014, -1014, -1013, -1013, -1013, -1013, -1012, -1012, -1012,
 -1011, -1011, -1011, -1011, -1010, -1010, -1010, -1009, -1009, -1009,
 -1008, -1008, -1008, -1008, -1007, -1007, -1007, -1006, -1006, -1006,
 -1005, -1005, -1005, -1004, -1004, -1003, -1003, -1003, -1002, -1002,
 -1002, -1001, -1001, -1001, -1000, -1000,  -999,  -999,  -999,  -998,
  -998,  -997,  -997,  -997,  -996,  -996,  -995,  -995,  -994,  -994,
  -994,  -993,  -993,  -992,  -992,  -991,  -991,  -991,  -990,  -990,
  -989,  -989,  -988,  -988,  -987,  -987,  -986,  -986,  -985,  -985,
  -984,  -984,  -983,  -983,  -982,  -982,  -981,  -981,  -980,  -980,
  -979,  -979,  -978,  -978,  -977,  -977,  -976,  -976,  -975,  -974,
  -974,  -973,  -973,  -972,  -972,  -971,  -971,  -970,  -969,  -969,
  -968,  -968,  -967,  -967,  -966,  -965,  -965,  -964,  -964,  -963,
  -962,  -962,  -961,  -960,  -960,  -959,  -959,  -958,  -957,  -957,
  -956,  -955,  -955,  -954,  -953,  -953,  -952,  -951,  -951,  -950,
  -949,  -949,  -948,  -947,  -947,  -946,  -945,  -945,  -944,  -943,
  -943,  -942,  -941,  -941,  -940,  -939,  -938,  -938,  -937,  -936,
  -936,  -935,  -934,  -933,  -933,  -932,  -931,  -930,  -930,  -929,
  -928,  -927,  -927,  -926,  -925,  -924,  -924,  -923,  -922,  -921,
  -920,  -920,  -919,  -918,  -917,  -916,  -916,  -915,  -914,  -913,
  -912,  -912,  -911,  -910,  -909,  -908,  -908,  -907,  -906,  -905,
  -904,  -903,  -903,  -902,  -901,  -900,  -899,  -898,  -897,  -897,
  -896,  -895,  -894,  -893,  -892,  -891,  -890,  -890,  -889,  -888,
  -887,  -886,  -885,  -884,  -883,  -882,  -881,  -881,  -880,  -879,
  -878,  -877,  -876,  -875,  -874,  -873,  -872,  -871,  -870,  -869,
  -868,  -868,  -867,  -866,  -865,  -864,  -863,  -862,  -861,  -860,
  -859,  -858,  -857,  -856,  -855,  -854,  -853,  -852,  -851,  -850,
  -849,  -848,  -847,  -846,  -845,  -844,  -843,  -842,  -841,  -840,
  -839,  -838,  -837,  -836,  -835,  -834,  -833,  -832,  -831,  -830,
  -829,  -827,  -826,  -825,  -824,  -823,  -822,  -821,  -820,  -819,
  -818,  -817,  -816,  -815,  -814,  -812,  -811,  -810,  -809,  -808,
  -807,  -806,  -805,  -804,  -803,  -801,  -800,  -799,  -798,  -797,
  -796,  -795,  -794,  -793,  -791,  -790,  -789,  -788,  -787,  -786,
  -785,  -783,  -782,  -781,  -780,  -779,  -778,  -776,  -775,  -774,
  -773,  -772,  -771,  -769,  -768,  -767,  -766,  -765,  -763,  -762,
  -761,  -760,  -759,  -757,  -756,  -755,  -754,  -753,  -751,  -750,
  -749,  -748,  -747,  -745,  -744,  -743,  -742,  -740,  -739,  -738,
  -737,  -735,  -734,  -733,  -732,  -730,  -729,  -728,  -727,  -725,
  -724,  -723,  -722,  -720,  -719,  -718,  -717,  -715,  -714,  -713,
  -711,  -710,  -709,  -708,  -706,  -705,  -704,  -702,  -701,  -700,
  -698,  -697,  -696,  -695,  -693,  -692,  -691,  -689,  -688,  -687,
  -685,  -684,  -683,  -681,  -680,  -679,  -677,  -676,  -675,  -673,
  -672,  -671,  -669,  -668,  -667,  -665,  -664,  -662,  -661,  -660,
  -658,  -657,  -656,  -654,  -653,  -651,  -650,  -649,  -647,  -646,
  -645,  -643,  -642,  -640,  -639,  -638,  -636,  -635,  -633,  -632,
  -631,  -629,  -628,  -626,  -625,  -624,  -622,  -621,  -619,  -618,
  -616,  -615,  -614,  -612,  -611,  -609,  -608,  -606,  -605,  -603,
  -602,  -601,  -599,  -598,  -596,  -595,  -593,  -592,  -590,  -589,
  -587,  -586,  -585,  -583,  -582,  -580,  -579,  -577,  -576,  -574,
  -573,  -571,  -570,  -568,  -567,  -565,  -564,  -562,  -561,  -559,
  -558,  -556,  -555,  -553,  -552,  -550,  -549,  -547,  -546,  -544,
  -543,  -541,  -540,  -538,  -537,  -535,  -534,  -532,  -531,  -529,
  -528,  -526,  -524,  -523,  -521,  -520,  -518,  -517,  -515,  -514,
  -512,  -511,  -509,  -508,  -506,  -504,  -503,  -501,  -500,  -498,
  -497,  -495,  -493,  -492,  -490,  -489,  -487,  -486,  -484,  -482,
  -481,  -479,  -478,  -476,  -475,  -473,  -471,  -470,  -468,  -467,
  -465,  -463,  -462,  -460,  -459,  -457,  -455,  -454,  -452,  -451,
  -449,  -447,  -446,  -444,  -443,  -441,  -439,  -438,  -436,  -435,
  -433,  -431,  -430,  -428,  -426,  -425,  -423,  -422,  -420,  -418,
  -417,  -415,  -413,  -412,  -410,  -408,  -407,  -405,  -404,  -402,
  -400,  -399,  -397,  -395,  -394,  -392,  -390,  -389,  -387,  -385,
  -384,  -382,  -380,  -379,  -377,  -375,  -374,  -372,  -370,  -369,
  -367,  -365,  -364,  -362,  -360,  -359,  -357,  -355,  -354,  -352,
  -350,  -349,  -347,  -345,  -344,  -342,  -340,  -339,  -337,  -335,
  -334,  -332,  -330,  -328,  -327,  -325,  -323,  -322,  -320,  -318,
  -317,  -315,  -313,  -312,  -310,  -308,  -306,  -305,  -303,  -301,
  -300,  -298,  -296,  -294,  -293,  -291,  -289,  -288,  -286,  -284,
  -282,  -281,  -279,  -277,  -276,  -274,  -272,  -270,  -269,  -267,
  -265,  -263,  -262,  -260,  -258,  -257,  -255,  -253,  -251,  -250,
  -248,  -246,  -244,  -243,  -241,  -239,  -237,  -236,  -234,  -232,
  -231,  -229,  -227,  -225,  -224,  -222,  -220,  -218,  -217,  -215,
  -213,  -211,  -210,  -208,  -206,  -204,  -203,  -201,  -199,  -197,
  -196,  -194,  -192,  -190,  -189,  -187,  -185,  -183,  -182,  -180,
  -178,  -176,  -174,  -173,  -171,  -169,  -167,  -166,  -164,  -162,
  -160,  -159,  -157,  -155,  -153,  -152,  -150,  -148,  -146,  -144,
  -143,  -141,  -139,  -137,  -136,  -134,  -132,  -130,  -129,  -127,
  -125,  -123,  -121,  -120,  -118,  -116,  -114,  -113,  -111,  -109,
  -107,  -105,  -104,  -102,  -100,   -98,   -97,   -95,   -93,   -91,
   -89,   -88,   -86,   -84,   -82,   -81,   -79,   -77,   -75,   -73,
   -72,   -70,   -68,   -66,   -64,   -63,   -61,   -59,   -57,   -56,
   -54,   -52,   -50,   -48,   -47,   -45,   -43,   -41,   -39,   -38,
   -36,   -34,   -32,   -31,   -29,   -27,   -25,   -23,   -22,   -20,
   -18,   -16,   -14,   -13,   -11,    -9,    -7,    -6,    -4,    -2,
    -0,
};

static void LL_Init(void);
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_SPI1_Init(void);
static void MX_TIM3_Init(void);
static void MX_TIM6_Init(void);
static void MX_IWDG_Init(void);
static void MX_USART1_UART_Init(void);

void SetModeCheck(void);
void UsDelay(uint16_t us);
void Output(float theta,uint8_t effort);
int32_t Mod(int32_t xMod,int32_t mMod);
void OneStep(void);
void FlashUnlock(void);
void FlashLock(void);
uint8_t FlashGetStatus(void);
uint8_t FlashWaitDone(uint16_t time);
uint8_t FlashErasePage(uint32_t paddr);
void FlashErase32K(void);
uint8_t FlashWriteHalfWord(uint32_t faddr,uint16_t dat);
uint16_t FlashReadHalfWord(uint32_t faddr);
void UartPutChar(uint8_t data);
void PrintString(uint8_t *pd);
void PrintShortInt(uint16_t x);
void SerialCheck(void);
uint16_t ReadValue(uint16_t RegValue);
void WriteValue(uint16_t RegAdd,uint16_t RegValue);
uint16_t ReadState(void);
uint16_t ReadAngle(void);
void CalibrateEncoder(void);

float kp=15.0;     
float ki=0.2;  
float kd=200.0; 

const float LPFA=0.9630; 
const float LPFB=0.0370;

const uint8_t UMAXCL=190;   
const uint8_t UMAXOP=160; 

float r=0.0;   //setpoint
float r_1=0.0;   //setpoint
uint8_t dir=1; 
float y=0.0;   // measured angle
float y_1=0.0;
float yw=0.0;  // "wrapped" angle (not limited to 0-360)
float yw_1=0.0;
int32_t wrap_count=0; 
float e=0.0;   // e = r-yw (error)
float p=0.0;   // proportional effort
float i=0.0;   // integral effort
float iterm=0;
float dterm=0;
float u=0.0;     //real control effort (not abs)
int32_t stepnumber=0;
float stepangle=0.0;

uint16_t hccount=0;
uint8_t closemode;
uint8_t enmode=1;

int main(void)
{
  LL_Init();
  SystemClock_Config();
  MX_GPIO_Init();
  MX_SPI1_Init();
  MX_TIM3_Init();
  MX_USART1_UART_Init();
  LL_mDelay(100);
  SetModeCheck();
  MX_TIM6_Init();
  MX_IWDG_Init();
  while(1)
  { 	
	SerialCheck(); 
//	y=*(volatile uint16_t*)((ReadValue(READ_ANGLE_VALUE)>>1)*2+0x08008000);
//	y=y*360.0/16384;
  }
}

static void LL_Init(void)
{
  LL_APB1_GRP2_EnableClock(LL_APB1_GRP2_PERIPH_SYSCFG);
  NVIC_SetPriority(SVC_IRQn, 0);
  NVIC_SetPriority(PendSV_IRQn, 0);
  NVIC_SetPriority(SysTick_IRQn, 0);
}


void SystemClock_Config(void)
{
  LL_FLASH_SetLatency(LL_FLASH_LATENCY_1);
	
  if(LL_FLASH_GetLatency() != LL_FLASH_LATENCY_1)
  {
    Error_Handler();  
  }
  LL_RCC_HSI_Enable();
  
  while(LL_RCC_HSI_IsReady() != 1)
  {}
  LL_RCC_HSI_SetCalibTrimming(16);
  LL_RCC_LSI_Enable();
  while(LL_RCC_LSI_IsReady() != 1)
  {}
  LL_RCC_PLL_ConfigDomain_SYS(LL_RCC_PLLSOURCE_HSI_DIV_2, LL_RCC_PLL_MUL_12);
  LL_RCC_PLL_Enable();
	  
  while(LL_RCC_PLL_IsReady() != 1)
  {}
  LL_RCC_SetAHBPrescaler(LL_RCC_SYSCLK_DIV_1);
  LL_RCC_SetAPB1Prescaler(LL_RCC_APB1_DIV_1);
  LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_PLL);
	  
  while(LL_RCC_GetSysClkSource() != LL_RCC_SYS_CLKSOURCE_STATUS_PLL)
  {}
  LL_Init1msTick(48000000);
  LL_SYSTICK_SetClkSource(LL_SYSTICK_CLKSOURCE_HCLK);
  LL_SetSystemCoreClock(48000000);
  LL_RCC_SetUSARTClockSource(LL_RCC_USART1_CLKSOURCE_PCLK1);
  NVIC_SetPriority(SysTick_IRQn, 0);
}

static void MX_IWDG_Init(void)
{
  LL_IWDG_Enable(IWDG);
  LL_IWDG_EnableWriteAccess(IWDG);
  LL_IWDG_SetPrescaler(IWDG, LL_IWDG_PRESCALER_4);
  LL_IWDG_SetWindow(IWDG, 4095);
  LL_IWDG_SetReloadCounter(IWDG, 500);
  while (LL_IWDG_IsReady(IWDG) != 1)
  {}
  LL_IWDG_ReloadCounter(IWDG);
}

static void MX_SPI1_Init(void)
{
  LL_SPI_InitTypeDef SPI_InitStruct;
  LL_GPIO_InitTypeDef GPIO_InitStruct;
	
  LL_APB1_GRP2_EnableClock(LL_APB1_GRP2_PERIPH_SPI1);
  
  /**SPI1 GPIO Configuration  
  PA4   ------> SPI1_NSS
  PA5   ------> SPI1_SCK
  PA6   ------> SPI1_MISO
  PA7   ------> SPI1_MOSI 
  */

  GPIO_InitStruct.Pin = LL_GPIO_PIN_5;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_ALTERNATE;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_DOWN;
  GPIO_InitStruct.Alternate = LL_GPIO_AF_0;
  LL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = LL_GPIO_PIN_6;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_ALTERNATE;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_DOWN;
  GPIO_InitStruct.Alternate = LL_GPIO_AF_0;
  LL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = LL_GPIO_PIN_7;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_ALTERNATE;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_DOWN;
  GPIO_InitStruct.Alternate = LL_GPIO_AF_0;
  LL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  SPI_InitStruct.TransferDirection = LL_SPI_FULL_DUPLEX;
  SPI_InitStruct.Mode = LL_SPI_MODE_MASTER;
  SPI_InitStruct.DataWidth = LL_SPI_DATAWIDTH_16BIT;
  SPI_InitStruct.ClockPolarity = LL_SPI_POLARITY_LOW;
  SPI_InitStruct.ClockPhase = LL_SPI_PHASE_2EDGE;
  SPI_InitStruct.NSS = LL_SPI_NSS_SOFT;
  SPI_InitStruct.BaudRate = LL_SPI_BAUDRATEPRESCALER_DIV8;
  SPI_InitStruct.BitOrder = LL_SPI_MSB_FIRST;
  SPI_InitStruct.CRCCalculation = LL_SPI_CRCCALCULATION_DISABLE;
  SPI_InitStruct.CRCPoly = 7;
  LL_SPI_Init(SPI1, &SPI_InitStruct);
  LL_SPI_SetStandard(SPI1, LL_SPI_PROTOCOL_MOTOROLA);
  
  LL_SPI_Enable(SPI1); 
}


static void MX_TIM3_Init(void)
{
  LL_TIM_InitTypeDef TIM_InitStruct;
  LL_TIM_OC_InitTypeDef TIM_OC_InitStruct;
  LL_GPIO_InitTypeDef GPIO_InitStruct;

  LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM3);
	
  /**TIM3 GPIO Configuration  
  PB4   ------> TIM3_CH1
  PB5   ------> TIM3_CH2 
  */
  GPIO_InitStruct.Pin = PWM1_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_ALTERNATE;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
  GPIO_InitStruct.Alternate = LL_GPIO_AF_1;
  LL_GPIO_Init(PWM1_GPIO_Port, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = PWM2_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_ALTERNATE;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
  GPIO_InitStruct.Alternate = LL_GPIO_AF_1;
  LL_GPIO_Init(PWM2_GPIO_Port, &GPIO_InitStruct);

  TIM_InitStruct.Prescaler = 0;
  TIM_InitStruct.CounterMode = LL_TIM_COUNTERMODE_UP;
  TIM_InitStruct.Autoreload = 256;
  TIM_InitStruct.ClockDivision = LL_TIM_CLOCKDIVISION_DIV1;
  LL_TIM_Init(TIM3, &TIM_InitStruct);

  LL_TIM_DisableARRPreload(TIM3);

  LL_TIM_SetClockSource(TIM3, LL_TIM_CLOCKSOURCE_INTERNAL);

  LL_TIM_OC_EnablePreload(TIM3, LL_TIM_CHANNEL_CH1);

  TIM_OC_InitStruct.OCMode = LL_TIM_OCMODE_PWM1;
  TIM_OC_InitStruct.OCState = LL_TIM_OCSTATE_DISABLE;
  TIM_OC_InitStruct.OCNState = LL_TIM_OCSTATE_DISABLE;
  TIM_OC_InitStruct.CompareValue = 0;
  TIM_OC_InitStruct.OCPolarity = LL_TIM_OCPOLARITY_HIGH;
  LL_TIM_OC_Init(TIM3, LL_TIM_CHANNEL_CH1, &TIM_OC_InitStruct);

  LL_TIM_OC_DisableFast(TIM3, LL_TIM_CHANNEL_CH1);

  LL_TIM_OC_EnablePreload(TIM3, LL_TIM_CHANNEL_CH2);

  TIM_OC_InitStruct.OCState = LL_TIM_OCSTATE_DISABLE;
  TIM_OC_InitStruct.OCNState = LL_TIM_OCSTATE_DISABLE;
  LL_TIM_OC_Init(TIM3, LL_TIM_CHANNEL_CH2, &TIM_OC_InitStruct);

  LL_TIM_OC_DisableFast(TIM3, LL_TIM_CHANNEL_CH2);

  LL_TIM_SetTriggerOutput(TIM3, LL_TIM_TRGO_RESET);

  LL_TIM_DisableMasterSlaveMode(TIM3);
  
  LL_TIM_CC_EnableChannel(TIM3, LL_TIM_CHANNEL_CH1);
  LL_TIM_CC_EnableChannel(TIM3, LL_TIM_CHANNEL_CH2);
  LL_TIM_EnableCounter(TIM3);
}

static void MX_TIM6_Init(void)
{
  LL_TIM_InitTypeDef TIM_InitStruct;

  LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM6);
  NVIC_SetPriority(TIM6_IRQn, 1);
  NVIC_EnableIRQ(TIM6_IRQn);

  TIM_InitStruct.Prescaler = 0;
  TIM_InitStruct.CounterMode = LL_TIM_COUNTERMODE_UP;
//TIM_InitStruct.Autoreload = 7385;
  TIM_InitStruct.Autoreload = 9600;
  LL_TIM_Init(TIM6, &TIM_InitStruct);

  LL_TIM_DisableARRPreload(TIM6);
	
  LL_TIM_EnableIT_UPDATE(TIM6);
  LL_TIM_EnableCounter(TIM6);
}

static void MX_USART1_UART_Init(void)
{
  LL_USART_InitTypeDef USART_InitStruct;
  LL_GPIO_InitTypeDef GPIO_InitStruct;
  LL_APB1_GRP2_EnableClock(LL_APB1_GRP2_PERIPH_USART1);
  
  /**USART1 GPIO Configuration  
  PA9   ------> USART1_TX
  PA10   ------> USART1_RX 
  */
  GPIO_InitStruct.Pin = LL_GPIO_PIN_9;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_ALTERNATE;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
  GPIO_InitStruct.Alternate = LL_GPIO_AF_1;
  LL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = LL_GPIO_PIN_10;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_ALTERNATE;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
  GPIO_InitStruct.Alternate = LL_GPIO_AF_1;
  LL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  USART_InitStruct.BaudRate = 38400;
  USART_InitStruct.DataWidth = LL_USART_DATAWIDTH_8B;
  USART_InitStruct.StopBits = LL_USART_STOPBITS_1;
  USART_InitStruct.Parity = LL_USART_PARITY_NONE;
  USART_InitStruct.TransferDirection = LL_USART_DIRECTION_TX_RX;
  USART_InitStruct.HardwareFlowControl = LL_USART_HWCONTROL_NONE;
  USART_InitStruct.OverSampling = LL_USART_OVERSAMPLING_16;
  LL_USART_Init(USART1, &USART_InitStruct);

  LL_USART_DisableIT_CTS(USART1);
  LL_USART_DisableOverrunDetect(USART1);
  LL_USART_ConfigAsyncMode(USART1);
  LL_USART_Enable(USART1);
}

static void MX_GPIO_Init(void)
{
  LL_GPIO_InitTypeDef GPIO_InitStruct;
  LL_EXTI_InitTypeDef EXTI_InitStruct;

  LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOC);
  LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOA);
  LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOB);

  LL_GPIO_ResetOutputPin(LED_GPIO_Port, LED_Pin);
  LL_GPIO_ResetOutputPin(IN1_GPIO_Port, IN1_Pin);
  LL_GPIO_ResetOutputPin(IN2_GPIO_Port, IN2_Pin);
  LL_GPIO_ResetOutputPin(IN4_GPIO_Port, IN4_Pin);
  LL_GPIO_ResetOutputPin(IN3_GPIO_Port, IN3_Pin);


  GPIO_InitStruct.Pin = CAL_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;
  LL_GPIO_Init(CAL_GPIO_Port, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = CLOSE_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;
  LL_GPIO_Init(CLOSE_GPIO_Port, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = SET2_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;
  LL_GPIO_Init(SET2_GPIO_Port, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = SET1_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;
  LL_GPIO_Init(SET1_GPIO_Port, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = LED_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
  LL_GPIO_Init(LED_GPIO_Port, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = IN1_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
  LL_GPIO_Init(IN1_GPIO_Port, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = IN2_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
  LL_GPIO_Init(IN2_GPIO_Port, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = IN4_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
  LL_GPIO_Init(IN4_GPIO_Port, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = IN3_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
  LL_GPIO_Init(IN3_GPIO_Port, &GPIO_InitStruct);
  
  GPIO_InitStruct.Pin = NSS_Pin;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
  LL_GPIO_Init(NSS_GPIO_Port, &GPIO_InitStruct);

  LL_SYSCFG_SetEXTISource(LL_SYSCFG_EXTI_PORTB, LL_SYSCFG_EXTI_LINE0);
  LL_SYSCFG_SetEXTISource(LL_SYSCFG_EXTI_PORTB, LL_SYSCFG_EXTI_LINE1);
  LL_SYSCFG_SetEXTISource(LL_SYSCFG_EXTI_PORTB, LL_SYSCFG_EXTI_LINE2);
  
  LL_GPIO_SetPinPull(CLKIN_GPIO_Port, CLKIN_Pin, LL_GPIO_PULL_NO);
  LL_GPIO_SetPinPull(DIRIN_GPIO_Port, DIRIN_Pin, LL_GPIO_PULL_NO);
  LL_GPIO_SetPinPull(ENIN_GPIO_Port, ENIN_Pin, LL_GPIO_PULL_UP);
  LL_GPIO_SetPinMode(CLKIN_GPIO_Port, CLKIN_Pin, LL_GPIO_MODE_INPUT);
  LL_GPIO_SetPinMode(DIRIN_GPIO_Port, DIRIN_Pin, LL_GPIO_MODE_INPUT);
  LL_GPIO_SetPinMode(ENIN_GPIO_Port, ENIN_Pin, LL_GPIO_MODE_INPUT);

  EXTI_InitStruct.Line_0_31 = LL_EXTI_LINE_0;
  EXTI_InitStruct.LineCommand = ENABLE;
  EXTI_InitStruct.Mode = LL_EXTI_MODE_IT;
  EXTI_InitStruct.Trigger = LL_EXTI_TRIGGER_FALLING;
  LL_EXTI_Init(&EXTI_InitStruct);

  EXTI_InitStruct.Line_0_31 = LL_EXTI_LINE_1;
  EXTI_InitStruct.LineCommand = ENABLE;
  EXTI_InitStruct.Mode = LL_EXTI_MODE_IT;
  EXTI_InitStruct.Trigger = LL_EXTI_TRIGGER_RISING_FALLING;
  LL_EXTI_Init(&EXTI_InitStruct);

  EXTI_InitStruct.Line_0_31 = LL_EXTI_LINE_2;
  EXTI_InitStruct.LineCommand = ENABLE;
  EXTI_InitStruct.Mode = LL_EXTI_MODE_IT;
  EXTI_InitStruct.Trigger = LL_EXTI_TRIGGER_RISING_FALLING;
  LL_EXTI_Init(&EXTI_InitStruct);

  NVIC_SetPriority(EXTI0_1_IRQn, 0);
  NVIC_DisableIRQ(EXTI0_1_IRQn);
  NVIC_SetPriority(EXTI2_3_IRQn, 1);
  NVIC_DisableIRQ(EXTI2_3_IRQn);
}

void SetModeCheck(void)
{
  WriteValue(WRITE_MOD2_VALUE,MOD2_VALUE);
  uint16_t state=ReadState();
  if(state&0x0080)
  {
    for(uint8_t m=0;m<10;m++)
    {
      LED_H;
	  LL_mDelay(200);
	  LED_L;
	  LL_mDelay(200);	
    } 
  }	
  if(CAL==0)  
	CalibrateEncoder();
  
  if((SET1==1)&&(SET2==1))
    stepangle=1.8/4;
  else if((SET1==0)&&(SET2==1))
    stepangle=1.8/8;
  else if((SET1==1)&&(SET2==0))
    stepangle=1.8/16;
  else
    stepangle=1.8/32;
  
  if(CLOSE==0)
  {
    closemode=1;
	r=*(volatile uint16_t*)((ReadValue(READ_ANGLE_VALUE)>>1)*2+0x08008000);
	r=r*360.0/16384;
    y=r;
    y_1=y;
	yw=y;  
	yw_1=yw;
  }
  else
  {
	closemode=0;
  }
  NVIC_EnableIRQ(EXTI0_1_IRQn);
  NVIC_EnableIRQ(EXTI2_3_IRQn);
}

void Output(float theta,uint8_t effort) 
{	
  int16_t v_coil_A;
  int16_t v_coil_B;

  int16_t sin_coil_A;
  int16_t sin_coil_B;
	
  int16_t angle_1;
  int16_t angle_2;
		
  uint16_t phase_multiplier=500;
	
  angle_1=Mod(phase_multiplier*theta,3600);   
  angle_2=Mod(phase_multiplier*theta+900,3600);
  
  sin_coil_A=sin_1[angle_1];
  sin_coil_B=sin_1[angle_2];

  v_coil_A=effort*sin_coil_A/1024;
  v_coil_B=effort*sin_coil_B/1024;
	
  if(v_coil_A>=0)  
  {
    LL_TIM_OC_SetCompareCH2(TIM3,v_coil_A);  
	IN1_HIGH;  
    IN2_LOW;  
  }
  else  
  {
    LL_TIM_OC_SetCompareCH2(TIM3,-v_coil_A);  
	IN1_LOW;     
    IN2_HIGH;  
  } 
  if(v_coil_B>=0)  
  {
    LL_TIM_OC_SetCompareCH1(TIM3,v_coil_B);  
	IN3_HIGH;  
    IN4_LOW;  
  }
  else 
  {
    LL_TIM_OC_SetCompareCH1(TIM3,-v_coil_B); 
	IN3_LOW;     
    IN4_HIGH;    
  }
}

void OneStep(void)
{          
  if(dir) 
    stepnumber+=1;
  else 
    stepnumber-=1;
  
  Output(1.8*stepnumber,80);
  LL_mDelay(10);
}

int32_t Mod(int32_t xMod,int32_t mMod) 
{
  int32_t temp;
  temp=xMod%mMod;
  if(temp<0)
    return (temp+mMod);
  else
	return  temp;
}

void UsDelay(uint16_t us)
{
  us*=10;
  while(us)	
  {
    __NOP();
	__NOP();
	us--;
  }
}

void FlashUnlock(void)
{
  FLASH->KEYR=FLASH_KEY1;
  FLASH->KEYR=FLASH_KEY2;
}

void FlashLock(void)
{
  FLASH->CR|=1<<7; 
}

uint8_t FlashGetStatus(void)
{
  uint32_t res;
  res=FLASH->SR;
  if(res&(1<<0))
    return 1; 
  else if(res&(1<<2))
	return 2; 
  else if(res&(1<<4))
	return 3; 
  return 0;     
}

uint8_t FlashWaitDone(uint16_t time)
{
  uint8_t res;
  do
  {
    res=FlashGetStatus();
    if(res!=1)
	  break;
	UsDelay(1);	
    time--;
  }while(time);
  if(time==0)
    res=0xff;
  return res;
}

uint8_t FlashErasePage(uint32_t paddr)
{
  uint8_t res=0;
  res=FlashWaitDone(0X5FFF);
  if(res==0)
  {
    FLASH->CR|=1<<1; 
    FLASH->AR=paddr; 
    FLASH->CR|=1<<6; 
    res=FlashWaitDone(0X5FFF); 
    if(res!=1) 
      FLASH->CR&=~(1<<1); 
  }
  return res;
}

void FlashErase32K(void)
{
  FlashErasePage(0x08008000);
  FlashErasePage(0x08008400);
  FlashErasePage(0x08008800);
  FlashErasePage(0x08008C00);
  FlashErasePage(0x08009000);
  FlashErasePage(0x08009400);
  FlashErasePage(0x08009800);
  FlashErasePage(0x08009C00);
  FlashErasePage(0x0800A000);
  FlashErasePage(0x0800A400);
  FlashErasePage(0x0800A800);
  FlashErasePage(0x0800AC00);
  FlashErasePage(0x0800B000);
  FlashErasePage(0x0800B400);
  FlashErasePage(0x0800B800);
  FlashErasePage(0x0800BC00);
  FlashErasePage(0x0800C000);
  FlashErasePage(0x0800C400);
  FlashErasePage(0x0800C800);
  FlashErasePage(0x0800CC00);
  FlashErasePage(0x0800D000);
  FlashErasePage(0x0800D400);
  FlashErasePage(0x0800D800);
  FlashErasePage(0x0800DC00);
  FlashErasePage(0x0800E000);
  FlashErasePage(0x0800E400);
  FlashErasePage(0x0800E800);
  FlashErasePage(0x0800EC00);
  FlashErasePage(0x0800F000);
  FlashErasePage(0x0800F400);
  FlashErasePage(0x0800F800); 
  FlashErasePage(0x0800FC00);
}

uint8_t FlashWriteHalfWord(uint32_t faddr,uint16_t dat)
{
  uint8_t  res;
  res=FlashWaitDone(0XFF);
  if(res==0)
  {
    FLASH->CR|=1<<0;
    *(volatile uint16_t*)faddr=dat; 
    res=FlashWaitDone(0XFF);
	if(res!=1)
    {
      FLASH->CR&=~(1<<0); 
    }
  }
  return res;
}

uint16_t FlashReadHalfWord(uint32_t faddr)
{
  return *(volatile uint16_t*)faddr;
}

void UartPutChar(uint8_t data)
{
  LL_USART_TransmitData8(USART1,data);
  while(!LL_USART_IsActiveFlag_TXE(USART1))
    __NOP();
  LL_USART_ClearFlag_TC(USART1); 
}

void PrintString(uint8_t *pd)
{
 while((*pd)!='\0')
 {
   UartPutChar(*pd); 
   pd++;  
 }
}

void PrintShortInt(uint16_t x)
{
  int8_t i;
  uint8_t displaybuffer[5];

  for(i=4;i>=0;i--)
  {
    displaybuffer[i]='0'+x%10;
    x/=10;
  }
  for(i=0;i<4;i++)
  {
    if(displaybuffer[i]!='0')
	  break;
  }
  for(;i<5;i++)
    UartPutChar(displaybuffer[i]);
}

void SerialCheck(void) 
{        
  PrintString("----- HyperStepper 1.0 -----\r\n");
  uint8_t quit=0;
  while(!quit)
  {
    PrintString("Edit PID gains:\r\n");
    PrintString("p ----- kp = ");
    PrintShortInt(kp);
	PrintString("\r\n");
    PrintString("i ----- ki = ");
    PrintShortInt(ki);
	PrintString("\r\n");
    PrintString("d ----- kd = ");
    PrintShortInt(kd);
	PrintString("\r\n");;
    PrintString("q ----- quit\r\n");
    
    while(!LL_USART_IsActiveFlag_RXNE(USART1));
    char inChar3=(char)LL_USART_ReceiveData8(USART1); 
    switch(inChar3) 
	{
      case 'p':
        {
          PrintString("kp = ?\r\n");
          while(!LL_USART_IsActiveFlag_RXNE(USART1));
          kp=LL_USART_ReceiveData8(USART1);
          PrintString("new kp = ");
          PrintShortInt(kp);
          PrintString("\r\n");
        }
        break;
      case 'i':
        {
          PrintString("ki = ?\r\n");
          while(!LL_USART_IsActiveFlag_RXNE(USART1));
          ki=LL_USART_ReceiveData8(USART1)/10.0;
          PrintString("new ki = ");
          PrintShortInt(ki*10);
          PrintString("\r\n");
        }
        break;
      case 'd':
        {
          PrintString("kd = ?\r\n");
          while(!LL_USART_IsActiveFlag_RXNE(USART1));
          kd=LL_USART_ReceiveData8(USART1);
          PrintString("new kd = ");
          PrintShortInt(kd);
          PrintString("\r\n");
        }
        break;
      case 'q':
        {  
          quit=1;
          PrintString("done...\r\n");
        }
      default:
        {}
        break;
    }
  }
}

uint16_t ReadValue(uint16_t RegAdd)
{
  uint16_t data;
  NSS_L;
  while(LL_SPI_IsActiveFlag_TXE(SPI1)==0);
  LL_SPI_TransmitData16(SPI1,RegAdd);
  while(LL_SPI_IsActiveFlag_RXNE(SPI1)==0);
  data=LL_SPI_ReceiveData16(SPI1);
  SPI_TX_OD;
  while(LL_SPI_IsActiveFlag_TXE(SPI1)==0);
  LL_SPI_TransmitData16(SPI1,0xFFFF);
  while(LL_SPI_IsActiveFlag_RXNE(SPI1)==0);
  data=LL_SPI_ReceiveData16(SPI1)&0x7FFF;
  NSS_H;
  SPI_TX_PP;
  return data;
}

void WriteValue(uint16_t RegAdd,uint16_t RegValue)
{
  uint16_t data;
  NSS_L;
  while(LL_SPI_IsActiveFlag_TXE(SPI1)==0);
  LL_SPI_TransmitData16(SPI1,RegAdd);
  while(LL_SPI_IsActiveFlag_RXNE(SPI1)==0);
  data=LL_SPI_ReceiveData16(SPI1);
  while(LL_SPI_IsActiveFlag_TXE(SPI1)==0);
  LL_SPI_TransmitData16(SPI1,RegValue);
  while(LL_SPI_IsActiveFlag_RXNE(SPI1)==0);
  data=LL_SPI_ReceiveData16(SPI1);
  NSS_H;
}

uint16_t ReadState(void)
{
  return (ReadValue(READ_STATUS));
}

uint16_t ReadAngle(void)
{
  return (ReadValue(READ_ANGLE_VALUE)>>1);
}

void CalibrateEncoder(void) 
{   
  int32_t encoderReading=0;    
  int32_t currentencoderReading=0;
  int32_t lastencoderReading=0;        

  int32_t iStart=0;     //encoder zero position index
  int32_t jStart=0;
  int32_t stepNo=0;
  
  int32_t fullStepReadings[200];
  int32_t ticks=0;	
  uint32_t address=0x08008000;

  uint16_t lookupAngle;
		
  PrintString("Beginning calibration Encoder...\r\n");
//  WriteValue(WRITE_MOD2_VALUE,MOD2_VALUE);
//  LED_H;
//  LL_mDelay(250);
//  LED_L;
//  LL_mDelay(250);	
//  dir=1; 
//  OneStep();
//  LL_mDelay(500);
//  OneStep();
//  LL_mDelay(500);
//  dir=0; 
//  OneStep();
//  LL_mDelay(500);
//  OneStep();
//  LL_mDelay(500);
  dir=1; 
  Output(0.0,80);
  for(uint8_t m=0;m<4;m++)
  {
    LED_H;
	LL_mDelay(250);
    LED_L;
	LL_mDelay(250);	
  } 
  for(uint16_t x=0;x<200;x++) 
  {    
    encoderReading=0;
   	LL_mDelay(20);                     
    lastencoderReading=ReadAngle();     
    for(uint8_t reading=0;reading<10;reading++) 
	{ 
      currentencoderReading=ReadAngle(); 
      if(currentencoderReading-lastencoderReading<-8192)
        currentencoderReading+=16384;
      else if(currentencoderReading-lastencoderReading>8192)
        currentencoderReading-=16384;
 
      encoderReading+=currentencoderReading;
      LL_mDelay(10);
      lastencoderReading=currentencoderReading;
    }
    encoderReading=encoderReading/10;
    if(encoderReading>16384)
      encoderReading-=16384;
    else if(encoderReading<0)
      encoderReading+=16384;
    fullStepReadings[x]=encoderReading;  
//    if(x%20==0)
//    {
//      PrintShortInt(100*x/200);
//      PrintString("%\r\n");
//    } 
//	else 
//      PrintString(".");
    OneStep();
	LL_mDelay(100); 
  }
  LL_TIM_OC_SetCompareCH1(TIM3,0);  
  LL_TIM_OC_SetCompareCH2(TIM3,0); 
  PrintString("The ticks:\r\n");
  for(uint8_t i=0;i<200;i++) 
  {
    ticks=fullStepReadings[(i+1)%200]-fullStepReadings[i%200];
    if(ticks<-15000) 
      ticks+=16384;
    else if(ticks>15000)	
	  ticks-=16384;	
	PrintShortInt((uint16_t)ticks);
    for(int32_t j=0;j<ticks;j++) 
	{
      stepNo=(fullStepReadings[i]+j)%16384;
      if(stepNo==0) 
      {
        iStart=i;
        jStart=j;
      }
    }
  }
  PrintString("\r\n");
  PrintString("The lookup data:\r\n");
  FlashUnlock();
  FlashErase32K();
  for(int32_t i=iStart;i<(iStart+200+1);i++) 
  {
	ticks=fullStepReadings[(i+1)%200]-fullStepReadings[i%200];
    if(ticks<-15000) 
      ticks+=16384;         
    if(i==iStart) 
	{ 
      for(int32_t j=jStart;j<ticks;j++) 
	  {
        lookupAngle=(8192*i+8192*j/ticks)%1638400/100;
        //PrintShortInt(lookupAngle);
		//PrintString("\r\n"); 
		FlashWriteHalfWord(address,(uint16_t)lookupAngle);
		address+=2;
      }
    }
    else if(i==(iStart+200)) 
	{ 
      for(int32_t j=0;j<jStart;j++) 
	  {
        lookupAngle=((8192*i+8192*j/ticks)%1638400)/100;
        //PrintShortInt(lookupAngle);
		//PrintString("\r\n"); 
		FlashWriteHalfWord(address,(uint16_t)lookupAngle);
		address+=2;
      }
    }
    else 
	{                        //this is the general case
      for(int32_t j=0;j<ticks;j++) 
      {
        lookupAngle=((8192*i+8192*j/ticks)%1638400)/100;
        //PrintShortInt(lookupAngle);
		//PrintString("\r\n"); 
		FlashWriteHalfWord(address,(uint16_t)lookupAngle);
		address+=2;
      }
    }
  }
  FlashLock();
  while(1)
  {
    LED_F;
	LL_mDelay(500);
  }
  
  //PrintString("The flash Data: "); 
  //PrintString("\r\n"); 
  //address=0x08008000;
  //for(uint16_t i=0;i<16384;i++)
  //{
	//uint16_t temp=FlashReadHalfWord(add); 
    //address+=2;
    //PrintShortInt(temp);
    //if(i%64==0)
    //PrintString("\r\n"); 
  //}
}

void _Error_Handler(char *file, int line)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  while(1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT

void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/**
  * @}
  */

/**
  * @}
  */

