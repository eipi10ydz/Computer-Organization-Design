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
static const char *ng0 = "C:/Users/ydz/Desktop/cod/MIPS_multicycle_cpu/regfile.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};



static void Always_36_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    int t37;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 1208U);
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

LAB11:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t2) == 0)
        goto LAB19;

LAB21:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB22:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(49, ng0);

LAB27:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 2728);
    t19 = (t13 + 64U);
    t20 = *((char **)t19);
    t23 = (t0 + 1688U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t4, t21, t12, t20, 2, 1, t24, 5, 2);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t32 = (!(t7));
    t25 = (t21 + 4);
    t8 = *((unsigned int *)t25);
    t34 = (!(t8));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB28;

LAB29:
LAB25:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2888);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);

LAB14:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(41, ng0);
    t13 = ((char*)((ng1)));
    t19 = (t0 + 2728);
    t20 = (t0 + 2728);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2728);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 2888);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t21, t22, t24, t27, 2, 1, t30, 32, 1);
    t31 = (t21 + 4);
    t14 = *((unsigned int *)t31);
    t32 = (!(t14));
    t33 = (t22 + 4);
    t15 = *((unsigned int *)t33);
    t34 = (!(t15));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB14;

LAB17:    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t36 = (t16 - t17);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, *((unsigned int *)t22), t37, 0LL);
    goto LAB18;

LAB19:    *((unsigned int *)t4) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(44, ng0);

LAB26:    xsi_set_current_line(45, ng0);
    t12 = (t0 + 2728);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t0 + 2728);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2728);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t21, 32, t19, t24, t27, 2, 1, t29, 5, 2);
    t28 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t28, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2728);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 2728);
    t20 = (t19 + 64U);
    t23 = *((char **)t20);
    t24 = (t0 + 1528U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t4, 32, t5, t13, t23, 2, 1, t25, 5, 2);
    t24 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t24, t4, 0, 0, 32, 0LL);
    goto LAB25;

LAB28:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t21);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t21), t37, 0LL);
    goto LAB29;

}


extern void work_m_00000000001255047920_3866583278_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000001255047920_3866583278", "isim/test_isim_beh.exe.sim/work/m_00000000001255047920_3866583278.didat");
	xsi_register_executes(pe);
}
