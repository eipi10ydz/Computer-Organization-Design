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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002794138925_3415651129_init();
    work_m_00000000001255047920_3866583278_init();
    work_m_00000000003126355177_2725559894_init();
    xilinxcorelib_ver_m_00000000001358910285_0431577652_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000277421008_0261309501_init();
    xilinxcorelib_ver_m_00000000001603977570_2085962422_init();
    work_m_00000000003617559063_2381739659_init();
    work_m_00000000004211394619_3383896982_init();
    work_m_00000000003878030485_1552539477_init();
    work_m_00000000003135228499_3823007873_init();
    work_m_00000000002705598459_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002705598459_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
