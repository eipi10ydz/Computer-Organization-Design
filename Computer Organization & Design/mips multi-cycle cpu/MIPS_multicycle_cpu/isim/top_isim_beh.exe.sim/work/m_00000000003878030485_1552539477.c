/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ydz/Desktop/cod/MIPS_multicycle_cpu/cu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {43U, 0U};
static unsigned int ng6[] = {35U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {2U, 0U};
static int ng9[] = {7, 0};
static unsigned int ng10[] = {15U, 0U};
static unsigned int ng11[] = {13U, 0U};
static int ng12[] = {4, 0};



static void Always_58_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 6080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6896);
    *((int *)t2) = 1;
    t3 = (t0 + 6112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 2840U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(65, ng0);

LAB14:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3000U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t21 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t21 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng10)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t21 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng11)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t21 == 1)
        goto LAB30;

LAB31:
LAB32:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(61, ng0);

LAB13:    xsi_set_current_line(62, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(68, ng0);
    t5 = (t0 + 3400);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 608);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t20 = (t19 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB36;

LAB33:    if (t18 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t4) = 1;

LAB36:    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 744);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t19 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB44;

LAB41:    if (t18 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t4) = 1;

LAB44:    t24 = (t4 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 880);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t19 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t4) = 1;

LAB52:    t24 = (t4 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB53;

LAB54:
LAB55:
LAB47:
LAB39:    goto LAB32;

LAB18:    xsi_set_current_line(90, ng0);
    t5 = (t0 + 3400);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 608);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t20 = (t19 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB60;

LAB57:    if (t18 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t4) = 1;

LAB60:    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 744);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t19 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB68;

LAB65:    if (t18 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t4) = 1;

LAB68:    t24 = (t4 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 880);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t19 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB76;

LAB73:    if (t18 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t4) = 1;

LAB76:    t24 = (t4 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB77;

LAB78:
LAB79:
LAB71:
LAB63:    goto LAB32;

LAB20:    xsi_set_current_line(112, ng0);
    t5 = (t0 + 3400);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 608);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t20 = (t19 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB84;

LAB81:    if (t18 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t4) = 1;

LAB84:    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 744);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t19 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB92;

LAB89:    if (t18 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t4) = 1;

LAB92:    t24 = (t4 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB93;

LAB94:
LAB95:
LAB87:    goto LAB32;

LAB22:    xsi_set_current_line(131, ng0);
    t5 = (t0 + 3400);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 608);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t20 = (t19 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB100;

LAB97:    if (t18 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t4) = 1;

LAB100:    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 744);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t19 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB108;

LAB105:    if (t18 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t4) = 1;

LAB108:    t24 = (t4 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 880);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t19 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB116;

LAB113:    if (t18 != 0)
        goto LAB115;

LAB114:    *((unsigned int *)t4) = 1;

LAB116:    t24 = (t4 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB117;

LAB118:
LAB119:
LAB111:
LAB103:    goto LAB32;

LAB24:    xsi_set_current_line(154, ng0);
    t5 = (t0 + 3400);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 608);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t20 = (t19 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB124;

LAB121:    if (t18 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t4) = 1;

LAB124:    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(168, ng0);

LAB129:    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);

LAB127:    goto LAB32;

LAB26:    xsi_set_current_line(172, ng0);
    t5 = (t0 + 3400);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 608);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t20 = (t19 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB133;

LAB130:    if (t18 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t4) = 1;

LAB133:    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB134;

LAB135:    xsi_set_current_line(186, ng0);

LAB138:    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);

LAB136:    goto LAB32;

LAB28:    xsi_set_current_line(190, ng0);

LAB139:    xsi_set_current_line(191, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB32;

LAB30:    xsi_set_current_line(203, ng0);

LAB140:    xsi_set_current_line(204, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng12)));
    t5 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB32;

LAB35:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(69, ng0);

LAB40:    xsi_set_current_line(70, ng0);
    t31 = ((char*)((ng1)));
    t32 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB39;

LAB43:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(82, ng0);

LAB48:    xsi_set_current_line(83, ng0);
    t25 = ((char*)((ng3)));
    t31 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 1, 0LL);
    goto LAB47;

LAB51:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(86, ng0);

LAB56:    xsi_set_current_line(87, ng0);
    t25 = ((char*)((ng1)));
    t31 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 1, 0LL);
    goto LAB55;

LAB59:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(91, ng0);

LAB64:    xsi_set_current_line(92, ng0);
    t31 = ((char*)((ng1)));
    t32 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB63;

LAB67:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(104, ng0);

LAB72:    xsi_set_current_line(105, ng0);
    t25 = ((char*)((ng3)));
    t31 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 1, 0LL);
    goto LAB71;

LAB75:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(108, ng0);

LAB80:    xsi_set_current_line(109, ng0);
    t25 = ((char*)((ng1)));
    t31 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 1, 0LL);
    goto LAB79;

LAB83:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(113, ng0);

LAB88:    xsi_set_current_line(114, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB87;

LAB91:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(126, ng0);

LAB96:    xsi_set_current_line(127, ng0);
    t25 = ((char*)((ng1)));
    t31 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB95;

LAB99:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(132, ng0);

LAB104:    xsi_set_current_line(133, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB103;

LAB107:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(145, ng0);

LAB112:    xsi_set_current_line(146, ng0);
    t25 = ((char*)((ng1)));
    t31 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB111;

LAB115:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB116;

LAB117:    xsi_set_current_line(150, ng0);

LAB120:    xsi_set_current_line(151, ng0);
    t25 = ((char*)((ng1)));
    t31 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t31, t25, 0, 0, 1, 0LL);
    goto LAB119;

LAB123:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB124;

LAB125:    xsi_set_current_line(155, ng0);

LAB128:    xsi_set_current_line(156, ng0);
    t31 = ((char*)((ng1)));
    t32 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB127;

LAB132:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB133;

LAB134:    xsi_set_current_line(173, ng0);

LAB137:    xsi_set_current_line(174, ng0);
    t31 = ((char*)((ng1)));
    t32 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng9)));
    t5 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB136;

}

static void Always_218_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 6328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 6912);
    *((int *)t2) = 1;
    t3 = (t0 + 6360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(219, ng0);

LAB5:    xsi_set_current_line(220, ng0);
    t5 = (t0 + 2840U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 5160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3400);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(221, ng0);
    t19 = (t0 + 472);
    t20 = *((char **)t19);
    t19 = (t0 + 3400);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 3, 0LL);
    goto LAB12;

}

static void Always_226_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;

LAB0:    t1 = (t0 + 6576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 6928);
    *((int *)t2) = 1;
    t3 = (t0 + 6608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(227, ng0);

LAB5:    xsi_set_current_line(228, ng0);
    t4 = (t0 + 3400);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(230, ng0);
    t7 = (t0 + 608);
    t10 = *((char **)t7);
    t7 = (t0 + 5160);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 3);
    goto LAB15;

LAB9:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t2 = (t0 + 5160);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 3);
    goto LAB15;

LAB11:    xsi_set_current_line(234, ng0);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t2 = (t0 + 5160);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 3);
    goto LAB15;

LAB13:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 472);
    t4 = *((char **)t2);
    t2 = (t0 + 5160);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 3);
    goto LAB15;

}


extern void work_m_00000000003878030485_1552539477_init()
{
	static char *pe[] = {(void *)Always_58_0,(void *)Always_218_1,(void *)Always_226_2};
	xsi_register_didat("work_m_00000000003878030485_1552539477", "isim/top_isim_beh.exe.sim/work/m_00000000003878030485_1552539477.didat");
	xsi_register_executes(pe);
}
