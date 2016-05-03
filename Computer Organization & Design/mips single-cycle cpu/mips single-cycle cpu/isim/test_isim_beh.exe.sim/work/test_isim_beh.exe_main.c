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
    work_m_00000000000610407908_3866583278_init();
    xilinxcorelib_ver_m_00000000001067635404_2409688062_init();
    work_m_00000000004259014342_3273368956_init();
    xilinxcorelib_ver_m_00000000001067635404_2574524811_init();
    work_m_00000000003452451064_1644758679_init();
    work_m_00000000003126355177_2725559894_init();
    work_m_00000000001134568958_3383896982_init();
    work_m_00000000000476944199_1552539477_init();
    work_m_00000000000746717849_3823007873_init();
    work_m_00000000002705598459_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002705598459_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
