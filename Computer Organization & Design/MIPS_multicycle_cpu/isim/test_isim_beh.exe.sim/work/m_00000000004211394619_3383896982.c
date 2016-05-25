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
static const char *ng0 = "C:/Users/ydz/Desktop/cod/MIPS_multicycle_cpu/pc.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {16383U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};



static void Always_39_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t46[8];
    char t47[8];
    char t79[8];
    char t93[8];
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
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t94;

LAB0:    t1 = (t0 + 4032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4848);
    *((int *)t2) = 1;
    t3 = (t0 + 4064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t5 = (t0 + 1752U);
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

LAB11:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2232U);
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

LAB53:    memset(t21, 0, 8);
    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t6) != 0)
        goto LAB56;

LAB57:    t13 = (t21 + 4);
    t22 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t13);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB58;

LAB59:    memcpy(t79, t21, 8);

LAB60:    t78 = (t79 + 4);
    t84 = *((unsigned int *)t78);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB72;

LAB73:
LAB74:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(46, ng0);

LAB17:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 1912U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2072U);
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

LAB18:    xsi_set_current_line(48, ng0);

LAB21:    xsi_set_current_line(49, ng0);
    t12 = (t0 + 2392U);
    t13 = *((char **)t12);
    memset(t21, 0, 8);
    t12 = (t21 + 4);
    t19 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (t22 >> 17);
    t24 = (t23 & 1);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t19);
    t26 = (t25 >> 17);
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

LAB27:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    t12 = (t0 + 2392U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng3)));
    xsi_vlogtype_concat(t21, 32, 32, 2U, t12, 14, t13, 18);
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
    t33 = ((char*)((ng4)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t4, 32, t33, 32);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t6, 32, t46, 32);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t47);
    t22 = (t17 & t18);
    *((unsigned int *)t79) = t22;
    t34 = (t5 + 4);
    t40 = (t47 + 4);
    t41 = (t79 + 4);
    t23 = *((unsigned int *)t34);
    t24 = *((unsigned int *)t40);
    t25 = (t23 | t24);
    *((unsigned int *)t41) = t25;
    t26 = *((unsigned int *)t41);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB34;

LAB35:
LAB36:    t44 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t44, t79, 0, 0, 32, 0LL);

LAB28:    goto LAB20;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(50, ng0);
    t40 = (t0 + 2792);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng2)));
    t44 = (t0 + 2392U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t43, 32, t45, 18);
    t48 = *((unsigned int *)t42);
    t49 = *((unsigned int *)t46);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t44 = (t42 + 4);
    t51 = (t46 + 4);
    t52 = (t47 + 4);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB29;

LAB30:
LAB31:    t78 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t78, t47, 0, 0, 32, 0LL);
    goto LAB28;

LAB29:    t58 = *((unsigned int *)t47);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t47) = (t58 | t59);
    t60 = (t42 + 4);
    t61 = (t46 + 4);
    t62 = *((unsigned int *)t42);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t46);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t70 = (t63 & t65);
    t71 = (t67 & t69);
    t72 = (~(t70));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t72);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t76 & t72);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    goto LAB31;

LAB33:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t20);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t19);
    t14 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t11 | t14);
    goto LAB32;

LAB34:    t28 = *((unsigned int *)t79);
    t29 = *((unsigned int *)t41);
    *((unsigned int *)t79) = (t28 | t29);
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
    t70 = (t31 & t35);
    t71 = (t37 & t39);
    t48 = (~(t70));
    t49 = (~(t71));
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & t48);
    t53 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t53 & t49);
    t54 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t54 & t48);
    t55 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t55 & t49);
    goto LAB36;

LAB37:    xsi_set_current_line(55, ng0);

LAB40:    xsi_set_current_line(56, ng0);
    t5 = (t0 + 2392U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t12 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 17);
    t16 = (t15 & 1);
    *((unsigned int *)t21) = t16;
    t17 = *((unsigned int *)t12);
    t18 = (t17 >> 17);
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

LAB46:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2392U);
    t12 = *((char **)t6);
    t6 = ((char*)((ng3)));
    xsi_vlogtype_concat(t21, 32, 32, 2U, t6, 14, t12, 18);
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
    t20 = ((char*)((ng4)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t4, 32, t20, 32);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t5, 32, t46, 32);
    t33 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t33, t47, 0, 0, 32, 0LL);

LAB47:    goto LAB39;

LAB41:    *((unsigned int *)t4) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(57, ng0);
    t33 = (t0 + 2792);
    t34 = (t33 + 56U);
    t40 = *((char **)t34);
    t41 = (t0 + 2392U);
    t42 = *((char **)t41);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t40, 32, t42, 18);
    t41 = (t0 + 2792);
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

LAB54:    *((unsigned int *)t21) = 1;
    goto LAB57;

LAB56:    t12 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB57;

LAB58:    t19 = (t0 + 2952);
    t20 = (t19 + 56U);
    t33 = *((char **)t20);
    t34 = (t0 + 608);
    t40 = *((char **)t34);
    memset(t46, 0, 8);
    t34 = (t33 + 4);
    t41 = (t40 + 4);
    t25 = *((unsigned int *)t33);
    t26 = *((unsigned int *)t40);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t34);
    t29 = *((unsigned int *)t41);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t34);
    t35 = *((unsigned int *)t41);
    t36 = (t32 | t35);
    t37 = (~(t36));
    t38 = (t31 & t37);
    if (t38 != 0)
        goto LAB64;

LAB61:    if (t36 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t46) = 1;

LAB64:    memset(t47, 0, 8);
    t43 = (t46 + 4);
    t39 = *((unsigned int *)t43);
    t48 = (~(t39));
    t49 = *((unsigned int *)t46);
    t50 = (t49 & t48);
    t53 = (t50 & 1U);
    if (t53 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t43) != 0)
        goto LAB67;

LAB68:    t54 = *((unsigned int *)t21);
    t55 = *((unsigned int *)t47);
    t56 = (t54 & t55);
    *((unsigned int *)t79) = t56;
    t45 = (t21 + 4);
    t51 = (t47 + 4);
    t52 = (t79 + 4);
    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    t59 = (t57 | t58);
    *((unsigned int *)t52) = t59;
    t62 = *((unsigned int *)t52);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB60;

LAB63:    t42 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t47) = 1;
    goto LAB68;

LAB67:    t44 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB68;

LAB69:    t64 = *((unsigned int *)t79);
    t65 = *((unsigned int *)t52);
    *((unsigned int *)t79) = (t64 | t65);
    t60 = (t21 + 4);
    t61 = (t47 + 4);
    t66 = *((unsigned int *)t21);
    t67 = (~(t66));
    t68 = *((unsigned int *)t60);
    t69 = (~(t68));
    t72 = *((unsigned int *)t47);
    t73 = (~(t72));
    t74 = *((unsigned int *)t61);
    t75 = (~(t74));
    t70 = (t67 & t69);
    t71 = (t73 & t75);
    t76 = (~(t70));
    t77 = (~(t71));
    t80 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t80 & t76);
    t81 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t81 & t77);
    t82 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t82 & t76);
    t83 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t83 & t77);
    goto LAB71;

LAB72:    xsi_set_current_line(63, ng0);
    t89 = (t0 + 2792);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = ((char*)((ng5)));
    memset(t93, 0, 8);
    xsi_vlog_unsigned_add(t93, 32, t91, 32, t92, 32);
    t94 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 32, 0LL);
    goto LAB74;

}

static void Always_66_1(char *t0)
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

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4864);
    *((int *)t2) = 1;
    t3 = (t0 + 4312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t5 = (t0 + 1752U);
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

LAB11:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(69, ng0);
    t19 = (t0 + 472);
    t20 = *((char **)t19);
    t19 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 3, 0LL);
    goto LAB12;

}

static void Always_74_2(char *t0)
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

LAB0:    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4880);
    *((int *)t2) = 1;
    t3 = (t0 + 4560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 2952);
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

LAB7:    xsi_set_current_line(78, ng0);
    t7 = (t0 + 608);
    t10 = *((char **)t7);
    t7 = (t0 + 3112);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 3);
    goto LAB15;

LAB9:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t2 = (t0 + 3112);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 3);
    goto LAB15;

LAB11:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t2 = (t0 + 3112);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 3);
    goto LAB15;

LAB13:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 472);
    t4 = *((char **)t2);
    t2 = (t0 + 3112);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 3);
    goto LAB15;

}


extern void work_m_00000000004211394619_3383896982_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Always_66_1,(void *)Always_74_2};
	xsi_register_didat("work_m_00000000004211394619_3383896982", "isim/test_isim_beh.exe.sim/work/m_00000000004211394619_3383896982.didat");
	xsi_register_executes(pe);
}
