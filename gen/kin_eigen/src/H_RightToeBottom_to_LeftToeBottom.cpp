/*
 * Automatically Generated from Mathematica.
 * Fri 16 Feb 2018 12:25:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBottom_to_LeftToeBottom.h"

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
  double t644;
  double t659;
  double t737;
  double t657;
  double t950;
  double t606;
  double t1109;
  double t1131;
  double t1183;
  double t720;
  double t951;
  double t1090;
  double t1192;
  double t341;
  double t1387;
  double t1442;
  double t1517;
  double t1106;
  double t1204;
  double t1225;
  double t1538;
  double t274;
  double t1745;
  double t1856;
  double t1860;
  double t1288;
  double t1611;
  double t1642;
  double t1890;
  double t2265;
  double t2159;
  double t2183;
  double t2348;
  double t2374;
  double t2416;
  double t2208;
  double t2267;
  double t2331;
  double t2543;
  double t2547;
  double t2549;
  double t2338;
  double t2433;
  double t2482;
  double t2618;
  double t2670;
  double t2849;
  double t2507;
  double t2556;
  double t2579;
  double t3004;
  double t3005;
  double t3034;
  double t2588;
  double t2944;
  double t2972;
  double t1658;
  double t1893;
  double t1913;
  double t1982;
  double t1996;
  double t2037;
  double t2988;
  double t3053;
  double t3088;
  double t3126;
  double t3129;
  double t3150;
  double t3458;
  double t3470;
  double t3511;
  double t3340;
  double t3354;
  double t3454;
  double t3722;
  double t3733;
  double t3736;
  double t3660;
  double t3698;
  double t3712;
  double t3812;
  double t3850;
  double t3884;
  double t3714;
  double t3745;
  double t3777;
  double t4100;
  double t4102;
  double t4160;
  double t3797;
  double t3911;
  double t3989;
  double t4265;
  double t4331;
  double t4353;
  double t4022;
  double t4161;
  double t4184;
  double t3117;
  double t3178;
  double t3228;
  double t1950;
  double t2085;
  double t2144;
  double t4208;
  double t4362;
  double t4376;
  double t4469;
  double t4496;
  double t4508;
  double t4390;
  double t4533;
  double t4536;
  double t4672;
  double t4686;
  double t4703;
  double t273;
  double t4804;
  double t4822;
  double t3634;
  double t4569;
  double t4633;
  double t4634;
  double t4666;
  double t4718;
  double t4755;
  double t4780;
  double t4845;
  double t4868;
  double t4901;
  double t4904;
  double t39;
  double t4930;
  double t5025;
  double t4989;
  double t5021;
  double t5023;
  double t6008;
  double t5924;
  double t5955;
  double t6043;
  double t6174;
  double t6006;
  double t6107;
  double t6112;
  double t5866;
  double t6176;
  double t6210;
  double t6253;
  double t6398;
  double t6147;
  double t6274;
  double t6277;
  double t5844;
  double t6431;
  double t6497;
  double t6500;
  double t6738;
  double t6327;
  double t6577;
  double t6689;
  double t5815;
  double t6808;
  double t6818;
  double t6839;
  double t3309;
  double t3559;
  double t3607;
  double t7283;
  double t7347;
  double t7430;
  double t7455;
  double t7542;
  double t7577;
  double t7446;
  double t7649;
  double t7650;
  double t7739;
  double t7751;
  double t7764;
  double t7684;
  double t7773;
  double t7774;
  double t7781;
  double t7791;
  double t7795;
  double t7777;
  double t7809;
  double t7829;
  double t7832;
  double t7833;
  double t7840;
  double t4924;
  double t7908;
  double t7912;
  double t7918;
  double t7933;
  double t7950;
  double t7964;
  double t7925;
  double t7970;
  double t7974;
  double t7984;
  double t7985;
  double t7992;
  double t7978;
  double t7996;
  double t7999;
  double t8011;
  double t8012;
  double t8014;
  double t8005;
  double t8017;
  double t8018;
  double t8028;
  double t8030;
  double t8035;
  double t5400;
  double t5412;
  double t5423;
  double t6735;
  double t6875;
  double t6876;
  double t6899;
  double t6904;
  double t6914;
  double t6922;
  double t6947;
  double t7013;
  double t5108;
  double t5199;
  double t5211;
  double t7830;
  double t7843;
  double t7844;
  double t7846;
  double t7859;
  double t7867;
  double t7887;
  double t7890;
  double t7897;
  double t5260;
  double t5270;
  double t5331;
  double t8027;
  double t8042;
  double t8045;
  double t8047;
  double t8051;
  double t8056;
  double t8058;
  double t8069;
  double t8077;
  double t5733;
  double t5744;
  double t5748;
  double t5555;
  double t5556;
  double t5565;
  double t5677;
  double t8115;
  double t8118;
  double t8119;
  double t8126;
  double t8127;
  double t8128;
  double t8139;
  double t8140;
  double t8144;
  double t8190;
  double t8193;
  double t8222;
  double t8223;
  double t8249;
  double t8250;
  double t8276;
  double t8279;
  double t8308;
  double t8311;
  double t8177;
  double t8179;
  double t8195;
  double t8197;
  double t8203;
  double t8225;
  double t8226;
  double t8227;
  double t8232;
  double t8240;
  double t8241;
  double t8253;
  double t8256;
  double t8259;
  double t8264;
  double t8265;
  double t8271;
  double t8285;
  double t8288;
  double t8291;
  double t8296;
  double t8299;
  double t8303;
  double t8313;
  double t8316;
  double t8320;
  double t8326;
  double t8329;
  double t8331;
  double t8168;
  double t8169;
  double t8172;
  double t8175;
  double t8180;
  double t8183;
  double t8184;
  double t8186;
  double t8204;
  double t8210;
  double t8211;
  double t8214;
  double t8216;
  double t8229;
  double t8248;
  double t8260;
  double t8272;
  double t8292;
  double t8306;
  double t8323;
  double t8334;
  double t8335;
  double t8337;
  double t8339;
  double t8342;
  double t8343;
  double t8344;
  double t8346;
  double t8347;
  double t8349;
  double t8353;
  double t8355;
  double t8359;
  double t8360;
  double t8361;
  double t8370;
  double t8371;
  double t8377;
  double t8453;
  double t8454;
  double t8522;
  double t8531;
  double t8543;
  double t8545;
  double t8567;
  double t8578;
  double t8441;
  double t8447;
  double t8493;
  double t8495;
  double t8498;
  double t8506;
  double t8507;
  double t8469;
  double t8470;
  double t8474;
  double t8512;
  double t8513;
  double t8515;
  double t8534;
  double t8535;
  double t8536;
  double t8538;
  double t8539;
  double t8540;
  double t8552;
  double t8554;
  double t8558;
  double t8560;
  double t8562;
  double t8563;
  double t8580;
  double t8581;
  double t8582;
  double t8584;
  double t8586;
  double t8589;
  double t8608;
  double t8609;
  double t8610;
  double t8615;
  double t8618;
  double t8620;
  double t8392;
  double t8393;
  double t8394;
  double t8395;
  double t8398;
  double t8400;
  double t8401;
  double t8405;
  double t8407;
  double t8413;
  double t8414;
  double t8415;
  double t8420;
  double t8426;
  double t8427;
  double t8429;
  double t8340;
  double t8378;
  double t8380;
  double t8448;
  double t8475;
  double t8491;
  double t8509;
  double t8516;
  double t8537;
  double t8541;
  double t8559;
  double t8566;
  double t8583;
  double t8590;
  double t8591;
  double t8592;
  double t8593;
  double t8599;
  double t8600;
  double t8602;
  double t8604;
  double t8611;
  double t8612;
  double t8621;
  double t8627;
  double t8628;
  double t8629;
  double t8631;
  double t8632;
  double t8634;
  double t8635;
  double t8638;
  double t8639;
  double t8647;
  double t8649;
  double t8652;
  double t8653;
  double t8654;
  double t8656;
  double t8658;
  double t8659;
  double t8660;
  double t8663;
  double t8665;
  double t8666;
  double t8667;
  double t8669;
  double t8671;
  double t8676;
  double t8679;
  double t8683;
  double t8688;
  double t8690;
  double t8691;
  double t8386;
  double t8387;
  double t8388;
  t644 = Cos(var1[8]);
  t659 = Cos(var1[10]);
  t737 = Sin(var1[9]);
  t657 = Cos(var1[9]);
  t950 = Sin(var1[10]);
  t606 = Cos(var1[11]);
  t1109 = -1.*t644*t659*t737;
  t1131 = -1.*t644*t657*t950;
  t1183 = t1109 + t1131;
  t720 = t644*t657*t659;
  t951 = -1.*t644*t737*t950;
  t1090 = t720 + t951;
  t1192 = Sin(var1[11]);
  t341 = Cos(var1[12]);
  t1387 = t606*t1183;
  t1442 = -1.*t1090*t1192;
  t1517 = t1387 + t1442;
  t1106 = t606*t1090;
  t1204 = t1183*t1192;
  t1225 = t1106 + t1204;
  t1538 = Sin(var1[12]);
  t274 = Cos(var1[13]);
  t1745 = t341*t1517;
  t1856 = -1.*t1225*t1538;
  t1860 = t1745 + t1856;
  t1288 = t341*t1225;
  t1611 = t1517*t1538;
  t1642 = t1288 + t1611;
  t1890 = Sin(var1[13]);
  t2265 = Cos(var1[7]);
  t2159 = Sin(var1[7]);
  t2183 = Sin(var1[8]);
  t2348 = t2265*t657;
  t2374 = -1.*t2159*t2183*t737;
  t2416 = t2348 + t2374;
  t2208 = t657*t2159*t2183;
  t2267 = t2265*t737;
  t2331 = t2208 + t2267;
  t2543 = t659*t2416;
  t2547 = -1.*t2331*t950;
  t2549 = t2543 + t2547;
  t2338 = t659*t2331;
  t2433 = t2416*t950;
  t2482 = t2338 + t2433;
  t2618 = t606*t2549;
  t2670 = -1.*t2482*t1192;
  t2849 = t2618 + t2670;
  t2507 = t606*t2482;
  t2556 = t2549*t1192;
  t2579 = t2507 + t2556;
  t3004 = t341*t2849;
  t3005 = -1.*t2579*t1538;
  t3034 = t3004 + t3005;
  t2588 = t341*t2579;
  t2944 = t2849*t1538;
  t2972 = t2588 + t2944;
  t1658 = t274*t1642;
  t1893 = t1860*t1890;
  t1913 = t1658 + t1893;
  t1982 = t274*t1860;
  t1996 = -1.*t1642*t1890;
  t2037 = t1982 + t1996;
  t2988 = t274*t2972;
  t3053 = t3034*t1890;
  t3088 = t2988 + t3053;
  t3126 = t274*t3034;
  t3129 = -1.*t2972*t1890;
  t3150 = t3126 + t3129;
  t3458 = 0.642788*t3088;
  t3470 = 0.766044*t3150;
  t3511 = t3458 + t3470;
  t3340 = -0.766044*t1913;
  t3354 = 0.642788*t2037;
  t3454 = t3340 + t3354;
  t3722 = -1.*t657*t2159;
  t3733 = -1.*t2265*t2183*t737;
  t3736 = t3722 + t3733;
  t3660 = t2265*t657*t2183;
  t3698 = -1.*t2159*t737;
  t3712 = t3660 + t3698;
  t3812 = t659*t3736;
  t3850 = -1.*t3712*t950;
  t3884 = t3812 + t3850;
  t3714 = t659*t3712;
  t3745 = t3736*t950;
  t3777 = t3714 + t3745;
  t4100 = t606*t3884;
  t4102 = -1.*t3777*t1192;
  t4160 = t4100 + t4102;
  t3797 = t606*t3777;
  t3911 = t3884*t1192;
  t3989 = t3797 + t3911;
  t4265 = t341*t4160;
  t4331 = -1.*t3989*t1538;
  t4353 = t4265 + t4331;
  t4022 = t341*t3989;
  t4161 = t4160*t1538;
  t4184 = t4022 + t4161;
  t3117 = -0.766044*t3088;
  t3178 = 0.642788*t3150;
  t3228 = t3117 + t3178;
  t1950 = 0.642788*t1913;
  t2085 = 0.766044*t2037;
  t2144 = t1950 + t2085;
  t4208 = t274*t4184;
  t4362 = t4353*t1890;
  t4376 = t4208 + t4362;
  t4469 = t274*t4353;
  t4496 = -1.*t4184*t1890;
  t4508 = t4469 + t4496;
  t4390 = -0.766044*t4376;
  t4533 = 0.642788*t4508;
  t4536 = t4390 + t4533;
  t4672 = 0.642788*t4376;
  t4686 = 0.766044*t4508;
  t4703 = t4672 + t4686;
  t273 = Cos(var1[1]);
  t4804 = t2144*t4536;
  t4822 = -1.*t3454*t4703;
  t3634 = t2265*t644*t3454;
  t4569 = t2183*t4536;
  t4633 = t3634 + t4569;
  t4634 = -1.*t3511*t4633;
  t4666 = t2265*t644*t2144;
  t4718 = t2183*t4703;
  t4755 = t4666 + t4718;
  t4780 = t3228*t4755;
  t4845 = t4804 + t4822;
  t4868 = -1.*t644*t2159*t4845;
  t4901 = 0. + t4634 + t4780 + t4868;
  t4904 = 1/t4901;
  t39 = Cos(var1[0]);
  t4930 = Sin(var1[0]);
  t5025 = Sin(var1[1]);
  t4989 = t4703*t3228;
  t5021 = -1.*t4536*t3511;
  t5023 = 0. + t4989 + t5021;
  t6008 = Cos(var1[3]);
  t5924 = Cos(var1[2]);
  t5955 = Sin(var1[3]);
  t6043 = Sin(var1[2]);
  t6174 = Cos(var1[4]);
  t6006 = -1.*t273*t5924*t5955;
  t6107 = -1.*t6008*t273*t6043;
  t6112 = t6006 + t6107;
  t5866 = Sin(var1[4]);
  t6176 = t6008*t273*t5924;
  t6210 = -1.*t273*t5955*t6043;
  t6253 = t6176 + t6210;
  t6398 = Cos(var1[5]);
  t6147 = t5866*t6112;
  t6274 = t6174*t6253;
  t6277 = t6147 + t6274;
  t5844 = Sin(var1[5]);
  t6431 = t6174*t6112;
  t6497 = -1.*t5866*t6253;
  t6500 = t6431 + t6497;
  t6738 = Cos(var1[6]);
  t6327 = -1.*t5844*t6277;
  t6577 = t6398*t6500;
  t6689 = t6327 + t6577;
  t5815 = Sin(var1[6]);
  t6808 = t6398*t6277;
  t6818 = t5844*t6500;
  t6839 = t6808 + t6818;
  t3309 = -1.*t2144*t3228;
  t3559 = t3454*t3511;
  t3607 = 0. + t3309 + t3559;
  t7283 = t39*t5924*t5025;
  t7347 = -1.*t4930*t6043;
  t7430 = t7283 + t7347;
  t7455 = -1.*t5924*t4930;
  t7542 = -1.*t39*t5025*t6043;
  t7577 = t7455 + t7542;
  t7446 = -1.*t5955*t7430;
  t7649 = t6008*t7577;
  t7650 = t7446 + t7649;
  t7739 = t6008*t7430;
  t7751 = t5955*t7577;
  t7764 = t7739 + t7751;
  t7684 = t5866*t7650;
  t7773 = t6174*t7764;
  t7774 = t7684 + t7773;
  t7781 = t6174*t7650;
  t7791 = -1.*t5866*t7764;
  t7795 = t7781 + t7791;
  t7777 = -1.*t5844*t7774;
  t7809 = t6398*t7795;
  t7829 = t7777 + t7809;
  t7832 = t6398*t7774;
  t7833 = t5844*t7795;
  t7840 = t7832 + t7833;
  t4924 = 0. + t4804 + t4822;
  t7908 = t5924*t4930*t5025;
  t7912 = t39*t6043;
  t7918 = t7908 + t7912;
  t7933 = t39*t5924;
  t7950 = -1.*t4930*t5025*t6043;
  t7964 = t7933 + t7950;
  t7925 = -1.*t5955*t7918;
  t7970 = t6008*t7964;
  t7974 = t7925 + t7970;
  t7984 = t6008*t7918;
  t7985 = t5955*t7964;
  t7992 = t7984 + t7985;
  t7978 = t5866*t7974;
  t7996 = t6174*t7992;
  t7999 = t7978 + t7996;
  t8011 = t6174*t7974;
  t8012 = -1.*t5866*t7992;
  t8014 = t8011 + t8012;
  t8005 = -1.*t5844*t7999;
  t8017 = t6398*t8014;
  t8018 = t8005 + t8017;
  t8028 = t6398*t7999;
  t8030 = t5844*t8014;
  t8035 = t8028 + t8030;
  t5400 = -1.*t644*t2159*t4536;
  t5412 = t2265*t644*t3228;
  t5423 = 0. + t5400 + t5412;
  t6735 = t5815*t6689;
  t6875 = t6738*t6839;
  t6876 = t6735 + t6875;
  t6899 = 0.642788*t6876;
  t6904 = t6738*t6689;
  t6914 = -1.*t5815*t6839;
  t6922 = t6904 + t6914;
  t6947 = 0.766044*t6922;
  t7013 = t6899 + t6947;
  t5108 = t644*t2159*t3454;
  t5199 = t2183*t3228;
  t5211 = 0. + t5108 + t5199;
  t7830 = t5815*t7829;
  t7843 = t6738*t7840;
  t7844 = t7830 + t7843;
  t7846 = 0.642788*t7844;
  t7859 = t6738*t7829;
  t7867 = -1.*t5815*t7840;
  t7887 = t7859 + t7867;
  t7890 = 0.766044*t7887;
  t7897 = t7846 + t7890;
  t5260 = -1.*t2265*t644*t3454;
  t5270 = -1.*t2183*t4536;
  t5331 = 0. + t5260 + t5270;
  t8027 = t5815*t8018;
  t8042 = t6738*t8035;
  t8045 = t8027 + t8042;
  t8047 = 0.642788*t8045;
  t8051 = t6738*t8018;
  t8056 = -1.*t5815*t8035;
  t8058 = t8051 + t8056;
  t8069 = 0.766044*t8058;
  t8077 = t8047 + t8069;
  t5733 = t644*t2159*t4703;
  t5744 = -1.*t2265*t644*t3511;
  t5748 = 0. + t5733 + t5744;
  t5555 = -1.*t644*t2159*t2144;
  t5556 = -1.*t2183*t3511;
  t5565 = 0. + t5555 + t5556;
  t5677 = 0. + t4666 + t4718;
  t8115 = -0.766044*t6876;
  t8118 = 0.642788*t6922;
  t8119 = t8115 + t8118;
  t8126 = -0.766044*t7844;
  t8127 = 0.642788*t7887;
  t8128 = t8126 + t8127;
  t8139 = -0.766044*t8045;
  t8140 = 0.642788*t8058;
  t8144 = t8139 + t8140;
  t8190 = -1.*t657;
  t8193 = 1. + t8190;
  t8222 = -1.*t659;
  t8223 = 1. + t8222;
  t8249 = -1.*t606;
  t8250 = 1. + t8249;
  t8276 = -1.*t341;
  t8279 = 1. + t8276;
  t8308 = -1.*t274;
  t8311 = 1. + t8308;
  t8177 = -1.*t644;
  t8179 = 1. + t8177;
  t8195 = -0.049*t8193;
  t8197 = -0.09*t737;
  t8203 = 0. + t8195 + t8197;
  t8225 = -0.049*t8223;
  t8226 = -0.21*t950;
  t8227 = 0. + t8225 + t8226;
  t8232 = -0.21*t8223;
  t8240 = 0.049*t950;
  t8241 = 0. + t8232 + t8240;
  t8253 = -0.0016*t8250;
  t8256 = -0.2707*t1192;
  t8259 = 0. + t8253 + t8256;
  t8264 = -0.2707*t8250;
  t8265 = 0.0016*t1192;
  t8271 = 0. + t8264 + t8265;
  t8285 = 0.0184*t8279;
  t8288 = -0.7055*t1538;
  t8291 = 0. + t8285 + t8288;
  t8296 = -0.7055*t8279;
  t8299 = -0.0184*t1538;
  t8303 = 0. + t8296 + t8299;
  t8313 = -0.0216*t8311;
  t8316 = -1.1135*t1890;
  t8320 = 0. + t8313 + t8316;
  t8326 = -1.1135*t8311;
  t8329 = 0.0216*t1890;
  t8331 = 0. + t8326 + t8329;
  t8168 = -1.*t2265;
  t8169 = 1. + t8168;
  t8172 = -0.135*t8169;
  t8175 = -0.1305*t2265*t644;
  t8180 = -0.135*t8179;
  t8183 = 0.049*t2183;
  t8184 = 0. + t8180 + t8183;
  t8186 = t2265*t8184;
  t8204 = t2265*t2183*t8203;
  t8210 = -0.09*t8193;
  t8211 = 0.049*t737;
  t8214 = 0. + t8210 + t8211;
  t8216 = -1.*t2159*t8214;
  t8229 = t3712*t8227;
  t8248 = t3736*t8241;
  t8260 = t3777*t8259;
  t8272 = t3884*t8271;
  t8292 = t3989*t8291;
  t8306 = t4160*t8303;
  t8323 = t4184*t8320;
  t8334 = t4353*t8331;
  t8335 = 0.0306*t4376;
  t8337 = -1.1312*t4508;
  t8339 = 0. + t8172 + t8175 + t8186 + t8204 + t8216 + t8229 + t8248 + t8260 + t8272 + t8292 + t8306 + t8323 + t8334 + t8335 + t8337;
  t8342 = -0.049*t8179;
  t8343 = -0.004500000000000004*t2183;
  t8344 = t644*t8203;
  t8346 = t644*t657*t8227;
  t8347 = -1.*t644*t737*t8241;
  t8349 = t1090*t8259;
  t8353 = t1183*t8271;
  t8355 = t1225*t8291;
  t8359 = t1517*t8303;
  t8360 = t1642*t8320;
  t8361 = t1860*t8331;
  t8370 = 0.0306*t1913;
  t8371 = -1.1312*t2037;
  t8377 = 0. + t8342 + t8343 + t8344 + t8346 + t8347 + t8349 + t8353 + t8355 + t8359 + t8360 + t8361 + t8370 + t8371;
  t8453 = -1.*t6008;
  t8454 = 1. + t8453;
  t8522 = -1.*t6174;
  t8531 = 1. + t8522;
  t8543 = -1.*t6398;
  t8545 = 1. + t8543;
  t8567 = -1.*t6738;
  t8578 = 1. + t8567;
  t8441 = -1.*t273;
  t8447 = 1. + t8441;
  t8493 = -1.*t5924;
  t8495 = 1. + t8493;
  t8498 = -0.049*t8495;
  t8506 = -0.09*t6043;
  t8507 = 0. + t8498 + t8506;
  t8469 = -0.049*t8454;
  t8470 = -0.21*t5955;
  t8474 = 0. + t8469 + t8470;
  t8512 = -0.21*t8454;
  t8513 = 0.049*t5955;
  t8515 = 0. + t8512 + t8513;
  t8534 = -0.2707*t8531;
  t8535 = 0.0016*t5866;
  t8536 = 0. + t8534 + t8535;
  t8538 = -0.0016*t8531;
  t8539 = -0.2707*t5866;
  t8540 = 0. + t8538 + t8539;
  t8552 = 0.0184*t8545;
  t8554 = -0.7055*t5844;
  t8558 = 0. + t8552 + t8554;
  t8560 = -0.7055*t8545;
  t8562 = -0.0184*t5844;
  t8563 = 0. + t8560 + t8562;
  t8580 = -1.1135*t8578;
  t8581 = 0.0216*t5815;
  t8582 = 0. + t8580 + t8581;
  t8584 = -0.0216*t8578;
  t8586 = -1.1135*t5815;
  t8589 = 0. + t8584 + t8586;
  t8608 = 0.135*t8447;
  t8609 = 0.049*t5025;
  t8610 = 0. + t8608 + t8609;
  t8615 = -0.09*t8495;
  t8618 = 0.049*t6043;
  t8620 = 0. + t8615 + t8618;
  t8392 = 0.135*t2159;
  t8393 = -0.1305*t644*t2159;
  t8394 = t2159*t8184;
  t8395 = t2159*t2183*t8203;
  t8398 = t2265*t8214;
  t8400 = t2331*t8227;
  t8401 = t2416*t8241;
  t8405 = t2482*t8259;
  t8407 = t2549*t8271;
  t8413 = t2579*t8291;
  t8414 = t2849*t8303;
  t8415 = t2972*t8320;
  t8420 = t3034*t8331;
  t8426 = 0.0306*t3088;
  t8427 = -1.1312*t3150;
  t8429 = 0. + t8392 + t8393 + t8394 + t8395 + t8398 + t8400 + t8401 + t8405 + t8407 + t8413 + t8414 + t8415 + t8420 + t8426 + t8427;
  t8340 = t3454*t8339;
  t8378 = -1.*t8377*t4536;
  t8380 = t8340 + t8378;
  t8448 = -0.049*t8447;
  t8475 = t273*t5924*t8474;
  t8491 = 0.004500000000000004*t5025;
  t8509 = t273*t8507;
  t8516 = -1.*t273*t8515*t6043;
  t8537 = t8536*t6112;
  t8541 = t8540*t6253;
  t8559 = t8558*t6277;
  t8566 = t8563*t6500;
  t8583 = t8582*t6689;
  t8590 = t8589*t6839;
  t8591 = 0.0306*t6876;
  t8592 = -1.1312*t6922;
  t8593 = 0. + t8448 + t8475 + t8491 + t8509 + t8516 + t8537 + t8541 + t8559 + t8566 + t8583 + t8590 + t8591 + t8592;
  t8599 = -1.*t39;
  t8600 = 1. + t8599;
  t8602 = 0.135*t8600;
  t8604 = 0.1305*t39*t273;
  t8611 = t39*t8610;
  t8612 = t39*t5025*t8507;
  t8621 = -1.*t4930*t8620;
  t8627 = t8474*t7430;
  t8628 = t8515*t7577;
  t8629 = t8536*t7650;
  t8631 = t8540*t7764;
  t8632 = t8558*t7774;
  t8634 = t8563*t7795;
  t8635 = t8582*t7829;
  t8638 = t8589*t7840;
  t8639 = 0.0306*t7844;
  t8647 = -1.1312*t7887;
  t8649 = 0. + t8602 + t8604 + t8611 + t8612 + t8621 + t8627 + t8628 + t8629 + t8631 + t8632 + t8634 + t8635 + t8638 + t8639 + t8647;
  t8652 = -0.135*t4930;
  t8653 = 0.1305*t273*t4930;
  t8654 = t4930*t8610;
  t8656 = t4930*t5025*t8507;
  t8658 = t39*t8620;
  t8659 = t8474*t7918;
  t8660 = t8515*t7964;
  t8663 = t8536*t7974;
  t8665 = t8540*t7992;
  t8666 = t8558*t7999;
  t8667 = t8563*t8014;
  t8669 = t8582*t8018;
  t8671 = t8589*t8035;
  t8676 = 0.0306*t8045;
  t8679 = -1.1312*t8058;
  t8683 = 0. + t8652 + t8653 + t8654 + t8656 + t8658 + t8659 + t8660 + t8663 + t8665 + t8666 + t8667 + t8669 + t8671 + t8676 + t8679;
  t8688 = t2265*t644*t8377;
  t8690 = t2183*t8339;
  t8691 = t8688 + t8690;
  t8386 = t2144*t8339;
  t8387 = -1.*t8377*t4703;
  t8388 = t8386 + t8387;

  p_output1(0)=0. - 1.*t273*t3607*t39*t4904 - 1.*t273*t4904*t4924*t4930 + t4904*t5023*t5025;
  p_output1(1)=0. - 1.*t273*t39*t4904*t5211 - 1.*t273*t4904*t4930*t5331 + t4904*t5025*t5423;
  p_output1(2)=0. - 1.*t273*t39*t4904*t5565 - 1.*t273*t4904*t4930*t5677 + t4904*t5025*t5748;
  p_output1(3)=0.;
  p_output1(4)=0. + t4904*t5023*t7013 + t3607*t4904*t7897 + t4904*t4924*t8077;
  p_output1(5)=0. + t4904*t5423*t7013 + t4904*t5211*t7897 + t4904*t5331*t8077;
  p_output1(6)=0. + t4904*t5748*t7013 + t4904*t5565*t7897 + t4904*t5677*t8077;
  p_output1(7)=0.;
  p_output1(8)=0. + t4904*t5023*t8119 + t3607*t4904*t8128 + t4904*t4924*t8144;
  p_output1(9)=0. + t4904*t5423*t8119 + t4904*t5211*t8128 + t4904*t5331*t8144;
  p_output1(10)=0. + t4904*t5748*t8119 + t4904*t5565*t8128 + t4904*t5677*t8144;
  p_output1(11)=0.;
  p_output1(12)=t4904*(-1.*t3511*t8380 + t3228*t8388 - 1.*t4845*t8429) + t4904*t5023*t8593 + t3607*t4904*t8649 + t4904*t4924*t8683;
  p_output1(13)=t4904*t5423*t8593 + t4904*t5211*t8649 + t4904*t5331*t8683 + t4904*(-1.*t2159*t644*t8380 + t4633*t8429 - 1.*t3228*t8691);
  p_output1(14)=t4904*t5748*t8593 + t4904*t5565*t8649 + t4904*t5677*t8683 + t4904*(t2159*t644*t8388 - 1.*t4755*t8429 + t3511*t8691);
  p_output1(15)=0. + (t4634 + t4780 + t4868)*t4904;
}


       
void H_RightToeBottom_to_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}