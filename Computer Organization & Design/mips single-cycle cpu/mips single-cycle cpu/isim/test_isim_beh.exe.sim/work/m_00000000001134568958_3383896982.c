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
static const char *ng0 = "C:/Users/ydz/Desktop/cod/mips_one_cycle_cpu/pc.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {32767U, 0U};



static void Always_31_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t46[8];
    char t47[8];
    char t48[8];
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
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

LAB11:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB53;

LAB51:    if (*((unsigned int *)t2) == 0)
        goto LAB50;

LAB52:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB53:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);

LAB13:    xsi_set_current_line(35, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(38, ng0);

LAB17:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB37;

LAB38:
LAB39:
LAB20:    goto LAB16;

LAB18:    xsi_set_current_line(40, ng0);

LAB21:    xsi_set_current_line(41, ng0);
    t12 = (t0 + 1848U);
    t13 = *((char **)t12);
    memset(t21, 0, 8);
    t12 = (t21 + 4);
    t19 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (t22 >> 16);
    t24 = (t23 & 1);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t19);
    t26 = (t25 >> 16);
    t27 = (t26 & 1);
    *((unsigned int *)t12) = t27;
    memset(t4, 0, 8);
    t20 = (t21 + 4);
    t28 = *((unsigned int *)t20);
    t29 = (~(t28));
    t30 = *((unsigned int *)t21);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t20) == 0)
        goto LAB22;

LAB24:    t33 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t33) = 1;

LAB25:    t34 = (t4 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t4);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    t12 = (t0 + 1848U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng4)));
    xsi_vlogtype_concat(t21, 32, 32, 2U, t12, 15, t13, 17);
    memset(t4, 0, 8);
    t19 = (t4 + 4);
    t20 = (t21 + 4);
    t7 = *((unsigned int *)t21);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB33;

LAB32:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t16 & 4294967295U);
    t33 = ((char*)((ng3)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t4, 32, t33, 32);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t6, 32, t46, 32);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t47);
    t22 = (t17 & t18);
    *((unsigned int *)t48) = t22;
    t34 = (t5 + 4);
    t40 = (t47 + 4);
    t41 = (t48 + 4);
    t23 = *((unsigned int *)t34);
    t24 = *((unsigned int *)t40);
    t25 = (t23 | t24);
    *((unsigned int *)t41) = t25;
    t26 = *((unsigned int *)t41);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB34;

LAB35:
LAB36:    t44 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t44, t48, 0, 0, 32, 0LL);

LAB28:    goto LAB20;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(42, ng0);
    t40 = (t0 + 2248);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng2)));
    t44 = (t0 + 1848U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t43, 32, t45, 17);
    t44 = ((char*)((ng3)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 32, t46, 32, t44, 32);
    t49 = *((unsigned int *)t42);
    t50 = *((unsigned int *)t47);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t52 = (t42 + 4);
    t53 = (t47 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB29;

LAB30:
LAB31:    t80 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t80, t48, 0, 0, 32, 0LL);
    goto LAB28;

LAB29:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    t62 = (t42 + 4);
    t63 = (t47 + 4);
    t64 = *((unsigned int *)t42);
    t65 = (~(t64));
    t66 = *((unsigned int *)t62);
    t67 = (~(t66));
    t68 = *((unsigned int *)t47);
    t69 = (~(t68));
    t70 = *((unsigned int *)t63);
    t71 = (~(t70));
    t72 = (t65 & t67);
    t73 = (t69 & t71);
    t74 = (~(t72));
    t75 = (~(t73));
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t75);
    t78 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t78 & t74);
    t79 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t79 & t75);
    goto LAB31;

LAB33:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t20);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t19);
    t14 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t11 | t14);
    goto LAB32;

LAB34:    t28 = *((unsigned int *)t48);
    t29 = *((unsigned int *)t41);
    *((unsigned int *)t48) = (t28 | t29);
    t42 = (t5 + 4);
    t43 = (t47 + 4);
    t30 = *((unsigned int *)t5);
    t31 = (~(t30));
    t32 = *((unsigned int *)t42);
    t35 = (~(t32));
    t36 = *((unsigned int *)t47);
    t37 = (~(t36));
    t38 = *((unsigned int *)t43);
    t39 = (~(t38));
    t72 = (t31 & t35);
    t73 = (t37 & t39);
    t49 = (~(t72));
    t50 = (~(t73));
    t51 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t51 & t49);
    t55 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t55 & t50);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & t49);
    t57 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t57 & t50);
    goto LAB36;

LAB37:    xsi_set_current_line(47, ng0);

LAB40:    xsi_set_current_line(48, ng0);
    t5 = (t0 + 1848U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t12 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 16);
    t16 = (t15 & 1);
    *((unsigned int *)t21) = t16;
    t17 = *((unsigned int *)t12);
    t18 = (t17 >> 16);
    t22 = (t18 & 1);
    *((unsigned int *)t5) = t22;
    memset(t4, 0, 8);
    t13 = (t21 + 4);
    t23 = *((unsigned int *)t13);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t13) == 0)
        goto LAB41;

LAB43:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;

LAB44:    t20 = (t4 + 4);
    t28 = *((unsigned int *)t20);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1848U);
    t12 = *((char **)t6);
    t6 = ((char*)((ng4)));
    xsi_vlogtype_concat(t21, 32, 32, 2U, t6, 15, t12, 17);
    memset(t4, 0, 8);
    t13 = (t4 + 4);
    t19 = (t21 + 4);
    t7 = *((unsigned int *)t21);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB49;

LAB48:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 & 4294967295U);
    t20 = ((char*)((ng3)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t4, 32, t20, 32);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t5, 32, t46, 32);
    t33 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t33, t47, 0, 0, 32, 0LL);

LAB47:    goto LAB39;

LAB41:    *((unsigned int *)t4) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(49, ng0);
    t33 = (t0 + 2248);
    t34 = (t33 + 56U);
    t40 = *((char **)t34);
    t41 = (t0 + 1848U);
    t42 = *((char **)t41);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t40, 32, t42, 17);
    t41 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t41, t46, 0, 0, 32, 0LL);
    goto LAB47;

LAB49:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t11 | t14);
    goto LAB48;

LAB50:    *((unsigned int *)t4) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(55, ng0);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t19, 32, t20, 32);
    t33 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t33, t21, 0, 0, 32, 0LL);
    goto LAB56;

}


extern void work_m_00000000001134568958_3383896982_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000001134568958_3383896982", "isim/test_isim_beh.exe.sim/work/m_00000000001134568958_3383896982.didat");
	xsi_register_executes(pe);
}
