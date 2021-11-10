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
* File Name    : r_systeminit.c
* Version      : CodeGenerator for RL78/G14 V2.04.02.01 [15 May 2015]
* Device(s)    : R5F104PJ
* Tool-Chain   : CCRL
* Description  : This file implements system initializing function.
* Creation Date: 2016/04/08
***********************************************************************************************************************/
#include "sfr.h"
#include "common.h"
#include "config.h"
#include "system.h"
#include "int.h"
#include "port.h"
#include "timer.h"
#include "watchdogtimer.h"
/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_cgc.h"
#include "r_cg_port.h"
#include "r_cg_serial.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
//IF SYSTEM_INIT IS DECLARED ONCE ,ANOTHER FOR LCD IS NOT REQUIRED 

void R_Systeminit(void);
void PORT_Init(void);
void SystemInit( void )
{
	/* Clock generator initiate */
	Clock_Init();
	
	/* Port initiate */
	PORT_Init();
	
	/* WDT initiate */
	WDT_Init();
	
	/* INT initiate */
	INT_Init();
	
#if !defined PWM_USED
	/* TM00 initiate */
	TM00_Init();
#endif /* end of defined PWM_USED */
}

/*******************************************************************************
* Function Name: hdwinit
* Description  : This function initializes hardware settings.
* Arguments    : none
* Return Value : none
********************************************************************************/
void hdwinit( void )
{
	__DI( );	
	SystemInit( );	
	R_Systeminit();
	__EI( );
}

/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Systeminit
* Description  : This function initializes every macro.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Systeminit(void)
{
    PIOR0 = 0x00U;
    PIOR1 = 0x00U;
    R_CGC_Create();
    R_PORT_Create();
    R_SAU0_Create();
    IAWCTL = 0x00U;
}

/***********************************************************************************************************************
* Function Name: hdwinit
* Description  : This function initializes hardware setting.
* Arguments    : None
* Return Value : None


/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
