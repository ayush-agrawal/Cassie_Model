/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:36:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_VectorNav_to_LeftToeBottom_src.h"

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
  double t13;
  double t24;
  double t115;
  double t268;
  double t296;
  double t311;
  double t351;
  double t423;
  double t603;
  double t631;
  double t649;
  double t702;
  double t833;
  double t851;
  double t854;
  double t960;
  double t1015;
  double t1026;
  double t1038;
  double t1094;
  double t1102;
  double t1241;
  double t1341;
  double t1370;
  double t1427;
  double t1699;
  double t1735;
  double t1746;
  double t1914;
  double t1916;
  double t1924;
  double t1944;
  double t1972;
  double t1996;
  double t2064;
  double t2191;
  double t2194;
  double t2201;
  double t2294;
  double t2295;
  double t2386;
  double t2396;
  double t2426;
  double t2529;
  double t2559;
  double t2755;
  double t2825;
  double t2875;
  double t54;
  double t68;
  double t99;
  double t116;
  double t122;
  double t342;
  double t352;
  double t387;
  double t427;
  double t468;
  double t481;
  double t650;
  double t821;
  double t831;
  double t875;
  double t890;
  double t957;
  double t1132;
  double t1297;
  double t1331;
  double t3329;
  double t3345;
  double t3363;
  double t3422;
  double t3434;
  double t3610;
  double t1437;
  double t1446;
  double t1520;
  double t1929;
  double t1947;
  double t1962;
  double t3635;
  double t3637;
  double t3703;
  double t3726;
  double t3776;
  double t3782;
  double t2132;
  double t2165;
  double t2168;
  double t2387;
  double t2397;
  double t2413;
  double t3791;
  double t3803;
  double t3811;
  double t3829;
  double t3832;
  double t3843;
  double t2609;
  double t2751;
  double t2752;
  double t3988;
  double t4034;
  double t4084;
  double t4094;
  double t4109;
  double t4223;
  double t4600;
  double t4697;
  double t4705;
  double t4725;
  double t4727;
  double t4762;
  double t4806;
  double t4836;
  double t4870;
  double t4954;
  double t4994;
  double t5002;
  double t5034;
  double t5041;
  double t5055;
  double t5119;
  double t5127;
  double t5172;
  double t5592;
  double t5598;
  double t5604;
  double t5615;
  double t5646;
  double t5662;
  double t5667;
  double t5690;
  double t5692;
  double t5753;
  double t5772;
  double t5779;
  double t5794;
  double t5796;
  double t5829;
  double t5884;
  double t5889;
  double t5913;
  double t5402;
  double t5410;
  double t5432;
  double t6272;
  double t6275;
  double t6281;
  double t6285;
  double t6294;
  double t6295;
  double t6300;
  double t6303;
  double t6306;
  double t6310;
  double t6323;
  double t6325;
  double t6334;
  double t6335;
  double t6349;
  double t6354;
  double t6360;
  double t6379;
  double t6478;
  double t6485;
  double t6496;
  double t6539;
  double t6542;
  double t6543;
  double t6552;
  double t6554;
  double t6555;
  double t6572;
  double t6573;
  double t6578;
  double t6588;
  double t6598;
  double t6612;
  double t6622;
  double t6628;
  double t6632;
  double t6468;
  double t6471;
  double t6472;
  double t6717;
  double t6719;
  double t6768;
  double t6795;
  double t6796;
  double t6825;
  double t6827;
  double t6831;
  double t6833;
  double t6844;
  double t6853;
  double t6858;
  double t6864;
  double t6869;
  double t6880;
  double t6884;
  double t6889;
  double t6895;
  double t6904;
  double t6913;
  double t6681;
  double t6683;
  double t7009;
  double t7010;
  double t7013;
  double t7019;
  double t7022;
  double t7031;
  double t7039;
  double t7040;
  double t7052;
  double t7055;
  double t7058;
  double t7065;
  double t7077;
  double t7083;
  double t7098;
  double t7110;
  double t7117;
  double t7123;
  double t7131;
  double t7141;
  double t6514;
  double t6545;
  double t6570;
  double t6579;
  double t6617;
  double t6636;
  double t6639;
  double t6641;
  double t6644;
  double t6652;
  double t6658;
  double t6659;
  double t6661;
  double t6668;
  double t7203;
  double t7211;
  double t7213;
  double t7243;
  double t7248;
  double t7286;
  double t7288;
  double t7297;
  double t7301;
  double t7305;
  double t7318;
  double t7323;
  double t7331;
  double t7334;
  double t7341;
  double t7355;
  double t7359;
  double t7361;
  double t7408;
  double t7409;
  double t7426;
  double t7438;
  double t7442;
  double t7451;
  double t7457;
  double t7467;
  double t7468;
  double t7472;
  double t7482;
  double t7486;
  double t7487;
  double t7491;
  double t7492;
  double t7494;
  double t7498;
  double t7499;
  double t7505;
  double t7542;
  double t7543;
  double t7544;
  double t7546;
  double t7548;
  double t7552;
  double t7554;
  double t7562;
  double t7563;
  double t7567;
  double t7570;
  double t7572;
  double t7573;
  double t7534;
  double t7537;
  double t7539;
  double t7540;
  double t7541;
  double t7597;
  double t7598;
  double t7603;
  double t7608;
  double t7611;
  double t7612;
  double t7615;
  double t7658;
  double t7659;
  double t7661;
  double t7669;
  double t7674;
  double t7678;
  double t7681;
  double t7689;
  double t7690;
  double t7694;
  double t7696;
  double t7697;
  double t7699;
  double t7744;
  double t7746;
  double t7747;
  double t7763;
  double t7766;
  double t7768;
  double t7775;
  double t7735;
  double t7738;
  double t7742;
  double t7751;
  double t7759;
  double t7815;
  double t7816;
  double t4478;
  double t7847;
  double t7849;
  double t7852;
  double t7855;
  double t7856;
  double t7859;
  double t7860;
  double t7780;
  double t7897;
  double t7898;
  double t7899;
  double t7790;
  double t7889;
  double t7890;
  double t7893;
  double t7894;
  double t7896;
  double t7822;
  double t4481;
  double t4487;
  double t7866;
  double t7929;
  double t7941;
  double t7942;
  double t7881;
  t13 = Sin(var1[0]);
  t24 = Cos(var1[1]);
  t115 = Sin(var1[1]);
  t268 = Cos(var1[2]);
  t296 = -1.*t268;
  t311 = 1. + t296;
  t351 = Sin(var1[2]);
  t423 = Cos(var1[0]);
  t603 = Cos(var1[3]);
  t631 = -1.*t603;
  t649 = 1. + t631;
  t702 = Sin(var1[3]);
  t833 = -1.*t268*t13*t115;
  t851 = -1.*t423*t351;
  t854 = t833 + t851;
  t960 = -1.*t423*t268;
  t1015 = t13*t115*t351;
  t1026 = t960 + t1015;
  t1038 = Cos(var1[4]);
  t1094 = -1.*t1038;
  t1102 = 1. + t1094;
  t1241 = Sin(var1[4]);
  t1341 = -1.*t702*t854;
  t1370 = t603*t1026;
  t1427 = t1341 + t1370;
  t1699 = t603*t854;
  t1735 = t702*t1026;
  t1746 = t1699 + t1735;
  t1914 = Cos(var1[5]);
  t1916 = -1.*t1914;
  t1924 = 1. + t1916;
  t1944 = Sin(var1[5]);
  t1972 = t1241*t1427;
  t1996 = t1038*t1746;
  t2064 = t1972 + t1996;
  t2191 = t1038*t1427;
  t2194 = -1.*t1241*t1746;
  t2201 = t2191 + t2194;
  t2294 = Cos(var1[6]);
  t2295 = -1.*t2294;
  t2386 = 1. + t2295;
  t2396 = Sin(var1[6]);
  t2426 = -1.*t1944*t2064;
  t2529 = t1914*t2201;
  t2559 = t2426 + t2529;
  t2755 = t1914*t2064;
  t2825 = t1944*t2201;
  t2875 = t2755 + t2825;
  t54 = -1.*t24;
  t68 = 1. + t54;
  t99 = 0.135*t68;
  t116 = 0.049*t115;
  t122 = 0. + t99 + t116;
  t342 = -0.049*t311;
  t352 = -0.09*t351;
  t387 = 0. + t342 + t352;
  t427 = -0.09*t311;
  t468 = 0.049*t351;
  t481 = 0. + t427 + t468;
  t650 = -0.049*t649;
  t821 = -0.21*t702;
  t831 = 0. + t650 + t821;
  t875 = -0.21*t649;
  t890 = 0.049*t702;
  t957 = 0. + t875 + t890;
  t1132 = -0.2707*t1102;
  t1297 = 0.0016*t1241;
  t1331 = 0. + t1132 + t1297;
  t3329 = t423*t268*t115;
  t3345 = -1.*t13*t351;
  t3363 = t3329 + t3345;
  t3422 = -1.*t268*t13;
  t3434 = -1.*t423*t115*t351;
  t3610 = t3422 + t3434;
  t1437 = -0.0016*t1102;
  t1446 = -0.2707*t1241;
  t1520 = 0. + t1437 + t1446;
  t1929 = 0.0184*t1924;
  t1947 = -0.7055*t1944;
  t1962 = 0. + t1929 + t1947;
  t3635 = -1.*t702*t3363;
  t3637 = t603*t3610;
  t3703 = t3635 + t3637;
  t3726 = t603*t3363;
  t3776 = t702*t3610;
  t3782 = t3726 + t3776;
  t2132 = -0.7055*t1924;
  t2165 = -0.0184*t1944;
  t2168 = 0. + t2132 + t2165;
  t2387 = -1.1135*t2386;
  t2397 = 0.0216*t2396;
  t2413 = 0. + t2387 + t2397;
  t3791 = t1241*t3703;
  t3803 = t1038*t3782;
  t3811 = t3791 + t3803;
  t3829 = t1038*t3703;
  t3832 = -1.*t1241*t3782;
  t3843 = t3829 + t3832;
  t2609 = -0.0216*t2386;
  t2751 = -1.1135*t2396;
  t2752 = 0. + t2609 + t2751;
  t3988 = -1.*t1944*t3811;
  t4034 = t1914*t3843;
  t4084 = t3988 + t4034;
  t4094 = t1914*t3811;
  t4109 = t1944*t3843;
  t4223 = t4094 + t4109;
  t4600 = t268*t702*t115;
  t4697 = t603*t115*t351;
  t4705 = t4600 + t4697;
  t4725 = -1.*t603*t268*t115;
  t4727 = t702*t115*t351;
  t4762 = t4725 + t4727;
  t4806 = t1241*t4705;
  t4836 = t1038*t4762;
  t4870 = t4806 + t4836;
  t4954 = t1038*t4705;
  t4994 = -1.*t1241*t4762;
  t5002 = t4954 + t4994;
  t5034 = -1.*t1944*t4870;
  t5041 = t1914*t5002;
  t5055 = t5034 + t5041;
  t5119 = t1914*t4870;
  t5127 = t1944*t5002;
  t5172 = t5119 + t5127;
  t5592 = -1.*t423*t24*t268*t702;
  t5598 = -1.*t603*t423*t24*t351;
  t5604 = t5592 + t5598;
  t5615 = t603*t423*t24*t268;
  t5646 = -1.*t423*t24*t702*t351;
  t5662 = t5615 + t5646;
  t5667 = t1241*t5604;
  t5690 = t1038*t5662;
  t5692 = t5667 + t5690;
  t5753 = t1038*t5604;
  t5772 = -1.*t1241*t5662;
  t5779 = t5753 + t5772;
  t5794 = -1.*t1944*t5692;
  t5796 = t1914*t5779;
  t5829 = t5794 + t5796;
  t5884 = t1914*t5692;
  t5889 = t1944*t5779;
  t5913 = t5884 + t5889;
  t5402 = 0.049*t24;
  t5410 = 0.135*t115;
  t5432 = t5402 + t5410;
  t6272 = -1.*t24*t268*t702*t13;
  t6275 = -1.*t603*t24*t13*t351;
  t6281 = t6272 + t6275;
  t6285 = t603*t24*t268*t13;
  t6294 = -1.*t24*t702*t13*t351;
  t6295 = t6285 + t6294;
  t6300 = t1241*t6281;
  t6303 = t1038*t6295;
  t6306 = t6300 + t6303;
  t6310 = t1038*t6281;
  t6323 = -1.*t1241*t6295;
  t6325 = t6310 + t6323;
  t6334 = -1.*t1944*t6306;
  t6335 = t1914*t6325;
  t6349 = t6334 + t6335;
  t6354 = t1914*t6306;
  t6360 = t1944*t6325;
  t6379 = t6354 + t6360;
  t6478 = -1.*t24*t268*t702;
  t6485 = -1.*t603*t24*t351;
  t6496 = t6478 + t6485;
  t6539 = -1.*t603*t24*t268;
  t6542 = t24*t702*t351;
  t6543 = t6539 + t6542;
  t6552 = -1.*t1241*t6496;
  t6554 = t1038*t6543;
  t6555 = t6552 + t6554;
  t6572 = t1038*t6496;
  t6573 = t1241*t6543;
  t6578 = t6572 + t6573;
  t6588 = t1944*t6555;
  t6598 = t1914*t6578;
  t6612 = t6588 + t6598;
  t6622 = t1914*t6555;
  t6628 = -1.*t1944*t6578;
  t6632 = t6622 + t6628;
  t6468 = -0.09*t268;
  t6471 = -0.049*t351;
  t6472 = t6468 + t6471;
  t6717 = -1.*t423*t268*t115;
  t6719 = t13*t351;
  t6768 = t6717 + t6719;
  t6795 = t702*t6768;
  t6796 = t6795 + t3637;
  t6825 = t603*t6768;
  t6827 = -1.*t702*t3610;
  t6831 = t6825 + t6827;
  t6833 = -1.*t1241*t6796;
  t6844 = t1038*t6831;
  t6853 = t6833 + t6844;
  t6858 = t1038*t6796;
  t6864 = t1241*t6831;
  t6869 = t6858 + t6864;
  t6880 = t1944*t6853;
  t6884 = t1914*t6869;
  t6889 = t6880 + t6884;
  t6895 = t1914*t6853;
  t6904 = -1.*t1944*t6869;
  t6913 = t6895 + t6904;
  t6681 = 0.049*t268;
  t6683 = t6681 + t352;
  t7009 = t423*t268;
  t7010 = -1.*t13*t115*t351;
  t7013 = t7009 + t7010;
  t7019 = t702*t854;
  t7022 = t603*t7013;
  t7031 = t7019 + t7022;
  t7039 = -1.*t702*t7013;
  t7040 = t1699 + t7039;
  t7052 = -1.*t1241*t7031;
  t7055 = t1038*t7040;
  t7058 = t7052 + t7055;
  t7065 = t1038*t7031;
  t7077 = t1241*t7040;
  t7083 = t7065 + t7077;
  t7098 = t1944*t7058;
  t7110 = t1914*t7083;
  t7117 = t7098 + t7110;
  t7123 = t1914*t7058;
  t7131 = -1.*t1944*t7083;
  t7141 = t7123 + t7131;
  t6514 = t1520*t6496;
  t6545 = t1331*t6543;
  t6570 = t2168*t6555;
  t6579 = t1962*t6578;
  t6617 = t2752*t6612;
  t6636 = t2413*t6632;
  t6639 = -1.*t2396*t6612;
  t6641 = t2294*t6632;
  t6644 = t6639 + t6641;
  t6652 = -1.1312*t6644;
  t6658 = t2294*t6612;
  t6659 = t2396*t6632;
  t6661 = t6658 + t6659;
  t6668 = 0.0306*t6661;
  t7203 = -0.21*t603;
  t7211 = -0.049*t702;
  t7213 = t7203 + t7211;
  t7243 = 0.049*t603;
  t7248 = t7243 + t821;
  t7286 = -1.*t603*t3363;
  t7288 = t7286 + t6827;
  t7297 = -1.*t1241*t3703;
  t7301 = t1038*t7288;
  t7305 = t7297 + t7301;
  t7318 = t1241*t7288;
  t7323 = t3829 + t7318;
  t7331 = t1944*t7305;
  t7334 = t1914*t7323;
  t7341 = t7331 + t7334;
  t7355 = t1914*t7305;
  t7359 = -1.*t1944*t7323;
  t7361 = t7355 + t7359;
  t7408 = t268*t13*t115;
  t7409 = t423*t351;
  t7426 = t7408 + t7409;
  t7438 = -1.*t702*t7426;
  t7442 = t7438 + t7022;
  t7451 = -1.*t603*t7426;
  t7457 = t7451 + t7039;
  t7467 = -1.*t1241*t7442;
  t7468 = t1038*t7457;
  t7472 = t7467 + t7468;
  t7482 = t1038*t7442;
  t7486 = t1241*t7457;
  t7487 = t7482 + t7486;
  t7491 = t1944*t7472;
  t7492 = t1914*t7487;
  t7494 = t7491 + t7492;
  t7498 = t1914*t7472;
  t7499 = -1.*t1944*t7487;
  t7505 = t7498 + t7499;
  t7542 = t603*t24*t268;
  t7543 = -1.*t24*t702*t351;
  t7544 = t7542 + t7543;
  t7546 = -1.*t1038*t7544;
  t7548 = t6552 + t7546;
  t7552 = -1.*t1241*t7544;
  t7554 = t6572 + t7552;
  t7562 = t1944*t7548;
  t7563 = t1914*t7554;
  t7567 = t7562 + t7563;
  t7570 = t1914*t7548;
  t7572 = -1.*t1944*t7554;
  t7573 = t7570 + t7572;
  t7534 = 0.0016*t1038;
  t7537 = t7534 + t1446;
  t7539 = -0.2707*t1038;
  t7540 = -0.0016*t1241;
  t7541 = t7539 + t7540;
  t7597 = -1.*t1038*t3782;
  t7598 = t7297 + t7597;
  t7603 = t1944*t7598;
  t7608 = t7603 + t4034;
  t7611 = t1914*t7598;
  t7612 = -1.*t1944*t3843;
  t7615 = t7611 + t7612;
  t7658 = t603*t7426;
  t7659 = t702*t7013;
  t7661 = t7658 + t7659;
  t7669 = -1.*t1038*t7661;
  t7674 = t7467 + t7669;
  t7678 = -1.*t1241*t7661;
  t7681 = t7482 + t7678;
  t7689 = t1944*t7674;
  t7690 = t1914*t7681;
  t7694 = t7689 + t7690;
  t7696 = t1914*t7674;
  t7697 = -1.*t1944*t7681;
  t7699 = t7696 + t7697;
  t7744 = t1241*t6496;
  t7746 = t1038*t7544;
  t7747 = t7744 + t7746;
  t7763 = -1.*t1944*t7747;
  t7766 = t7763 + t7563;
  t7768 = -1.*t1914*t7747;
  t7775 = t7768 + t7572;
  t7735 = -0.7055*t1914;
  t7738 = 0.0184*t1944;
  t7742 = t7735 + t7738;
  t7751 = -0.0184*t1914;
  t7759 = t7751 + t1947;
  t7815 = -1.*t1914*t3811;
  t7816 = t7815 + t7612;
  t4478 = t2294*t4084;
  t7847 = t1241*t7442;
  t7849 = t1038*t7661;
  t7852 = t7847 + t7849;
  t7855 = -1.*t1944*t7852;
  t7856 = t7855 + t7690;
  t7859 = -1.*t1914*t7852;
  t7860 = t7859 + t7697;
  t7780 = -1.*t2396*t7766;
  t7897 = t1914*t7747;
  t7898 = t1944*t7554;
  t7899 = t7897 + t7898;
  t7790 = t2294*t7766;
  t7889 = 0.0216*t2294;
  t7890 = t7889 + t2751;
  t7893 = -1.1135*t2294;
  t7894 = -0.0216*t2396;
  t7896 = t7893 + t7894;
  t7822 = -1.*t2396*t4084;
  t4481 = -1.*t2396*t4223;
  t4487 = t4478 + t4481;
  t7866 = -1.*t2396*t7856;
  t7929 = t1914*t7852;
  t7941 = t1944*t7681;
  t7942 = t7929 + t7941;
  t7881 = t2294*t7856;
  p_output1[0]=0;
  p_output1[1]=-0.135*t13 + t122*t13 - 1.*t1331*t1427 - 1.*t1520*t1746 - 1.*t1962*t2064 - 1.*t2168*t2201 + 0.1305*t13*t24 - 1.*t2413*t2559 - 1.*t2752*t2875 - 0.0306*(t2396*t2559 + t2294*t2875) + 1.1312*(t2294*t2559 - 1.*t2396*t2875) + t115*t13*t387 + t423*t481 - 1.*t831*t854 - 1.*t1026*t957;
  p_output1[2]=-1.*t1331*t3703 - 1.*t1520*t3782 - 1.*t1962*t3811 - 1.*t2168*t3843 - 1.*t2413*t4084 - 1.*t2752*t4223 - 0.0306*(t2396*t4084 + t2294*t4223) + 0.135*t423 - 1.*t122*t423 - 0.1305*t24*t423 - 1.*t115*t387*t423 + 1.1312*t4487 + t13*t481 - 1.*t3363*t831 - 1.*t3610*t957;
  p_output1[3]=-0.049*t115 + 0.004500000000000004*t24 - 1.*t115*t387 + t1331*t4705 + t1520*t4762 + t1962*t4870 + t2168*t5002 + t2413*t5055 + t2752*t5172 + 0.0306*(t2396*t5055 + t2294*t5172) - 1.1312*(t2294*t5055 - 1.*t2396*t5172) - 1.*t115*t268*t831 + t115*t351*t957;
  p_output1[4]=0.1305*t115*t423 - 1.*t24*t387*t423 - 1.*t423*t5432 - 1.*t1331*t5604 - 1.*t1520*t5662 - 1.*t1962*t5692 - 1.*t2168*t5779 - 1.*t2413*t5829 - 1.*t2752*t5913 - 0.0306*(t2396*t5829 + t2294*t5913) + 1.1312*(t2294*t5829 - 1.*t2396*t5913) - 1.*t24*t268*t423*t831 + t24*t351*t423*t957;
  p_output1[5]=0.1305*t115*t13 - 1.*t13*t24*t387 - 1.*t13*t5432 - 1.*t1331*t6281 - 1.*t1520*t6295 - 1.*t1962*t6306 - 1.*t2168*t6325 - 1.*t2413*t6349 - 1.*t2752*t6379 - 0.0306*(t2396*t6349 + t2294*t6379) + 1.1312*(t2294*t6349 - 1.*t2396*t6379) - 1.*t13*t24*t268*t831 + t13*t24*t351*t957;
  p_output1[6]=t24*t6472 + t6514 + t6545 + t6570 + t6579 + t6617 + t6636 + t6652 + t6668 - 1.*t24*t351*t831 - 1.*t24*t268*t957;
  p_output1[7]=-1.*t115*t423*t6472 + t13*t6683 - 1.*t1520*t6796 - 1.*t1331*t6831 - 1.*t2168*t6853 - 1.*t1962*t6869 - 1.*t2752*t6889 - 1.*t2413*t6913 + 1.1312*(-1.*t2396*t6889 + t2294*t6913) - 0.0306*(t2294*t6889 + t2396*t6913) - 1.*t3610*t831 - 1.*t6768*t957;
  p_output1[8]=-1.*t115*t13*t6472 - 1.*t423*t6683 - 1.*t1520*t7031 - 1.*t1331*t7040 - 1.*t2168*t7058 - 1.*t1962*t7083 - 1.*t2752*t7117 - 1.*t2413*t7141 + 1.1312*(-1.*t2396*t7117 + t2294*t7141) - 0.0306*(t2294*t7117 + t2396*t7141) - 1.*t7013*t831 - 1.*t854*t957;
  p_output1[9]=t6514 + t6545 + t6570 + t6579 + t6617 + t6636 + t6652 + t6668 + t24*t268*t7213 - 1.*t24*t351*t7248;
  p_output1[10]=-1.*t1520*t3703 - 1.*t3363*t7213 - 1.*t3610*t7248 - 1.*t1331*t7288 - 1.*t2168*t7305 - 1.*t1962*t7323 - 1.*t2752*t7341 - 1.*t2413*t7361 + 1.1312*(-1.*t2396*t7341 + t2294*t7361) - 0.0306*(t2294*t7341 + t2396*t7361);
  p_output1[11]=-1.*t7013*t7248 - 1.*t7213*t7426 - 1.*t1520*t7442 - 1.*t1331*t7457 - 1.*t2168*t7472 - 1.*t1962*t7487 - 1.*t2752*t7494 - 1.*t2413*t7505 + 1.1312*(-1.*t2396*t7494 + t2294*t7505) - 0.0306*(t2294*t7494 + t2396*t7505);
  p_output1[12]=t6496*t7537 + t7541*t7544 + t2168*t7548 + t1962*t7554 + t2752*t7567 + t2413*t7573 - 1.1312*(-1.*t2396*t7567 + t2294*t7573) + 0.0306*(t2294*t7567 + t2396*t7573);
  p_output1[13]=-1.*t1962*t3843 - 1.*t3703*t7537 - 1.*t3782*t7541 - 1.*t2168*t7598 - 1.*t2752*t7608 - 1.*t2413*t7615 + 1.1312*(-1.*t2396*t7608 + t2294*t7615) - 0.0306*(t2294*t7608 + t2396*t7615);
  p_output1[14]=-1.*t7442*t7537 - 1.*t7541*t7661 - 1.*t2168*t7674 - 1.*t1962*t7681 - 1.*t2752*t7694 - 1.*t2413*t7699 + 1.1312*(-1.*t2396*t7694 + t2294*t7699) - 0.0306*(t2294*t7694 + t2396*t7699);
  p_output1[15]=t7742*t7747 + t7554*t7759 + t2752*t7766 + t2413*t7775 - 1.1312*(t2294*t7775 + t7780) + 0.0306*(t2396*t7775 + t7790);
  p_output1[16]=-1.*t2752*t4084 - 1.*t3811*t7742 - 1.*t3843*t7759 - 1.*t2413*t7816 - 0.0306*(t4478 + t2396*t7816) + 1.1312*(t2294*t7816 + t7822);
  p_output1[17]=-1.*t7681*t7759 - 1.*t7742*t7852 - 1.*t2752*t7856 - 1.*t2413*t7860 + 1.1312*(t2294*t7860 + t7866) - 0.0306*(t2396*t7860 + t7881);
  p_output1[18]=t7766*t7890 + t7896*t7899 - 1.1312*(t7780 - 1.*t2294*t7899) + 0.0306*(t7790 - 1.*t2396*t7899);
  p_output1[19]=-0.0306*t4487 + 1.1312*(-1.*t2294*t4223 + t7822) - 1.*t4084*t7890 - 1.*t4223*t7896;
  p_output1[20]=-1.*t7856*t7890 - 1.*t7896*t7942 + 1.1312*(t7866 - 1.*t2294*t7942) - 0.0306*(t7881 - 1.*t2396*t7942);
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void J_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
