/*
 * Automatically Generated from Mathematica.
 * Mon 26 Feb 2018 15:42:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t120;
  double t256;
  double t484;
  double t599;
  double t778;
  double t817;
  double t872;
  double t1225;
  double t1533;
  double t1549;
  double t1572;
  double t1592;
  double t1325;
  double t1444;
  double t1526;
  double t1637;
  double t1664;
  double t1673;
  double t2033;
  double t2053;
  double t2102;
  double t2136;
  double t1886;
  double t2024;
  double t2025;
  double t2288;
  double t2360;
  double t2381;
  double t2798;
  double t2856;
  double t2864;
  double t2895;
  double t2619;
  double t2647;
  double t2769;
  double t3113;
  double t3126;
  double t3148;
  double t3298;
  double t3321;
  double t3323;
  double t3352;
  double t3248;
  double t3253;
  double t3294;
  double t3473;
  double t3477;
  double t3519;
  double t4264;
  double t4375;
  double t4292;
  double t4296;
  double t4401;
  double t4534;
  double t4315;
  double t4479;
  double t4511;
  double t4257;
  double t4662;
  double t4669;
  double t4805;
  double t4873;
  double t4533;
  double t4821;
  double t4849;
  double t4244;
  double t4877;
  double t4890;
  double t5053;
  double t6036;
  double t4868;
  double t5136;
  double t5249;
  double t4187;
  double t6068;
  double t6227;
  double t6397;
  double t7680;
  double t7660;
  double t7661;
  double t7674;
  double t7689;
  double t7693;
  double t7717;
  double t7726;
  double t7733;
  double t7711;
  double t7745;
  double t7755;
  double t7794;
  double t7797;
  double t7799;
  double t7762;
  double t7802;
  double t7804;
  double t7812;
  double t7828;
  double t7836;
  double t7808;
  double t7842;
  double t7843;
  double t7846;
  double t7849;
  double t7853;
  double t5799;
  double t6719;
  double t6844;
  double t7506;
  double t7527;
  double t7560;
  double t7844;
  double t7854;
  double t7857;
  double t7865;
  double t7866;
  double t7869;
  double t7904;
  double t7905;
  double t7907;
  double t7914;
  double t7917;
  double t7918;
  double t7910;
  double t7919;
  double t7921;
  double t7924;
  double t7926;
  double t7927;
  double t7923;
  double t7928;
  double t7929;
  double t7933;
  double t7935;
  double t7936;
  double t7932;
  double t7939;
  double t7940;
  double t7943;
  double t7945;
  double t7948;
  double t7879;
  double t7883;
  double t7884;
  double t7862;
  double t7873;
  double t7874;
  double t7942;
  double t7950;
  double t7953;
  double t7955;
  double t7956;
  double t7958;
  double t6929;
  double t7591;
  double t7642;
  double t7885;
  double t7890;
  double t7892;
  double t7877;
  double t7893;
  double t368;
  double t405;
  double t475;
  double t508;
  double t531;
  double t851;
  double t886;
  double t1047;
  double t1274;
  double t1282;
  double t1312;
  double t1574;
  double t1593;
  double t1600;
  double t1691;
  double t1748;
  double t1768;
  double t7994;
  double t7996;
  double t7997;
  double t7999;
  double t8000;
  double t8001;
  double t2130;
  double t2140;
  double t2245;
  double t2450;
  double t2465;
  double t2563;
  double t8003;
  double t8004;
  double t8005;
  double t8008;
  double t8011;
  double t8014;
  double t2879;
  double t2956;
  double t3071;
  double t3161;
  double t3179;
  double t3194;
  double t8016;
  double t8017;
  double t8019;
  double t8022;
  double t8023;
  double t8024;
  double t3345;
  double t3394;
  double t3405;
  double t3561;
  double t3603;
  double t3622;
  double t8027;
  double t8028;
  double t8030;
  double t8032;
  double t8033;
  double t8034;
  double t7970;
  double t7972;
  double t7973;
  double t7954;
  double t7961;
  double t7964;
  double t7965;
  double t7966;
  double t7967;
  double t7969;
  double t7974;
  double t7975;
  double t7977;
  double t7978;
  double t7980;
  double t7981;
  double t7982;
  double t7983;
  double t8061;
  double t8062;
  double t8067;
  double t8069;
  double t8070;
  double t8071;
  double t8074;
  double t8077;
  double t8078;
  double t8080;
  double t8081;
  double t8082;
  double t8084;
  double t8087;
  double t8088;
  double t8090;
  double t8091;
  double t8092;
  double t8120;
  double t8121;
  double t8135;
  double t8136;
  double t8146;
  double t8147;
  double t8156;
  double t8157;
  double t8167;
  double t8168;
  double t8114;
  double t8115;
  double t8137;
  double t8138;
  double t8139;
  double t8125;
  double t8126;
  double t8129;
  double t8141;
  double t8142;
  double t8143;
  double t8148;
  double t8149;
  double t8150;
  double t8152;
  double t8153;
  double t8154;
  double t8158;
  double t8159;
  double t8160;
  double t8162;
  double t8163;
  double t8165;
  double t8169;
  double t8170;
  double t8171;
  double t8173;
  double t8174;
  double t8175;
  double t8109;
  double t8110;
  double t8111;
  double t8112;
  double t8116;
  double t8117;
  double t8118;
  double t8119;
  double t8130;
  double t8131;
  double t8132;
  double t8133;
  double t8134;
  double t8140;
  double t8144;
  double t8151;
  double t8155;
  double t8161;
  double t8166;
  double t8172;
  double t8176;
  double t8177;
  double t8178;
  double t8179;
  double t8181;
  double t8182;
  double t8183;
  double t8184;
  double t8185;
  double t8186;
  double t8187;
  double t8188;
  double t8189;
  double t8190;
  double t8191;
  double t8192;
  double t8193;
  double t8194;
  double t247;
  double t262;
  double t574;
  double t1111;
  double t1324;
  double t1619;
  double t1837;
  double t2277;
  double t2617;
  double t3098;
  double t3243;
  double t3409;
  double t3623;
  double t3703;
  double t3704;
  double t3740;
  double t3742;
  double t3816;
  double t3832;
  double t3936;
  double t3958;
  double t4154;
  double t8054;
  double t8057;
  double t8058;
  double t8059;
  double t8060;
  double t8068;
  double t8072;
  double t8079;
  double t8083;
  double t8089;
  double t8093;
  double t8094;
  double t8097;
  double t8098;
  double t8099;
  double t8100;
  double t8101;
  double t8102;
  double t8103;
  double t8104;
  double t7986;
  double t7988;
  double t7989;
  double t7990;
  double t7991;
  double t7992;
  double t7993;
  double t7998;
  double t8002;
  double t8006;
  double t8015;
  double t8020;
  double t8025;
  double t8031;
  double t8035;
  double t8036;
  double t8038;
  double t8039;
  double t8040;
  double t8041;
  double t8042;
  double t8043;
  double t8044;
  double t8047;
  double t8202;
  double t8203;
  double t8204;
  double t8205;
  double t8206;
  double t8207;
  double t8208;
  double t8209;
  double t8210;
  double t8211;
  double t8212;
  double t8213;
  double t8214;
  double t8215;
  double t8216;
  double t8217;
  double t8180;
  double t8195;
  double t8196;
  double t8234;
  double t8235;
  double t8236;
  double t8198;
  double t8199;
  double t8200;
  t120 = Sin(var1[7]);
  t256 = Cos(var1[8]);
  t484 = Sin(var1[8]);
  t599 = Cos(var1[9]);
  t778 = -1.*t599;
  t817 = 1. + t778;
  t872 = Sin(var1[9]);
  t1225 = Cos(var1[7]);
  t1533 = Cos(var1[10]);
  t1549 = -1.*t1533;
  t1572 = 1. + t1549;
  t1592 = Sin(var1[10]);
  t1325 = t599*t120*t484;
  t1444 = t1225*t872;
  t1526 = t1325 + t1444;
  t1637 = t1225*t599;
  t1664 = -1.*t120*t484*t872;
  t1673 = t1637 + t1664;
  t2033 = Cos(var1[11]);
  t2053 = -1.*t2033;
  t2102 = 1. + t2053;
  t2136 = Sin(var1[11]);
  t1886 = t1533*t1526;
  t2024 = t1673*t1592;
  t2025 = t1886 + t2024;
  t2288 = t1533*t1673;
  t2360 = -1.*t1526*t1592;
  t2381 = t2288 + t2360;
  t2798 = Cos(var1[12]);
  t2856 = -1.*t2798;
  t2864 = 1. + t2856;
  t2895 = Sin(var1[12]);
  t2619 = t2033*t2025;
  t2647 = t2381*t2136;
  t2769 = t2619 + t2647;
  t3113 = t2033*t2381;
  t3126 = -1.*t2025*t2136;
  t3148 = t3113 + t3126;
  t3298 = Cos(var1[13]);
  t3321 = -1.*t3298;
  t3323 = 1. + t3321;
  t3352 = Sin(var1[13]);
  t3248 = t2798*t2769;
  t3253 = t3148*t2895;
  t3294 = t3248 + t3253;
  t3473 = t2798*t3148;
  t3477 = -1.*t2769*t2895;
  t3519 = t3473 + t3477;
  t4264 = Cos(var1[1]);
  t4375 = Cos(var1[3]);
  t4292 = Cos(var1[2]);
  t4296 = Sin(var1[3]);
  t4401 = Sin(var1[2]);
  t4534 = Cos(var1[4]);
  t4315 = -1.*t4264*t4292*t4296;
  t4479 = -1.*t4375*t4264*t4401;
  t4511 = t4315 + t4479;
  t4257 = Sin(var1[4]);
  t4662 = t4375*t4264*t4292;
  t4669 = -1.*t4264*t4296*t4401;
  t4805 = t4662 + t4669;
  t4873 = Cos(var1[5]);
  t4533 = t4257*t4511;
  t4821 = t4534*t4805;
  t4849 = t4533 + t4821;
  t4244 = Sin(var1[5]);
  t4877 = t4534*t4511;
  t4890 = -1.*t4257*t4805;
  t5053 = t4877 + t4890;
  t6036 = Cos(var1[6]);
  t4868 = -1.*t4244*t4849;
  t5136 = t4873*t5053;
  t5249 = t4868 + t5136;
  t4187 = Sin(var1[6]);
  t6068 = t4873*t4849;
  t6227 = t4244*t5053;
  t6397 = t6068 + t6227;
  t7680 = Sin(var1[0]);
  t7660 = Cos(var1[0]);
  t7661 = Sin(var1[1]);
  t7674 = t7660*t4292*t7661;
  t7689 = -1.*t7680*t4401;
  t7693 = t7674 + t7689;
  t7717 = -1.*t4292*t7680;
  t7726 = -1.*t7660*t7661*t4401;
  t7733 = t7717 + t7726;
  t7711 = -1.*t4296*t7693;
  t7745 = t4375*t7733;
  t7755 = t7711 + t7745;
  t7794 = t4375*t7693;
  t7797 = t4296*t7733;
  t7799 = t7794 + t7797;
  t7762 = t4257*t7755;
  t7802 = t4534*t7799;
  t7804 = t7762 + t7802;
  t7812 = t4534*t7755;
  t7828 = -1.*t4257*t7799;
  t7836 = t7812 + t7828;
  t7808 = -1.*t4244*t7804;
  t7842 = t4873*t7836;
  t7843 = t7808 + t7842;
  t7846 = t4873*t7804;
  t7849 = t4244*t7836;
  t7853 = t7846 + t7849;
  t5799 = t4187*t5249;
  t6719 = t6036*t6397;
  t6844 = t5799 + t6719;
  t7506 = t6036*t5249;
  t7527 = -1.*t4187*t6397;
  t7560 = t7506 + t7527;
  t7844 = t4187*t7843;
  t7854 = t6036*t7853;
  t7857 = t7844 + t7854;
  t7865 = t6036*t7843;
  t7866 = -1.*t4187*t7853;
  t7869 = t7865 + t7866;
  t7904 = t4292*t7680*t7661;
  t7905 = t7660*t4401;
  t7907 = t7904 + t7905;
  t7914 = t7660*t4292;
  t7917 = -1.*t7680*t7661*t4401;
  t7918 = t7914 + t7917;
  t7910 = -1.*t4296*t7907;
  t7919 = t4375*t7918;
  t7921 = t7910 + t7919;
  t7924 = t4375*t7907;
  t7926 = t4296*t7918;
  t7927 = t7924 + t7926;
  t7923 = t4257*t7921;
  t7928 = t4534*t7927;
  t7929 = t7923 + t7928;
  t7933 = t4534*t7921;
  t7935 = -1.*t4257*t7927;
  t7936 = t7933 + t7935;
  t7932 = -1.*t4244*t7929;
  t7939 = t4873*t7936;
  t7940 = t7932 + t7939;
  t7943 = t4873*t7929;
  t7945 = t4244*t7936;
  t7948 = t7943 + t7945;
  t7879 = -0.766044*t6844;
  t7883 = 0.642788*t7560;
  t7884 = t7879 + t7883;
  t7862 = -0.766044*t7857;
  t7873 = 0.642788*t7869;
  t7874 = t7862 + t7873;
  t7942 = t4187*t7940;
  t7950 = t6036*t7948;
  t7953 = t7942 + t7950;
  t7955 = t6036*t7940;
  t7956 = -1.*t4187*t7948;
  t7958 = t7955 + t7956;
  t6929 = 0.642788*t6844;
  t7591 = 0.766044*t7560;
  t7642 = t6929 + t7591;
  t7885 = 0.642788*t7857;
  t7890 = 0.766044*t7869;
  t7892 = t7885 + t7890;
  t7877 = t7642*t7874;
  t7893 = -1.*t7884*t7892;
  t368 = -1.*t256;
  t405 = 1. + t368;
  t475 = -0.135*t405;
  t508 = 0.049*t484;
  t531 = 0. + t475 + t508;
  t851 = -0.049*t817;
  t886 = -0.09*t872;
  t1047 = 0. + t851 + t886;
  t1274 = -0.09*t817;
  t1282 = 0.049*t872;
  t1312 = 0. + t1274 + t1282;
  t1574 = -0.049*t1572;
  t1593 = -0.21*t1592;
  t1600 = 0. + t1574 + t1593;
  t1691 = -0.21*t1572;
  t1748 = 0.049*t1592;
  t1768 = 0. + t1691 + t1748;
  t7994 = t1225*t599*t484;
  t7996 = -1.*t120*t872;
  t7997 = t7994 + t7996;
  t7999 = -1.*t599*t120;
  t8000 = -1.*t1225*t484*t872;
  t8001 = t7999 + t8000;
  t2130 = -0.0016*t2102;
  t2140 = -0.2707*t2136;
  t2245 = 0. + t2130 + t2140;
  t2450 = -0.2707*t2102;
  t2465 = 0.0016*t2136;
  t2563 = 0. + t2450 + t2465;
  t8003 = t1533*t7997;
  t8004 = t8001*t1592;
  t8005 = t8003 + t8004;
  t8008 = t1533*t8001;
  t8011 = -1.*t7997*t1592;
  t8014 = t8008 + t8011;
  t2879 = 0.0184*t2864;
  t2956 = -0.7055*t2895;
  t3071 = 0. + t2879 + t2956;
  t3161 = -0.7055*t2864;
  t3179 = -0.0184*t2895;
  t3194 = 0. + t3161 + t3179;
  t8016 = t2033*t8005;
  t8017 = t8014*t2136;
  t8019 = t8016 + t8017;
  t8022 = t2033*t8014;
  t8023 = -1.*t8005*t2136;
  t8024 = t8022 + t8023;
  t3345 = -0.0216*t3323;
  t3394 = -1.1135*t3352;
  t3405 = 0. + t3345 + t3394;
  t3561 = -1.1135*t3323;
  t3603 = 0.0216*t3352;
  t3622 = 0. + t3561 + t3603;
  t8027 = t2798*t8019;
  t8028 = t8024*t2895;
  t8030 = t8027 + t8028;
  t8032 = t2798*t8024;
  t8033 = -1.*t8019*t2895;
  t8034 = t8032 + t8033;
  t7970 = -0.766044*t7953;
  t7972 = 0.642788*t7958;
  t7973 = t7970 + t7972;
  t7954 = 0.642788*t7953;
  t7961 = 0.766044*t7958;
  t7964 = t7954 + t7961;
  t7965 = t7660*t4264*t7884;
  t7966 = t7661*t7874;
  t7967 = t7965 + t7966;
  t7969 = -1.*t7964*t7967;
  t7974 = t7660*t4264*t7642;
  t7975 = t7661*t7892;
  t7977 = t7974 + t7975;
  t7978 = t7973*t7977;
  t7980 = t7877 + t7893;
  t7981 = -1.*t4264*t7680*t7980;
  t7982 = 0. + t7969 + t7978 + t7981;
  t7983 = 1/t7982;
  t8061 = t256*t599*t1533;
  t8062 = -1.*t256*t872*t1592;
  t8067 = t8061 + t8062;
  t8069 = -1.*t256*t1533*t872;
  t8070 = -1.*t256*t599*t1592;
  t8071 = t8069 + t8070;
  t8074 = t2033*t8067;
  t8077 = t8071*t2136;
  t8078 = t8074 + t8077;
  t8080 = t2033*t8071;
  t8081 = -1.*t8067*t2136;
  t8082 = t8080 + t8081;
  t8084 = t2798*t8078;
  t8087 = t8082*t2895;
  t8088 = t8084 + t8087;
  t8090 = t2798*t8082;
  t8091 = -1.*t8078*t2895;
  t8092 = t8090 + t8091;
  t8120 = -1.*t4292;
  t8121 = 1. + t8120;
  t8135 = -1.*t4375;
  t8136 = 1. + t8135;
  t8146 = -1.*t4534;
  t8147 = 1. + t8146;
  t8156 = -1.*t4873;
  t8157 = 1. + t8156;
  t8167 = -1.*t6036;
  t8168 = 1. + t8167;
  t8114 = -1.*t4264;
  t8115 = 1. + t8114;
  t8137 = -0.049*t8136;
  t8138 = -0.21*t4296;
  t8139 = 0. + t8137 + t8138;
  t8125 = -0.049*t8121;
  t8126 = -0.09*t4401;
  t8129 = 0. + t8125 + t8126;
  t8141 = -0.21*t8136;
  t8142 = 0.049*t4296;
  t8143 = 0. + t8141 + t8142;
  t8148 = -0.2707*t8147;
  t8149 = 0.0016*t4257;
  t8150 = 0. + t8148 + t8149;
  t8152 = -0.0016*t8147;
  t8153 = -0.2707*t4257;
  t8154 = 0. + t8152 + t8153;
  t8158 = 0.0184*t8157;
  t8159 = -0.7055*t4244;
  t8160 = 0. + t8158 + t8159;
  t8162 = -0.7055*t8157;
  t8163 = -0.0184*t4244;
  t8165 = 0. + t8162 + t8163;
  t8169 = -1.1135*t8168;
  t8170 = 0.0216*t4187;
  t8171 = 0. + t8169 + t8170;
  t8173 = -0.0216*t8168;
  t8174 = -1.1135*t4187;
  t8175 = 0. + t8173 + t8174;
  t8109 = -1.*t7660;
  t8110 = 1. + t8109;
  t8111 = 0.135*t8110;
  t8112 = 0.1305*t7660*t4264;
  t8116 = 0.135*t8115;
  t8117 = 0.049*t7661;
  t8118 = 0. + t8116 + t8117;
  t8119 = t7660*t8118;
  t8130 = t7660*t7661*t8129;
  t8131 = -0.09*t8121;
  t8132 = 0.049*t4401;
  t8133 = 0. + t8131 + t8132;
  t8134 = -1.*t7680*t8133;
  t8140 = t8139*t7693;
  t8144 = t8143*t7733;
  t8151 = t8150*t7755;
  t8155 = t8154*t7799;
  t8161 = t8160*t7804;
  t8166 = t8165*t7836;
  t8172 = t8171*t7843;
  t8176 = t8175*t7853;
  t8177 = 0.0306*t7857;
  t8178 = -1.1312*t7869;
  t8179 = 0. + t8111 + t8112 + t8119 + t8130 + t8134 + t8140 + t8144 + t8151 + t8155 + t8161 + t8166 + t8172 + t8176 + t8177 + t8178;
  t8181 = -0.049*t8115;
  t8182 = t4264*t4292*t8139;
  t8183 = 0.004500000000000004*t7661;
  t8184 = t4264*t8129;
  t8185 = -1.*t4264*t8143*t4401;
  t8186 = t8150*t4511;
  t8187 = t8154*t4805;
  t8188 = t8160*t4849;
  t8189 = t8165*t5053;
  t8190 = t8171*t5249;
  t8191 = t8175*t6397;
  t8192 = 0.0306*t6844;
  t8193 = -1.1312*t7560;
  t8194 = 0. + t8181 + t8182 + t8183 + t8184 + t8185 + t8186 + t8187 + t8188 + t8189 + t8190 + t8191 + t8192 + t8193;
  t247 = 0.135*t120;
  t262 = -0.1305*t256*t120;
  t574 = t120*t531;
  t1111 = t120*t484*t1047;
  t1324 = t1225*t1312;
  t1619 = t1526*t1600;
  t1837 = t1673*t1768;
  t2277 = t2025*t2245;
  t2617 = t2381*t2563;
  t3098 = t2769*t3071;
  t3243 = t3148*t3194;
  t3409 = t3294*t3405;
  t3623 = t3519*t3622;
  t3703 = t3298*t3294;
  t3704 = t3519*t3352;
  t3740 = t3703 + t3704;
  t3742 = 0.0306*t3740;
  t3816 = t3298*t3519;
  t3832 = -1.*t3294*t3352;
  t3936 = t3816 + t3832;
  t3958 = -1.1312*t3936;
  t4154 = 0. + t247 + t262 + t574 + t1111 + t1324 + t1619 + t1837 + t2277 + t2617 + t3098 + t3243 + t3409 + t3623 + t3742 + t3958;
  t8054 = -0.049*t405;
  t8057 = -0.004500000000000004*t484;
  t8058 = t256*t1047;
  t8059 = t256*t599*t1600;
  t8060 = -1.*t256*t872*t1768;
  t8068 = t8067*t2245;
  t8072 = t8071*t2563;
  t8079 = t8078*t3071;
  t8083 = t8082*t3194;
  t8089 = t8088*t3405;
  t8093 = t8092*t3622;
  t8094 = t3298*t8088;
  t8097 = t8092*t3352;
  t8098 = t8094 + t8097;
  t8099 = 0.0306*t8098;
  t8100 = t3298*t8092;
  t8101 = -1.*t8088*t3352;
  t8102 = t8100 + t8101;
  t8103 = -1.1312*t8102;
  t8104 = 0. + t8054 + t8057 + t8058 + t8059 + t8060 + t8068 + t8072 + t8079 + t8083 + t8089 + t8093 + t8099 + t8103;
  t7986 = -1.*t1225;
  t7988 = 1. + t7986;
  t7989 = -0.135*t7988;
  t7990 = -0.1305*t1225*t256;
  t7991 = t1225*t531;
  t7992 = t1225*t484*t1047;
  t7993 = -1.*t120*t1312;
  t7998 = t7997*t1600;
  t8002 = t8001*t1768;
  t8006 = t8005*t2245;
  t8015 = t8014*t2563;
  t8020 = t8019*t3071;
  t8025 = t8024*t3194;
  t8031 = t8030*t3405;
  t8035 = t8034*t3622;
  t8036 = t3298*t8030;
  t8038 = t8034*t3352;
  t8039 = t8036 + t8038;
  t8040 = 0.0306*t8039;
  t8041 = t3298*t8034;
  t8042 = -1.*t8030*t3352;
  t8043 = t8041 + t8042;
  t8044 = -1.1312*t8043;
  t8047 = 0. + t7989 + t7990 + t7991 + t7992 + t7993 + t7998 + t8002 + t8006 + t8015 + t8020 + t8025 + t8031 + t8035 + t8040 + t8044;
  t8202 = -0.135*t7680;
  t8203 = 0.1305*t4264*t7680;
  t8204 = t7680*t8118;
  t8205 = t7680*t7661*t8129;
  t8206 = t7660*t8133;
  t8207 = t8139*t7907;
  t8208 = t8143*t7918;
  t8209 = t8150*t7921;
  t8210 = t8154*t7927;
  t8211 = t8160*t7929;
  t8212 = t8165*t7936;
  t8213 = t8171*t7940;
  t8214 = t8175*t7948;
  t8215 = 0.0306*t7953;
  t8216 = -1.1312*t7958;
  t8217 = 0. + t8202 + t8203 + t8204 + t8205 + t8206 + t8207 + t8208 + t8209 + t8210 + t8211 + t8212 + t8213 + t8214 + t8215 + t8216;
  t8180 = t7884*t8179;
  t8195 = -1.*t8194*t7874;
  t8196 = t8180 + t8195;
  t8234 = t7660*t4264*t8194;
  t8235 = t7661*t8179;
  t8236 = t8234 + t8235;
  t8198 = t7642*t8179;
  t8199 = -1.*t8194*t7892;
  t8200 = t8198 + t8199;
  p_output1[0]=t4154*(0. + t7877 + t7893)*t7983 + (0. + t7884*t7964 - 1.*t7642*t7973)*t7983*t8047 + (0. - 1.*t7874*t7964 + t7892*t7973)*t7983*t8104 + t7983*(-1.*t7964*t8196 + t7973*t8200 - 1.*t7980*t8217);
  p_output1[1]=t4154*(0. - 1.*t7661*t7874 - 1.*t4264*t7660*t7884)*t7983 + (0. + t4264*t7680*t7884 + t7661*t7973)*t7983*t8047 + (0. - 1.*t4264*t7680*t7874 + t4264*t7660*t7973)*t7983*t8104 + t7983*(-1.*t4264*t7680*t8196 + t7967*t8217 - 1.*t7973*t8236);
  p_output1[2]=t4154*(0. + t7974 + t7975)*t7983 + (0. - 1.*t4264*t7642*t7680 - 1.*t7661*t7964)*t7983*t8047 + (0. + t4264*t7680*t7892 - 1.*t4264*t7660*t7964)*t7983*t8104 + t7983*(t4264*t7680*t8200 - 1.*t7977*t8217 + t7964*t8236);
}



void p_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
