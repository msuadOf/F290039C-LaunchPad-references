//###########################################################################
//
// FILE:    f28003x_sysctrl.h
//
// TITLE:   Definitions for the SYSCTRL registers.
//
//###########################################################################
// $Copyright:
// Copyright (C) 2023 Texas Instruments Incorporated - http://www.ti.com/
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//###########################################################################

#ifndef F28003X_SYSCTRL_H
#define F28003X_SYSCTRL_H

#ifdef __cplusplus
extern "C" {
#endif


//---------------------------------------------------------------------------
// SYSCTRL Individual Register Bit Definitions:

struct PARTIDL_BITS {                   // bits description
    Uint16 rsvd1:3;                     // 2:0 Reserved
    Uint16 rsvd2:2;                     // 4:3 Reserved
    Uint16 rsvd3:1;                     // 5 Reserved
    Uint16 QUAL:2;                      // 7:6 Qualification Status
    Uint16 PIN_COUNT:3;                 // 10:8 Device Pin Count
    Uint16 rsvd4:1;                     // 11 Reserved
    Uint16 rsvd5:1;                     // 12 Reserved
    Uint16 INSTASPIN:2;                 // 14:13 Instaspin feature set
    Uint16 rsvd6:1;                     // 15 Reserved
    Uint16 FLASH_SIZE:8;                // 23:16 Flash size in KB
    Uint16 rsvd7:4;                     // 27:24 Reserved
    Uint16 rsvd8:4;                     // 31:28 Reserved
};

union PARTIDL_REG {
    Uint32  all;
    struct  PARTIDL_BITS  bit;
};

struct PARTIDH_BITS {                   // bits description
    Uint16 rsvd1:4;                     // 3:0 Reserved
    Uint16 rsvd2:4;                     // 7:4 Reserved
    Uint16 FAMILY:8;                    // 15:8 Device family
    Uint16 PARTNO:8;                    // 23:16 Device part number
    Uint16 DEVICE_CLASS_ID:8;           // 31:24 Device class ID
};

union PARTIDH_REG {
    Uint32  all;
    struct  PARTIDH_BITS  bit;
};

struct REVID_BITS {                     // bits description
    Uint16 REVID:16;                    // 15:0 Device Revision ID. This is specific to the Device
    Uint16 rsvd1:16;                    // 31:16 Reserved
};

union REVID_REG {
    Uint32  all;
    struct  REVID_BITS  bit;
};

struct FUSEERR_BITS {                   // bits description
    Uint16 ALERR:5;                     // 4:0 Efuse Autoload Error Status
    Uint16 ERR:1;                       // 5 Efuse Self Test Error Status
    Uint16 rsvd1:10;                    // 15:6 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union FUSEERR_REG {
    Uint32  all;
    struct  FUSEERR_BITS  bit;
};

struct SOFTPRES0_BITS {                 // bits description
    Uint16 CPU1_CLA1:1;                 // 0 CPU1_CLA1 software reset bit
    Uint16 rsvd1:1;                     // 1 Reserved
    Uint16 rsvd2:1;                     // 2 Reserved
    Uint16 rsvd3:1;                     // 3 Reserved
    Uint16 rsvd4:9;                     // 12:4 Reserved
    Uint16 CPU1_CPUBGCRC:1;             // 13 CPUBGCRC Module reset bit
    Uint16 CPU1_CLA1BGCRC:1;            // 14 CLA1BGCRC Module reset bit
    Uint16 rsvd5:1;                     // 15 Reserved
    Uint16 rsvd6:8;                     // 23:16 Reserved
    Uint16 CPU1_ERAD:1;                 // 24 ERAD Module reset bit
    Uint16 rsvd7:7;                     // 31:25 Reserved
};

union SOFTPRES0_REG {
    Uint32  all;
    struct  SOFTPRES0_BITS  bit;
};

struct SOFTPRES2_BITS {                 // bits description
    Uint16 EPWM1:1;                     // 0 EPWM1 software reset bit
    Uint16 EPWM2:1;                     // 1 EPWM2 software reset bit
    Uint16 EPWM3:1;                     // 2 EPWM3 software reset bit
    Uint16 EPWM4:1;                     // 3 EPWM4 software reset bit
    Uint16 EPWM5:1;                     // 4 EPWM5 software reset bit
    Uint16 EPWM6:1;                     // 5 EPWM6 software reset bit
    Uint16 EPWM7:1;                     // 6 EPWM7 software reset bit
    Uint16 EPWM8:1;                     // 7 EPWM8 software reset bit
    Uint16 rsvd1:1;                     // 8 Reserved
    Uint16 rsvd2:1;                     // 9 Reserved
    Uint16 rsvd3:1;                     // 10 Reserved
    Uint16 rsvd4:1;                     // 11 Reserved
    Uint16 rsvd5:1;                     // 12 Reserved
    Uint16 rsvd6:1;                     // 13 Reserved
    Uint16 rsvd7:1;                     // 14 Reserved
    Uint16 rsvd8:1;                     // 15 Reserved
    Uint16 rsvd9:16;                    // 31:16 Reserved
};

union SOFTPRES2_REG {
    Uint32  all;
    struct  SOFTPRES2_BITS  bit;
};

struct SOFTPRES3_BITS {                 // bits description
    Uint16 ECAP1:1;                     // 0 ECAP1 software reset bit
    Uint16 ECAP2:1;                     // 1 ECAP2 software reset bit
    Uint16 ECAP3:1;                     // 2 ECAP3 software reset bit
    Uint16 rsvd1:1;                     // 3 Reserved
    Uint16 rsvd2:1;                     // 4 Reserved
    Uint16 rsvd3:1;                     // 5 Reserved
    Uint16 rsvd4:1;                     // 6 Reserved
    Uint16 rsvd5:1;                     // 7 Reserved
    Uint16 rsvd6:8;                     // 15:8 Reserved
    Uint16 rsvd7:16;                    // 31:16 Reserved
};

union SOFTPRES3_REG {
    Uint32  all;
    struct  SOFTPRES3_BITS  bit;
};

struct SOFTPRES4_BITS {                 // bits description
    Uint16 EQEP1:1;                     // 0 EQEP1 software reset bit
    Uint16 EQEP2:1;                     // 1 EQEP2 software reset bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:12;                    // 15:4 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union SOFTPRES4_REG {
    Uint32  all;
    struct  SOFTPRES4_BITS  bit;
};

struct SOFTPRES6_BITS {                 // bits description
    Uint16 SD1:1;                       // 0 SD1 software reset bit
    Uint16 SD2:1;                       // 1 SD2 software reset bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:1;                     // 4 Reserved
    Uint16 rsvd4:1;                     // 5 Reserved
    Uint16 rsvd5:1;                     // 6 Reserved
    Uint16 rsvd6:1;                     // 7 Reserved
    Uint16 rsvd7:8;                     // 15:8 Reserved
    Uint16 rsvd8:16;                    // 31:16 Reserved
};

union SOFTPRES6_REG {
    Uint32  all;
    struct  SOFTPRES6_BITS  bit;
};

struct SOFTPRES7_BITS {                 // bits description
    Uint16 SCI_A:1;                     // 0 SCI_A software reset bit
    Uint16 SCI_B:1;                     // 1 SCI_B software reset bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:12;                    // 15:4 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union SOFTPRES7_REG {
    Uint32  all;
    struct  SOFTPRES7_BITS  bit;
};

struct SOFTPRES8_BITS {                 // bits description
    Uint16 SPI_A:1;                     // 0 SPI_A software reset bit
    Uint16 SPI_B:1;                     // 1 SPI_B software reset bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:12;                    // 15:4 Reserved
    Uint16 rsvd4:1;                     // 16 Reserved
    Uint16 rsvd5:1;                     // 17 Reserved
    Uint16 rsvd6:14;                    // 31:18 Reserved
};

union SOFTPRES8_REG {
    Uint32  all;
    struct  SOFTPRES8_BITS  bit;
};

struct SOFTPRES9_BITS {                 // bits description
    Uint16 I2C_A:1;                     // 0 I2C_A software reset bit
    Uint16 I2C_B:1;                     // 1 I2C_B software reset bit
    Uint16 rsvd1:14;                    // 15:2 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union SOFTPRES9_REG {
    Uint32  all;
    struct  SOFTPRES9_BITS  bit;
};

struct SOFTPRES10_BITS {                // bits description
    Uint16 CAN_A:1;                     // 0 CAN_A software reset bit
    Uint16 rsvd1:1;                     // 1 Reserved
    Uint16 rsvd2:1;                     // 2 Reserved
    Uint16 rsvd3:1;                     // 3 Reserved
    Uint16 MCAN_A:1;                    // 4 MCAN_A  software reset bit
    Uint16 rsvd4:1;                     // 5 Reserved
    Uint16 rsvd5:1;                     // 6 Reserved
    Uint16 rsvd6:1;                     // 7 Reserved
    Uint16 rsvd7:8;                     // 15:8 Reserved
    Uint16 rsvd8:16;                    // 31:16 Reserved
};

union SOFTPRES10_REG {
    Uint32  all;
    struct  SOFTPRES10_BITS  bit;
};

struct SOFTPRES13_BITS {                // bits description
    Uint16 ADC_A:1;                     // 0 ADC_A software reset bit
    Uint16 ADC_B:1;                     // 1 ADC_B software reset bit
    Uint16 ADC_C:1;                     // 2 ADC_C software reset bit
    Uint16 rsvd1:1;                     // 3 Reserved
    Uint16 rsvd2:12;                    // 15:4 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union SOFTPRES13_REG {
    Uint32  all;
    struct  SOFTPRES13_BITS  bit;
};

struct SOFTPRES14_BITS {                // bits description
    Uint16 CMPSS1:1;                    // 0 CMPSS1 software reset bit
    Uint16 CMPSS2:1;                    // 1 CMPSS2 software reset bit
    Uint16 CMPSS3:1;                    // 2 CMPSS3 software reset bit
    Uint16 CMPSS4:1;                    // 3 CMPSS4 software reset bit
    Uint16 rsvd1:1;                     // 4 Reserved
    Uint16 rsvd2:1;                     // 5 Reserved
    Uint16 rsvd3:1;                     // 6 Reserved
    Uint16 rsvd4:1;                     // 7 Reserved
    Uint16 rsvd5:8;                     // 15:8 Reserved
    Uint16 rsvd6:16;                    // 31:16 Reserved
};

union SOFTPRES14_REG {
    Uint32  all;
    struct  SOFTPRES14_BITS  bit;
};

struct SOFTPRES16_BITS {                // bits description
    Uint16 rsvd1:1;                     // 0 Reserved
    Uint16 rsvd2:1;                     // 1 Reserved
    Uint16 rsvd3:1;                     // 2 Reserved
    Uint16 rsvd4:1;                     // 3 Reserved
    Uint16 rsvd5:12;                    // 15:4 Reserved
    Uint16 DAC_A:1;                     // 16 Buffered_DAC_A software reset bit
    Uint16 DAC_B:1;                     // 17 Buffered_DAC_B software reset bit
    Uint16 rsvd6:1;                     // 18 Reserved
    Uint16 rsvd7:1;                     // 19 Reserved
    Uint16 rsvd8:12;                    // 31:20 Reserved
};

union SOFTPRES16_REG {
    Uint32  all;
    struct  SOFTPRES16_BITS  bit;
};

struct SOFTPRES17_BITS {                // bits description
    Uint16 CLB1:1;                      // 0 CLB1 software reset bit
    Uint16 CLB2:1;                      // 1 CLB2 software reset bit
    Uint16 CLB3:1;                      // 2 CLB3 software reset bit
    Uint16 CLB4:1;                      // 3 CLB4 software reset bit
    Uint16 rsvd1:12;                    // 15:4 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union SOFTPRES17_REG {
    Uint32  all;
    struct  SOFTPRES17_BITS  bit;
};

struct SOFTPRES18_BITS {                // bits description
    Uint16 FSITX_A:1;                   // 0 FSITX_A software reset bit
    Uint16 FSIRX_A:1;                   // 1 FSIRX_A software reset bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:12;                    // 15:4 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union SOFTPRES18_REG {
    Uint32  all;
    struct  SOFTPRES18_BITS  bit;
};

struct SOFTPRES19_BITS {                // bits description
    Uint16 LIN_A:1;                     // 0 LIN_A software reset bit
    Uint16 LIN_B:1;                     // 1 LIN_B software reset bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:12;                    // 15:4 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union SOFTPRES19_REG {
    Uint32  all;
    struct  SOFTPRES19_BITS  bit;
};

struct SOFTPRES20_BITS {                // bits description
    Uint16 PMBUS_A:1;                   // 0 PMBUS_A software reset bit
    Uint16 rsvd1:1;                     // 1 Reserved
    Uint16 rsvd2:14;                    // 15:2 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union SOFTPRES20_REG {
    Uint32  all;
    struct  SOFTPRES20_BITS  bit;
};

struct SOFTPRES21_BITS {                // bits description
    Uint16 DCC0:1;                      // 0 DCC Module reset bit
    Uint16 DCC1:1;                      // 1 DCC Module reset bit
    Uint16 rsvd1:14;                    // 15:2 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union SOFTPRES21_REG {
    Uint32  all;
    struct  SOFTPRES21_BITS  bit;
};

struct SOFTPRES25_BITS {                // bits description
    Uint16 HIC_A:1;                     // 0 HIC Slave & Host controller Reset Bit
    Uint16 rsvd1:15;                    // 15:1 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union SOFTPRES25_REG {
    Uint32  all;
    struct  SOFTPRES25_BITS  bit;
};

struct SOFTPRES26_BITS {                // bits description
    Uint16 AESA:1;                      // 0 AES Module Reset Bit
    Uint16 rsvd1:15;                    // 15:1 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union SOFTPRES26_REG {
    Uint32  all;
    struct  SOFTPRES26_BITS  bit;
};

struct SOFTPRES27_BITS {                // bits description
    Uint16 EPG1:1;                      // 0 EPG Module Reset Bit
    Uint16 rsvd1:15;                    // 15:1 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union SOFTPRES27_REG {
    Uint32  all;
    struct  SOFTPRES27_BITS  bit;
};

struct TAP_STATUS_BITS {                // bits description
    Uint16 TAP_STATE:16;                // 15:0 Present TAP State
    Uint16 rsvd1:15;                    // 30:16 Reserved
    Uint16 DCON:1;                      // 31 Debugger Connect Indication
};

union TAP_STATUS_REG {
    Uint32  all;
    struct  TAP_STATUS_BITS  bit;
};

struct ECAPTYPE_BITS {                  // bits description
    Uint16 TYPE:2;                      // 1:0 Configure ECAP type
    Uint16 rsvd1:13;                    // 14:2 Reserved
    Uint16 LOCK:1;                      // 15 Lock bit for the register
};

union ECAPTYPE_REG {
    Uint16  all;
    struct  ECAPTYPE_BITS  bit;
};

struct SDFMTYPE_BITS {                  // bits description
    Uint16 TYPE:2;                      // 1:0 Configure SDFM type
    Uint16 rsvd1:13;                    // 14:2 Reserved
    Uint16 LOCK:1;                      // 15 Lock bit
};

union SDFMTYPE_REG {
    Uint16  all;
    struct  SDFMTYPE_BITS  bit;
};

struct DEV_CFG_REGS {
    Uint16                                   rsvd1[8];                     // Reserved
    union   PARTIDL_REG                      PARTIDL;                      // Lower 32-bit of Device PART Identification Number
    union   PARTIDH_REG                      PARTIDH;                      // Upper 32-bit of Device PART Identification Number
    union   REVID_REG                        REVID;                        // Device Revision Number
    Uint16                                   rsvd2[102];                   // Reserved
    union   FUSEERR_REG                      FUSEERR;                      // e-Fuse error Status register
    Uint16                                   rsvd3[12];                    // Reserved
    union   SOFTPRES0_REG                    SOFTPRES0;                    // Processing Block Software Reset register
    Uint16                                   rsvd4[2];                     // Reserved
    union   SOFTPRES2_REG                    SOFTPRES2;                    // EPWM Software Reset register
    union   SOFTPRES3_REG                    SOFTPRES3;                    // ECAP Software Reset register
    union   SOFTPRES4_REG                    SOFTPRES4;                    // EQEP Software Reset register
    Uint16                                   rsvd5[2];                     // Reserved
    union   SOFTPRES6_REG                    SOFTPRES6;                    // Sigma Delta Software Reset register
    union   SOFTPRES7_REG                    SOFTPRES7;                    // SCI Software Reset register
    union   SOFTPRES8_REG                    SOFTPRES8;                    // SPI Software Reset register
    union   SOFTPRES9_REG                    SOFTPRES9;                    // I2C Software Reset register
    union   SOFTPRES10_REG                   SOFTPRES10;                   // CAN Software Reset register
    Uint16                                   rsvd6[4];                     // Reserved
    union   SOFTPRES13_REG                   SOFTPRES13;                   // ADC Software Reset register
    union   SOFTPRES14_REG                   SOFTPRES14;                   // CMPSS Software Reset register
    Uint16                                   rsvd7[2];                     // Reserved
    union   SOFTPRES16_REG                   SOFTPRES16;                   // DAC Software Reset register
    union   SOFTPRES17_REG                   SOFTPRES17;                   // CLB Software Reset register
    union   SOFTPRES18_REG                   SOFTPRES18;                   // FSI Software Reset register
    union   SOFTPRES19_REG                   SOFTPRES19;                   // LIN Software Reset register
    union   SOFTPRES20_REG                   SOFTPRES20;                   // PMBUS Software Reset register
    union   SOFTPRES21_REG                   SOFTPRES21;                   // DCC Software Reset register
    Uint16                                   rsvd8[6];                     // Reserved
    union   SOFTPRES25_REG                   SOFTPRES25;                   // HIC Software Reset register
    union   SOFTPRES26_REG                   SOFTPRES26;                   // AES Software Reset register
    union   SOFTPRES27_REG                   SOFTPRES27;                   // EPG Software Reset register
    Uint16                                   rsvd9[118];                   // Reserved
    union   TAP_STATUS_REG                   TAP_STATUS;                   // Status of JTAG State machine & Debugger Connect
    Uint16                                   rsvd10[105];                  // Reserved
    union   ECAPTYPE_REG                     ECAPTYPE;                     // Configures ECAP Type for the device
    union   SDFMTYPE_REG                     SDFMTYPE;                     // Configures SDFM Type for the device
};

struct CLKCFGLOCK1_BITS {               // bits description
    Uint16 CLKSRCCTL1:1;                // 0 Lock bit for CLKSRCCTL1 register
    Uint16 CLKSRCCTL2:1;                // 1 Lock bit for CLKSRCCTL2 register
    Uint16 CLKSRCCTL3:1;                // 2 Lock bit for CLKSRCCTL3 register
    Uint16 SYSPLLCTL1:1;                // 3 Lock bit for SYSPLLCTL1 register
    Uint16 rsvd1:1;                     // 4 Reserved
    Uint16 rsvd2:1;                     // 5 Reserved
    Uint16 SYSPLLMULT:1;                // 6 Lock bit for SYSPLLMULT register
    Uint16 rsvd3:1;                     // 7 Reserved
    Uint16 rsvd4:1;                     // 8 Reserved
    Uint16 rsvd5:1;                     // 9 Reserved
    Uint16 rsvd6:1;                     // 10 Reserved
    Uint16 SYSCLKDIVSEL:1;              // 11 Lock bit for SYSCLKDIVSEL register
    Uint16 AUXCLKDIVSEL:1;              // 12 Lock bit for AUXCLKDIVSEL register
    Uint16 rsvd7:1;                     // 13 Reserved
    Uint16 rsvd8:1;                     // 14 Reserved
    Uint16 LOSPCP:1;                    // 15 Lock bit for LOSPCP register
    Uint16 XTALCR:1;                    // 16 Lock bit for XTALCR  & XTALCR2 register
    Uint16 rsvd9:15;                    // 31:17 Reserved
};

union CLKCFGLOCK1_REG {
    Uint32  all;
    struct  CLKCFGLOCK1_BITS  bit;
};

struct CLKSRCCTL1_BITS {                // bits description
    Uint16 OSCCLKSRCSEL:2;              // 1:0 OSCCLK Source Select Bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 INTOSC2OFF:1;                // 3 Internal Oscillator 2 Off Bit
    Uint16 rsvd2:1;                     // 4 Reserved
    Uint16 WDHALTI:1;                   // 5 Watchdog HALT Mode Ignore Bit
    Uint16 rsvd3:10;                    // 15:6 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union CLKSRCCTL1_REG {
    Uint32  all;
    struct  CLKSRCCTL1_BITS  bit;
};

struct CLKSRCCTL2_BITS {                // bits description
    Uint16 rsvd1:2;                     // 1:0 Reserved
    Uint16 CANABCLKSEL:2;               // 3:2 CANA Bit Clock Source Select Bit
    Uint16 rsvd2:2;                     // 5:4 Reserved
    Uint16 rsvd3:2;                     // 7:6 Reserved
    Uint16 rsvd4:2;                     // 9:8 Reserved
    Uint16 MCANABCLKSEL:2;              // 11:10 MCANA Bit Clock Source Select Bit
    Uint16 rsvd5:2;                     // 13:12 Reserved
    Uint16 rsvd6:2;                     // 15:14 Reserved
    Uint16 rsvd7:2;                     // 17:16 Reserved
    Uint16 rsvd8:14;                    // 31:18 Reserved
};

union CLKSRCCTL2_REG {
    Uint32  all;
    struct  CLKSRCCTL2_BITS  bit;
};

struct CLKSRCCTL3_BITS {                // bits description
    Uint16 XCLKOUTSEL:4;                // 3:0 XCLKOUT Source Select Bit
    Uint16 rsvd1:12;                    // 15:4 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union CLKSRCCTL3_REG {
    Uint32  all;
    struct  CLKSRCCTL3_BITS  bit;
};

struct SYSPLLCTL1_BITS {                // bits description
    Uint16 PLLEN:1;                     // 0 SYSPLL enable/disable bit
    Uint16 PLLCLKEN:1;                  // 1 SYSPLL bypassed or included in the PLLSYSCLK path
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:1;                     // 4 Reserved
    Uint16 rsvd4:1;                     // 5 Reserved
    Uint16 rsvd5:10;                    // 15:6 Reserved
    Uint16 rsvd6:16;                    // 31:16 Reserved
};

union SYSPLLCTL1_REG {
    Uint32  all;
    struct  SYSPLLCTL1_BITS  bit;
};

struct SYSPLLMULT_BITS {                // bits description
    Uint16 IMULT:8;                     // 7:0 SYSPLL Integer Multiplier
    Uint16 rsvd1:2;                     // 9:8 Reserved
    Uint16 rsvd2:2;                     // 11:10 Reserved
    Uint16 rsvd3:2;                     // 13:12 Reserved
    Uint16 rsvd4:2;                     // 15:14 Reserved
    Uint16 ODIV:5;                      // 20:16 Output Clock Divider
    Uint16 rsvd5:3;                     // 23:21 Reserved
    Uint16 REFDIV:5;                    // 28:24 Reference Clock Divider
    Uint16 rsvd6:3;                     // 31:29 Reserved
};

union SYSPLLMULT_REG {
    Uint32  all;
    struct  SYSPLLMULT_BITS  bit;
};

struct SYSPLLSTS_BITS {                 // bits description
    Uint16 LOCKS:1;                     // 0 SYSPLL Lock Status Bit
    Uint16 SLIPS:1;                     // 1 SYSPLL Slip Status Bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 REF_LOSTS:1;                 // 3 SYSPLL "Reference  Lost" Status Bit
    Uint16 rsvd2:1;                     // 4 Reserved
    Uint16 rsvd3:1;                     // 5 Reserved
    Uint16 rsvd4:10;                    // 15:6 Reserved
    Uint16 rsvd5:16;                    // 31:16 Reserved
};

union SYSPLLSTS_REG {
    Uint32  all;
    struct  SYSPLLSTS_BITS  bit;
};

struct SYSCLKDIVSEL_BITS {              // bits description
    Uint16 PLLSYSCLKDIV:6;              // 5:0 PLLSYSCLK Divide Select
    Uint16 rsvd1:2;                     // 7:6 Reserved
    Uint16 PLLSYSCLKDIV_LSB:1;          // 8 This bit allows the odd division for the sys clock divider
    Uint16 rsvd2:7;                     // 15:9 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union SYSCLKDIVSEL_REG {
    Uint32  all;
    struct  SYSCLKDIVSEL_BITS  bit;
};

struct AUXCLKDIVSEL_BITS {              // bits description
    Uint16 rsvd1:3;                     // 2:0 Reserved
    Uint16 rsvd2:5;                     // 7:3 Reserved
    Uint16 MCANCLKDIV:5;                // 12:8 Divider between CANFD Source Clock and CANFD Bit CLK
    Uint16 rsvd3:3;                     // 15:13 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union AUXCLKDIVSEL_REG {
    Uint32  all;
    struct  AUXCLKDIVSEL_BITS  bit;
};

struct XCLKOUTDIVSEL_BITS {             // bits description
    Uint16 XCLKOUTDIV:2;                // 1:0 XCLKOUT Divide Select
    Uint16 rsvd1:14;                    // 15:2 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union XCLKOUTDIVSEL_REG {
    Uint32  all;
    struct  XCLKOUTDIVSEL_BITS  bit;
};

struct LOSPCP_BITS {                    // bits description
    Uint16 LSPCLKDIV:3;                 // 2:0 LSPCLK Divide Select
    Uint16 rsvd1:13;                    // 15:3 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union LOSPCP_REG {
    Uint32  all;
    struct  LOSPCP_BITS  bit;
};

struct MCDCR_BITS {                     // bits description
    Uint16 MCLKSTS:1;                   // 0 Missing Clock Status Bit
    Uint16 MCLKCLR:1;                   // 1 Missing Clock Clear Bit
    Uint16 MCLKOFF:1;                   // 2 Missing Clock Detect Off Bit
    Uint16 OSCOFF:1;                    // 3 Oscillator Clock Off Bit
    Uint16 SYSREF_LOSTS:1;              // 4 SYSPLL "Reference  Lost" Status Bit
    Uint16 SYSREF_LOSTSCLR:1;           // 5 Clear for Ref clock lost status
    Uint16 SYSREF_LOST_MCD_EN:1;        // 6 Enable for PLL REF_CLK_LOST as MCD cause
    Uint16 rsvd1:1;                     // 7 Reserved
    Uint16 rsvd2:1;                     // 8 Reserved
    Uint16 rsvd3:1;                     // 9 Reserved
    Uint16 rsvd4:6;                     // 15:10 Reserved
    Uint16 rsvd5:16;                    // 31:16 Reserved
};

union MCDCR_REG {
    Uint32  all;
    struct  MCDCR_BITS  bit;
};

struct X1CNT_BITS {                     // bits description
    Uint16 X1CNT:11;                    // 10:0 X1 Counter
    Uint16 rsvd1:5;                     // 15:11 Reserved
    Uint16 CLR:1;                       // 16 X1 Counter Clear
    Uint16 rsvd2:15;                    // 31:17 Reserved
};

union X1CNT_REG {
    Uint32  all;
    struct  X1CNT_BITS  bit;
};

struct XTALCR_BITS {                    // bits description
    Uint16 OSCOFF:1;                    // 0 XTAL Oscillator powered-down
    Uint16 SE:1;                        // 1 XTAL Oscilator in Single-Ended mode
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:13;                    // 15:3 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union XTALCR_REG {
    Uint32  all;
    struct  XTALCR_BITS  bit;
};

struct XTALCR2_BITS {                   // bits description
    Uint16 XIF:1;                       // 0 XI Initial value deposited before XOSC start
    Uint16 XOF:1;                       // 1 XO Initial value deposited before XOSC start
    Uint16 FEN:1;                       // 2 XOSC pads initialisation enable
    Uint16 rsvd1:13;                    // 15:3 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union XTALCR2_REG {
    Uint32  all;
    struct  XTALCR2_BITS  bit;
};

struct CLKFAILCFG_BITS {                // bits description
    Uint16 DCC0_ERROR_EN:1;             // 0 DCC0 Error causes Clock fail NMI, ERROR
    Uint16 DCC1_ERROR_EN:1;             // 1 DCC1 Error causes Clock fail NMI, ERROR
    Uint16 rsvd1:14;                    // 15:2 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union CLKFAILCFG_REG {
    Uint32  all;
    struct  CLKFAILCFG_BITS  bit;
};

struct CLK_CFG_REGS {
    Uint16                                   rsvd1[2];                     // Reserved
    union   CLKCFGLOCK1_REG                  CLKCFGLOCK1;                  // Lock bit for CLKCFG registers
    Uint16                                   rsvd2[4];                     // Reserved
    union   CLKSRCCTL1_REG                   CLKSRCCTL1;                   // Clock Source Control register-1
    union   CLKSRCCTL2_REG                   CLKSRCCTL2;                   // Clock Source Control register-2
    union   CLKSRCCTL3_REG                   CLKSRCCTL3;                   // Clock Source Control register-3
    union   SYSPLLCTL1_REG                   SYSPLLCTL1;                   // SYSPLL Control register-1
    Uint16                                   rsvd3[4];                     // Reserved
    union   SYSPLLMULT_REG                   SYSPLLMULT;                   // SYSPLL Multiplier register
    union   SYSPLLSTS_REG                    SYSPLLSTS;                    // SYSPLL Status register
    Uint16                                   rsvd4[10];                    // Reserved
    union   SYSCLKDIVSEL_REG                 SYSCLKDIVSEL;                 // System Clock Divider Select register
    union   AUXCLKDIVSEL_REG                 AUXCLKDIVSEL;                 // Auxillary Clock Divider Select register
    Uint16                                   rsvd5[2];                     // Reserved
    union   XCLKOUTDIVSEL_REG                XCLKOUTDIVSEL;                // XCLKOUT Divider Select register
    Uint16                                   rsvd6[2];                     // Reserved
    union   LOSPCP_REG                       LOSPCP;                       // Low Speed Clock Source Prescalar
    union   MCDCR_REG                        MCDCR;                        // Missing Clock Detect Control Register
    union   X1CNT_REG                        X1CNT;                        // 10-bit Counter on X1 Clock
    union   XTALCR_REG                       XTALCR;                       // XTAL Control Register
    Uint16                                   rsvd7[6];                     // Reserved
    union   XTALCR2_REG                      XTALCR2;                      // XTAL Control Register for pad init
    union   CLKFAILCFG_REG                   CLKFAILCFG;                   // Clock Fail cause Configuration
};

struct CPUSYSLOCK1_BITS {               // bits description
    Uint16 rsvd1:1;                     // 0 Reserved
    Uint16 rsvd2:1;                     // 1 Reserved
    Uint16 PIEVERRADDR:1;               // 2 Lock bit for PIEVERRADDR Register
    Uint16 PCLKCR0:1;                   // 3 Lock bit for PCLKCR0 Register
    Uint16 rsvd3:1;                     // 4 Reserved
    Uint16 PCLKCR2:1;                   // 5 Lock bit for PCLKCR2 Register
    Uint16 PCLKCR3:1;                   // 6 Lock bit for PCLKCR3 Register
    Uint16 PCLKCR4:1;                   // 7 Lock bit for PCLKCR4 Register
    Uint16 rsvd4:1;                     // 8 Reserved
    Uint16 PCLKCR6:1;                   // 9 Lock bit for PCLKCR6 Register
    Uint16 PCLKCR7:1;                   // 10 Lock bit for PCLKCR7 Register
    Uint16 PCLKCR8:1;                   // 11 Lock bit for PCLKCR8 Register
    Uint16 PCLKCR9:1;                   // 12 Lock bit for PCLKCR9 Register
    Uint16 PCLKCR10:1;                  // 13 Lock bit for PCLKCR10 Register
    Uint16 rsvd5:1;                     // 14 Reserved
    Uint16 rsvd6:1;                     // 15 Reserved
    Uint16 PCLKCR13:1;                  // 16 Lock bit for PCLKCR13 Register
    Uint16 PCLKCR14:1;                  // 17 Lock bit for PCLKCR14 Register
    Uint16 rsvd7:1;                     // 18 Reserved
    Uint16 PCLKCR16:1;                  // 19 Lock bit for PCLKCR16 Register
    Uint16 rsvd8:1;                     // 20 Reserved
    Uint16 LPMCR:1;                     // 21 Lock bit for LPMCR Register
    Uint16 GPIOLPMSEL0:1;               // 22 Lock bit for GPIOLPMSEL0 Register
    Uint16 GPIOLPMSEL1:1;               // 23 Lock bit for GPIOLPMSEL1 Register
    Uint16 PCLKCR17:1;                  // 24 Lock bit for PCLKCR17 Register
    Uint16 PCLKCR18:1;                  // 25 Lock bit for PCLKCR18 Register
    Uint16 PCLKCR19:1;                  // 26 Lock bit for PCLKCR19 Register
    Uint16 PCLKCR20:1;                  // 27 Lock bit for PCLKCR20 Register
    Uint16 PCLKCR21:1;                  // 28 Lock bit for PCLKCR21 Register
    Uint16 PCLKCR22:1;                  // 29 Lock bit for PCLKCR22 Register
    Uint16 rsvd9:1;                     // 30 Reserved
    Uint16 rsvd10:1;                    // 31 Reserved
};

union CPUSYSLOCK1_REG {
    Uint32  all;
    struct  CPUSYSLOCK1_BITS  bit;
};

struct CPUSYSLOCK2_BITS {               // bits description
    Uint16 rsvd1:1;                     // 0 Reserved
    Uint16 PCLKCR25:1;                  // 1 Lock bit for PCLKCR25 Register
    Uint16 PCLKCR26:1;                  // 2 Lock bit for PCLKCR26 Register
    Uint16 PCLKCR27:1;                  // 3 Lock bit for PCLKCR27 Register
    Uint16 rsvd2:12;                    // 15:4 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union CPUSYSLOCK2_REG {
    Uint32  all;
    struct  CPUSYSLOCK2_BITS  bit;
};

struct PIEVERRADDR_BITS {               // bits description
    Uint32 ADDR:22;                     // 21:0 PIE Vector Fetch Error Handler Routine Address
    Uint16 rsvd1:10;                    // 31:22 Reserved
};

union PIEVERRADDR_REG {
    Uint32  all;
    struct  PIEVERRADDR_BITS  bit;
};

struct PCLKCR0_BITS {                   // bits description
    Uint16 CLA1:1;                      // 0 CLA1 Clock Enable Bit
    Uint16 rsvd1:1;                     // 1 Reserved
    Uint16 DMA:1;                       // 2 DMA Clock Enable bit
    Uint16 CPUTIMER0:1;                 // 3 CPUTIMER0 Clock Enable bit
    Uint16 CPUTIMER1:1;                 // 4 CPUTIMER1 Clock Enable bit
    Uint16 CPUTIMER2:1;                 // 5 CPUTIMER2 Clock Enable bit
    Uint16 rsvd2:7;                     // 12:6 Reserved
    Uint16 CPUBGCRC:1;                  // 13 CPUBGCRC Clock Enable Bit
    Uint16 CLA1BGCRC:1;                 // 14 CLA1BGCRC Clock Enable Bit
    Uint16 rsvd3:1;                     // 15 Reserved
    Uint16 HRCAL:1;                     // 16 HRCAL Clock Enable Bit
    Uint16 rsvd4:1;                     // 17 Reserved
    Uint16 TBCLKSYNC:1;                 // 18 EPWM Time Base Clock sync
    Uint16 rsvd5:1;                     // 19 Reserved
    Uint16 rsvd6:4;                     // 23:20 Reserved
    Uint16 ERAD:1;                      // 24 ERAD module clock enable
    Uint16 rsvd7:7;                     // 31:25 Reserved
};

union PCLKCR0_REG {
    Uint32  all;
    struct  PCLKCR0_BITS  bit;
};

struct PCLKCR2_BITS {                   // bits description
    Uint16 EPWM1:1;                     // 0 EPWM1 Clock Enable bit
    Uint16 EPWM2:1;                     // 1 EPWM2 Clock Enable bit
    Uint16 EPWM3:1;                     // 2 EPWM3 Clock Enable bit
    Uint16 EPWM4:1;                     // 3 EPWM4 Clock Enable bit
    Uint16 EPWM5:1;                     // 4 EPWM5 Clock Enable bit
    Uint16 EPWM6:1;                     // 5 EPWM6 Clock Enable bit
    Uint16 EPWM7:1;                     // 6 EPWM7 Clock Enable bit
    Uint16 EPWM8:1;                     // 7 EPWM8 Clock Enable bit
    Uint16 rsvd1:1;                     // 8 Reserved
    Uint16 rsvd2:1;                     // 9 Reserved
    Uint16 rsvd3:1;                     // 10 Reserved
    Uint16 rsvd4:1;                     // 11 Reserved
    Uint16 rsvd5:1;                     // 12 Reserved
    Uint16 rsvd6:1;                     // 13 Reserved
    Uint16 rsvd7:1;                     // 14 Reserved
    Uint16 rsvd8:1;                     // 15 Reserved
    Uint16 rsvd9:16;                    // 31:16 Reserved
};

union PCLKCR2_REG {
    Uint32  all;
    struct  PCLKCR2_BITS  bit;
};

struct PCLKCR3_BITS {                   // bits description
    Uint16 ECAP1:1;                     // 0 ECAP1 Clock Enable bit
    Uint16 ECAP2:1;                     // 1 ECAP2 Clock Enable bit
    Uint16 ECAP3:1;                     // 2 ECAP3 Clock Enable bit
    Uint16 rsvd1:1;                     // 3 Reserved
    Uint16 rsvd2:1;                     // 4 Reserved
    Uint16 rsvd3:1;                     // 5 Reserved
    Uint16 rsvd4:1;                     // 6 Reserved
    Uint16 rsvd5:1;                     // 7 Reserved
    Uint16 rsvd6:8;                     // 15:8 Reserved
    Uint16 rsvd7:16;                    // 31:16 Reserved
};

union PCLKCR3_REG {
    Uint32  all;
    struct  PCLKCR3_BITS  bit;
};

struct PCLKCR4_BITS {                   // bits description
    Uint16 EQEP1:1;                     // 0 EQEP1 Clock Enable bit
    Uint16 EQEP2:1;                     // 1 EQEP2 Clock Enable bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:12;                    // 15:4 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union PCLKCR4_REG {
    Uint32  all;
    struct  PCLKCR4_BITS  bit;
};

struct PCLKCR6_BITS {                   // bits description
    Uint16 SD1:1;                       // 0 SD1 Clock Enable bit
    Uint16 SD2:1;                       // 1 SD2 Clock Enable bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:1;                     // 4 Reserved
    Uint16 rsvd4:1;                     // 5 Reserved
    Uint16 rsvd5:1;                     // 6 Reserved
    Uint16 rsvd6:1;                     // 7 Reserved
    Uint16 rsvd7:8;                     // 15:8 Reserved
    Uint16 rsvd8:16;                    // 31:16 Reserved
};

union PCLKCR6_REG {
    Uint32  all;
    struct  PCLKCR6_BITS  bit;
};

struct PCLKCR7_BITS {                   // bits description
    Uint16 SCI_A:1;                     // 0 SCI_A Clock Enable bit
    Uint16 SCI_B:1;                     // 1 SCI_B Clock Enable bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:12;                    // 15:4 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union PCLKCR7_REG {
    Uint32  all;
    struct  PCLKCR7_BITS  bit;
};

struct PCLKCR8_BITS {                   // bits description
    Uint16 SPI_A:1;                     // 0 SPI_A Clock Enable bit
    Uint16 SPI_B:1;                     // 1 SPI_B Clock Enable bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:12;                    // 15:4 Reserved
    Uint16 rsvd4:1;                     // 16 Reserved
    Uint16 rsvd5:1;                     // 17 Reserved
    Uint16 rsvd6:14;                    // 31:18 Reserved
};

union PCLKCR8_REG {
    Uint32  all;
    struct  PCLKCR8_BITS  bit;
};

struct PCLKCR9_BITS {                   // bits description
    Uint16 I2C_A:1;                     // 0 I2C_A Clock Enable bit
    Uint16 I2C_B:1;                     // 1 I2C_B Clock Enable bit
    Uint16 rsvd1:14;                    // 15:2 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union PCLKCR9_REG {
    Uint32  all;
    struct  PCLKCR9_BITS  bit;
};

struct PCLKCR10_BITS {                  // bits description
    Uint16 CAN_A:1;                     // 0 CAN_A Clock Enable bit
    Uint16 rsvd1:1;                     // 1 Reserved
    Uint16 rsvd2:1;                     // 2 Reserved
    Uint16 rsvd3:1;                     // 3 Reserved
    Uint16 MCAN_A:1;                    // 4 MCAN_A Clock Enable bit
    Uint16 rsvd4:1;                     // 5 Reserved
    Uint16 rsvd5:1;                     // 6 Reserved
    Uint16 rsvd6:1;                     // 7 Reserved
    Uint16 rsvd7:8;                     // 15:8 Reserved
    Uint16 rsvd8:16;                    // 31:16 Reserved
};

union PCLKCR10_REG {
    Uint32  all;
    struct  PCLKCR10_BITS  bit;
};

struct PCLKCR13_BITS {                  // bits description
    Uint16 ADC_A:1;                     // 0 ADC_A Clock Enable bit
    Uint16 ADC_B:1;                     // 1 ADC_B Clock Enable bit
    Uint16 ADC_C:1;                     // 2 ADC_C Clock Enable bit
    Uint16 rsvd1:1;                     // 3 Reserved
    Uint16 rsvd2:12;                    // 15:4 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union PCLKCR13_REG {
    Uint32  all;
    struct  PCLKCR13_BITS  bit;
};

struct PCLKCR14_BITS {                  // bits description
    Uint16 CMPSS1:1;                    // 0 CMPSS1 Clock Enable bit
    Uint16 CMPSS2:1;                    // 1 CMPSS2 Clock Enable bit
    Uint16 CMPSS3:1;                    // 2 CMPSS3 Clock Enable bit
    Uint16 CMPSS4:1;                    // 3 CMPSS4 Clock Enable bit
    Uint16 rsvd1:1;                     // 4 Reserved
    Uint16 rsvd2:1;                     // 5 Reserved
    Uint16 rsvd3:1;                     // 6 Reserved
    Uint16 rsvd4:1;                     // 7 Reserved
    Uint16 rsvd5:8;                     // 15:8 Reserved
    Uint16 rsvd6:16;                    // 31:16 Reserved
};

union PCLKCR14_REG {
    Uint32  all;
    struct  PCLKCR14_BITS  bit;
};

struct PCLKCR16_BITS {                  // bits description
    Uint16 rsvd1:1;                     // 0 Reserved
    Uint16 rsvd2:1;                     // 1 Reserved
    Uint16 rsvd3:1;                     // 2 Reserved
    Uint16 rsvd4:1;                     // 3 Reserved
    Uint16 rsvd5:12;                    // 15:4 Reserved
    Uint16 DAC_A:1;                     // 16 Buffered_DAC_A Clock Enable Bit
    Uint16 DAC_B:1;                     // 17 Buffered_DAC_B Clock Enable Bit
    Uint16 rsvd6:1;                     // 18 Reserved
    Uint16 rsvd7:1;                     // 19 Reserved
    Uint16 rsvd8:12;                    // 31:20 Reserved
};

union PCLKCR16_REG {
    Uint32  all;
    struct  PCLKCR16_BITS  bit;
};

struct PCLKCR17_BITS {                  // bits description
    Uint16 CLB1:1;                      // 0 CLB1 Clock Enable bit
    Uint16 CLB2:1;                      // 1 CLB2 Clock Enable bit
    Uint16 CLB3:1;                      // 2 CLB3 Clock Enable bit
    Uint16 CLB4:1;                      // 3 CLB4 Clock Enable bit
    Uint16 rsvd1:12;                    // 15:4 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union PCLKCR17_REG {
    Uint32  all;
    struct  PCLKCR17_BITS  bit;
};

struct PCLKCR18_BITS {                  // bits description
    Uint16 FSITX_A:1;                   // 0 FSITX_A Clock Enable bit
    Uint16 FSIRX_A:1;                   // 1 FSIRX_A Clock Enable bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:12;                    // 15:4 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union PCLKCR18_REG {
    Uint32  all;
    struct  PCLKCR18_BITS  bit;
};

struct PCLKCR19_BITS {                  // bits description
    Uint16 LIN_A:1;                     // 0 LIN_A Clock Enable bit
    Uint16 LIN_B:1;                     // 1 LIN_B Clock Enable bit
    Uint16 rsvd1:1;                     // 2 Reserved
    Uint16 rsvd2:1;                     // 3 Reserved
    Uint16 rsvd3:12;                    // 15:4 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union PCLKCR19_REG {
    Uint32  all;
    struct  PCLKCR19_BITS  bit;
};

struct PCLKCR20_BITS {                  // bits description
    Uint16 PMBUS_A:1;                   // 0 PMBUS_A Clock Enable bit
    Uint16 rsvd1:1;                     // 1 Reserved
    Uint16 rsvd2:14;                    // 15:2 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union PCLKCR20_REG {
    Uint32  all;
    struct  PCLKCR20_BITS  bit;
};

struct PCLKCR21_BITS {                  // bits description
    Uint16 DCC0:1;                      // 0 DCC0 Clock Enable Bit
    Uint16 DCC1:1;                      // 1 DCC1 Clock Enable Bit
    Uint16 rsvd1:14;                    // 15:2 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union PCLKCR21_REG {
    Uint32  all;
    struct  PCLKCR21_BITS  bit;
};

struct PCLKCR25_BITS {                  // bits description
    Uint16 HICA:1;                      // 0 HICA Clock Enable Bit
    Uint16 rsvd1:15;                    // 15:1 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union PCLKCR25_REG {
    Uint32  all;
    struct  PCLKCR25_BITS  bit;
};

struct PCLKCR26_BITS {                  // bits description
    Uint16 AESA:1;                      // 0 AESA Clock Enable Bit
    Uint16 rsvd1:15;                    // 15:1 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union PCLKCR26_REG {
    Uint32  all;
    struct  PCLKCR26_BITS  bit;
};

struct PCLKCR27_BITS {                  // bits description
    Uint16 EPG1:1;                      // 0 EPG1 Clock Enable Bit
    Uint16 rsvd1:15;                    // 15:1 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union PCLKCR27_REG {
    Uint32  all;
    struct  PCLKCR27_BITS  bit;
};

struct SIMRESET_BITS {                  // bits description
    Uint16 CPU1RSn:1;                   // 0 Generates a reset to CPU
    Uint16 XRSn:1;                      // 1 Generates a simulated XRSn
    Uint16 rsvd1:14;                    // 15:2 Reserved
    Uint16 KEY:16;                      // 31:16 Key value to enable write
};

union SIMRESET_REG {
    Uint32  all;
    struct  SIMRESET_BITS  bit;
};

struct LPMCR_BITS {                     // bits description
    Uint16 LPM:2;                       // 1:0 Low Power Mode setting
    Uint16 QUALSTDBY:6;                 // 7:2 STANDBY Wakeup Pin Qualification Setting
    Uint16 rsvd1:7;                     // 14:8 Reserved
    Uint16 WDINTE:1;                    // 15 Enable for WDINT wakeup from STANDBY
    Uint16 rsvd2:2;                     // 17:16 Reserved
    Uint16 rsvd3:13;                    // 30:18 Reserved
    Uint16 rsvd4:1;                     // 31 Reserved
};

union LPMCR_REG {
    Uint32  all;
    struct  LPMCR_BITS  bit;
};

struct GPIOLPMSEL0_BITS {               // bits description
    Uint16 GPIO0:1;                     // 0 GPIO0 Enable for LPM Wakeup
    Uint16 GPIO1:1;                     // 1 GPIO1 Enable for LPM Wakeup
    Uint16 GPIO2:1;                     // 2 GPIO2 Enable for LPM Wakeup
    Uint16 GPIO3:1;                     // 3 GPIO3 Enable for LPM Wakeup
    Uint16 GPIO4:1;                     // 4 GPIO4 Enable for LPM Wakeup
    Uint16 GPIO5:1;                     // 5 GPIO5 Enable for LPM Wakeup
    Uint16 GPIO6:1;                     // 6 GPIO6 Enable for LPM Wakeup
    Uint16 GPIO7:1;                     // 7 GPIO7 Enable for LPM Wakeup
    Uint16 GPIO8:1;                     // 8 GPIO8 Enable for LPM Wakeup
    Uint16 GPIO9:1;                     // 9 GPIO9 Enable for LPM Wakeup
    Uint16 GPIO10:1;                    // 10 GPIO10 Enable for LPM Wakeup
    Uint16 GPIO11:1;                    // 11 GPIO11 Enable for LPM Wakeup
    Uint16 GPIO12:1;                    // 12 GPIO12 Enable for LPM Wakeup
    Uint16 GPIO13:1;                    // 13 GPIO13 Enable for LPM Wakeup
    Uint16 GPIO14:1;                    // 14 GPIO14 Enable for LPM Wakeup
    Uint16 GPIO15:1;                    // 15 GPIO15 Enable for LPM Wakeup
    Uint16 GPIO16:1;                    // 16 GPIO16 Enable for LPM Wakeup
    Uint16 GPIO17:1;                    // 17 GPIO17 Enable for LPM Wakeup
    Uint16 GPIO18:1;                    // 18 GPIO18 Enable for LPM Wakeup
    Uint16 GPIO19:1;                    // 19 GPIO19 Enable for LPM Wakeup
    Uint16 GPIO20:1;                    // 20 GPIO20 Enable for LPM Wakeup
    Uint16 GPIO21:1;                    // 21 GPIO21 Enable for LPM Wakeup
    Uint16 GPIO22:1;                    // 22 GPIO22 Enable for LPM Wakeup
    Uint16 GPIO23:1;                    // 23 GPIO23 Enable for LPM Wakeup
    Uint16 GPIO24:1;                    // 24 GPIO24 Enable for LPM Wakeup
    Uint16 GPIO25:1;                    // 25 GPIO25 Enable for LPM Wakeup
    Uint16 GPIO26:1;                    // 26 GPIO26 Enable for LPM Wakeup
    Uint16 GPIO27:1;                    // 27 GPIO27 Enable for LPM Wakeup
    Uint16 GPIO28:1;                    // 28 GPIO28 Enable for LPM Wakeup
    Uint16 GPIO29:1;                    // 29 GPIO29 Enable for LPM Wakeup
    Uint16 GPIO30:1;                    // 30 GPIO30 Enable for LPM Wakeup
    Uint16 GPIO31:1;                    // 31 GPIO31 Enable for LPM Wakeup
};

union GPIOLPMSEL0_REG {
    Uint32  all;
    struct  GPIOLPMSEL0_BITS  bit;
};

struct GPIOLPMSEL1_BITS {               // bits description
    Uint16 GPIO32:1;                    // 0 GPIO32 Enable for LPM Wakeup
    Uint16 GPIO33:1;                    // 1 GPIO33 Enable for LPM Wakeup
    Uint16 GPIO34:1;                    // 2 GPIO34 Enable for LPM Wakeup
    Uint16 GPIO35:1;                    // 3 GPIO35 Enable for LPM Wakeup
    Uint16 rsvd1:1;                     // 4 Reserved
    Uint16 GPIO37:1;                    // 5 GPIO37 Enable for LPM Wakeup
    Uint16 rsvd2:1;                     // 6 Reserved
    Uint16 GPIO39:1;                    // 7 GPIO39 Enable for LPM Wakeup
    Uint16 GPIO40:1;                    // 8 GPIO40 Enable for LPM Wakeup
    Uint16 GPIO41:1;                    // 9 GPIO41 Enable for LPM Wakeup
    Uint16 GPIO42:1;                    // 10 GPIO42 Enable for LPM Wakeup
    Uint16 GPIO43:1;                    // 11 GPIO43 Enable for LPM Wakeup
    Uint16 GPIO44:1;                    // 12 GPIO44 Enable for LPM Wakeup
    Uint16 GPIO45:1;                    // 13 GPIO45 Enable for LPM Wakeup
    Uint16 GPIO46:1;                    // 14 GPIO46 Enable for LPM Wakeup
    Uint16 GPIO47:1;                    // 15 GPIO47 Enable for LPM Wakeup
    Uint16 GPIO48:1;                    // 16 GPIO48 Enable for LPM Wakeup
    Uint16 GPIO49:1;                    // 17 GPIO49 Enable for LPM Wakeup
    Uint16 GPIO50:1;                    // 18 GPIO50 Enable for LPM Wakeup
    Uint16 GPIO51:1;                    // 19 GPIO51 Enable for LPM Wakeup
    Uint16 GPIO52:1;                    // 20 GPIO52 Enable for LPM Wakeup
    Uint16 GPIO53:1;                    // 21 GPIO53 Enable for LPM Wakeup
    Uint16 GPIO54:1;                    // 22 GPIO54 Enable for LPM Wakeup
    Uint16 GPIO55:1;                    // 23 GPIO55 Enable for LPM Wakeup
    Uint16 GPIO56:1;                    // 24 GPIO56 Enable for LPM Wakeup
    Uint16 GPIO57:1;                    // 25 GPIO57 Enable for LPM Wakeup
    Uint16 GPIO58:1;                    // 26 GPIO58 Enable for LPM Wakeup
    Uint16 GPIO59:1;                    // 27 GPIO59 Enable for LPM Wakeup
    Uint16 GPIO60:1;                    // 28 GPIO60 Enable for LPM Wakeup
    Uint16 rsvd3:1;                     // 29 Reserved
    Uint16 rsvd4:1;                     // 30 Reserved
    Uint16 rsvd5:1;                     // 31 Reserved
};

union GPIOLPMSEL1_REG {
    Uint32  all;
    struct  GPIOLPMSEL1_BITS  bit;
};

struct TMR2CLKCTL_BITS {                // bits description
    Uint16 TMR2CLKSRCSEL:3;             // 2:0 CPU Timer 2 Clock Source Select Bit
    Uint16 TMR2CLKPRESCALE:3;           // 5:3 CPU Timer 2 Clock Pre-Scale Value
    Uint16 rsvd1:10;                    // 15:6 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union TMR2CLKCTL_REG {
    Uint32  all;
    struct  TMR2CLKCTL_BITS  bit;
};

struct RESCCLR_BITS {                   // bits description
    Uint16 POR:1;                       // 0 POR Reset Cause Indication Bit
    Uint16 XRSn:1;                      // 1 XRSn Reset Cause Indication Bit
    Uint16 WDRSn:1;                     // 2 WDRSn Reset Cause Indication Bit
    Uint16 NMIWDRSn:1;                  // 3 NMIWDRSn Reset Cause Indication Bit
    Uint16 rsvd1:1;                     // 4 Reserved
    Uint16 HWBISTn:1;                   // 5 HWBISTn Reset Cause Indication Bit
    Uint16 rsvd2:1;                     // 6 Reserved
    Uint16 rsvd3:1;                     // 7 Reserved
    Uint16 SCCRESETn:1;                 // 8 SCCRESETn Reset Cause Indication Bit
    Uint16 rsvd4:1;                     // 9 Reserved
    Uint16 SIMRESET_CPU1RSn:1;          // 10 SIMRESET_CPU1RSn Reset Cause Indication Bit
    Uint16 SIMRESET_XRSn:1;             // 11 SIMRESET_XRSn Reset Cause Indication Bit
    Uint16 rsvd5:4;                     // 15:12 Reserved
    Uint16 rsvd6:16;                    // 31:16 Reserved
};

union RESCCLR_REG {
    Uint32  all;
    struct  RESCCLR_BITS  bit;
};

struct RESC_BITS {                      // bits description
    Uint16 POR:1;                       // 0 POR Reset Cause Indication Bit
    Uint16 XRSn:1;                      // 1 XRSn Reset Cause Indication Bit
    Uint16 WDRSn:1;                     // 2 WDRSn Reset Cause Indication Bit
    Uint16 NMIWDRSn:1;                  // 3 NMIWDRSn Reset Cause Indication Bit
    Uint16 rsvd1:1;                     // 4 Reserved
    Uint16 HWBISTn:1;                   // 5 HWBISTn Reset Cause Indication Bit
    Uint16 rsvd2:1;                     // 6 Reserved
    Uint16 rsvd3:1;                     // 7 Reserved
    Uint16 SCCRESETn:1;                 // 8 SCCRESETn Reset Cause Indication Bit
    Uint16 rsvd4:1;                     // 9 Reserved
    Uint16 SIMRESET_CPU1RSn:1;          // 10 SIMRESET_CPU1RSn Reset Cause Indication Bit
    Uint16 SIMRESET_XRSn:1;             // 11 SIMRESET_XRSn Reset Cause Indication Bit
    Uint16 rsvd5:4;                     // 15:12 Reserved
    Uint16 rsvd6:14;                    // 29:16 Reserved
    Uint16 XRSn_pin_status:1;           // 30 XRSN Pin Status
    Uint16 DCON:1;                      // 31 Debugger conntion status to C28x
};

union RESC_REG {
    Uint32  all;
    struct  RESC_BITS  bit;
};

struct MCANWAKESTATUS_BITS {            // bits description
    Uint16 WAKE:1;                      // 0 MCAN Wake Status
    Uint16 rsvd1:15;                    // 15:1 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union MCANWAKESTATUS_REG {
    Uint32  all;
    struct  MCANWAKESTATUS_BITS  bit;
};

struct MCANWAKESTATUSCLR_BITS {         // bits description
    Uint16 WAKE:1;                      // 0 Cear bit for MCANWAKESTATUS.WAKE bit
    Uint16 rsvd1:15;                    // 15:1 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union MCANWAKESTATUSCLR_REG {
    Uint32  all;
    struct  MCANWAKESTATUSCLR_BITS  bit;
};

struct CLKSTOPREQ_BITS {                // bits description
    Uint16 rsvd1:1;                     // 0 Reserved
    Uint16 rsvd2:1;                     // 1 Reserved
    Uint16 rsvd3:1;                     // 2 Reserved
    Uint16 rsvd4:1;                     // 3 Reserved
    Uint16 rsvd5:1;                     // 4 Reserved
    Uint16 rsvd6:1;                     // 5 Reserved
    Uint16 rsvd7:2;                     // 7:6 Reserved
    Uint16 MCAN_A:1;                    // 8 MCAN_A Clock Stop Request Bit
    Uint16 rsvd8:3;                     // 11:9 Reserved
    Uint16 rsvd9:4;                     // 15:12 Reserved
    Uint16 KEY:16;                      // 31:16 Key for register write
};

union CLKSTOPREQ_REG {
    Uint32  all;
    struct  CLKSTOPREQ_BITS  bit;
};

struct CLKSTOPACK_BITS {                // bits description
    Uint16 rsvd1:1;                     // 0 Reserved
    Uint16 rsvd2:1;                     // 1 Reserved
    Uint16 rsvd3:1;                     // 2 Reserved
    Uint16 rsvd4:1;                     // 3 Reserved
    Uint16 rsvd5:1;                     // 4 Reserved
    Uint16 rsvd6:1;                     // 5 Reserved
    Uint16 rsvd7:2;                     // 7:6 Reserved
    Uint16 MCAN_A:1;                    // 8 MCAN_A Clock Stop Ack Bit
    Uint16 rsvd8:7;                     // 15:9 Reserved
    Uint16 rsvd9:16;                    // 31:16 Reserved
};

union CLKSTOPACK_REG {
    Uint32  all;
    struct  CLKSTOPACK_BITS  bit;
};

struct CPU_SYS_REGS {
    union   CPUSYSLOCK1_REG                  CPUSYSLOCK1;                  // Lock bit for CPUSYS registers
    union   CPUSYSLOCK2_REG                  CPUSYSLOCK2;                  // Lock bit for CPUSYS registers
    Uint16                                   rsvd1[6];                     // Reserved
    union   PIEVERRADDR_REG                  PIEVERRADDR;                  // PIE Vector Fetch Error Address register
    Uint16                                   rsvd2[22];                    // Reserved
    union   PCLKCR0_REG                      PCLKCR0;                      // Peripheral Clock Gating Registers
    Uint16                                   rsvd3[2];                     // Reserved
    union   PCLKCR2_REG                      PCLKCR2;                      // Peripheral Clock Gating Register - ETPWM
    union   PCLKCR3_REG                      PCLKCR3;                      // Peripheral Clock Gating Register - ECAP
    union   PCLKCR4_REG                      PCLKCR4;                      // Peripheral Clock Gating Register - EQEP
    Uint16                                   rsvd4[2];                     // Reserved
    union   PCLKCR6_REG                      PCLKCR6;                      // Peripheral Clock Gating Register - SDFM
    union   PCLKCR7_REG                      PCLKCR7;                      // Peripheral Clock Gating Register - SCI
    union   PCLKCR8_REG                      PCLKCR8;                      // Peripheral Clock Gating Register - SPI
    union   PCLKCR9_REG                      PCLKCR9;                      // Peripheral Clock Gating Register - I2C
    union   PCLKCR10_REG                     PCLKCR10;                     // Peripheral Clock Gating Register - CAN
    Uint16                                   rsvd5[4];                     // Reserved
    union   PCLKCR13_REG                     PCLKCR13;                     // Peripheral Clock Gating Register - ADC
    union   PCLKCR14_REG                     PCLKCR14;                     // Peripheral Clock Gating Register - CMPSS
    Uint16                                   rsvd6[2];                     // Reserved
    union   PCLKCR16_REG                     PCLKCR16;                     // Peripheral Clock Gating Register Buf_DAC
    union   PCLKCR17_REG                     PCLKCR17;                     // Peripheral Clock Gating Register - CLB
    union   PCLKCR18_REG                     PCLKCR18;                     // Peripheral Clock Gating Register - FSI
    union   PCLKCR19_REG                     PCLKCR19;                     // Peripheral Clock Gating Register - LIN
    union   PCLKCR20_REG                     PCLKCR20;                     // Peripheral Clock Gating Register - PMBUS
    union   PCLKCR21_REG                     PCLKCR21;                     // Peripheral Clock Gating Register - DCC
    Uint16                                   rsvd7[6];                     // Reserved
    union   PCLKCR25_REG                     PCLKCR25;                     // Peripheral Clock Gating Register - HIC
    union   PCLKCR26_REG                     PCLKCR26;                     // Peripheral Clock Gating Register - AES
    union   PCLKCR27_REG                     PCLKCR27;                     // Peripheral Clock Gating Register - EPG
    Uint16                                   rsvd8[22];                    // Reserved
    union   SIMRESET_REG                     SIMRESET;                     // Simulated Reset Register
    Uint16                                   rsvd9[4];                     // Reserved
    union   LPMCR_REG                        LPMCR;                        // LPM Control Register
    union   GPIOLPMSEL0_REG                  GPIOLPMSEL0;                  // GPIO LPM Wakeup select registers
    union   GPIOLPMSEL1_REG                  GPIOLPMSEL1;                  // GPIO LPM Wakeup select registers
    union   TMR2CLKCTL_REG                   TMR2CLKCTL;                   // Timer2 Clock Measurement functionality control register
    union   RESCCLR_REG                      RESCCLR;                      // Reset Cause Clear Register
    union   RESC_REG                         RESC;                         // Reset Cause register
    Uint16                                   rsvd10[22];                   // Reserved
    union   MCANWAKESTATUS_REG               MCANWAKESTATUS;               // MCAN Wake Status Register
    union   MCANWAKESTATUSCLR_REG            MCANWAKESTATUSCLR;            // MCAN Wake Status Clear Register
    union   CLKSTOPREQ_REG                   CLKSTOPREQ;                   // Peripheral Clock Stop Request Register
    union   CLKSTOPACK_REG                   CLKSTOPACK;                   // Peripheral Clock Stop Ackonwledge Register
};

struct CLA1TASKSRCSELLOCK_BITS {        // bits description
    Uint16 CLA1TASKSRCSEL1:1;           // 0 CLA1TASKSRCSEL1 Register Lock bit
    Uint16 CLA1TASKSRCSEL2:1;           // 1 CLA1TASKSRCSEL2 Register Lock bit
    Uint16 rsvd1:14;                    // 15:2 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union CLA1TASKSRCSELLOCK_REG {
    Uint32  all;
    struct  CLA1TASKSRCSELLOCK_BITS  bit;
};

struct DMACHSRCSELLOCK_BITS {           // bits description
    Uint16 DMACHSRCSEL1:1;              // 0 DMACHSRCSEL1 Register Lock bit
    Uint16 DMACHSRCSEL2:1;              // 1 DMACHSRCSEL2 Register Lock bit
    Uint16 rsvd1:14;                    // 15:2 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union DMACHSRCSELLOCK_REG {
    Uint32  all;
    struct  DMACHSRCSELLOCK_BITS  bit;
};

struct CLA1TASKSRCSEL1_BITS {           // bits description
    Uint16 TASK1:8;                     // 7:0 Selects the Trigger Source for TASK1 of CLA1
    Uint16 TASK2:8;                     // 15:8 Selects the Trigger Source for TASK2 of CLA1
    Uint16 TASK3:8;                     // 23:16 Selects the Trigger Source for TASK3 of CLA1
    Uint16 TASK4:8;                     // 31:24 Selects the Trigger Source for TASK4 of CLA1
};

union CLA1TASKSRCSEL1_REG {
    Uint32  all;
    struct  CLA1TASKSRCSEL1_BITS  bit;
};

struct CLA1TASKSRCSEL2_BITS {           // bits description
    Uint16 TASK5:8;                     // 7:0 Selects the Trigger Source for TASK5 of CLA1
    Uint16 TASK6:8;                     // 15:8 Selects the Trigger Source for TASK6 of CLA1
    Uint16 TASK7:8;                     // 23:16 Selects the Trigger Source for TASK7 of CLA1
    Uint16 TASK8:8;                     // 31:24 Selects the Trigger Source for TASK8 of CLA1
};

union CLA1TASKSRCSEL2_REG {
    Uint32  all;
    struct  CLA1TASKSRCSEL2_BITS  bit;
};

struct DMACHSRCSEL1_BITS {              // bits description
    Uint16 CH1:8;                       // 7:0 Selects the Trigger and Sync Source CH1 of DMA
    Uint16 CH2:8;                       // 15:8 Selects the Trigger and Sync Source CH2 of DMA
    Uint16 CH3:8;                       // 23:16 Selects the Trigger and Sync Source CH3 of DMA
    Uint16 CH4:8;                       // 31:24 Selects the Trigger and Sync Source CH4 of DMA
};

union DMACHSRCSEL1_REG {
    Uint32  all;
    struct  DMACHSRCSEL1_BITS  bit;
};

struct DMACHSRCSEL2_BITS {              // bits description
    Uint16 CH5:8;                       // 7:0 Selects the Trigger and Sync Source CH5 of DMA
    Uint16 CH6:8;                       // 15:8 Selects the Trigger and Sync Source CH6 of DMA
    Uint16 rsvd1:16;                    // 31:16 Reserved
};

union DMACHSRCSEL2_REG {
    Uint32  all;
    struct  DMACHSRCSEL2_BITS  bit;
};

struct DMA_CLA_SRC_SEL_REGS {
    union   CLA1TASKSRCSELLOCK_REG           CLA1TASKSRCSELLOCK;           // CLA1 Task Trigger Source Select Lock Register
    Uint16                                   rsvd1[2];                     // Reserved
    union   DMACHSRCSELLOCK_REG              DMACHSRCSELLOCK;              // DMA Channel Triger Source Select Lock Register
    union   CLA1TASKSRCSEL1_REG              CLA1TASKSRCSEL1;              // CLA1 Task Trigger Source Select Register-1
    union   CLA1TASKSRCSEL2_REG              CLA1TASKSRCSEL2;              // CLA1 Task Trigger Source Select Register-2
    Uint16                                   rsvd2[12];                    // Reserved
    union   DMACHSRCSEL1_REG                 DMACHSRCSEL1;                 // DMA Channel Trigger Source Select Register-1
    union   DMACHSRCSEL2_REG                 DMACHSRCSEL2;                 // DMA Channel Trigger Source Select Register-2
};

struct ADCA_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 rsvd1:2;                     // 5:4 Reserved
    Uint16 rsvd2:2;                     // 7:6 Reserved
    Uint16 rsvd3:8;                     // 15:8 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union ADCA_AC_REG {
    Uint32  all;
    struct  ADCA_AC_BITS  bit;
};

struct ADCB_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 rsvd1:2;                     // 5:4 Reserved
    Uint16 rsvd2:2;                     // 7:6 Reserved
    Uint16 rsvd3:8;                     // 15:8 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union ADCB_AC_REG {
    Uint32  all;
    struct  ADCB_AC_BITS  bit;
};

struct ADCC_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 rsvd1:2;                     // 5:4 Reserved
    Uint16 rsvd2:2;                     // 7:6 Reserved
    Uint16 rsvd3:8;                     // 15:8 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union ADCC_AC_REG {
    Uint32  all;
    struct  ADCC_AC_BITS  bit;
};

struct CMPSS1_AC_BITS {                 // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union CMPSS1_AC_REG {
    Uint32  all;
    struct  CMPSS1_AC_BITS  bit;
};

struct CMPSS2_AC_BITS {                 // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union CMPSS2_AC_REG {
    Uint32  all;
    struct  CMPSS2_AC_BITS  bit;
};

struct CMPSS3_AC_BITS {                 // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union CMPSS3_AC_REG {
    Uint32  all;
    struct  CMPSS3_AC_BITS  bit;
};

struct CMPSS4_AC_BITS {                 // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union CMPSS4_AC_REG {
    Uint32  all;
    struct  CMPSS4_AC_BITS  bit;
};

struct DACA_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union DACA_AC_REG {
    Uint32  all;
    struct  DACA_AC_BITS  bit;
};

struct DACB_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union DACB_AC_REG {
    Uint32  all;
    struct  DACB_AC_BITS  bit;
};

struct EPWM1_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union EPWM1_AC_REG {
    Uint32  all;
    struct  EPWM1_AC_BITS  bit;
};

struct EPWM2_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union EPWM2_AC_REG {
    Uint32  all;
    struct  EPWM2_AC_BITS  bit;
};

struct EPWM3_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union EPWM3_AC_REG {
    Uint32  all;
    struct  EPWM3_AC_BITS  bit;
};

struct EPWM4_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union EPWM4_AC_REG {
    Uint32  all;
    struct  EPWM4_AC_BITS  bit;
};

struct EPWM5_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union EPWM5_AC_REG {
    Uint32  all;
    struct  EPWM5_AC_BITS  bit;
};

struct EPWM6_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union EPWM6_AC_REG {
    Uint32  all;
    struct  EPWM6_AC_BITS  bit;
};

struct EPWM7_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union EPWM7_AC_REG {
    Uint32  all;
    struct  EPWM7_AC_BITS  bit;
};

struct EPWM8_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union EPWM8_AC_REG {
    Uint32  all;
    struct  EPWM8_AC_BITS  bit;
};

struct EQEP1_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union EQEP1_AC_REG {
    Uint32  all;
    struct  EQEP1_AC_BITS  bit;
};

struct EQEP2_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union EQEP2_AC_REG {
    Uint32  all;
    struct  EQEP2_AC_BITS  bit;
};

struct ECAP1_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union ECAP1_AC_REG {
    Uint32  all;
    struct  ECAP1_AC_BITS  bit;
};

struct ECAP2_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union ECAP2_AC_REG {
    Uint32  all;
    struct  ECAP2_AC_BITS  bit;
};

struct ECAP3_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union ECAP3_AC_REG {
    Uint32  all;
    struct  ECAP3_AC_BITS  bit;
};

struct SDFM1_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union SDFM1_AC_REG {
    Uint32  all;
    struct  SDFM1_AC_BITS  bit;
};

struct SDFM2_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union SDFM2_AC_REG {
    Uint32  all;
    struct  SDFM2_AC_BITS  bit;
};

struct CLB1_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 rsvd1:2;                     // 5:4 Reserved
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd2:8;                     // 15:8 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union CLB1_AC_REG {
    Uint32  all;
    struct  CLB1_AC_BITS  bit;
};

struct CLB2_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 rsvd1:2;                     // 5:4 Reserved
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd2:8;                     // 15:8 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union CLB2_AC_REG {
    Uint32  all;
    struct  CLB2_AC_BITS  bit;
};

struct CLB3_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 rsvd1:2;                     // 5:4 Reserved
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd2:8;                     // 15:8 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union CLB3_AC_REG {
    Uint32  all;
    struct  CLB3_AC_BITS  bit;
};

struct CLB4_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 rsvd1:2;                     // 5:4 Reserved
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd2:8;                     // 15:8 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union CLB4_AC_REG {
    Uint32  all;
    struct  CLB4_AC_BITS  bit;
};

struct SCIA_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 rsvd1:2;                     // 3:2 Reserved
    Uint16 rsvd2:2;                     // 5:4 Reserved
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd3:8;                     // 15:8 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union SCIA_AC_REG {
    Uint32  all;
    struct  SCIA_AC_BITS  bit;
};

struct SCIB_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 rsvd1:2;                     // 3:2 Reserved
    Uint16 rsvd2:2;                     // 5:4 Reserved
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd3:8;                     // 15:8 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union SCIB_AC_REG {
    Uint32  all;
    struct  SCIB_AC_BITS  bit;
};

struct SPIA_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union SPIA_AC_REG {
    Uint32  all;
    struct  SPIA_AC_BITS  bit;
};

struct SPIB_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union SPIB_AC_REG {
    Uint32  all;
    struct  SPIB_AC_BITS  bit;
};

struct I2CA_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 rsvd1:2;                     // 3:2 Reserved
    Uint16 rsvd2:2;                     // 5:4 Reserved
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd3:8;                     // 15:8 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union I2CA_AC_REG {
    Uint32  all;
    struct  I2CA_AC_BITS  bit;
};

struct I2CB_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 rsvd1:2;                     // 3:2 Reserved
    Uint16 rsvd2:2;                     // 5:4 Reserved
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd3:8;                     // 15:8 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union I2CB_AC_REG {
    Uint32  all;
    struct  I2CB_AC_BITS  bit;
};

struct PMBUS_A_AC_BITS {                // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union PMBUS_A_AC_REG {
    Uint32  all;
    struct  PMBUS_A_AC_BITS  bit;
};

struct LIN_A_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union LIN_A_AC_REG {
    Uint32  all;
    struct  LIN_A_AC_BITS  bit;
};

struct LIN_B_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union LIN_B_AC_REG {
    Uint32  all;
    struct  LIN_B_AC_BITS  bit;
};

struct DCANA_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 rsvd1:2;                     // 3:2 Reserved
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd2:8;                     // 15:8 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union DCANA_AC_REG {
    Uint32  all;
    struct  DCANA_AC_BITS  bit;
};

struct MCANA_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 rsvd1:2;                     // 3:2 Reserved
    Uint16 rsvd2:2;                     // 5:4 Reserved
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd3:8;                     // 15:8 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union MCANA_AC_REG {
    Uint32  all;
    struct  MCANA_AC_BITS  bit;
};

struct FSIATX_AC_BITS {                 // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union FSIATX_AC_REG {
    Uint32  all;
    struct  FSIATX_AC_BITS  bit;
};

struct FSIARX_AC_BITS {                 // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union FSIARX_AC_REG {
    Uint32  all;
    struct  FSIARX_AC_BITS  bit;
};

struct HRPWM_A_AC_BITS {                // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 CLA1_ACC:2;                  // 3:2 CLA1 Access Conditions to Peripheral
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 HICA_ACC:2;                  // 7:6 HICA Access Contions to Peripheral
    Uint16 rsvd1:8;                     // 15:8 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union HRPWM_A_AC_REG {
    Uint32  all;
    struct  HRPWM_A_AC_BITS  bit;
};

struct HIC_A_AC_BITS {                  // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 rsvd1:2;                     // 3:2 Reserved
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 rsvd2:2;                     // 7:6 Reserved
    Uint16 rsvd3:8;                     // 15:8 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union HIC_A_AC_REG {
    Uint32  all;
    struct  HIC_A_AC_BITS  bit;
};

struct AESA_AC_BITS {                   // bits description
    Uint16 CPU1_ACC:2;                  // 1:0 CPU1 Access conditions to peripheral
    Uint16 rsvd1:2;                     // 3:2 Reserved
    Uint16 DMA1_ACC:2;                  // 5:4 DMA1 Access Conditions to Peripheral
    Uint16 rsvd2:2;                     // 7:6 Reserved
    Uint16 rsvd3:8;                     // 15:8 Reserved
    Uint16 rsvd4:16;                    // 31:16 Reserved
};

union AESA_AC_REG {
    Uint32  all;
    struct  AESA_AC_BITS  bit;
};

struct PERIPH_AC_LOCK_BITS {            // bits description
    Uint16 LOCK_AC_WR:1;                // 0  Lock control for Access control registers write.
    Uint16 rsvd1:15;                    // 15:1 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union PERIPH_AC_LOCK_REG {
    Uint32  all;
    struct  PERIPH_AC_LOCK_BITS  bit;
};

struct PERIPH_AC_REGS {
    union   ADCA_AC_REG                      ADCA_AC;                      // ADCA Master Access Control Register
    union   ADCB_AC_REG                      ADCB_AC;                      // ADCB Master Access Control Register
    union   ADCC_AC_REG                      ADCC_AC;                      // ADCC Master Access Control Register
    Uint16                                   rsvd1[10];                    // Reserved
    union   CMPSS1_AC_REG                    CMPSS1_AC;                    // CMPSS1 Master Access Control Register
    union   CMPSS2_AC_REG                    CMPSS2_AC;                    // CMPSS2 Master Access Control Register
    union   CMPSS3_AC_REG                    CMPSS3_AC;                    // CMPSS3 Master Access Control Register
    union   CMPSS4_AC_REG                    CMPSS4_AC;                    // CMPSS4 Master Access Control Register
    Uint16                                   rsvd2[16];                    // Reserved
    union   DACA_AC_REG                      DACA_AC;                      // DACA Master Access Control Register
    union   DACB_AC_REG                      DACB_AC;                      // DACB Master Access Control Register
    Uint16                                   rsvd3[28];                    // Reserved
    union   EPWM1_AC_REG                     EPWM1_AC;                     // EPWM1 Master Access Control Register
    union   EPWM2_AC_REG                     EPWM2_AC;                     // EPWM2 Master Access Control Register
    union   EPWM3_AC_REG                     EPWM3_AC;                     // EPWM3 Master Access Control Register
    union   EPWM4_AC_REG                     EPWM4_AC;                     // EPWM4 Master Access Control Register
    union   EPWM5_AC_REG                     EPWM5_AC;                     // EPWM5 Master Access Control Register
    union   EPWM6_AC_REG                     EPWM6_AC;                     // EPWM6 Master Access Control Register
    union   EPWM7_AC_REG                     EPWM7_AC;                     // EPWM7 Master Access Control Register
    union   EPWM8_AC_REG                     EPWM8_AC;                     // EPWM8 Master Access Control Register
    Uint16                                   rsvd4[24];                    // Reserved
    union   EQEP1_AC_REG                     EQEP1_AC;                     // EQEP1 Master Access Control Register
    union   EQEP2_AC_REG                     EQEP2_AC;                     // EQEP2 Master Access Control Register
    Uint16                                   rsvd5[12];                    // Reserved
    union   ECAP1_AC_REG                     ECAP1_AC;                     // ECAP1 Master Access Control Register
    union   ECAP2_AC_REG                     ECAP2_AC;                     // ECAP2 Master Access Control Register
    union   ECAP3_AC_REG                     ECAP3_AC;                     // ECAP3 Master Access Control Register
    Uint16                                   rsvd6[34];                    // Reserved
    union   SDFM1_AC_REG                     SDFM1_AC;                     // SDFM1 Master Access Control Register
    union   SDFM2_AC_REG                     SDFM2_AC;                     // SDFM2 Master Access Control Register
    Uint16                                   rsvd7[4];                     // Reserved
    union   CLB1_AC_REG                      CLB1_AC;                      // CLB1 Master Access Control Register
    union   CLB2_AC_REG                      CLB2_AC;                      // CLB2 Master Access Control Register
    union   CLB3_AC_REG                      CLB3_AC;                      // CLB3 Master Access Control Register
    union   CLB4_AC_REG                      CLB4_AC;                      // CLB4 Master Access Control Register
    Uint16                                   rsvd8[72];                    // Reserved
    union   SCIA_AC_REG                      SCIA_AC;                      // SCIA Master Access Control Register
    union   SCIB_AC_REG                      SCIB_AC;                      // SCIB Master Access Control Register
    Uint16                                   rsvd9[12];                    // Reserved
    union   SPIA_AC_REG                      SPIA_AC;                      // SPIA Master Access Control Register
    union   SPIB_AC_REG                      SPIB_AC;                      // SPIB Master Access Control Register
    Uint16                                   rsvd10[12];                   // Reserved
    union   I2CA_AC_REG                      I2CA_AC;                      // I2CA Master Access Control Register
    union   I2CB_AC_REG                      I2CB_AC;                      // I2CB Master Access Control Register
    Uint16                                   rsvd11[12];                   // Reserved
    union   PMBUS_A_AC_REG                   PMBUS_A_AC;                   // PMBUSA Master Access Control Register
    Uint16                                   rsvd12[6];                    // Reserved
    union   LIN_A_AC_REG                     LIN_A_AC;                     // LINA Master Access Control Register
    union   LIN_B_AC_REG                     LIN_B_AC;                     // LINB Master Access Control Register
    Uint16                                   rsvd13[4];                    // Reserved
    union   DCANA_AC_REG                     DCANA_AC;                     // DCANA Master Access Control Register
    Uint16                                   rsvd14[6];                    // Reserved
    union   MCANA_AC_REG                     MCANA_AC;                     // MCANA Master Access Control Register
    Uint16                                   rsvd15[14];                   // Reserved
    union   FSIATX_AC_REG                    FSIATX_AC;                    // FSIA Master Access Control Register
    union   FSIARX_AC_REG                    FSIARX_AC;                    // FSIB Master Access Control Register
    Uint16                                   rsvd16[78];                   // Reserved
    union   HRPWM_A_AC_REG                   HRPWM_A_AC;                   // HRPWM Master Access Control Register
    union   HIC_A_AC_REG                     HIC_A_AC;                     // HIC Master Access Control Register
    union   AESA_AC_REG                      AESA_AC;                      // AES Master Access Control Register
    Uint16                                   rsvd17[78];                   // Reserved
    union   PERIPH_AC_LOCK_REG               PERIPH_AC_LOCK;               // Lock Register to stop Write access to peripheral Access register.
};

struct SYNCSELECT_BITS {                // bits description
    Uint16 rsvd1:3;                     // 2:0 Reserved
    Uint16 rsvd2:3;                     // 5:3 Reserved
    Uint16 rsvd3:3;                     // 8:6 Reserved
    Uint16 rsvd4:3;                     // 11:9 Reserved
    Uint16 rsvd5:3;                     // 14:12 Reserved
    Uint16 rsvd6:1;                     // 15 Reserved
    Uint16 rsvd7:2;                     // 17:16 Reserved
    Uint16 rsvd8:6;                     // 23:18 Reserved
    Uint16 SYNCOUT:5;                   // 28:24 Select Syncout Source
    Uint16 rsvd9:3;                     // 31:29 Reserved
};

union SYNCSELECT_REG {
    Uint32  all;
    struct  SYNCSELECT_BITS  bit;
};

struct ADCSOCOUTSELECT_BITS {           // bits description
    Uint16 PWM1SOCAEN:1;                // 0 PWM1SOCAEN Enable for ADCSOCAOn
    Uint16 PWM2SOCAEN:1;                // 1 PWM2SOCAEN Enable for ADCSOCAOn
    Uint16 PWM3SOCAEN:1;                // 2 PWM3SOCAEN Enable for ADCSOCAOn
    Uint16 PWM4SOCAEN:1;                // 3 PWM4SOCAEN Enable for ADCSOCAOn
    Uint16 PWM5SOCAEN:1;                // 4 PWM5SOCAEN Enable for ADCSOCAOn
    Uint16 PWM6SOCAEN:1;                // 5 PWM6SOCAEN Enable for ADCSOCAOn
    Uint16 PWM7SOCAEN:1;                // 6 PWM7SOCAEN Enable for ADCSOCAOn
    Uint16 PWM8SOCAEN:1;                // 7 PWM8SOCAEN Enable for ADCSOCAOn
    Uint16 rsvd1:1;                     // 8 Reserved
    Uint16 rsvd2:1;                     // 9 Reserved
    Uint16 rsvd3:1;                     // 10 Reserved
    Uint16 rsvd4:1;                     // 11 Reserved
    Uint16 rsvd5:4;                     // 15:12 Reserved
    Uint16 PWM1SOCBEN:1;                // 16 PWM1SOCBEN Enable for ADCSOCBOn
    Uint16 PWM2SOCBEN:1;                // 17 PWM2SOCBEN Enable for ADCSOCBOn
    Uint16 PWM3SOCBEN:1;                // 18 PWM3SOCBEN Enable for ADCSOCBOn
    Uint16 PWM4SOCBEN:1;                // 19 PWM4SOCBEN Enable for ADCSOCBOn
    Uint16 PWM5SOCBEN:1;                // 20 PWM5SOCBEN Enable for ADCSOCBOn
    Uint16 PWM6SOCBEN:1;                // 21 PWM6SOCBEN Enable for ADCSOCBOn
    Uint16 PWM7SOCBEN:1;                // 22 PWM7SOCBEN Enable for ADCSOCBOn
    Uint16 PWM8SOCBEN:1;                // 23 PWM8SOCBEN Enable for ADCSOCBOn
    Uint16 rsvd6:1;                     // 24 Reserved
    Uint16 rsvd7:1;                     // 25 Reserved
    Uint16 rsvd8:1;                     // 26 Reserved
    Uint16 rsvd9:1;                     // 27 Reserved
    Uint16 rsvd10:4;                    // 31:28 Reserved
};

union ADCSOCOUTSELECT_REG {
    Uint32  all;
    struct  ADCSOCOUTSELECT_BITS  bit;
};

struct SYNCSOCLOCK_BITS {               // bits description
    Uint16 SYNCSELECT:1;                // 0 SYNCSEL Register Lock bit
    Uint16 ADCSOCOUTSELECT:1;           // 1 ADCSOCOUTSELECT Register Lock bit
    Uint16 rsvd1:14;                    // 15:2 Reserved
    Uint16 rsvd2:16;                    // 31:16 Reserved
};

union SYNCSOCLOCK_REG {
    Uint32  all;
    struct  SYNCSOCLOCK_BITS  bit;
};

struct SYNC_SOC_REGS {
    union   SYNCSELECT_REG                   SYNCSELECT;                   // Sync Input and Output Select Register
    union   ADCSOCOUTSELECT_REG              ADCSOCOUTSELECT;              // External ADCSOC Select Register
    union   SYNCSOCLOCK_REG                  SYNCSOCLOCK;                  // SYNCSEL and EXTADCSOC Select Lock register
};

struct LFUConfig_BITS {                 // bits description
    Uint16 LFU_CPU:1;                   // 0 SW configuration to implement LFU
    Uint16 rsvd1:3;                     // 3:1 Reserved
    Uint16 LFU_CLA1:1;                  // 4 SW configuration to implement LFU
    Uint16 rsvd2:3;                     // 7:5 Reserved
    Uint16 rsvd3:1;                     // 8 Reserved
    Uint16 rsvd4:3;                     // 11:9 Reserved
    Uint16 PieVectorSwap:1;             // 12 Swap of pie vector table
    Uint16 rsvd5:3;                     // 15:13 Reserved
    Uint16 LS01Swap:1;                  // 16 Swap LS0 and LS1 memory
    Uint16 rsvd6:15;                    // 31:17 Reserved
};

union LFUConfig_REG {
    Uint32  all;
    struct  LFUConfig_BITS  bit;
};

struct LFUStatus_BITS {                 // bits description
    Uint16 rsvd1:12;                    // 11:0 Reserved
    Uint16 PieVectorSwap:1;             // 12 Indicate the status of PieVectorSwap
    Uint16 rsvd2:3;                     // 15:13 Reserved
    Uint16 LS01Swap:1;                  // 16 Indicate the status of LS0/LS1 memory swap
    Uint16 rsvd3:15;                    // 31:17 Reserved
};

union LFUStatus_REG {
    Uint32  all;
    struct  LFUStatus_BITS  bit;
};

struct LFU_LOCK_BITS {                  // bits description
    Uint16 LFUConfig:1;                 // 0 Register lock configuration
    Uint16 rsvd1:7;                     // 7:1 Reserved
    Uint16 SWConfig1_SYSRSn:1;          // 8 Register lock configuration
    Uint16 SWConfig2_SYSRSn:1;          // 9 Register lock configuration
    Uint16 SWConfig1_XRSn:1;            // 10 Register lock configuration
    Uint16 SWConfig2_XRSn:1;            // 11 Register lock configuration
    Uint16 SWConfig1_PORESETn:1;        // 12 Register lock configuration
    Uint16 SWConfig2_PORESETn:1;        // 13 Register lock configuration
    Uint16 rsvd2:2;                     // 15:14 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union LFU_LOCK_REG {
    Uint32  all;
    struct  LFU_LOCK_BITS  bit;
};

struct LFU_COMMIT_BITS {                // bits description
    Uint16 LFUConfig:1;                 // 0 Register commit configuration
    Uint16 rsvd1:7;                     // 7:1 Reserved
    Uint16 SWConfig1_SYSRSn:1;          // 8 Register commit configuration
    Uint16 SWConfig2_SYSRSn:1;          // 9 Register commit configuration
    Uint16 SWConfig1_XRSn:1;            // 10 Register commit configuration
    Uint16 SWConfig2_XRSn:1;            // 11 Register commit configuration
    Uint16 SWConfig1_PORESETn:1;        // 12 Register commit configuration
    Uint16 SWConfig2_PORESETn:1;        // 13 Register commit configuration
    Uint16 rsvd2:2;                     // 15:14 Reserved
    Uint16 rsvd3:16;                    // 31:16 Reserved
};

union LFU_COMMIT_REG {
    Uint32  all;
    struct  LFU_COMMIT_BITS  bit;
};

struct LFU_REGS {
    union   LFUConfig_REG                    LFUConfig;                    // LFU configuration Register
    union   LFUStatus_REG                    LFUStatus;                    // LFU Configuration Status Register
    Uint16                                   rsvd1[12];                    // Reserved
    Uint32                                   SWConfig1_SYSRSn;             // Spare registers reset by SYSRSn
    Uint32                                   SWConfig2_SYSRSn;             // Spare registers reset by SYSRSn
    Uint32                                   SWConfig1_XRSn;               // Spare registers reset by XRSn
    Uint32                                   SWConfig2_XRSn;               // Spare registers reset by XRSn
    Uint32                                   SWConfig1_PORESETn;           // Spare registers reset by PORESETn
    Uint32                                   SWConfig2_PORESETn;           // Spare registers reset by PORESETn
    union   LFU_LOCK_REG                     LFU_LOCK;                     // LFU Lock Configuration
    union   LFU_COMMIT_REG                   LFU_COMMIT;                   // LFU Commit Configuration
};

struct SYS_ERR_INT_FLG_BITS {           // bits description
    Uint16 GINT:1;                      // 0 Global Interrupt flag
    Uint16 rsvd1:1;                     // 1 Reserved
    Uint16 rsvd2:1;                     // 2 Reserved
    Uint16 rsvd3:1;                     // 3 Reserved
    Uint16 rsvd4:1;                     // 4 Reserved
    Uint16 rsvd5:1;                     // 5 Reserved
    Uint16 rsvd6:1;                     // 6 Reserved
    Uint16 rsvd7:1;                     // 7 Reserved
    Uint16 rsvd8:1;                     // 8 Reserved
    Uint16 rsvd9:1;                     // 9 Reserved
    Uint16 AES_BUS_ERROR:1;             // 10 AES_BUS_ERROR Interrupt flag.
    Uint16 EPG1_INT:1;                  // 11 EPG1_INT Interrupt flag.
    Uint16 rsvd10:1;                    // 12 Reserved
    Uint16 rsvd11:1;                    // 13 Reserved
    Uint16 rsvd12:1;                    // 14 Reserved
    Uint16 rsvd13:1;                    // 15 Reserved
    Uint16 rsvd14:16;                   // 31:16 Reserved
};

union SYS_ERR_INT_FLG_REG {
    Uint32  all;
    struct  SYS_ERR_INT_FLG_BITS  bit;
};

struct SYS_ERR_INT_CLR_BITS {           // bits description
    Uint16 GINT:1;                      // 0 Global Interrupt flag Clear bit
    Uint16 rsvd1:1;                     // 1 Reserved
    Uint16 rsvd2:1;                     // 2 Reserved
    Uint16 rsvd3:1;                     // 3 Reserved
    Uint16 rsvd4:1;                     // 4 Reserved
    Uint16 rsvd5:1;                     // 5 Reserved
    Uint16 rsvd6:1;                     // 6 Reserved
    Uint16 rsvd7:1;                     // 7 Reserved
    Uint16 rsvd8:1;                     // 8 Reserved
    Uint16 rsvd9:1;                     // 9 Reserved
    Uint16 AES_BUS_ERROR:1;             // 10 AES_BUS_ERROR interrupt flag clear bit
    Uint16 EPG1_INT:1;                  // 11 EPG1_INT interrupt flag clear bit
    Uint16 rsvd10:1;                    // 12 Reserved
    Uint16 rsvd11:1;                    // 13 Reserved
    Uint16 rsvd12:1;                    // 14 Reserved
    Uint16 rsvd13:1;                    // 15 Reserved
    Uint16 rsvd14:16;                   // 31:16 Reserved
};

union SYS_ERR_INT_CLR_REG {
    Uint32  all;
    struct  SYS_ERR_INT_CLR_BITS  bit;
};

struct SYS_ERR_INT_SET_BITS {           // bits description
    Uint16 rsvd1:1;                     // 0 Reserved
    Uint16 rsvd2:1;                     // 1 Reserved
    Uint16 rsvd3:1;                     // 2 Reserved
    Uint16 rsvd4:1;                     // 3 Reserved
    Uint16 rsvd5:1;                     // 4 Reserved
    Uint16 rsvd6:1;                     // 5 Reserved
    Uint16 rsvd7:1;                     // 6 Reserved
    Uint16 rsvd8:1;                     // 7 Reserved
    Uint16 rsvd9:1;                     // 8 Reserved
    Uint16 rsvd10:1;                    // 9 Reserved
    Uint16 AES_BUS_ERROR:1;             // 10 AES_BUS_ERROR interrupt flag set bit
    Uint16 EPG1_INT:1;                  // 11 EPG1_INT interrupt flag set bit
    Uint16 rsvd11:1;                    // 12 Reserved
    Uint16 rsvd12:1;                    // 13 Reserved
    Uint16 rsvd13:1;                    // 14 Reserved
    Uint16 rsvd14:1;                    // 15 Reserved
    Uint16 rsvd15:8;                    // 23:16 Reserved
    Uint16 KEY:8;                       // 31:24 KEY field
};

union SYS_ERR_INT_SET_REG {
    Uint32  all;
    struct  SYS_ERR_INT_SET_BITS  bit;
};

struct SYS_ERR_MASK_BITS {              // bits description
    Uint16 rsvd1:1;                     // 0 Reserved
    Uint16 rsvd2:1;                     // 1 Reserved
    Uint16 rsvd3:1;                     // 2 Reserved
    Uint16 rsvd4:1;                     // 3 Reserved
    Uint16 rsvd5:1;                     // 4 Reserved
    Uint16 rsvd6:1;                     // 5 Reserved
    Uint16 rsvd7:1;                     // 6 Reserved
    Uint16 rsvd8:1;                     // 7 Reserved
    Uint16 rsvd9:1;                     // 8 Reserved
    Uint16 rsvd10:1;                    // 9 Reserved
    Uint16 AES_BUS_ERROR:1;             // 10 AES_BUS_ERROR flag mask bit
    Uint16 EPG1_INT:1;                  // 11 EPG1_INT flag mask bit
    Uint16 rsvd11:1;                    // 12 Reserved
    Uint16 rsvd12:1;                    // 13 Reserved
    Uint16 rsvd13:1;                    // 14 Reserved
    Uint16 rsvd14:1;                    // 15 Reserved
    Uint16 rsvd15:8;                    // 23:16 Reserved
    Uint16 KEY:8;                       // 31:24 KEY field
};

union SYS_ERR_MASK_REG {
    Uint32  all;
    struct  SYS_ERR_MASK_BITS  bit;
};

struct SYS_STATUS_REGS {
    Uint16                                   rsvd1[16];                    // Reserved
    union   SYS_ERR_INT_FLG_REG              SYS_ERR_INT_FLG;              // Status of interrupts due to multiple different errors in the system.
    union   SYS_ERR_INT_CLR_REG              SYS_ERR_INT_CLR;              // SYS_ERR_INT_FLG clear register
    union   SYS_ERR_INT_SET_REG              SYS_ERR_INT_SET;              // SYS_ERR_INT_FLG set register
    union   SYS_ERR_MASK_REG                 SYS_ERR_MASK;                 // SYS_ERR_MASK register
};

//---------------------------------------------------------------------------
// SYSCTRL External References & Function Declarations:
//
extern volatile struct SYNC_SOC_REGS SyncSocRegs;
extern volatile struct DMA_CLA_SRC_SEL_REGS DmaClaSrcSelRegs;
extern volatile struct LFU_REGS LfuRegs;
extern volatile struct DEV_CFG_REGS DevCfgRegs;
extern volatile struct CLK_CFG_REGS ClkCfgRegs;
extern volatile struct CPU_SYS_REGS CpuSysRegs;
extern volatile struct SYS_STATUS_REGS SysStatusRegs;
extern volatile struct PERIPH_AC_REGS PeriphAcRegs;
#ifdef __cplusplus
}
#endif                                  /* extern "C" */

#endif

//===========================================================================
// End of file.
//===========================================================================
