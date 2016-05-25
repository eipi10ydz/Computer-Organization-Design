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
static const char *ng0 = "C:/Users/ydz/Desktop/cod/MIPS_multicycle_cpu/alu.v";
static int ng1[] = {15, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {65535U, 0U};
static int ng4[] = {1, 0};



static void Always_38_0(char *t0)
{
    char t9[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t46[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4256);
    *((int *)t2) = 1;
    t3 = (t0 + 3968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2456U);
    t5 = *((char **)t4);

LAB5:    t4 = (t0 + 472);
    t6 = *((char **)t4);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 32);
    if (t7 == 1)
        goto LAB6;

LAB7:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB8;

LAB9:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB10;

LAB11:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB12;

LAB13:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB14;

LAB15:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t7 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);

LAB23:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2296U);
    t8 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_signed_lshift(t9, 32, t8, 32, t4, 32);
    t10 = (t0 + 3016);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB8:    xsi_set_current_line(46, ng0);

LAB24:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2296U);
    t4 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t8 = (t9 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t9);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2136U);
    t3 = *((char **)t2);
    t2 = (t0 + 2296U);
    t4 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t3, 32, t4, 32);
    t2 = (t0 + 3016);
    xsi_vlogvar_assign_value(t2, t9, 0, 0, 32);

LAB27:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t23, 0, 8);
    t6 = (t23 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t23) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    memset(t9, 0, 8);
    t10 = (t23 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    t19 = *((unsigned int *)t23);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t10) == 0)
        goto LAB30;

LAB32:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;

LAB33:    memset(t24, 0, 8);
    t26 = (t9 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t9);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t26) != 0)
        goto LAB36;

LAB37:    t34 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t34);
    t38 = (t33 || t37);
    if (t38 > 0)
        goto LAB38;

LAB39:    memcpy(t47, t24, 8);

LAB40:    t95 = (t47 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t47);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB54:    goto LAB22;

LAB10:    xsi_set_current_line(57, ng0);

LAB55:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2136U);
    t4 = *((char **)t2);
    t2 = (t0 + 2296U);
    t6 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t4, 32, t6, 32);
    t2 = (t0 + 3016);
    xsi_vlogvar_assign_value(t2, t9, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB12:    xsi_set_current_line(62, ng0);

LAB56:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2136U);
    t4 = *((char **)t2);
    t2 = (t0 + 2296U);
    t6 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_and(t9, 32, t4, 32, t6, 32);
    t2 = (t0 + 3016);
    xsi_vlogvar_assign_value(t2, t9, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB14:    xsi_set_current_line(67, ng0);

LAB57:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2136U);
    t4 = *((char **)t2);
    t2 = (t0 + 2296U);
    t6 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_or(t9, 32, t4, 32, t6, 32);
    t2 = (t0 + 3016);
    xsi_vlogvar_assign_value(t2, t9, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB16:    xsi_set_current_line(72, ng0);

LAB58:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2136U);
    t4 = *((char **)t2);
    t2 = (t0 + 2296U);
    t6 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_xor(t9, 32, t4, 32, t6, 32);
    t2 = (t0 + 3016);
    xsi_vlogvar_assign_value(t2, t9, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB18:    xsi_set_current_line(77, ng0);

LAB59:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2136U);
    t4 = *((char **)t2);
    t2 = (t0 + 2296U);
    t6 = *((char **)t2);
    memset(t23, 0, 8);
    xsi_vlog_signed_bit_or(t23, 32, t4, 32, t6, 32);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t8 = (t23 + 4);
    memcpy(t9, t23, 8);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t2);
    t14 = (t12 | t13);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 4294967295U);
    t10 = (t0 + 3016);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB20:    xsi_set_current_line(82, ng0);

LAB60:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2856);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB22;

LAB25:    xsi_set_current_line(48, ng0);
    t10 = (t0 + 2136U);
    t22 = *((char **)t10);
    t10 = (t0 + 2296U);
    t26 = *((char **)t10);
    memset(t25, 0, 8);
    t10 = (t25 + 4);
    t27 = (t26 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (t28 >> 0);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    *((unsigned int *)t10) = t31;
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 & 65535U);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & 65535U);
    t34 = ((char*)((ng3)));
    xsi_vlogtype_concat(t24, 32, 32, 2U, t34, 16, t25, 16);
    memset(t23, 0, 8);
    t35 = (t23 + 4);
    t36 = (t24 + 4);
    t37 = *((unsigned int *)t24);
    t38 = (~(t37));
    *((unsigned int *)t23) = t38;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t36) != 0)
        goto LAB29;

LAB28:    t43 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t43 & 4294967295U);
    t44 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t44 & 4294967295U);
    t45 = ((char*)((ng4)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t23, 32, t45, 32);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t22, 32, t46, 32);
    t48 = (t0 + 3016);
    xsi_vlogvar_assign_value(t48, t47, 0, 0, 32);
    goto LAB27;

LAB29:    t39 = *((unsigned int *)t23);
    t40 = *((unsigned int *)t36);
    *((unsigned int *)t23) = (t39 | t40);
    t41 = *((unsigned int *)t35);
    t42 = *((unsigned int *)t36);
    *((unsigned int *)t35) = (t41 | t42);
    goto LAB28;

LAB30:    *((unsigned int *)t9) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t24) = 1;
    goto LAB37;

LAB36:    t27 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB37;

LAB38:    t35 = (t0 + 3016);
    t36 = (t35 + 56U);
    t45 = *((char **)t36);
    t48 = ((char*)((ng2)));
    memset(t25, 0, 8);
    t49 = (t45 + 4);
    t50 = (t48 + 4);
    t39 = *((unsigned int *)t45);
    t40 = *((unsigned int *)t48);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t49);
    t43 = *((unsigned int *)t50);
    t44 = (t42 ^ t43);
    t51 = (t41 | t44);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB42;

LAB41:    if (t54 != 0)
        goto LAB43;

LAB44:    memset(t46, 0, 8);
    t58 = (t25 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t25);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t58) != 0)
        goto LAB47;

LAB48:    t65 = *((unsigned int *)t24);
    t66 = *((unsigned int *)t46);
    t67 = (t65 & t66);
    *((unsigned int *)t47) = t67;
    t68 = (t24 + 4);
    t69 = (t46 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB40;

LAB42:    *((unsigned int *)t25) = 1;
    goto LAB44;

LAB43:    t57 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t46) = 1;
    goto LAB48;

LAB47:    t64 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB48;

LAB49:    t76 = *((unsigned int *)t47);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t47) = (t76 | t77);
    t78 = (t24 + 4);
    t79 = (t46 + 4);
    t80 = *((unsigned int *)t24);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t46);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t7 = (t81 & t83);
    t88 = (t85 & t87);
    t89 = (~(t7));
    t90 = (~(t88));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t93 & t89);
    t94 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t94 & t90);
    goto LAB51;

LAB52:    xsi_set_current_line(52, ng0);
    t101 = ((char*)((ng4)));
    t102 = (t0 + 2856);
    xsi_vlogvar_assign_value(t102, t101, 0, 0, 1);
    goto LAB54;

}


extern void work_m_00000000003126355177_2725559894_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000003126355177_2725559894", "isim/top_isim_beh.exe.sim/work/m_00000000003126355177_2725559894.didat");
	xsi_register_executes(pe);
}
