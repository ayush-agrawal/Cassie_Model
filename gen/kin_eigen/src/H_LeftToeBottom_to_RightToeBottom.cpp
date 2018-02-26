/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:43:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBottom_to_RightToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t494;
  double t792;
  double t732;
  double t746;
  double t844;
  double t1066;
  double t747;
  double t972;
  double t973;
  double t476;
  double t1106;
  double t1156;
  double t1157;
  double t1236;
  double t1020;
  double t1163;
  double t1217;
  double t474;
  double t1260;
  double t1261;
  double t1273;
  double t1416;
  double t1235;
  double t1314;
  double t1319;
  double t351;
  double t1434;
  double t1440;
  double t1450;
  double t1822;
  double t1759;
  double t1790;
  double t1795;
  double t1903;
  double t1978;
  double t2100;
  double t2151;
  double t2152;
  double t2096;
  double t2187;
  double t2192;
  double t2247;
  double t2263;
  double t2305;
  double t2226;
  double t2307;
  double t2332;
  double t2361;
  double t2372;
  double t2449;
  double t2350;
  double t2638;
  double t2651;
  double t2703;
  double t2729;
  double t2781;
  double t1345;
  double t1452;
  double t1483;
  double t1521;
  double t1539;
  double t1571;
  double t2678;
  double t2858;
  double t2888;
  double t2965;
  double t2973;
  double t2983;
  double t3190;
  double t3224;
  double t3273;
  double t3293;
  double t3403;
  double t3429;
  double t3280;
  double t3438;
  double t3450;
  double t3525;
  double t3543;
  double t3545;
  double t3507;
  double t3591;
  double t3637;
  double t3672;
  double t3707;
  double t3738;
  double t3639;
  double t3741;
  double t3779;
  double t3818;
  double t3829;
  double t3838;
  double t3048;
  double t3063;
  double t3067;
  double t2955;
  double t3006;
  double t3039;
  double t3786;
  double t3843;
  double t3849;
  double t3900;
  double t3928;
  double t3962;
  double t1490;
  double t1705;
  double t1741;
  double t3082;
  double t3110;
  double t3134;
  double t3040;
  double t3136;
  double t134;
  double t4041;
  double t4137;
  double t4155;
  double t3875;
  double t3970;
  double t3984;
  double t3992;
  double t4024;
  double t4025;
  double t4028;
  double t4164;
  double t4168;
  double t4170;
  double t4217;
  double t4224;
  double t4225;
  double t4227;
  double t4237;
  double t273;
  double t4352;
  double t4280;
  double t5313;
  double t5352;
  double t5287;
  double t5432;
  double t5553;
  double t5632;
  double t5322;
  double t5366;
  double t5375;
  double t5657;
  double t5264;
  double t5847;
  double t5915;
  double t5927;
  double t5428;
  double t5770;
  double t5785;
  double t5953;
  double t5200;
  double t6084;
  double t6197;
  double t6289;
  double t5810;
  double t6027;
  double t6061;
  double t6333;
  double t5179;
  double t6541;
  double t6565;
  double t6648;
  double t6062;
  double t6390;
  double t6411;
  double t6708;
  double t3163;
  double t7417;
  double t7428;
  double t7576;
  double t7249;
  double t7250;
  double t7251;
  double t7947;
  double t8062;
  double t8584;
  double t7303;
  double t7632;
  double t7672;
  double t8741;
  double t8745;
  double t8766;
  double t7748;
  double t8628;
  double t8717;
  double t8795;
  double t8818;
  double t8825;
  double t8732;
  double t8768;
  double t8782;
  double t4285;
  double t4306;
  double t4312;
  double t8889;
  double t8892;
  double t8896;
  double t8869;
  double t8870;
  double t8871;
  double t8935;
  double t8936;
  double t8948;
  double t8876;
  double t8900;
  double t8905;
  double t8970;
  double t8995;
  double t9000;
  double t8909;
  double t8955;
  double t8967;
  double t4394;
  double t4507;
  double t4513;
  double t6531;
  double t6709;
  double t6731;
  double t6757;
  double t6885;
  double t7050;
  double t7072;
  double t7115;
  double t7180;
  double t4593;
  double t4606;
  double t4616;
  double t8968;
  double t9012;
  double t9014;
  double t9015;
  double t9019;
  double t9024;
  double t9031;
  double t9044;
  double t9051;
  double t4750;
  double t4753;
  double t4771;
  double t8794;
  double t8835;
  double t8839;
  double t8851;
  double t8855;
  double t8857;
  double t8859;
  double t8862;
  double t8863;
  double t4803;
  double t4816;
  double t4819;
  double t4889;
  double t4924;
  double t4936;
  double t4995;
  double t5034;
  double t5038;
  double t5076;
  double t9077;
  double t9079;
  double t9080;
  double t9095;
  double t9096;
  double t9099;
  double t9091;
  double t9092;
  double t9093;
  double t9147;
  double t9150;
  double t9173;
  double t9179;
  double t9195;
  double t9196;
  double t9209;
  double t9211;
  double t9227;
  double t9228;
  double t9134;
  double t9135;
  double t9136;
  double t9140;
  double t9142;
  double t9153;
  double t9156;
  double t9160;
  double t9165;
  double t9166;
  double t9167;
  double t9181;
  double t9182;
  double t9183;
  double t9187;
  double t9188;
  double t9189;
  double t9197;
  double t9198;
  double t9199;
  double t9202;
  double t9205;
  double t9206;
  double t9212;
  double t9214;
  double t9215;
  double t9217;
  double t9220;
  double t9224;
  double t9231;
  double t9232;
  double t9233;
  double t9236;
  double t9237;
  double t9238;
  double t9308;
  double t9309;
  double t9320;
  double t9321;
  double t9331;
  double t9332;
  double t9346;
  double t9347;
  double t9356;
  double t9357;
  double t9300;
  double t9303;
  double t9322;
  double t9323;
  double t9324;
  double t9310;
  double t9313;
  double t9314;
  double t9326;
  double t9327;
  double t9328;
  double t9333;
  double t9334;
  double t9335;
  double t9337;
  double t9341;
  double t9342;
  double t9348;
  double t9349;
  double t9350;
  double t9352;
  double t9353;
  double t9354;
  double t9358;
  double t9359;
  double t9360;
  double t9363;
  double t9364;
  double t9365;
  double t9296;
  double t9297;
  double t9298;
  double t9299;
  double t9304;
  double t9305;
  double t9306;
  double t9307;
  double t9315;
  double t9316;
  double t9317;
  double t9318;
  double t9319;
  double t9325;
  double t9330;
  double t9336;
  double t9345;
  double t9351;
  double t9355;
  double t9362;
  double t9366;
  double t9367;
  double t9368;
  double t9369;
  double t9372;
  double t9373;
  double t9374;
  double t9375;
  double t9376;
  double t9377;
  double t9378;
  double t9379;
  double t9380;
  double t9381;
  double t9382;
  double t9383;
  double t9384;
  double t9385;
  double t9122;
  double t9133;
  double t9143;
  double t9162;
  double t9169;
  double t9185;
  double t9194;
  double t9200;
  double t9208;
  double t9216;
  double t9225;
  double t9234;
  double t9239;
  double t9240;
  double t9241;
  double t9244;
  double t9274;
  double t9275;
  double t9276;
  double t9277;
  double t9278;
  double t9283;
  double t9284;
  double t9285;
  double t9286;
  double t9287;
  double t9288;
  double t9290;
  double t9293;
  double t9294;
  double t9246;
  double t9247;
  double t9248;
  double t9251;
  double t9252;
  double t9253;
  double t9254;
  double t9255;
  double t9256;
  double t9257;
  double t9258;
  double t9260;
  double t9263;
  double t9264;
  double t9267;
  double t9268;
  double t9269;
  double t9270;
  double t9393;
  double t9394;
  double t9395;
  double t9396;
  double t9397;
  double t9398;
  double t9399;
  double t9400;
  double t9401;
  double t9402;
  double t9403;
  double t9404;
  double t9405;
  double t9406;
  double t9407;
  double t9408;
  double t9370;
  double t9386;
  double t9387;
  double t9416;
  double t9417;
  double t9418;
  double t9389;
  double t9390;
  double t9391;
  t494 = Cos(var1[1]);
  t792 = Cos(var1[3]);
  t732 = Cos(var1[2]);
  t746 = Sin(var1[3]);
  t844 = Sin(var1[2]);
  t1066 = Cos(var1[4]);
  t747 = -1.*t494*t732*t746;
  t972 = -1.*t792*t494*t844;
  t973 = t747 + t972;
  t476 = Sin(var1[4]);
  t1106 = t792*t494*t732;
  t1156 = -1.*t494*t746*t844;
  t1157 = t1106 + t1156;
  t1236 = Cos(var1[5]);
  t1020 = t476*t973;
  t1163 = t1066*t1157;
  t1217 = t1020 + t1163;
  t474 = Sin(var1[5]);
  t1260 = t1066*t973;
  t1261 = -1.*t476*t1157;
  t1273 = t1260 + t1261;
  t1416 = Cos(var1[6]);
  t1235 = -1.*t474*t1217;
  t1314 = t1236*t1273;
  t1319 = t1235 + t1314;
  t351 = Sin(var1[6]);
  t1434 = t1236*t1217;
  t1440 = t474*t1273;
  t1450 = t1434 + t1440;
  t1822 = Sin(var1[0]);
  t1759 = Cos(var1[0]);
  t1790 = Sin(var1[1]);
  t1795 = t1759*t732*t1790;
  t1903 = -1.*t1822*t844;
  t1978 = t1795 + t1903;
  t2100 = -1.*t732*t1822;
  t2151 = -1.*t1759*t1790*t844;
  t2152 = t2100 + t2151;
  t2096 = -1.*t746*t1978;
  t2187 = t792*t2152;
  t2192 = t2096 + t2187;
  t2247 = t792*t1978;
  t2263 = t746*t2152;
  t2305 = t2247 + t2263;
  t2226 = t476*t2192;
  t2307 = t1066*t2305;
  t2332 = t2226 + t2307;
  t2361 = t1066*t2192;
  t2372 = -1.*t476*t2305;
  t2449 = t2361 + t2372;
  t2350 = -1.*t474*t2332;
  t2638 = t1236*t2449;
  t2651 = t2350 + t2638;
  t2703 = t1236*t2332;
  t2729 = t474*t2449;
  t2781 = t2703 + t2729;
  t1345 = t351*t1319;
  t1452 = t1416*t1450;
  t1483 = t1345 + t1452;
  t1521 = t1416*t1319;
  t1539 = -1.*t351*t1450;
  t1571 = t1521 + t1539;
  t2678 = t351*t2651;
  t2858 = t1416*t2781;
  t2888 = t2678 + t2858;
  t2965 = t1416*t2651;
  t2973 = -1.*t351*t2781;
  t2983 = t2965 + t2973;
  t3190 = t732*t1822*t1790;
  t3224 = t1759*t844;
  t3273 = t3190 + t3224;
  t3293 = t1759*t732;
  t3403 = -1.*t1822*t1790*t844;
  t3429 = t3293 + t3403;
  t3280 = -1.*t746*t3273;
  t3438 = t792*t3429;
  t3450 = t3280 + t3438;
  t3525 = t792*t3273;
  t3543 = t746*t3429;
  t3545 = t3525 + t3543;
  t3507 = t476*t3450;
  t3591 = t1066*t3545;
  t3637 = t3507 + t3591;
  t3672 = t1066*t3450;
  t3707 = -1.*t476*t3545;
  t3738 = t3672 + t3707;
  t3639 = -1.*t474*t3637;
  t3741 = t1236*t3738;
  t3779 = t3639 + t3741;
  t3818 = t1236*t3637;
  t3829 = t474*t3738;
  t3838 = t3818 + t3829;
  t3048 = -0.766044*t1483;
  t3063 = 0.642788*t1571;
  t3067 = t3048 + t3063;
  t2955 = -0.766044*t2888;
  t3006 = 0.642788*t2983;
  t3039 = t2955 + t3006;
  t3786 = t351*t3779;
  t3843 = t1416*t3838;
  t3849 = t3786 + t3843;
  t3900 = t1416*t3779;
  t3928 = -1.*t351*t3838;
  t3962 = t3900 + t3928;
  t1490 = 0.642788*t1483;
  t1705 = 0.766044*t1571;
  t1741 = t1490 + t1705;
  t3082 = 0.642788*t2888;
  t3110 = 0.766044*t2983;
  t3134 = t3082 + t3110;
  t3040 = t1741*t3039;
  t3136 = -1.*t3067*t3134;
  t134 = Cos(var1[8]);
  t4041 = -0.766044*t3849;
  t4137 = 0.642788*t3962;
  t4155 = t4041 + t4137;
  t3875 = 0.642788*t3849;
  t3970 = 0.766044*t3962;
  t3984 = t3875 + t3970;
  t3992 = t1759*t494*t3067;
  t4024 = t1790*t3039;
  t4025 = t3992 + t4024;
  t4028 = -1.*t3984*t4025;
  t4164 = t1759*t494*t1741;
  t4168 = t1790*t3134;
  t4170 = t4164 + t4168;
  t4217 = t4155*t4170;
  t4224 = t3040 + t3136;
  t4225 = -1.*t494*t1822*t4224;
  t4227 = 0. + t4028 + t4217 + t4225;
  t4237 = 1/t4227;
  t273 = Sin(var1[7]);
  t4352 = Sin(var1[8]);
  t4280 = Cos(var1[7]);
  t5313 = Cos(var1[9]);
  t5352 = Sin(var1[9]);
  t5287 = Cos(var1[10]);
  t5432 = t4280*t5313;
  t5553 = -1.*t273*t4352*t5352;
  t5632 = t5432 + t5553;
  t5322 = t5313*t273*t4352;
  t5366 = t4280*t5352;
  t5375 = t5322 + t5366;
  t5657 = Sin(var1[10]);
  t5264 = Cos(var1[11]);
  t5847 = t5287*t5632;
  t5915 = -1.*t5375*t5657;
  t5927 = t5847 + t5915;
  t5428 = t5287*t5375;
  t5770 = t5632*t5657;
  t5785 = t5428 + t5770;
  t5953 = Sin(var1[11]);
  t5200 = Cos(var1[12]);
  t6084 = t5264*t5927;
  t6197 = -1.*t5785*t5953;
  t6289 = t6084 + t6197;
  t5810 = t5264*t5785;
  t6027 = t5927*t5953;
  t6061 = t5810 + t6027;
  t6333 = Sin(var1[12]);
  t5179 = Cos(var1[13]);
  t6541 = t5200*t6289;
  t6565 = -1.*t6061*t6333;
  t6648 = t6541 + t6565;
  t6062 = t5200*t6061;
  t6390 = t6289*t6333;
  t6411 = t6062 + t6390;
  t6708 = Sin(var1[13]);
  t3163 = 0. + t3040 + t3136;
  t7417 = -1.*t5313*t273;
  t7428 = -1.*t4280*t4352*t5352;
  t7576 = t7417 + t7428;
  t7249 = t4280*t5313*t4352;
  t7250 = -1.*t273*t5352;
  t7251 = t7249 + t7250;
  t7947 = t5287*t7576;
  t8062 = -1.*t7251*t5657;
  t8584 = t7947 + t8062;
  t7303 = t5287*t7251;
  t7632 = t7576*t5657;
  t7672 = t7303 + t7632;
  t8741 = t5264*t8584;
  t8745 = -1.*t7672*t5953;
  t8766 = t8741 + t8745;
  t7748 = t5264*t7672;
  t8628 = t8584*t5953;
  t8717 = t7748 + t8628;
  t8795 = t5200*t8766;
  t8818 = -1.*t8717*t6333;
  t8825 = t8795 + t8818;
  t8732 = t5200*t8717;
  t8768 = t8766*t6333;
  t8782 = t8732 + t8768;
  t4285 = -1.*t1741*t4155;
  t4306 = t3067*t3984;
  t4312 = 0. + t4285 + t4306;
  t8889 = -1.*t134*t5287*t5352;
  t8892 = -1.*t134*t5313*t5657;
  t8896 = t8889 + t8892;
  t8869 = t134*t5313*t5287;
  t8870 = -1.*t134*t5352*t5657;
  t8871 = t8869 + t8870;
  t8935 = t5264*t8896;
  t8936 = -1.*t8871*t5953;
  t8948 = t8935 + t8936;
  t8876 = t5264*t8871;
  t8900 = t8896*t5953;
  t8905 = t8876 + t8900;
  t8970 = t5200*t8948;
  t8995 = -1.*t8905*t6333;
  t9000 = t8970 + t8995;
  t8909 = t5200*t8905;
  t8955 = t8948*t6333;
  t8967 = t8909 + t8955;
  t4394 = t3134*t4155;
  t4507 = -1.*t3039*t3984;
  t4513 = 0. + t4394 + t4507;
  t6531 = t5179*t6411;
  t6709 = t6648*t6708;
  t6731 = t6531 + t6709;
  t6757 = 0.642788*t6731;
  t6885 = t5179*t6648;
  t7050 = -1.*t6411*t6708;
  t7072 = t6885 + t7050;
  t7115 = 0.766044*t7072;
  t7180 = t6757 + t7115;
  t4593 = -1.*t1759*t494*t3067;
  t4606 = -1.*t1790*t3039;
  t4616 = 0. + t4593 + t4606;
  t8968 = t5179*t8967;
  t9012 = t9000*t6708;
  t9014 = t8968 + t9012;
  t9015 = 0.642788*t9014;
  t9019 = t5179*t9000;
  t9024 = -1.*t8967*t6708;
  t9031 = t9019 + t9024;
  t9044 = 0.766044*t9031;
  t9051 = t9015 + t9044;
  t4750 = -1.*t494*t1822*t3039;
  t4753 = t1759*t494*t4155;
  t4771 = 0. + t4750 + t4753;
  t8794 = t5179*t8782;
  t8835 = t8825*t6708;
  t8839 = t8794 + t8835;
  t8851 = 0.642788*t8839;
  t8855 = t5179*t8825;
  t8857 = -1.*t8782*t6708;
  t8859 = t8855 + t8857;
  t8862 = 0.766044*t8859;
  t8863 = t8851 + t8862;
  t4803 = t494*t1822*t3067;
  t4816 = t1790*t4155;
  t4819 = 0. + t4803 + t4816;
  t4889 = 0. + t4164 + t4168;
  t4924 = t494*t1822*t3134;
  t4936 = -1.*t1759*t494*t3984;
  t4995 = 0. + t4924 + t4936;
  t5034 = -1.*t494*t1822*t1741;
  t5038 = -1.*t1790*t3984;
  t5076 = 0. + t5034 + t5038;
  t9077 = -0.766044*t6731;
  t9079 = 0.642788*t7072;
  t9080 = t9077 + t9079;
  t9095 = -0.766044*t9014;
  t9096 = 0.642788*t9031;
  t9099 = t9095 + t9096;
  t9091 = -0.766044*t8839;
  t9092 = 0.642788*t8859;
  t9093 = t9091 + t9092;
  t9147 = -1.*t5313;
  t9150 = 1. + t9147;
  t9173 = -1.*t5287;
  t9179 = 1. + t9173;
  t9195 = -1.*t5264;
  t9196 = 1. + t9195;
  t9209 = -1.*t5200;
  t9211 = 1. + t9209;
  t9227 = -1.*t5179;
  t9228 = 1. + t9227;
  t9134 = -1.*t134;
  t9135 = 1. + t9134;
  t9136 = -0.135*t9135;
  t9140 = 0.049*t4352;
  t9142 = 0. + t9136 + t9140;
  t9153 = -0.049*t9150;
  t9156 = -0.09*t5352;
  t9160 = 0. + t9153 + t9156;
  t9165 = -0.09*t9150;
  t9166 = 0.049*t5352;
  t9167 = 0. + t9165 + t9166;
  t9181 = -0.049*t9179;
  t9182 = -0.21*t5657;
  t9183 = 0. + t9181 + t9182;
  t9187 = -0.21*t9179;
  t9188 = 0.049*t5657;
  t9189 = 0. + t9187 + t9188;
  t9197 = -0.0016*t9196;
  t9198 = -0.2707*t5953;
  t9199 = 0. + t9197 + t9198;
  t9202 = -0.2707*t9196;
  t9205 = 0.0016*t5953;
  t9206 = 0. + t9202 + t9205;
  t9212 = 0.0184*t9211;
  t9214 = -0.7055*t6333;
  t9215 = 0. + t9212 + t9214;
  t9217 = -0.7055*t9211;
  t9220 = -0.0184*t6333;
  t9224 = 0. + t9217 + t9220;
  t9231 = -0.0216*t9228;
  t9232 = -1.1135*t6708;
  t9233 = 0. + t9231 + t9232;
  t9236 = -1.1135*t9228;
  t9237 = 0.0216*t6708;
  t9238 = 0. + t9236 + t9237;
  t9308 = -1.*t732;
  t9309 = 1. + t9308;
  t9320 = -1.*t792;
  t9321 = 1. + t9320;
  t9331 = -1.*t1066;
  t9332 = 1. + t9331;
  t9346 = -1.*t1236;
  t9347 = 1. + t9346;
  t9356 = -1.*t1416;
  t9357 = 1. + t9356;
  t9300 = -1.*t494;
  t9303 = 1. + t9300;
  t9322 = -0.049*t9321;
  t9323 = -0.21*t746;
  t9324 = 0. + t9322 + t9323;
  t9310 = -0.049*t9309;
  t9313 = -0.09*t844;
  t9314 = 0. + t9310 + t9313;
  t9326 = -0.21*t9321;
  t9327 = 0.049*t746;
  t9328 = 0. + t9326 + t9327;
  t9333 = -0.2707*t9332;
  t9334 = 0.0016*t476;
  t9335 = 0. + t9333 + t9334;
  t9337 = -0.0016*t9332;
  t9341 = -0.2707*t476;
  t9342 = 0. + t9337 + t9341;
  t9348 = 0.0184*t9347;
  t9349 = -0.7055*t474;
  t9350 = 0. + t9348 + t9349;
  t9352 = -0.7055*t9347;
  t9353 = -0.0184*t474;
  t9354 = 0. + t9352 + t9353;
  t9358 = -1.1135*t9357;
  t9359 = 0.0216*t351;
  t9360 = 0. + t9358 + t9359;
  t9363 = -0.0216*t9357;
  t9364 = -1.1135*t351;
  t9365 = 0. + t9363 + t9364;
  t9296 = -1.*t1759;
  t9297 = 1. + t9296;
  t9298 = 0.135*t9297;
  t9299 = 0.1305*t1759*t494;
  t9304 = 0.135*t9303;
  t9305 = 0.049*t1790;
  t9306 = 0. + t9304 + t9305;
  t9307 = t1759*t9306;
  t9315 = t1759*t1790*t9314;
  t9316 = -0.09*t9309;
  t9317 = 0.049*t844;
  t9318 = 0. + t9316 + t9317;
  t9319 = -1.*t1822*t9318;
  t9325 = t9324*t1978;
  t9330 = t9328*t2152;
  t9336 = t9335*t2192;
  t9345 = t9342*t2305;
  t9351 = t9350*t2332;
  t9355 = t9354*t2449;
  t9362 = t9360*t2651;
  t9366 = t9365*t2781;
  t9367 = 0.0306*t2888;
  t9368 = -1.1312*t2983;
  t9369 = 0. + t9298 + t9299 + t9307 + t9315 + t9319 + t9325 + t9330 + t9336 + t9345 + t9351 + t9355 + t9362 + t9366 + t9367 + t9368;
  t9372 = -0.049*t9303;
  t9373 = t494*t732*t9324;
  t9374 = 0.004500000000000004*t1790;
  t9375 = t494*t9314;
  t9376 = -1.*t494*t9328*t844;
  t9377 = t9335*t973;
  t9378 = t9342*t1157;
  t9379 = t9350*t1217;
  t9380 = t9354*t1273;
  t9381 = t9360*t1319;
  t9382 = t9365*t1450;
  t9383 = 0.0306*t1483;
  t9384 = -1.1312*t1571;
  t9385 = 0. + t9372 + t9373 + t9374 + t9375 + t9376 + t9377 + t9378 + t9379 + t9380 + t9381 + t9382 + t9383 + t9384;
  t9122 = 0.135*t273;
  t9133 = -0.1305*t134*t273;
  t9143 = t273*t9142;
  t9162 = t273*t4352*t9160;
  t9169 = t4280*t9167;
  t9185 = t5375*t9183;
  t9194 = t5632*t9189;
  t9200 = t5785*t9199;
  t9208 = t5927*t9206;
  t9216 = t6061*t9215;
  t9225 = t6289*t9224;
  t9234 = t6411*t9233;
  t9239 = t6648*t9238;
  t9240 = 0.0306*t6731;
  t9241 = -1.1312*t7072;
  t9244 = 0. + t9122 + t9133 + t9143 + t9162 + t9169 + t9185 + t9194 + t9200 + t9208 + t9216 + t9225 + t9234 + t9239 + t9240 + t9241;
  t9274 = -0.049*t9135;
  t9275 = -0.004500000000000004*t4352;
  t9276 = t134*t9160;
  t9277 = t134*t5313*t9183;
  t9278 = -1.*t134*t5352*t9189;
  t9283 = t8871*t9199;
  t9284 = t8896*t9206;
  t9285 = t8905*t9215;
  t9286 = t8948*t9224;
  t9287 = t8967*t9233;
  t9288 = t9000*t9238;
  t9290 = 0.0306*t9014;
  t9293 = -1.1312*t9031;
  t9294 = 0. + t9274 + t9275 + t9276 + t9277 + t9278 + t9283 + t9284 + t9285 + t9286 + t9287 + t9288 + t9290 + t9293;
  t9246 = -1.*t4280;
  t9247 = 1. + t9246;
  t9248 = -0.135*t9247;
  t9251 = -0.1305*t4280*t134;
  t9252 = t4280*t9142;
  t9253 = t4280*t4352*t9160;
  t9254 = -1.*t273*t9167;
  t9255 = t7251*t9183;
  t9256 = t7576*t9189;
  t9257 = t7672*t9199;
  t9258 = t8584*t9206;
  t9260 = t8717*t9215;
  t9263 = t8766*t9224;
  t9264 = t8782*t9233;
  t9267 = t8825*t9238;
  t9268 = 0.0306*t8839;
  t9269 = -1.1312*t8859;
  t9270 = 0. + t9248 + t9251 + t9252 + t9253 + t9254 + t9255 + t9256 + t9257 + t9258 + t9260 + t9263 + t9264 + t9267 + t9268 + t9269;
  t9393 = -0.135*t1822;
  t9394 = 0.1305*t494*t1822;
  t9395 = t1822*t9306;
  t9396 = t1822*t1790*t9314;
  t9397 = t1759*t9318;
  t9398 = t9324*t3273;
  t9399 = t9328*t3429;
  t9400 = t9335*t3450;
  t9401 = t9342*t3545;
  t9402 = t9350*t3637;
  t9403 = t9354*t3738;
  t9404 = t9360*t3779;
  t9405 = t9365*t3838;
  t9406 = 0.0306*t3849;
  t9407 = -1.1312*t3962;
  t9408 = 0. + t9393 + t9394 + t9395 + t9396 + t9397 + t9398 + t9399 + t9400 + t9401 + t9402 + t9403 + t9404 + t9405 + t9406 + t9407;
  t9370 = t3067*t9369;
  t9386 = -1.*t9385*t3039;
  t9387 = t9370 + t9386;
  t9416 = t1759*t494*t9385;
  t9417 = t1790*t9369;
  t9418 = t9416 + t9417;
  t9389 = t1741*t9369;
  t9390 = -1.*t9385*t3134;
  t9391 = t9389 + t9390;

  p_output1(0)=0. - 1.*t134*t273*t3163*t4237 - 1.*t134*t4237*t4280*t4312 + t4237*t4352*t4513;
  p_output1(1)=0. - 1.*t134*t273*t4237*t4616 + t4237*t4352*t4771 - 1.*t134*t4237*t4280*t4819;
  p_output1(2)=0. - 1.*t134*t273*t4237*t4889 + t4237*t4352*t4995 - 1.*t134*t4237*t4280*t5076;
  p_output1(3)=0.;
  p_output1(4)=0. + t3163*t4237*t7180 + t4237*t4312*t8863 + t4237*t4513*t9051;
  p_output1(5)=0. + t4237*t4616*t7180 + t4237*t4819*t8863 + t4237*t4771*t9051;
  p_output1(6)=0. + t4237*t4889*t7180 + t4237*t5076*t8863 + t4237*t4995*t9051;
  p_output1(7)=0.;
  p_output1(8)=0. + t3163*t4237*t9080 + t4237*t4312*t9093 + t4237*t4513*t9099;
  p_output1(9)=0. + t4237*t4616*t9080 + t4237*t4819*t9093 + t4237*t4771*t9099;
  p_output1(10)=0. + t4237*t4889*t9080 + t4237*t5076*t9093 + t4237*t4995*t9099;
  p_output1(11)=0.;
  p_output1(12)=t3163*t4237*t9244 + t4237*t4312*t9270 + t4237*t4513*t9294 + t4237*(-1.*t3984*t9387 + t4155*t9391 - 1.*t4224*t9408);
  p_output1(13)=t4237*t4616*t9244 + t4237*t4819*t9270 + t4237*t4771*t9294 + t4237*(-1.*t1822*t494*t9387 + t4025*t9408 - 1.*t4155*t9418);
  p_output1(14)=t4237*t4889*t9244 + t4237*t5076*t9270 + t4237*t4995*t9294 + t4237*(t1822*t494*t9391 - 1.*t4170*t9408 + t3984*t9418);
  p_output1(15)=0. + (t4028 + t4217 + t4225)*t4237;
}


       
void H_LeftToeBottom_to_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
