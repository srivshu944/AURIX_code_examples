/**
 * \file IfxPort_cfg.c
 * \brief PORT on-chip implementation data
 *
 * \version iLLD_1_0_1_11_0
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Use of this file is subject to the terms of use agreed between (i) you or 
 * the company in which ordinary course of business you are acting and (ii) 
 * Infineon Technologies AG or its licensees. If and as long as no such 
 * terms of use are agreed, use of this file is subject to following:


 * Boost Software License - Version 1.0 - August 17th, 2003

 * Permission is hereby granted, free of charge, to any person or 
 * organization obtaining a copy of the software and accompanying 
 * documentation covered by this license (the "Software") to use, reproduce,
 * display, distribute, execute, and transmit the Software, and to prepare
 * derivative works of the Software, and to permit third-parties to whom the 
 * Software is furnished to do so, all subject to the following:

 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE 
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.

 *
 *
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxPort_cfg.h"

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

IFX_CONST IfxPort_Esr_Masks  IfxPort_cfg_esrMasks[IFXPORT_NUM_MODULES] = {
    {&MODULE_P00, 0x0000FFFFUL},    // Port 00
    {&MODULE_P02, 0x0000FFFFUL},    // Port 02
    {&MODULE_P10, 0x0000FFFFUL},    // Port 10
    {&MODULE_P11, 0x0000FFFFUL},    // Port 11
    {&MODULE_P13, 0x0000FFFFUL},    // Port 13
    {&MODULE_P14, 0x0000FFFFUL},    // Port 14
    {&MODULE_P15, 0x0000FFFFUL},    // Port 15
    {&MODULE_P20, 0x0000FFFFUL},    // Port 20
    {&MODULE_P21, 0x0000FFFFUL},    // Port 21
    {&MODULE_P22, 0x0000FFFFUL},    // Port 22
    {&MODULE_P23, 0x0000FFFFUL},    // Port 23
    {&MODULE_P33, 0x0000FFFFUL},    // Port 33
    {&MODULE_P34, 0x0000FFFFUL}     // Port 34
    //{&MODULE_P40, 0x0000FFFFUL}   // Port 40
    //{&MODULE_P41, 0x0000FFFFUL}   // Port 40
};

IFX_CONST IfxModule_IndexMap IfxPort_cfg_indexMap[IFXPORT_NUM_MODULES] = {
    {&MODULE_P00, IfxPort_Index_00},     // Port 00
    {&MODULE_P02, IfxPort_Index_02},     // Port 02
    {&MODULE_P10, IfxPort_Index_10},     // Port 10
    {&MODULE_P11, IfxPort_Index_11},     // Port 11
    {&MODULE_P13, IfxPort_Index_13},     // Port 13
    {&MODULE_P14, IfxPort_Index_14},     // Port 14
    {&MODULE_P15, IfxPort_Index_15},     // Port 15
    {&MODULE_P20, IfxPort_Index_20},     // Port 20
    {&MODULE_P21, IfxPort_Index_21},     // Port 21
    {&MODULE_P22, IfxPort_Index_22},     // Port 22
    {&MODULE_P23, IfxPort_Index_23},     // Port 23
    {&MODULE_P33, IfxPort_Index_33},     // Port 33
    {&MODULE_P34, IfxPort_Index_34}      // Port 34
    //{&MODULE_P40, 40}    // Port 40
    //{&MODULE_P41, 41}    // Port 41
};