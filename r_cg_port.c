/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIESREGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2011, 2015 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : r_cg_port.c
* Version      : CodeGenerator for RL78/G14 V2.04.02.01 [15 May 2015]
* Device(s)    : R5F104PJ
* Tool-Chain   : CCRL
* Description  : This file implements device driver for PORT module.
* Creation Date: 2016/04/08
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_port.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_PORT_Create
* Description  : This function initializes the Port I/O.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_PORT_Create(void)
{
    P0 = _00_Pn0_OUTPUT_0 | _00_Pn1_OUTPUT_0 | _00_Pn2_OUTPUT_0 | _00_Pn3_OUTPUT_0 | _00_Pn4_OUTPUT_0 |
         _00_Pn5_OUTPUT_0 | _00_Pn6_OUTPUT_0;
    P1 = _00_Pn0_OUTPUT_0 | _00_Pn1_OUTPUT_0 | _00_Pn2_OUTPUT_0 | _00_Pn3_OUTPUT_0 | _00_Pn4_OUTPUT_0 |
         _00_Pn5_OUTPUT_0 | _00_Pn6_OUTPUT_0 | _00_Pn7_OUTPUT_0;
    P2 = _00_Pn0_OUTPUT_0 | _00_Pn1_OUTPUT_0 | _00_Pn2_OUTPUT_0 | _00_Pn3_OUTPUT_0 | _00_Pn4_OUTPUT_0 |
         _00_Pn5_OUTPUT_0 | _00_Pn6_OUTPUT_0 | _00_Pn7_OUTPUT_0;
    P3 = _01_Pn0_OUTPUT_1;            //to work both and lcd and serial together
    P4 = _00_Pn1_OUTPUT_0 | _00_Pn2_OUTPUT_0 | _00_Pn3_OUTPUT_0 | _00_Pn4_OUTPUT_0 | _00_Pn5_OUTPUT_0 |
         _00_Pn6_OUTPUT_0 | _00_Pn7_OUTPUT_0;
    P5 = _00_Pn2_OUTPUT_0 | _00_Pn3_OUTPUT_0 | _00_Pn4_OUTPUT_0 | _00_Pn5_OUTPUT_0 | _00_Pn6_OUTPUT_0 |
         _00_Pn7_OUTPUT_0;
    P6 = _00_Pn0_OUTPUT_0 | _00_Pn1_OUTPUT_0 | _00_Pn2_OUTPUT_0 | _00_Pn3_OUTPUT_0 | _00_Pn4_OUTPUT_0 |
         _00_Pn5_OUTPUT_0 | _00_Pn6_OUTPUT_0 | _00_Pn7_OUTPUT_0;
    P7 = _00_Pn0_OUTPUT_0 | _00_Pn1_OUTPUT_0 | _00_Pn2_OUTPUT_0 | _00_Pn3_OUTPUT_0 | _00_Pn4_OUTPUT_0 |
         _00_Pn5_OUTPUT_0 | _00_Pn6_OUTPUT_0 | _00_Pn7_OUTPUT_0;   
    P10 = _00_Pn0_OUTPUT_0 | _00_Pn1_OUTPUT_0 | _00_Pn2_OUTPUT_0;
    P11 = _00_Pn0_OUTPUT_0 | _00_Pn1_OUTPUT_0;
    P12 = _00_Pn0_OUTPUT_0;
    P13 = _00_Pn0_OUTPUT_0;
    P14 = _00_Pn0_OUTPUT_0 | _00_Pn1_OUTPUT_0 | _00_Pn2_OUTPUT_0 | _00_Pn3_OUTPUT_0 | _00_Pn4_OUTPUT_0 |
          _00_Pn5_OUTPUT_0 | _00_Pn6_OUTPUT_0 | _00_Pn7_OUTPUT_0;
    P15 = _00_Pn0_OUTPUT_0 | _00_Pn1_OUTPUT_0 | _00_Pn2_OUTPUT_0 | _00_Pn3_OUTPUT_0 | _00_Pn4_OUTPUT_0 |
          _00_Pn5_OUTPUT_0 | _00_Pn6_OUTPUT_0;
    PMC0 = _00_PMCn2_DI_ON | _00_PMCn3_DI_ON | _F3_PMC0_DEFAULT;
    PMC1 = _00_PMCn2_DI_ON | _00_PMCn3_DI_ON | _00_PMCn6_DI_ON | _00_PMCn7_DI_ON;
    PMC10 = _00_PMCn0_DI_ON | _FE_PMC10_DEFAULT;
    PMC12 = _00_PMCn0_DI_ON | _FE_PMC12_DEFAULT;
    PMC14 = _00_PMCn7_DI_ON | _7F_PMC14_DEFAULT;
    ADPC = _01_ADPC_DI_ON;
    PM0 = _00_PMn0_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT | _00_PMn2_MODE_OUTPUT | _00_PMn3_MODE_OUTPUT |
          _00_PMn4_MODE_OUTPUT | _00_PMn5_MODE_OUTPUT | _00_PMn6_MODE_OUTPUT | _80_PM0_DEFAULT;
    PM1 = _00_PMn0_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT | _00_PMn2_MODE_OUTPUT | _00_PMn3_MODE_OUTPUT |
          _00_PMn4_MODE_OUTPUT | _00_PMn5_MODE_OUTPUT | _00_PMn6_MODE_OUTPUT | _00_PMn7_MODE_OUTPUT;
    PM2 = _FF_PM2_DEFAULT;   //TO WORK BUTTON PRESS WITH LCD AND SERIAL   COMMUNICATION
    PM3 = _00_PMn0_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT | _FE_PM12_DEFAULT;
    PM4 = _01_PMn0_NOT_USE | _00_PMn1_MODE_OUTPUT | _00_PMn2_MODE_OUTPUT | _00_PMn3_MODE_OUTPUT | _00_PMn4_MODE_OUTPUT |
          _00_PMn5_MODE_OUTPUT | _00_PMn6_MODE_OUTPUT | _00_PMn7_MODE_OUTPUT;
    PM5 = _01_PMn0_NOT_USE | _02_PMn1_NOT_USE | _00_PMn2_MODE_OUTPUT | _00_PMn3_MODE_OUTPUT | _00_PMn4_MODE_OUTPUT |
          _00_PMn5_MODE_OUTPUT | _00_PMn6_MODE_OUTPUT | _00_PMn7_MODE_OUTPUT;
    PM6 = _00_PMn0_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT | _00_PMn2_MODE_OUTPUT | _00_PMn3_MODE_OUTPUT |
          _00_PMn4_MODE_OUTPUT | _00_PMn5_MODE_OUTPUT | _00_PMn6_MODE_OUTPUT | _00_PMn7_MODE_OUTPUT;
    PM7 = _00_PMn0_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT | _00_PMn2_MODE_OUTPUT | _00_PMn3_MODE_OUTPUT |
          _00_PMn4_MODE_OUTPUT | _00_PMn5_MODE_OUTPUT | _00_PMn6_MODE_OUTPUT | _00_PMn7_MODE_OUTPUT;   
    PM10 = _00_PMn0_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT | _00_PMn2_MODE_OUTPUT | _F8_PM10_DEFAULT;
    PM11 = _00_PMn0_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT | _FC_PM11_DEFAULT;
    PM12 = _00_PMn0_MODE_OUTPUT | _FE_PM12_DEFAULT;      //to work both the lcd and serial together
    PM14 = _00_PMn0_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT | _00_PMn2_MODE_OUTPUT | _00_PMn3_MODE_OUTPUT |
           _00_PMn4_MODE_OUTPUT | _00_PMn5_MODE_OUTPUT | _00_PMn6_MODE_OUTPUT | _00_PMn7_MODE_OUTPUT;
    PM15 = _00_PMn0_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT | _00_PMn2_MODE_OUTPUT | _00_PMn3_MODE_OUTPUT |
           _00_PMn4_MODE_OUTPUT | _00_PMn5_MODE_OUTPUT | _00_PMn6_MODE_OUTPUT | _80_PM15_DEFAULT;
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
