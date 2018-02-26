/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:50:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jw_LeftToeBottom_to_RightToeBottom_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t130;
  double t363;
  double t279;
  double t317;
  double t394;
  double t473;
  double t319;
  double t396;
  double t434;
  double t250;
  double t510;
  double t524;
  double t531;
  double t611;
  double t469;
  double t569;
  double t579;
  double t249;
  double t612;
  double t638;
  double t658;
  double t692;
  double t593;
  double t669;
  double t675;
  double t172;
  double t695;
  double t696;
  double t743;
  double t804;
  double t690;
  double t749;
  double t761;
  double t149;
  double t826;
  double t828;
  double t830;
  double t936;
  double t985;
  double t986;
  double t990;
  double t1011;
  double t1035;
  double t1040;
  double t1003;
  double t1054;
  double t1064;
  double t1112;
  double t1117;
  double t1121;
  double t1088;
  double t1142;
  double t1155;
  double t1167;
  double t1177;
  double t1196;
  double t1316;
  double t1317;
  double t1349;
  double t1389;
  double t1401;
  double t1433;
  double t1379;
  double t1441;
  double t1442;
  double t1457;
  double t1488;
  double t1492;
  double t1443;
  double t1497;
  double t1498;
  double t1518;
  double t1519;
  double t1524;
  double t1502;
  double t1525;
  double t1528;
  double t1565;
  double t1580;
  double t1591;
  double t775;
  double t832;
  double t835;
  double t853;
  double t857;
  double t858;
  double t1160;
  double t1201;
  double t1215;
  double t1248;
  double t1264;
  double t1288;
  double t1542;
  double t1638;
  double t1647;
  double t1667;
  double t1698;
  double t1707;
  double t1755;
  double t1762;
  double t1763;
  double t1663;
  double t1708;
  double t1720;
  double t1227;
  double t1303;
  double t1310;
  double t1818;
  double t1819;
  double t1820;
  double t852;
  double t882;
  double t914;
  double t1313;
  double t1732;
  double t1739;
  double t1740;
  double t1747;
  double t1749;
  double t1753;
  double t1780;
  double t1865;
  double t1880;
  double t1890;
  double t1899;
  double t1901;
  double t1944;
  double t1961;
  double t2208;
  double t2115;
  double t2118;
  double t2153;
  double t2241;
  double t2104;
  double t2275;
  double t2283;
  double t2284;
  double t2180;
  double t2257;
  double t2262;
  double t2352;
  double t2068;
  double t2387;
  double t2393;
  double t2394;
  double t2274;
  double t2356;
  double t2375;
  double t2395;
  double t2062;
  double t2454;
  double t2455;
  double t2465;
  double t2380;
  double t2405;
  double t2447;
  double t2469;
  double t2032;
  double t2528;
  double t2530;
  double t2559;
  double t2451;
  double t2470;
  double t2513;
  double t2560;
  double t1998;
  double t2003;
  double t2683;
  double t2772;
  double t2773;
  double t2776;
  double t2689;
  double t2694;
  double t2753;
  double t2824;
  double t2827;
  double t2872;
  double t2763;
  double t2790;
  double t2800;
  double t2919;
  double t2978;
  double t3008;
  double t2807;
  double t2887;
  double t2890;
  double t3093;
  double t3107;
  double t3129;
  double t3076;
  double t3077;
  double t3079;
  double t3162;
  double t3165;
  double t3167;
  double t3083;
  double t3131;
  double t3141;
  double t3173;
  double t3187;
  double t3214;
  double t3147;
  double t3168;
  double t3170;
  double t3229;
  double t3232;
  double t3234;
  double t3172;
  double t3215;
  double t3220;
  double t2527;
  double t2577;
  double t2585;
  double t2617;
  double t2620;
  double t2621;
  double t2891;
  double t3015;
  double t3026;
  double t3030;
  double t3032;
  double t3041;
  double t3225;
  double t3248;
  double t3251;
  double t3278;
  double t3302;
  double t3323;
  double t3442;
  double t3496;
  double t3500;
  double t2670;
  double t3516;
  double t3522;
  double t3527;
  double t3055;
  double t3058;
  double t3061;
  double t3590;
  double t3602;
  double t3612;
  double t3358;
  double t3361;
  double t3375;
  double t2592;
  double t2641;
  double t2666;
  double t3504;
  double t3508;
  double t3512;
  double t3029;
  double t3045;
  double t3048;
  double t3537;
  double t3538;
  double t3542;
  double t3277;
  double t3325;
  double t3350;
  double t3615;
  double t3617;
  double t3643;
  double t1976;
  double t2010;
  double t2016;
  double t2673;
  double t3069;
  double t3385;
  double t3425;
  double t3513;
  double t3582;
  double t3645;
  double t3648;
  double t3757;
  double t3774;
  double t3775;
  double t3784;
  double t3837;
  double t3860;
  double t3870;
  double t3661;
  double t3664;
  double t3669;
  double t3670;
  double t3676;
  double t3678;
  double t3681;
  double t3698;
  double t3761;
  double t3806;
  double t3887;
  double t3892;
  double t3906;
  double t3918;
  double t3920;
  double t3932;
  double t3934;
  double t3950;
  double t3966;
  double t3977;
  double t4036;
  double t4044;
  double t4072;
  double t4077;
  double t4250;
  double t4254;
  double t4261;
  double t4263;
  double t4271;
  double t4272;
  double t4262;
  double t4273;
  double t4279;
  double t4301;
  double t4307;
  double t4325;
  double t4300;
  double t4326;
  double t4338;
  double t4362;
  double t4368;
  double t4389;
  double t3905;
  double t3993;
  double t3996;
  double t3997;
  double t4012;
  double t4080;
  double t4086;
  double t4093;
  double t4098;
  double t4130;
  double t4134;
  double t4144;
  double t4159;
  double t4177;
  double t4178;
  double t4182;
  double t4191;
  double t4200;
  double t4206;
  double t4223;
  double t4561;
  double t4598;
  double t4599;
  double t4556;
  double t4614;
  double t4625;
  double t4656;
  double t4674;
  double t4648;
  double t4676;
  double t4686;
  double t4689;
  double t4716;
  double t4720;
  double t148;
  double t4341;
  double t4396;
  double t4411;
  double t4412;
  double t4419;
  double t4430;
  double t4434;
  double t4449;
  double t4457;
  double t4461;
  double t4470;
  double t4687;
  double t4721;
  double t4734;
  double t4741;
  double t4744;
  double t4751;
  double t4767;
  double t4772;
  double t4780;
  double t4794;
  double t4827;
  double t4476;
  double t4485;
  double t4493;
  double t4521;
  double t4522;
  double t4832;
  double t4843;
  double t5217;
  double t5227;
  double t5228;
  double t4961;
  double t4968;
  double t4970;
  double t4991;
  double t4992;
  double t5239;
  double t5244;
  double t5245;
  double t5008;
  double t5019;
  double t5135;
  double t5147;
  double t5151;
  double t5154;
  double t5175;
  double t5194;
  double t5195;
  double t3660;
  double t3701;
  double t3706;
  double t3709;
  double t3712;
  double t4901;
  double t4916;
  double t4937;
  double t4942;
  double t4954;
  double t5062;
  double t5068;
  double t5069;
  double t5084;
  double t5097;
  double t5327;
  double t5333;
  double t5343;
  double t5346;
  double t5347;
  double t5357;
  double t5377;
  double t5383;
  double t5392;
  double t5397;
  double t5404;
  double t5407;
  double t5393;
  double t5409;
  double t5415;
  double t5425;
  double t5427;
  double t5439;
  double t5423;
  double t5449;
  double t5450;
  double t5454;
  double t5455;
  double t5469;
  double t5583;
  double t5593;
  double t5600;
  double t5579;
  double t5617;
  double t5627;
  double t5651;
  double t5654;
  double t5637;
  double t5665;
  double t5672;
  double t5692;
  double t5713;
  double t5724;
  double t5453;
  double t5505;
  double t5506;
  double t5522;
  double t5523;
  double t5566;
  double t5682;
  double t5727;
  double t5771;
  double t5784;
  double t5795;
  double t5799;
  t130 = Sin(var1[1]);
  t363 = Cos(var1[0]);
  t279 = Cos(var1[2]);
  t317 = Sin(var1[0]);
  t394 = Sin(var1[2]);
  t473 = Cos(var1[3]);
  t319 = -1.*t279*t317*t130;
  t396 = -1.*t363*t394;
  t434 = t319 + t396;
  t250 = Sin(var1[3]);
  t510 = t363*t279;
  t524 = -1.*t317*t130*t394;
  t531 = t510 + t524;
  t611 = Cos(var1[4]);
  t469 = t250*t434;
  t569 = t473*t531;
  t579 = t469 + t569;
  t249 = Sin(var1[4]);
  t612 = t473*t434;
  t638 = -1.*t250*t531;
  t658 = t612 + t638;
  t692 = Cos(var1[5]);
  t593 = -1.*t249*t579;
  t669 = t611*t658;
  t675 = t593 + t669;
  t172 = Sin(var1[5]);
  t695 = t611*t579;
  t696 = t249*t658;
  t743 = t695 + t696;
  t804 = Cos(var1[6]);
  t690 = t172*t675;
  t749 = t692*t743;
  t761 = t690 + t749;
  t149 = Sin(var1[6]);
  t826 = t692*t675;
  t828 = -1.*t172*t743;
  t830 = t826 + t828;
  t936 = Cos(var1[1]);
  t985 = t936*t279*t250;
  t986 = t473*t936*t394;
  t990 = t985 + t986;
  t1011 = t473*t936*t279;
  t1035 = -1.*t936*t250*t394;
  t1040 = t1011 + t1035;
  t1003 = -1.*t249*t990;
  t1054 = t611*t1040;
  t1064 = t1003 + t1054;
  t1112 = t611*t990;
  t1117 = t249*t1040;
  t1121 = t1112 + t1117;
  t1088 = t172*t1064;
  t1142 = t692*t1121;
  t1155 = t1088 + t1142;
  t1167 = t692*t1064;
  t1177 = -1.*t172*t1121;
  t1196 = t1167 + t1177;
  t1316 = -1.*t363*t279*t130;
  t1317 = t317*t394;
  t1349 = t1316 + t1317;
  t1389 = -1.*t279*t317;
  t1401 = -1.*t363*t130*t394;
  t1433 = t1389 + t1401;
  t1379 = t250*t1349;
  t1441 = t473*t1433;
  t1442 = t1379 + t1441;
  t1457 = t473*t1349;
  t1488 = -1.*t250*t1433;
  t1492 = t1457 + t1488;
  t1443 = -1.*t249*t1442;
  t1497 = t611*t1492;
  t1498 = t1443 + t1497;
  t1518 = t611*t1442;
  t1519 = t249*t1492;
  t1524 = t1518 + t1519;
  t1502 = t172*t1498;
  t1525 = t692*t1524;
  t1528 = t1502 + t1525;
  t1565 = t692*t1498;
  t1580 = -1.*t172*t1524;
  t1591 = t1565 + t1580;
  t775 = -1.*t149*t761;
  t832 = t804*t830;
  t835 = t775 + t832;
  t853 = t804*t761;
  t857 = t149*t830;
  t858 = t853 + t857;
  t1160 = -1.*t149*t1155;
  t1201 = t804*t1196;
  t1215 = t1160 + t1201;
  t1248 = t804*t1155;
  t1264 = t149*t1196;
  t1288 = t1248 + t1264;
  t1542 = -1.*t149*t1528;
  t1638 = t804*t1591;
  t1647 = t1542 + t1638;
  t1667 = t804*t1528;
  t1698 = t149*t1591;
  t1707 = t1667 + t1698;
  t1755 = -0.766044*t1215;
  t1762 = -0.642788*t1288;
  t1763 = t1755 + t1762;
  t1663 = 0.642788*t1647;
  t1708 = -0.766044*t1707;
  t1720 = t1663 + t1708;
  t1227 = 0.642788*t1215;
  t1303 = -0.766044*t1288;
  t1310 = t1227 + t1303;
  t1818 = -0.766044*t1647;
  t1819 = -0.642788*t1707;
  t1820 = t1818 + t1819;
  t852 = -0.766044*t835;
  t882 = -0.642788*t858;
  t914 = t852 + t882;
  t1313 = -1.*t363*t936*t1310;
  t1732 = t130*t1720;
  t1739 = t1313 + t1732;
  t1740 = t914*t1739;
  t1747 = 0.642788*t835;
  t1749 = -0.766044*t858;
  t1753 = t1747 + t1749;
  t1780 = -1.*t363*t936*t1763;
  t1865 = t130*t1820;
  t1880 = t1780 + t1865;
  t1890 = -1.*t1753*t1880;
  t1899 = -1.*t1763*t1720;
  t1901 = t1310*t1820;
  t1944 = t1899 + t1901;
  t1961 = t936*t317*t1944;
  t2208 = Cos(var1[7]);
  t2115 = Cos(var1[9]);
  t2118 = Sin(var1[7]);
  t2153 = Sin(var1[8]);
  t2241 = Sin(var1[9]);
  t2104 = Cos(var1[10]);
  t2275 = t2208*t2115;
  t2283 = -1.*t2118*t2153*t2241;
  t2284 = t2275 + t2283;
  t2180 = -1.*t2115*t2118*t2153;
  t2257 = -1.*t2208*t2241;
  t2262 = t2180 + t2257;
  t2352 = Sin(var1[10]);
  t2068 = Cos(var1[11]);
  t2387 = t2104*t2284;
  t2393 = t2262*t2352;
  t2394 = t2387 + t2393;
  t2274 = t2104*t2262;
  t2356 = -1.*t2284*t2352;
  t2375 = t2274 + t2356;
  t2395 = Sin(var1[11]);
  t2062 = Cos(var1[12]);
  t2454 = t2068*t2394;
  t2455 = t2375*t2395;
  t2465 = t2454 + t2455;
  t2380 = t2068*t2375;
  t2405 = -1.*t2394*t2395;
  t2447 = t2380 + t2405;
  t2469 = Sin(var1[12]);
  t2032 = Cos(var1[13]);
  t2528 = t2062*t2465;
  t2530 = t2447*t2469;
  t2559 = t2528 + t2530;
  t2451 = t2062*t2447;
  t2470 = -1.*t2465*t2469;
  t2513 = t2451 + t2470;
  t2560 = Sin(var1[13]);
  t1998 = 0. + t1740 + t1890 + t1961;
  t2003 = 1/t1998;
  t2683 = Cos(var1[8]);
  t2772 = t2683*t2104*t2241;
  t2773 = t2683*t2115*t2352;
  t2776 = t2772 + t2773;
  t2689 = t2683*t2115*t2104;
  t2694 = -1.*t2683*t2241*t2352;
  t2753 = t2689 + t2694;
  t2824 = t2068*t2776;
  t2827 = t2753*t2395;
  t2872 = t2824 + t2827;
  t2763 = t2068*t2753;
  t2790 = -1.*t2776*t2395;
  t2800 = t2763 + t2790;
  t2919 = t2062*t2872;
  t2978 = t2800*t2469;
  t3008 = t2919 + t2978;
  t2807 = t2062*t2800;
  t2887 = -1.*t2872*t2469;
  t2890 = t2807 + t2887;
  t3093 = -1.*t2115*t2118;
  t3107 = -1.*t2208*t2153*t2241;
  t3129 = t3093 + t3107;
  t3076 = -1.*t2208*t2115*t2153;
  t3077 = t2118*t2241;
  t3079 = t3076 + t3077;
  t3162 = t2104*t3129;
  t3165 = t3079*t2352;
  t3167 = t3162 + t3165;
  t3083 = t2104*t3079;
  t3131 = -1.*t3129*t2352;
  t3141 = t3083 + t3131;
  t3173 = t2068*t3167;
  t3187 = t3141*t2395;
  t3214 = t3173 + t3187;
  t3147 = t2068*t3141;
  t3168 = -1.*t3167*t2395;
  t3170 = t3147 + t3168;
  t3229 = t2062*t3214;
  t3232 = t3170*t2469;
  t3234 = t3229 + t3232;
  t3172 = t2062*t3170;
  t3215 = -1.*t3214*t2469;
  t3220 = t3172 + t3215;
  t2527 = t2032*t2513;
  t2577 = -1.*t2559*t2560;
  t2585 = t2527 + t2577;
  t2617 = t2032*t2559;
  t2620 = t2513*t2560;
  t2621 = t2617 + t2620;
  t2891 = t2032*t2890;
  t3015 = -1.*t3008*t2560;
  t3026 = t2891 + t3015;
  t3030 = t2032*t3008;
  t3032 = t2890*t2560;
  t3041 = t3030 + t3032;
  t3225 = t2032*t3220;
  t3248 = -1.*t3234*t2560;
  t3251 = t3225 + t3248;
  t3278 = t2032*t3234;
  t3302 = t3220*t2560;
  t3323 = t3278 + t3302;
  t3442 = 0.642788*t2585;
  t3496 = -0.766044*t2621;
  t3500 = t3442 + t3496;
  t2670 = 0. + t1313 + t1732;
  t3516 = 0.642788*t3026;
  t3522 = -0.766044*t3041;
  t3527 = t3516 + t3522;
  t3055 = -1.*t936*t317*t1720;
  t3058 = t363*t936*t1753;
  t3061 = 0. + t3055 + t3058;
  t3590 = 0.642788*t3251;
  t3602 = -0.766044*t3323;
  t3612 = t3590 + t3602;
  t3358 = t936*t317*t1310;
  t3361 = -1.*t130*t1753;
  t3375 = 0. + t3358 + t3361;
  t2592 = -0.766044*t2585;
  t2641 = -0.642788*t2621;
  t2666 = t2592 + t2641;
  t3504 = t363*t936*t1763;
  t3508 = -1.*t130*t1820;
  t3512 = 0. + t3504 + t3508;
  t3029 = -0.766044*t3026;
  t3045 = -0.642788*t3041;
  t3048 = t3029 + t3045;
  t3537 = t936*t317*t1820;
  t3538 = -1.*t363*t936*t914;
  t3542 = 0. + t3537 + t3538;
  t3277 = -0.766044*t3251;
  t3325 = -0.642788*t3323;
  t3350 = t3277 + t3325;
  t3615 = -1.*t936*t317*t1763;
  t3617 = t130*t914;
  t3643 = 0. + t3615 + t3617;
  t1976 = t1740 + t1890 + t1961;
  t2010 = t1976*t2003;
  t2016 = 0. + t2010;
  t2673 = t2666*t2670*t2003;
  t3069 = t3048*t3061*t2003;
  t3385 = t3350*t3375*t2003;
  t3425 = 0. + t2673 + t3069 + t3385;
  t3513 = t3500*t3512*t2003;
  t3582 = t3527*t3542*t2003;
  t3645 = t3612*t3643*t2003;
  t3648 = 0. + t3513 + t3582 + t3645;
  t3757 = 0. + t1899 + t1901;
  t3774 = t1763*t1753;
  t3775 = -1.*t1310*t914;
  t3784 = 0. + t3774 + t3775;
  t3837 = -1.*t1820*t1753;
  t3860 = t1720*t914;
  t3870 = 0. + t3837 + t3860;
  t3661 = t3500*t2670*t2003;
  t3664 = t3527*t3061*t2003;
  t3669 = t3612*t3375*t2003;
  t3670 = 0. + t3661 + t3664 + t3669;
  t3676 = t2666*t3512*t2003;
  t3678 = t3048*t3542*t2003;
  t3681 = t3350*t3643*t2003;
  t3698 = 0. + t3676 + t3678 + t3681;
  t3761 = t2683*t2118*t3757*t2003;
  t3806 = t2208*t2683*t3784*t2003;
  t3887 = t2153*t3870*t2003;
  t3892 = 0. + t3761 + t3806 + t3887;
  t3906 = t2683*t2118*t3512*t2003;
  t3918 = t2153*t3542*t2003;
  t3920 = t2208*t2683*t3643*t2003;
  t3932 = 0. + t3906 + t3918 + t3920;
  t3934 = t3500*t3757*t2003;
  t3950 = t3612*t3784*t2003;
  t3966 = t3527*t3870*t2003;
  t3977 = 0. + t3934 + t3950 + t3966;
  t4036 = t2666*t3757*t2003;
  t4044 = t3350*t3784*t2003;
  t4072 = t3048*t3870*t2003;
  t4077 = 0. + t4036 + t4044 + t4072;
  t4250 = 0.642788*t804;
  t4254 = -0.766044*t149;
  t4261 = t4250 + t4254;
  t4263 = -0.766044*t804;
  t4271 = -0.642788*t149;
  t4272 = t4263 + t4271;
  t4262 = -1.*t172*t4261;
  t4273 = t692*t4272;
  t4279 = 0. + t4262 + t4273;
  t4301 = t692*t4261;
  t4307 = t172*t4272;
  t4325 = 0. + t4301 + t4307;
  t4300 = t249*t4279;
  t4326 = t611*t4325;
  t4338 = 0. + t4300 + t4326;
  t4362 = t611*t4279;
  t4368 = -1.*t249*t4325;
  t4389 = 0. + t4362 + t4368;
  t3905 = t3648*t3892;
  t3993 = -1.*t3932*t3977;
  t3996 = t3905 + t3993;
  t3997 = t3425*t3996;
  t4012 = t3698*t3892;
  t4080 = -1.*t3932*t4077;
  t4086 = t4012 + t4080;
  t4093 = -1.*t3670*t4086;
  t4098 = t2683*t2118*t2670*t2003;
  t4130 = t2153*t3061*t2003;
  t4134 = t2208*t2683*t3375*t2003;
  t4144 = 0. + t4098 + t4130 + t4134;
  t4159 = t3698*t3977;
  t4177 = -1.*t3648*t4077;
  t4178 = t4159 + t4177;
  t4182 = t4144*t4178;
  t4191 = t3997 + t4093 + t4182;
  t4200 = t2016*t4191;
  t4206 = 0. + t4200;
  t4223 = 1/t4206;
  t4561 = -0.642788*t804;
  t4598 = 0.766044*t149;
  t4599 = t4561 + t4598;
  t4556 = -1.*t172*t4272;
  t4614 = t692*t4599;
  t4625 = 0. + t4556 + t4614;
  t4656 = t172*t4599;
  t4674 = 0. + t4273 + t4656;
  t4648 = t249*t4625;
  t4676 = t611*t4674;
  t4686 = 0. + t4648 + t4676;
  t4689 = t611*t4625;
  t4716 = -1.*t249*t4674;
  t4720 = 0. + t4689 + t4716;
  t148 = 0. + t130;
  t4341 = t473*t4338;
  t4396 = t250*t4389;
  t4411 = 0. + t4341 + t4396;
  t4412 = t279*t4411;
  t4419 = -1.*t250*t4338;
  t4430 = t473*t4389;
  t4434 = 0. + t4419 + t4430;
  t4449 = t4434*t394;
  t4457 = 0. + t4412 + t4449;
  t4461 = t936*t4457;
  t4470 = 0. + t4461;
  t4687 = t473*t4686;
  t4721 = t250*t4720;
  t4734 = 0. + t4687 + t4721;
  t4741 = t279*t4734;
  t4744 = -1.*t250*t4686;
  t4751 = t473*t4720;
  t4767 = 0. + t4744 + t4751;
  t4772 = t4767*t394;
  t4780 = 0. + t4741 + t4772;
  t4794 = t936*t4780;
  t4827 = 0. + t4794;
  t4476 = t3425*t3977;
  t4485 = -1.*t3670*t4077;
  t4493 = t4476 + t4485;
  t4521 = -1.*t2016*t4493;
  t4522 = 0. + t4521;
  t4832 = t2016*t4178;
  t4843 = 0. + t4832;
  t5217 = -1.*t279*t4434;
  t5227 = t4411*t394;
  t5228 = 0. + t5217 + t5227;
  t4961 = t3425*t3892;
  t4968 = -1.*t4144*t4077;
  t4970 = t4961 + t4968;
  t4991 = t2016*t4970;
  t4992 = 0. + t4991;
  t5239 = -1.*t279*t4767;
  t5244 = t4734*t394;
  t5245 = 0. + t5239 + t5244;
  t5008 = -1.*t2016*t4086;
  t5019 = 0. + t5008;
  t5135 = t3670*t3892;
  t5147 = -1.*t4144*t3977;
  t5151 = t5135 + t5147;
  t5154 = -1.*t2016*t5151;
  t5175 = 0. + t5154;
  t5194 = t2016*t3996;
  t5195 = 0. + t5194;
  t3660 = t3425*t3648;
  t3701 = -1.*t3670*t3698;
  t3706 = t3660 + t3701;
  t3709 = t2016*t3706;
  t3712 = 0. + t3709;
  t4901 = t3425*t3932;
  t4916 = -1.*t4144*t3698;
  t4937 = t4901 + t4916;
  t4942 = -1.*t2016*t4937;
  t4954 = 0. + t4942;
  t5062 = t3670*t3932;
  t5068 = -1.*t4144*t3648;
  t5069 = t5062 + t5068;
  t5084 = t2016*t5069;
  t5097 = 0. + t5084;
  t5327 = -1.*t3712*t4223;
  t5333 = 0. + t5327;
  t5343 = -1.*t4954*t4223;
  t5346 = 0. + t5343;
  t5347 = -1.*t5097*t4223;
  t5357 = 0. + t5347;
  t5377 = 0.642788*t2032;
  t5383 = -0.766044*t2560;
  t5392 = t5377 + t5383;
  t5397 = -0.766044*t2032;
  t5404 = -0.642788*t2560;
  t5407 = t5397 + t5404;
  t5393 = -1.*t2469*t5392;
  t5409 = t2062*t5407;
  t5415 = 0. + t5393 + t5409;
  t5425 = t2062*t5392;
  t5427 = t2469*t5407;
  t5439 = 0. + t5425 + t5427;
  t5423 = t2395*t5415;
  t5449 = t2068*t5439;
  t5450 = 0. + t5423 + t5449;
  t5454 = t2068*t5415;
  t5455 = -1.*t2395*t5439;
  t5469 = 0. + t5454 + t5455;
  t5583 = -0.642788*t2032;
  t5593 = 0.766044*t2560;
  t5600 = t5583 + t5593;
  t5579 = -1.*t2469*t5407;
  t5617 = t2062*t5600;
  t5627 = 0. + t5579 + t5617;
  t5651 = t2469*t5600;
  t5654 = 0. + t5409 + t5651;
  t5637 = t2395*t5627;
  t5665 = t2068*t5654;
  t5672 = 0. + t5637 + t5665;
  t5692 = t2068*t5627;
  t5713 = -1.*t2395*t5654;
  t5724 = 0. + t5692 + t5713;
  t5453 = -1.*t2352*t5450;
  t5505 = t2104*t5469;
  t5506 = 0. + t5453 + t5505;
  t5522 = t2104*t5450;
  t5523 = t2352*t5469;
  t5566 = 0. + t5522 + t5523;
  t5682 = -1.*t2352*t5672;
  t5727 = t2104*t5724;
  t5771 = 0. + t5682 + t5727;
  t5784 = t2104*t5672;
  t5795 = t2352*t5724;
  t5799 = 0. + t5784 + t5795;
  p_output1[0]=-1.*t148*t3712*t4223 - 1.*t4223*t4470*t4522 - 1.*t4223*t4827*t4843;
  p_output1[1]=-1.*t148*t4223*t4954 - 1.*t4223*t4470*t4992 - 1.*t4223*t4827*t5019;
  p_output1[2]=-1.*t148*t4223*t5097 - 1.*t4223*t4470*t5175 - 1.*t4223*t4827*t5195;
  p_output1[3]=0. - 1.*t4223*t4522*t5228 - 1.*t4223*t4843*t5245;
  p_output1[4]=0. - 1.*t4223*t4992*t5228 - 1.*t4223*t5019*t5245;
  p_output1[5]=0. - 1.*t4223*t5175*t5228 - 1.*t4223*t5195*t5245;
  p_output1[6]=t5333;
  p_output1[7]=t5346;
  p_output1[8]=t5357;
  p_output1[9]=t5333;
  p_output1[10]=t5346;
  p_output1[11]=t5357;
  p_output1[12]=t5333;
  p_output1[13]=t5346;
  p_output1[14]=t5357;
  p_output1[15]=t5333;
  p_output1[16]=t5346;
  p_output1[17]=t5357;
  p_output1[18]=t5333;
  p_output1[19]=t5346;
  p_output1[20]=t5357;
  p_output1[21]=0. + t2153;
  p_output1[22]=0. + t2683*(0. + t2241*t5506 + t2115*t5566);
  p_output1[23]=0. + t2683*(0. + t2241*t5771 + t2115*t5799);
  p_output1[24]=0.;
  p_output1[25]=0. - 1.*t2115*t5506 + t2241*t5566;
  p_output1[26]=0. - 1.*t2115*t5771 + t2241*t5799;
  p_output1[27]=1.;
  p_output1[28]=0.;
  p_output1[29]=0.;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=1.;
  p_output1[40]=0.;
  p_output1[41]=0.;
}



void Jw_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
