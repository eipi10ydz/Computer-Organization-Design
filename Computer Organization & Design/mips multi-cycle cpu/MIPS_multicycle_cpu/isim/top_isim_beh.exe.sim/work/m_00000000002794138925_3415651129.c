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
static const char *ng0 = "C:/Users/ydz/Desktop/cod/MIPS_multicycle_cpu/sign_extend.v";
static unsigned int ng1[] = {7U, 0U};
static int ng2[] = {2, 0};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {0U, 0U};



static void Always_30_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;

LAB0:    t1 = (t0 + 2800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3120);
    *((int *)t2) = 1;
    t3 = (t0 + 2832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    xsi_vlogtype_concat(t9, 18, 18, 2U, t2, 2, t3, 16);
    t4 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t4, t9, 0, 0, 18, 0LL);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 1480U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 18, t8, 16, t7, 32);
    t10 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 18, 0LL);
    goto LAB13;

LAB9:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 18, t4, 16, t3, 32);
    t7 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 18, 0LL);
    goto LAB13;

}


extern void work_m_00000000002794138925_3415651129_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000002794138925_3415651129", "isim/top_isim_beh.exe.sim/work/m_00000000002794138925_3415651129.didat");
	xsi_register_executes(pe);
}
