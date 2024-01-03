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
static const char *ng0 = "C:/Xilinx/documents/MIPSCPU/DATAPATH/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {1024, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};



static void Cont_32_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 1023U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 1023U);
    t12 = (t0 + 4152);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1023U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 9);
    t25 = (t0 + 4056);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t51[8];
    char t58[8];
    char t67[8];
    char t71[8];
    char t80[8];
    char t84[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB18;

LAB15:    if (t37 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB18:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB34;

LAB31:    if (t37 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t13) = 1;

LAB34:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB35;

LAB36:
LAB37:
LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);

LAB9:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(41, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2408);
    t17 = (t0 + 2408);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2408);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2568);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB13:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB14;

LAB17:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(43, ng0);

LAB22:    xsi_set_current_line(44, ng0);
    t14 = (t0 + 1048U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    t14 = (t15 + 4);
    t18 = (t17 + 4);
    t45 = *((unsigned int *)t17);
    t46 = (t45 >> 24);
    *((unsigned int *)t15) = t46;
    t47 = *((unsigned int *)t18);
    t48 = (t47 >> 24);
    *((unsigned int *)t14) = t48;
    t49 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t49 & 255U);
    t50 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t50 & 255U);
    t19 = (t0 + 2408);
    t20 = (t0 + 2408);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2408);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1848U);
    t29 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t16, t51, t22, t25, 2, 1, t29, 10, 2);
    t26 = (t16 + 4);
    t52 = *((unsigned int *)t26);
    t28 = (!(t52));
    t53 = (t51 + 4);
    t54 = *((unsigned int *)t53);
    t31 = (!(t54));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 255U);
    t5 = (t0 + 2408);
    t11 = (t0 + 2408);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2408);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1848U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t21, 10, t20, 32);
    xsi_vlog_generic_convert_array_indices(t15, t16, t14, t19, 2, 1, t51, 32, 2);
    t22 = (t15 + 4);
    t30 = *((unsigned int *)t22);
    t28 = (!(t30));
    t23 = (t16 + 4);
    t33 = *((unsigned int *)t23);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 255U);
    t5 = (t0 + 2408);
    t11 = (t0 + 2408);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2408);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1848U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng4)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t21, 10, t20, 32);
    xsi_vlog_generic_convert_array_indices(t15, t16, t14, t19, 2, 1, t51, 32, 2);
    t22 = (t15 + 4);
    t30 = *((unsigned int *)t22);
    t28 = (!(t30));
    t23 = (t16 + 4);
    t33 = *((unsigned int *)t23);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 255U);
    t5 = (t0 + 2408);
    t11 = (t0 + 2408);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2408);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1848U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng5)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t21, 10, t20, 32);
    xsi_vlog_generic_convert_array_indices(t15, t16, t14, t19, 2, 1, t51, 32, 2);
    t22 = (t15 + 4);
    t30 = *((unsigned int *)t22);
    t28 = (!(t30));
    t23 = (t16 + 4);
    t33 = *((unsigned int *)t23);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB29;

LAB30:    goto LAB21;

LAB23:    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t51);
    t35 = (t55 - t56);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t19, t15, 0, *((unsigned int *)t51), t36, 0LL);
    goto LAB24;

LAB25:    t34 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t35 = (t34 - t37);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB26;

LAB27:    t34 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t35 = (t34 - t37);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB28;

LAB29:    t34 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t35 = (t34 - t37);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB30;

LAB33:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(49, ng0);

LAB38:    xsi_set_current_line(50, ng0);
    t14 = (t0 + 2408);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2408);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2408);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 1848U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng5)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t26, 10, t25, 32);
    xsi_vlog_generic_get_array_select_value(t16, 8, t18, t21, t24, 2, 1, t51, 32, 2);
    t29 = (t0 + 2408);
    t53 = (t29 + 56U);
    t57 = *((char **)t53);
    t59 = (t0 + 2408);
    t60 = (t59 + 72U);
    t61 = *((char **)t60);
    t62 = (t0 + 2408);
    t63 = (t62 + 64U);
    t64 = *((char **)t63);
    t65 = (t0 + 1848U);
    t66 = *((char **)t65);
    t65 = ((char*)((ng4)));
    memset(t67, 0, 8);
    xsi_vlog_unsigned_add(t67, 32, t66, 10, t65, 32);
    xsi_vlog_generic_get_array_select_value(t58, 8, t57, t61, t64, 2, 1, t67, 32, 2);
    t68 = (t0 + 2408);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t72 = (t0 + 2408);
    t73 = (t72 + 72U);
    t74 = *((char **)t73);
    t75 = (t0 + 2408);
    t76 = (t75 + 64U);
    t77 = *((char **)t76);
    t78 = (t0 + 1848U);
    t79 = *((char **)t78);
    t78 = ((char*)((ng3)));
    memset(t80, 0, 8);
    xsi_vlog_unsigned_add(t80, 32, t79, 10, t78, 32);
    xsi_vlog_generic_get_array_select_value(t71, 8, t70, t74, t77, 2, 1, t80, 32, 2);
    t81 = (t0 + 2408);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t85 = (t0 + 2408);
    t86 = (t85 + 72U);
    t87 = *((char **)t86);
    t88 = (t0 + 2408);
    t89 = (t88 + 64U);
    t90 = *((char **)t89);
    t91 = (t0 + 1848U);
    t92 = *((char **)t91);
    xsi_vlog_generic_get_array_select_value(t84, 8, t83, t87, t90, 2, 1, t92, 10, 2);
    xsi_vlogtype_concat(t15, 32, 32, 4U, t84, 8, t71, 8, t58, 8, t16, 8);
    t91 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t91, t15, 0, 0, 32, 0LL);
    goto LAB37;

}


extern void work_m_00000000003873832781_2924402094_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Always_38_1};
	xsi_register_didat("work_m_00000000003873832781_2924402094", "isim/test_isim_beh.exe.sim/work/m_00000000003873832781_2924402094.didat");
	xsi_register_executes(pe);
}
