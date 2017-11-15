/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_MultisenseIMU_to_RightToeBottom_src.h"

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
  double t63;
  double t350;
  double t779;
  double t940;
  double t979;
  double t995;
  double t1084;
  double t1332;
  double t1656;
  double t1690;
  double t1691;
  double t1715;
  double t1599;
  double t1600;
  double t1616;
  double t1804;
  double t1829;
  double t1834;
  double t2034;
  double t2047;
  double t2079;
  double t2184;
  double t1898;
  double t1963;
  double t2001;
  double t2339;
  double t2347;
  double t2375;
  double t2628;
  double t2634;
  double t2636;
  double t2754;
  double t2484;
  double t2618;
  double t2625;
  double t2973;
  double t2994;
  double t3009;
  double t3347;
  double t3392;
  double t3425;
  double t3433;
  double t3182;
  double t3226;
  double t3275;
  double t3519;
  double t3543;
  double t3550;
  double t516;
  double t641;
  double t747;
  double t811;
  double t861;
  double t1080;
  double t1115;
  double t1200;
  double t1339;
  double t1382;
  double t1548;
  double t1707;
  double t1732;
  double t1733;
  double t1839;
  double t1861;
  double t1882;
  double t4111;
  double t4124;
  double t4139;
  double t4159;
  double t4269;
  double t4283;
  double t2108;
  double t2204;
  double t2224;
  double t2429;
  double t2462;
  double t2476;
  double t4334;
  double t4355;
  double t4403;
  double t4527;
  double t4541;
  double t4567;
  double t2656;
  double t2784;
  double t2791;
  double t3076;
  double t3133;
  double t3172;
  double t4671;
  double t4675;
  double t4697;
  double t4728;
  double t4743;
  double t4748;
  double t3427;
  double t3466;
  double t3469;
  double t3561;
  double t3563;
  double t3575;
  double t4792;
  double t4794;
  double t4813;
  double t4823;
  double t4827;
  double t4862;
  double t5134;
  double t5144;
  double t5189;
  double t5252;
  double t5265;
  double t5268;
  double t5294;
  double t5300;
  double t5306;
  double t5340;
  double t5373;
  double t5394;
  double t5397;
  double t5398;
  double t5427;
  double t5521;
  double t5527;
  double t5533;
  double t5031;
  double t5032;
  double t5044;
  double t5667;
  double t5685;
  double t5725;
  double t5771;
  double t5775;
  double t5777;
  double t5791;
  double t5834;
  double t5853;
  double t5866;
  double t5871;
  double t5877;
  double t5921;
  double t5954;
  double t5966;
  double t6002;
  double t6003;
  double t6011;
  double t6252;
  double t6257;
  double t6264;
  double t6279;
  double t6283;
  double t6297;
  double t6301;
  double t6303;
  double t6310;
  double t6328;
  double t6335;
  double t6337;
  double t6370;
  double t6372;
  double t6382;
  double t6387;
  double t6390;
  double t6394;
  double t6542;
  double t6543;
  double t6544;
  double t6561;
  double t6562;
  double t6566;
  double t6582;
  double t6588;
  double t6608;
  double t6613;
  double t6619;
  double t6639;
  double t6658;
  double t6659;
  double t6691;
  double t6696;
  double t6708;
  double t6664;
  double t6673;
  double t6677;
  double t6462;
  double t6463;
  double t6508;
  double t6523;
  double t6536;
  double t6863;
  double t6868;
  double t6882;
  double t6890;
  double t6917;
  double t6947;
  double t6955;
  double t6957;
  double t6964;
  double t6976;
  double t6993;
  double t7003;
  double t7016;
  double t7019;
  double t7062;
  double t7071;
  double t7076;
  double t7033;
  double t7048;
  double t7050;
  double t7181;
  double t7186;
  double t7194;
  double t7201;
  double t7208;
  double t7209;
  double t7212;
  double t7216;
  double t7217;
  double t7225;
  double t7234;
  double t7235;
  double t7274;
  double t7316;
  double t7318;
  double t7239;
  double t7243;
  double t7252;
  double t7482;
  double t7485;
  double t7489;
  double t7526;
  double t7528;
  double t7548;
  double t7558;
  double t7562;
  double t7568;
  double t7570;
  double t7582;
  double t7584;
  double t7588;
  double t7618;
  double t7621;
  double t7623;
  double t7603;
  double t7610;
  double t7611;
  double t7450;
  double t7460;
  double t7491;
  double t7510;
  double t7513;
  double t7685;
  double t7690;
  double t7704;
  double t7705;
  double t7714;
  double t7717;
  double t7720;
  double t7733;
  double t7734;
  double t7735;
  double t7723;
  double t7726;
  double t7729;
  double t7200;
  double t7211;
  double t7223;
  double t7237;
  double t7259;
  double t7321;
  double t7334;
  double t7352;
  double t7379;
  double t7389;
  double t7396;
  double t7404;
  double t7416;
  double t7422;
  double t7833;
  double t7835;
  double t7836;
  double t7851;
  double t7854;
  double t7862;
  double t7867;
  double t7884;
  double t7889;
  double t7894;
  double t7869;
  double t7872;
  double t7880;
  double t7817;
  double t7823;
  double t7837;
  double t7841;
  double t7848;
  double t7944;
  double t7947;
  double t7964;
  double t7965;
  double t7971;
  double t7955;
  double t7957;
  double t7990;
  double t7991;
  double t7993;
  double t7997;
  double t8000;
  double t8004;
  double t8005;
  double t8016;
  double t8017;
  double t8019;
  double t8008;
  double t8010;
  double t8011;
  double t8040;
  double t8044;
  double t8046;
  double t8056;
  double t8057;
  double t8053;
  double t8054;
  double t8036;
  double t8037;
  double t8047;
  double t8048;
  double t8050;
  double t8077;
  double t8079;
  double t3790;
  double t8095;
  double t8096;
  double t8097;
  double t8103;
  double t8105;
  double t8100;
  double t8101;
  double t8122;
  double t8123;
  double t8126;
  double t8061;
  double t8067;
  double t8119;
  double t8120;
  double t8127;
  double t8129;
  double t8130;
  double t8083;
  double t3807;
  double t3810;
  double t8151;
  double t8152;
  double t8153;
  double t8110;
  double t8113;
  t63 = Cos(var1[7]);
  t350 = Cos(var1[8]);
  t779 = Sin(var1[8]);
  t940 = Cos(var1[9]);
  t979 = -1.*t940;
  t995 = 1. + t979;
  t1084 = Sin(var1[9]);
  t1332 = Sin(var1[7]);
  t1656 = Cos(var1[10]);
  t1690 = -1.*t1656;
  t1691 = 1. + t1690;
  t1715 = Sin(var1[10]);
  t1599 = t63*t940*t779;
  t1600 = -1.*t1332*t1084;
  t1616 = t1599 + t1600;
  t1804 = -1.*t940*t1332;
  t1829 = -1.*t63*t779*t1084;
  t1834 = t1804 + t1829;
  t2034 = Cos(var1[11]);
  t2047 = -1.*t2034;
  t2079 = 1. + t2047;
  t2184 = Sin(var1[11]);
  t1898 = t1656*t1616;
  t1963 = t1834*t1715;
  t2001 = t1898 + t1963;
  t2339 = t1656*t1834;
  t2347 = -1.*t1616*t1715;
  t2375 = t2339 + t2347;
  t2628 = Cos(var1[12]);
  t2634 = -1.*t2628;
  t2636 = 1. + t2634;
  t2754 = Sin(var1[12]);
  t2484 = t2034*t2001;
  t2618 = t2375*t2184;
  t2625 = t2484 + t2618;
  t2973 = t2034*t2375;
  t2994 = -1.*t2001*t2184;
  t3009 = t2973 + t2994;
  t3347 = Cos(var1[13]);
  t3392 = -1.*t3347;
  t3425 = 1. + t3392;
  t3433 = Sin(var1[13]);
  t3182 = t2628*t2625;
  t3226 = t3009*t2754;
  t3275 = t3182 + t3226;
  t3519 = t2628*t3009;
  t3543 = -1.*t2625*t2754;
  t3550 = t3519 + t3543;
  t516 = -1.*t350;
  t641 = 1. + t516;
  t747 = -0.135*t641;
  t811 = 0.049*t779;
  t861 = 0. + t747 + t811;
  t1080 = -0.049*t995;
  t1115 = -0.09*t1084;
  t1200 = 0. + t1080 + t1115;
  t1339 = -0.09*t995;
  t1382 = 0.049*t1084;
  t1548 = 0. + t1339 + t1382;
  t1707 = -0.049*t1691;
  t1732 = -0.21*t1715;
  t1733 = 0. + t1707 + t1732;
  t1839 = -0.21*t1691;
  t1861 = 0.049*t1715;
  t1882 = 0. + t1839 + t1861;
  t4111 = -1.*t940*t1332*t779;
  t4124 = -1.*t63*t1084;
  t4139 = t4111 + t4124;
  t4159 = -1.*t63*t940;
  t4269 = t1332*t779*t1084;
  t4283 = t4159 + t4269;
  t2108 = -0.0016*t2079;
  t2204 = -0.2707*t2184;
  t2224 = 0. + t2108 + t2204;
  t2429 = -0.2707*t2079;
  t2462 = 0.0016*t2184;
  t2476 = 0. + t2429 + t2462;
  t4334 = t1656*t4139;
  t4355 = t4283*t1715;
  t4403 = t4334 + t4355;
  t4527 = t1656*t4283;
  t4541 = -1.*t4139*t1715;
  t4567 = t4527 + t4541;
  t2656 = 0.0184*t2636;
  t2784 = -0.7055*t2754;
  t2791 = 0. + t2656 + t2784;
  t3076 = -0.7055*t2636;
  t3133 = -0.0184*t2754;
  t3172 = 0. + t3076 + t3133;
  t4671 = t2034*t4403;
  t4675 = t4567*t2184;
  t4697 = t4671 + t4675;
  t4728 = t2034*t4567;
  t4743 = -1.*t4403*t2184;
  t4748 = t4728 + t4743;
  t3427 = -0.0216*t3425;
  t3466 = -1.1135*t3433;
  t3469 = 0. + t3427 + t3466;
  t3561 = -1.1135*t3425;
  t3563 = 0.0216*t3433;
  t3575 = 0. + t3561 + t3563;
  t4792 = t2628*t4697;
  t4794 = t4748*t2754;
  t4813 = t4792 + t4794;
  t4823 = t2628*t4748;
  t4827 = -1.*t4697*t2754;
  t4862 = t4823 + t4827;
  t5134 = t350*t940*t1656*t1332;
  t5144 = -1.*t350*t1332*t1084*t1715;
  t5189 = t5134 + t5144;
  t5252 = -1.*t350*t1656*t1332*t1084;
  t5265 = -1.*t350*t940*t1332*t1715;
  t5268 = t5252 + t5265;
  t5294 = t2034*t5189;
  t5300 = t5268*t2184;
  t5306 = t5294 + t5300;
  t5340 = t2034*t5268;
  t5373 = -1.*t5189*t2184;
  t5394 = t5340 + t5373;
  t5397 = t2628*t5306;
  t5398 = t5394*t2754;
  t5427 = t5397 + t5398;
  t5521 = t2628*t5394;
  t5527 = -1.*t5306*t2754;
  t5533 = t5521 + t5527;
  t5031 = 0.049*t350;
  t5032 = -0.135*t779;
  t5044 = t5031 + t5032;
  t5667 = t63*t350*t940*t1656;
  t5685 = -1.*t63*t350*t1084*t1715;
  t5725 = t5667 + t5685;
  t5771 = -1.*t63*t350*t1656*t1084;
  t5775 = -1.*t63*t350*t940*t1715;
  t5777 = t5771 + t5775;
  t5791 = t2034*t5725;
  t5834 = t5777*t2184;
  t5853 = t5791 + t5834;
  t5866 = t2034*t5777;
  t5871 = -1.*t5725*t2184;
  t5877 = t5866 + t5871;
  t5921 = t2628*t5853;
  t5954 = t5877*t2754;
  t5966 = t5921 + t5954;
  t6002 = t2628*t5877;
  t6003 = -1.*t5853*t2754;
  t6011 = t6002 + t6003;
  t6252 = -1.*t940*t1656*t779;
  t6257 = t779*t1084*t1715;
  t6264 = t6252 + t6257;
  t6279 = t1656*t779*t1084;
  t6283 = t940*t779*t1715;
  t6297 = t6279 + t6283;
  t6301 = t2034*t6264;
  t6303 = t6297*t2184;
  t6310 = t6301 + t6303;
  t6328 = t2034*t6297;
  t6335 = -1.*t6264*t2184;
  t6337 = t6328 + t6335;
  t6370 = t2628*t6310;
  t6372 = t6337*t2754;
  t6382 = t6370 + t6372;
  t6387 = t2628*t6337;
  t6390 = -1.*t6310*t2754;
  t6394 = t6387 + t6390;
  t6542 = t63*t940;
  t6543 = -1.*t1332*t779*t1084;
  t6544 = t6542 + t6543;
  t6561 = t1656*t6544;
  t6562 = t4139*t1715;
  t6566 = t6561 + t6562;
  t6582 = -1.*t6544*t1715;
  t6588 = t4334 + t6582;
  t6608 = t2034*t6566;
  t6613 = t6588*t2184;
  t6619 = t6608 + t6613;
  t6639 = t2034*t6588;
  t6658 = -1.*t6566*t2184;
  t6659 = t6639 + t6658;
  t6691 = t2628*t6659;
  t6696 = -1.*t6619*t2754;
  t6708 = t6691 + t6696;
  t6664 = t2628*t6619;
  t6673 = t6659*t2754;
  t6677 = t6664 + t6673;
  t6462 = 0.049*t940;
  t6463 = t6462 + t1115;
  t6508 = -0.09*t940;
  t6523 = -0.049*t1084;
  t6536 = t6508 + t6523;
  t6863 = -1.*t63*t940*t779;
  t6868 = t1332*t1084;
  t6882 = t6863 + t6868;
  t6890 = t6882*t1715;
  t6917 = t2339 + t6890;
  t6947 = t1656*t6882;
  t6955 = -1.*t1834*t1715;
  t6957 = t6947 + t6955;
  t6964 = t2034*t6917;
  t6976 = t6957*t2184;
  t6993 = t6964 + t6976;
  t7003 = t2034*t6957;
  t7016 = -1.*t6917*t2184;
  t7019 = t7003 + t7016;
  t7062 = t2628*t7019;
  t7071 = -1.*t6993*t2754;
  t7076 = t7062 + t7071;
  t7033 = t2628*t6993;
  t7048 = t7019*t2754;
  t7050 = t7033 + t7048;
  t7181 = -1.*t350*t1656*t1084;
  t7186 = -1.*t350*t940*t1715;
  t7194 = t7181 + t7186;
  t7201 = -1.*t350*t940*t1656;
  t7208 = t350*t1084*t1715;
  t7209 = t7201 + t7208;
  t7212 = t2034*t7194;
  t7216 = t7209*t2184;
  t7217 = t7212 + t7216;
  t7225 = t2034*t7209;
  t7234 = -1.*t7194*t2184;
  t7235 = t7225 + t7234;
  t7274 = t2628*t7235;
  t7316 = -1.*t7217*t2754;
  t7318 = t7274 + t7316;
  t7239 = t2628*t7217;
  t7243 = t7235*t2754;
  t7252 = t7239 + t7243;
  t7482 = t940*t1332*t779;
  t7485 = t63*t1084;
  t7489 = t7482 + t7485;
  t7526 = -1.*t7489*t1715;
  t7528 = t6561 + t7526;
  t7548 = -1.*t1656*t7489;
  t7558 = t7548 + t6582;
  t7562 = t2034*t7528;
  t7568 = t7558*t2184;
  t7570 = t7562 + t7568;
  t7582 = t2034*t7558;
  t7584 = -1.*t7528*t2184;
  t7588 = t7582 + t7584;
  t7618 = t2628*t7588;
  t7621 = -1.*t7570*t2754;
  t7623 = t7618 + t7621;
  t7603 = t2628*t7570;
  t7610 = t7588*t2754;
  t7611 = t7603 + t7610;
  t7450 = 0.049*t1656;
  t7460 = t7450 + t1732;
  t7491 = -0.21*t1656;
  t7510 = -0.049*t1715;
  t7513 = t7491 + t7510;
  t7685 = -1.*t1656*t1616;
  t7690 = t7685 + t6955;
  t7704 = t7690*t2184;
  t7705 = t2973 + t7704;
  t7714 = t2034*t7690;
  t7717 = -1.*t2375*t2184;
  t7720 = t7714 + t7717;
  t7733 = t2628*t7720;
  t7734 = -1.*t7705*t2754;
  t7735 = t7733 + t7734;
  t7723 = t2628*t7705;
  t7726 = t7720*t2754;
  t7729 = t7723 + t7726;
  t7200 = t7194*t2224;
  t7211 = t7209*t2476;
  t7223 = t7217*t2791;
  t7237 = t7235*t3172;
  t7259 = t7252*t3469;
  t7321 = t7318*t3575;
  t7334 = t3347*t7318;
  t7352 = -1.*t7252*t3433;
  t7379 = t7334 + t7352;
  t7389 = -1.1312*t7379;
  t7396 = t3347*t7252;
  t7404 = t7318*t3433;
  t7416 = t7396 + t7404;
  t7422 = 0.0306*t7416;
  t7833 = t1656*t7489;
  t7835 = t6544*t1715;
  t7836 = t7833 + t7835;
  t7851 = -1.*t7836*t2184;
  t7854 = t7562 + t7851;
  t7862 = -1.*t2034*t7836;
  t7867 = t7862 + t7584;
  t7884 = t2628*t7867;
  t7889 = -1.*t7854*t2754;
  t7894 = t7884 + t7889;
  t7869 = t2628*t7854;
  t7872 = t7867*t2754;
  t7880 = t7869 + t7872;
  t7817 = 0.0016*t2034;
  t7823 = t7817 + t2204;
  t7837 = -0.2707*t2034;
  t7841 = -0.0016*t2184;
  t7848 = t7837 + t7841;
  t7944 = -1.*t2034*t2001;
  t7947 = t7944 + t7717;
  t7964 = t2628*t7947;
  t7965 = -1.*t3009*t2754;
  t7971 = t7964 + t7965;
  t7955 = t7947*t2754;
  t7957 = t3519 + t7955;
  t7990 = t350*t940*t1656;
  t7991 = -1.*t350*t1084*t1715;
  t7993 = t7990 + t7991;
  t7997 = -1.*t7993*t2184;
  t8000 = t7212 + t7997;
  t8004 = -1.*t2034*t7993;
  t8005 = t8004 + t7234;
  t8016 = t2628*t8005;
  t8017 = -1.*t8000*t2754;
  t8019 = t8016 + t8017;
  t8008 = t2628*t8000;
  t8010 = t8005*t2754;
  t8011 = t8008 + t8010;
  t8040 = t2034*t7836;
  t8044 = t7528*t2184;
  t8046 = t8040 + t8044;
  t8056 = -1.*t2628*t8046;
  t8057 = t8056 + t7889;
  t8053 = -1.*t8046*t2754;
  t8054 = t7869 + t8053;
  t8036 = -0.0184*t2628;
  t8037 = t8036 + t2784;
  t8047 = -0.7055*t2628;
  t8048 = 0.0184*t2754;
  t8050 = t8047 + t8048;
  t8077 = -1.*t2628*t2625;
  t8079 = t8077 + t7965;
  t3790 = t3347*t3550;
  t8095 = t2034*t7993;
  t8096 = t7194*t2184;
  t8097 = t8095 + t8096;
  t8103 = -1.*t2628*t8097;
  t8105 = t8103 + t8017;
  t8100 = -1.*t8097*t2754;
  t8101 = t8008 + t8100;
  t8122 = t2628*t8046;
  t8123 = t7854*t2754;
  t8126 = t8122 + t8123;
  t8061 = -1.*t8054*t3433;
  t8067 = t3347*t8054;
  t8119 = 0.0216*t3347;
  t8120 = t8119 + t3466;
  t8127 = -1.1135*t3347;
  t8129 = -0.0216*t3433;
  t8130 = t8127 + t8129;
  t8083 = -1.*t3550*t3433;
  t3807 = -1.*t3275*t3433;
  t3810 = t3790 + t3807;
  t8151 = t2628*t8097;
  t8152 = t8000*t2754;
  t8153 = t8151 + t8152;
  t8110 = -1.*t8101*t3433;
  t8113 = t3347*t8101;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=t1332*t1548 - 1.*t1616*t1733 - 1.*t1834*t1882 - 1.*t2001*t2224 - 1.*t2375*t2476 - 1.*t2625*t2791 - 1.*t3009*t3172 - 1.*t3275*t3469 - 0.0306*(t3275*t3347 + t3433*t3550) - 1.*t3550*t3575 + 1.1312*t3810 - 0.135*t63 + 0.1305*t350*t63 - 1.*t1200*t63*t779 - 1.*t63*t861;
  p_output1[22]=-0.135*t1332 + 0.1305*t1332*t350 + t1733*t4139 + t1882*t4283 + t2224*t4403 + t2476*t4567 + t2791*t4697 + t3172*t4748 + t3469*t4813 + t3575*t4862 - 1.1312*(-1.*t3433*t4813 + t3347*t4862) + 0.0306*(t3347*t4813 + t3433*t4862) - 1.*t1548*t63 - 1.*t1200*t1332*t779 - 1.*t1332*t861;
  p_output1[23]=0;
  p_output1[24]=-1.*t1200*t1332*t350 + t1084*t1332*t1882*t350 - 1.*t1332*t5044 - 1.*t2224*t5189 - 1.*t2476*t5268 - 1.*t2791*t5306 - 1.*t3172*t5394 - 1.*t3469*t5427 - 1.*t3575*t5533 + 1.1312*(-1.*t3433*t5427 + t3347*t5533) - 0.0306*(t3347*t5427 + t3433*t5533) - 0.1305*t1332*t779 - 1.*t1332*t1733*t350*t940;
  p_output1[25]=t2224*t5725 + t2476*t5777 + t2791*t5853 + t3172*t5877 + t3469*t5966 + t3575*t6011 - 1.1312*(-1.*t3433*t5966 + t3347*t6011) + 0.0306*(t3347*t5966 + t3433*t6011) + t1200*t350*t63 - 1.*t1084*t1882*t350*t63 + t5044*t63 + 0.1305*t63*t779 + t1733*t350*t63*t940;
  p_output1[26]=-0.004500000000000004*t350 + t2224*t6264 + t2476*t6297 + t2791*t6310 + t3172*t6337 + t3469*t6382 + t3575*t6394 - 1.1312*(-1.*t3433*t6382 + t3347*t6394) + 0.0306*(t3347*t6382 + t3433*t6394) - 0.049*t779 - 1.*t1200*t779 + t1084*t1882*t779 - 1.*t1733*t779*t940;
  p_output1[27]=-1.*t1882*t4139 - 1.*t63*t6463 - 1.*t1733*t6544 - 1.*t2224*t6566 - 1.*t2476*t6588 - 1.*t2791*t6619 - 1.*t3172*t6659 - 1.*t3469*t6677 - 1.*t3575*t6708 + 1.1312*(-1.*t3433*t6677 + t3347*t6708) - 0.0306*(t3347*t6677 + t3433*t6708) - 1.*t1332*t6536*t779;
  p_output1[28]=t1733*t1834 - 1.*t1332*t6463 + t1882*t6882 + t2224*t6917 + t2476*t6957 + t2791*t6993 + t3172*t7019 + t3469*t7050 + t3575*t7076 - 1.1312*(-1.*t3433*t7050 + t3347*t7076) + 0.0306*(t3347*t7050 + t3433*t7076) + t63*t6536*t779;
  p_output1[29]=-1.*t1084*t1733*t350 + t350*t6536 + t7200 + t7211 + t7223 + t7237 + t7259 + t7321 + t7389 + t7422 - 1.*t1882*t350*t940;
  p_output1[30]=-1.*t6544*t7460 - 1.*t7489*t7513 - 1.*t2224*t7528 - 1.*t2476*t7558 - 1.*t2791*t7570 - 1.*t3172*t7588 - 1.*t3469*t7611 - 1.*t3575*t7623 + 1.1312*(-1.*t3433*t7611 + t3347*t7623) - 0.0306*(t3347*t7611 + t3433*t7623);
  p_output1[31]=t2224*t2375 + t1834*t7460 + t1616*t7513 + t2476*t7690 + t2791*t7705 + t3172*t7720 + t3469*t7729 + t3575*t7735 - 1.1312*(-1.*t3433*t7729 + t3347*t7735) + 0.0306*(t3347*t7729 + t3433*t7735);
  p_output1[32]=t7200 + t7211 + t7223 + t7237 + t7259 + t7321 + t7389 + t7422 - 1.*t1084*t350*t7460 + t350*t7513*t940;
  p_output1[33]=-1.*t7528*t7823 - 1.*t7836*t7848 - 1.*t2791*t7854 - 1.*t3172*t7867 - 1.*t3469*t7880 - 1.*t3575*t7894 + 1.1312*(-1.*t3433*t7880 + t3347*t7894) - 0.0306*(t3347*t7880 + t3433*t7894);
  p_output1[34]=t2791*t3009 + t2375*t7823 + t2001*t7848 + t3172*t7947 + t3469*t7957 + t3575*t7971 - 1.1312*(-1.*t3433*t7957 + t3347*t7971) + 0.0306*(t3347*t7957 + t3433*t7971);
  p_output1[35]=t7194*t7823 + t7848*t7993 + t2791*t8000 + t3172*t8005 + t3469*t8011 + t3575*t8019 - 1.1312*(-1.*t3433*t8011 + t3347*t8019) + 0.0306*(t3347*t8011 + t3433*t8019);
  p_output1[36]=-1.*t7854*t8037 - 1.*t8046*t8050 - 1.*t3469*t8054 - 1.*t3575*t8057 + 1.1312*(t3347*t8057 + t8061) - 0.0306*(t3433*t8057 + t8067);
  p_output1[37]=t3469*t3550 + t3009*t8037 + t2625*t8050 + t3575*t8079 + 0.0306*(t3790 + t3433*t8079) - 1.1312*(t3347*t8079 + t8083);
  p_output1[38]=t8000*t8037 + t8050*t8097 + t3469*t8101 + t3575*t8105 - 1.1312*(t3347*t8105 + t8110) + 0.0306*(t3433*t8105 + t8113);
  p_output1[39]=-1.*t8054*t8120 + 1.1312*(t8061 - 1.*t3347*t8126) - 0.0306*(t8067 - 1.*t3433*t8126) - 1.*t8126*t8130;
  p_output1[40]=0.0306*t3810 - 1.1312*(-1.*t3275*t3347 + t8083) + t3550*t8120 + t3275*t8130;
  p_output1[41]=t8101*t8120 + t8130*t8153 - 1.1312*(t8110 - 1.*t3347*t8153) + 0.0306*(t8113 - 1.*t3433*t8153);
}



void J_MultisenseIMU_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
