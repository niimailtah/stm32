/*******************************************************************************
* Filename      : tim3registers.hpp
*
* Details       : Advanced-timers. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "tim3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM3
{
  struct TIM3CR1Base {} ;

  struct CR1 : public RegisterBase<0x40000400, 32, ReadWriteMode>
  {
    using DITHEN = TIM3_CR1_DITHEN_Values<TIM3::CR1, 12, 1, ReadWriteMode, TIM3CR1Base> ;
    using UIFREMAP = TIM3_CR1_UIFREMAP_Values<TIM3::CR1, 11, 1, ReadWriteMode, TIM3CR1Base> ;
    using CKD = TIM3_CR1_CKD_Values<TIM3::CR1, 8, 2, ReadWriteMode, TIM3CR1Base> ;
    using ARPE = TIM3_CR1_ARPE_Values<TIM3::CR1, 7, 1, ReadWriteMode, TIM3CR1Base> ;
    using CMS = TIM3_CR1_CMS_Values<TIM3::CR1, 5, 2, ReadWriteMode, TIM3CR1Base> ;
    using DIR = TIM3_CR1_DIR_Values<TIM3::CR1, 4, 1, ReadWriteMode, TIM3CR1Base> ;
    using OPM = TIM3_CR1_OPM_Values<TIM3::CR1, 3, 1, ReadWriteMode, TIM3CR1Base> ;
    using URS = TIM3_CR1_URS_Values<TIM3::CR1, 2, 1, ReadWriteMode, TIM3CR1Base> ;
    using UDIS = TIM3_CR1_UDIS_Values<TIM3::CR1, 1, 1, ReadWriteMode, TIM3CR1Base> ;
    using CEN = TIM3_CR1_CEN_Values<TIM3::CR1, 0, 1, ReadWriteMode, TIM3CR1Base> ;
    using FieldValues = TIM3_CR1_CEN_Values<TIM3::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40000400, 32, ReadWriteMode, TIM3CR1Base, T...> ;

  struct TIM3CR2Base {} ;

  struct CR2 : public RegisterBase<0x40000404, 32, ReadWriteMode>
  {
    using MMS_3 = TIM3_CR2_MMS_3_Values<TIM3::CR2, 25, 1, ReadWriteMode, TIM3CR2Base> ;
    using MMS2 = TIM3_CR2_MMS2_Values<TIM3::CR2, 20, 4, ReadWriteMode, TIM3CR2Base> ;
    using OIS6 = TIM3_CR2_OIS6_Values<TIM3::CR2, 18, 1, ReadWriteMode, TIM3CR2Base> ;
    using OIS5 = TIM3_CR2_OIS5_Values<TIM3::CR2, 16, 1, ReadWriteMode, TIM3CR2Base> ;
    using OIS4N = TIM3_CR2_OIS4N_Values<TIM3::CR2, 15, 1, ReadWriteMode, TIM3CR2Base> ;
    using OIS4 = TIM3_CR2_OIS4_Values<TIM3::CR2, 14, 1, ReadWriteMode, TIM3CR2Base> ;
    using OIS3N = TIM3_CR2_OIS3N_Values<TIM3::CR2, 13, 1, ReadWriteMode, TIM3CR2Base> ;
    using OIS3 = TIM3_CR2_OIS3_Values<TIM3::CR2, 12, 1, ReadWriteMode, TIM3CR2Base> ;
    using OIS2N = TIM3_CR2_OIS2N_Values<TIM3::CR2, 11, 1, ReadWriteMode, TIM3CR2Base> ;
    using OIS2 = TIM3_CR2_OIS2_Values<TIM3::CR2, 10, 1, ReadWriteMode, TIM3CR2Base> ;
    using OIS1N = TIM3_CR2_OIS1N_Values<TIM3::CR2, 9, 1, ReadWriteMode, TIM3CR2Base> ;
    using OIS1 = TIM3_CR2_OIS1_Values<TIM3::CR2, 8, 1, ReadWriteMode, TIM3CR2Base> ;
    using TI1S = TIM3_CR2_TI1S_Values<TIM3::CR2, 7, 1, ReadWriteMode, TIM3CR2Base> ;
    using MMS = TIM3_CR2_MMS_Values<TIM3::CR2, 4, 3, ReadWriteMode, TIM3CR2Base> ;
    using CCDS = TIM3_CR2_CCDS_Values<TIM3::CR2, 3, 1, ReadWriteMode, TIM3CR2Base> ;
    using CCUS = TIM3_CR2_CCUS_Values<TIM3::CR2, 2, 1, ReadWriteMode, TIM3CR2Base> ;
    using CCPC = TIM3_CR2_CCPC_Values<TIM3::CR2, 0, 1, ReadWriteMode, TIM3CR2Base> ;
    using FieldValues = TIM3_CR2_CCPC_Values<TIM3::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40000404, 32, ReadWriteMode, TIM3CR2Base, T...> ;

  struct TIM3SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40000408, 32, ReadWriteMode>
  {
    using SMSPS = TIM3_SMCR_SMSPS_Values<TIM3::SMCR, 25, 1, ReadWriteMode, TIM3SMCRBase> ;
    using SMSPE = TIM3_SMCR_SMSPE_Values<TIM3::SMCR, 24, 1, ReadWriteMode, TIM3SMCRBase> ;
    using TS_4_3 = TIM3_SMCR_TS_4_3_Values<TIM3::SMCR, 20, 2, ReadWriteMode, TIM3SMCRBase> ;
    using SMS_3 = TIM3_SMCR_SMS_3_Values<TIM3::SMCR, 16, 1, ReadWriteMode, TIM3SMCRBase> ;
    using ETP = TIM3_SMCR_ETP_Values<TIM3::SMCR, 15, 1, ReadWriteMode, TIM3SMCRBase> ;
    using ECE = TIM3_SMCR_ECE_Values<TIM3::SMCR, 14, 1, ReadWriteMode, TIM3SMCRBase> ;
    using ETPS = TIM3_SMCR_ETPS_Values<TIM3::SMCR, 12, 2, ReadWriteMode, TIM3SMCRBase> ;
    using ETF = TIM3_SMCR_ETF_Values<TIM3::SMCR, 8, 4, ReadWriteMode, TIM3SMCRBase> ;
    using MSM = TIM3_SMCR_MSM_Values<TIM3::SMCR, 7, 1, ReadWriteMode, TIM3SMCRBase> ;
    using TS = TIM3_SMCR_TS_Values<TIM3::SMCR, 4, 3, ReadWriteMode, TIM3SMCRBase> ;
    using OCCS = TIM3_SMCR_OCCS_Values<TIM3::SMCR, 3, 1, ReadWriteMode, TIM3SMCRBase> ;
    using SMS = TIM3_SMCR_SMS_Values<TIM3::SMCR, 0, 3, ReadWriteMode, TIM3SMCRBase> ;
    using FieldValues = TIM3_SMCR_SMS_Values<TIM3::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40000408, 32, ReadWriteMode, TIM3SMCRBase, T...> ;

  struct TIM3DIERBase {} ;

  struct DIER : public RegisterBase<0x4000040C, 32, ReadWriteMode>
  {
    using TERRIE = TIM3_DIER_TERRIE_Values<TIM3::DIER, 23, 1, ReadWriteMode, TIM3DIERBase> ;
    using IERRIE = TIM3_DIER_IERRIE_Values<TIM3::DIER, 22, 1, ReadWriteMode, TIM3DIERBase> ;
    using DIRIE = TIM3_DIER_DIRIE_Values<TIM3::DIER, 21, 1, ReadWriteMode, TIM3DIERBase> ;
    using IDXIE = TIM3_DIER_IDXIE_Values<TIM3::DIER, 20, 1, ReadWriteMode, TIM3DIERBase> ;
    using TDE = TIM3_DIER_TDE_Values<TIM3::DIER, 14, 1, ReadWriteMode, TIM3DIERBase> ;
    using COMDE = TIM3_DIER_COMDE_Values<TIM3::DIER, 13, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC4DE = TIM3_DIER_CC4DE_Values<TIM3::DIER, 12, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC3DE = TIM3_DIER_CC3DE_Values<TIM3::DIER, 11, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC2DE = TIM3_DIER_CC2DE_Values<TIM3::DIER, 10, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC1DE = TIM3_DIER_CC1DE_Values<TIM3::DIER, 9, 1, ReadWriteMode, TIM3DIERBase> ;
    using UDE = TIM3_DIER_UDE_Values<TIM3::DIER, 8, 1, ReadWriteMode, TIM3DIERBase> ;
    using TIE = TIM3_DIER_TIE_Values<TIM3::DIER, 6, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC4IE = TIM3_DIER_CC4IE_Values<TIM3::DIER, 4, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC3IE = TIM3_DIER_CC3IE_Values<TIM3::DIER, 3, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC2IE = TIM3_DIER_CC2IE_Values<TIM3::DIER, 2, 1, ReadWriteMode, TIM3DIERBase> ;
    using CC1IE = TIM3_DIER_CC1IE_Values<TIM3::DIER, 1, 1, ReadWriteMode, TIM3DIERBase> ;
    using UIE = TIM3_DIER_UIE_Values<TIM3::DIER, 0, 1, ReadWriteMode, TIM3DIERBase> ;
    using BIE = TIM3_DIER_BIE_Values<TIM3::DIER, 7, 1, ReadWriteMode, TIM3DIERBase> ;
    using COMIE = TIM3_DIER_COMIE_Values<TIM3::DIER, 5, 1, ReadWriteMode, TIM3DIERBase> ;
    using FieldValues = TIM3_DIER_COMIE_Values<TIM3::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000040C, 32, ReadWriteMode, TIM3DIERBase, T...> ;

  struct TIM3SRBase {} ;

  struct SR : public RegisterBase<0x40000410, 32, ReadWriteMode>
  {
    using TERRF = TIM3_SR_TERRF_Values<TIM3::SR, 23, 1, ReadWriteMode, TIM3SRBase> ;
    using IERRF = TIM3_SR_IERRF_Values<TIM3::SR, 22, 1, ReadWriteMode, TIM3SRBase> ;
    using DIRF = TIM3_SR_DIRF_Values<TIM3::SR, 21, 1, ReadWriteMode, TIM3SRBase> ;
    using IDXF = TIM3_SR_IDXF_Values<TIM3::SR, 20, 1, ReadWriteMode, TIM3SRBase> ;
    using CC6IF = TIM3_SR_CC6IF_Values<TIM3::SR, 17, 1, ReadWriteMode, TIM3SRBase> ;
    using CC5IF = TIM3_SR_CC5IF_Values<TIM3::SR, 16, 1, ReadWriteMode, TIM3SRBase> ;
    using SBIF = TIM3_SR_SBIF_Values<TIM3::SR, 13, 1, ReadWriteMode, TIM3SRBase> ;
    using CC4OF = TIM3_SR_CC4OF_Values<TIM3::SR, 12, 1, ReadWriteMode, TIM3SRBase> ;
    using CC3OF = TIM3_SR_CC3OF_Values<TIM3::SR, 11, 1, ReadWriteMode, TIM3SRBase> ;
    using CC2OF = TIM3_SR_CC2OF_Values<TIM3::SR, 10, 1, ReadWriteMode, TIM3SRBase> ;
    using CC1OF = TIM3_SR_CC1OF_Values<TIM3::SR, 9, 1, ReadWriteMode, TIM3SRBase> ;
    using B2IF = TIM3_SR_B2IF_Values<TIM3::SR, 8, 1, ReadWriteMode, TIM3SRBase> ;
    using BIF = TIM3_SR_BIF_Values<TIM3::SR, 7, 1, ReadWriteMode, TIM3SRBase> ;
    using TIF = TIM3_SR_TIF_Values<TIM3::SR, 6, 1, ReadWriteMode, TIM3SRBase> ;
    using COMIF = TIM3_SR_COMIF_Values<TIM3::SR, 5, 1, ReadWriteMode, TIM3SRBase> ;
    using CC4IF = TIM3_SR_CC4IF_Values<TIM3::SR, 4, 1, ReadWriteMode, TIM3SRBase> ;
    using CC3IF = TIM3_SR_CC3IF_Values<TIM3::SR, 3, 1, ReadWriteMode, TIM3SRBase> ;
    using CC2IF = TIM3_SR_CC2IF_Values<TIM3::SR, 2, 1, ReadWriteMode, TIM3SRBase> ;
    using CC1IF = TIM3_SR_CC1IF_Values<TIM3::SR, 1, 1, ReadWriteMode, TIM3SRBase> ;
    using UIF = TIM3_SR_UIF_Values<TIM3::SR, 0, 1, ReadWriteMode, TIM3SRBase> ;
    using FieldValues = TIM3_SR_UIF_Values<TIM3::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40000410, 32, ReadWriteMode, TIM3SRBase, T...> ;

  struct TIM3EGRBase {} ;

  struct EGR : public RegisterBase<0x40000414, 32, WriteMode>
  {
    using B2G = TIM3_EGR_B2G_Values<TIM3::EGR, 8, 1, WriteMode, TIM3EGRBase> ;
    using BG = TIM3_EGR_BG_Values<TIM3::EGR, 7, 1, WriteMode, TIM3EGRBase> ;
    using TG = TIM3_EGR_TG_Values<TIM3::EGR, 6, 1, WriteMode, TIM3EGRBase> ;
    using COMG = TIM3_EGR_COMG_Values<TIM3::EGR, 5, 1, WriteMode, TIM3EGRBase> ;
    using CC4G = TIM3_EGR_CC4G_Values<TIM3::EGR, 4, 1, WriteMode, TIM3EGRBase> ;
    using CC3G = TIM3_EGR_CC3G_Values<TIM3::EGR, 3, 1, WriteMode, TIM3EGRBase> ;
    using CC2G = TIM3_EGR_CC2G_Values<TIM3::EGR, 2, 1, WriteMode, TIM3EGRBase> ;
    using CC1G = TIM3_EGR_CC1G_Values<TIM3::EGR, 1, 1, WriteMode, TIM3EGRBase> ;
    using UG = TIM3_EGR_UG_Values<TIM3::EGR, 0, 1, WriteMode, TIM3EGRBase> ;
    using FieldValues = TIM3_EGR_UG_Values<TIM3::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40000414, 32, WriteMode, TIM3EGRBase, T...> ;

  struct TIM3CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40000418, 32, ReadWriteMode>
  {
    using OC2M_3 = TIM3_CCMR1_Output_OC2M_3_Values<TIM3::CCMR1_Output, 24, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC1M_3 = TIM3_CCMR1_Output_OC1M_3_Values<TIM3::CCMR1_Output, 16, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC2CE = TIM3_CCMR1_Output_OC2CE_Values<TIM3::CCMR1_Output, 15, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC2M = TIM3_CCMR1_Output_OC2M_Values<TIM3::CCMR1_Output, 12, 3, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC2PE = TIM3_CCMR1_Output_OC2PE_Values<TIM3::CCMR1_Output, 11, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC2FE = TIM3_CCMR1_Output_OC2FE_Values<TIM3::CCMR1_Output, 10, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using CC2S = TIM3_CCMR1_Output_CC2S_Values<TIM3::CCMR1_Output, 8, 2, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC1CE = TIM3_CCMR1_Output_OC1CE_Values<TIM3::CCMR1_Output, 7, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC1M = TIM3_CCMR1_Output_OC1M_Values<TIM3::CCMR1_Output, 4, 3, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC1PE = TIM3_CCMR1_Output_OC1PE_Values<TIM3::CCMR1_Output, 3, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using OC1FE = TIM3_CCMR1_Output_OC1FE_Values<TIM3::CCMR1_Output, 2, 1, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using CC1S = TIM3_CCMR1_Output_CC1S_Values<TIM3::CCMR1_Output, 0, 2, ReadWriteMode, TIM3CCMR1_OutputBase> ;
    using FieldValues = TIM3_CCMR1_Output_CC1S_Values<TIM3::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40000418, 32, ReadWriteMode, TIM3CCMR1_OutputBase, T...> ;

  struct TIM3CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40000418, 32, ReadWriteMode>
  {
    using IC2F = TIM3_CCMR1_Input_IC2F_Values<TIM3::CCMR1_Input, 12, 4, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using IC2PSC = TIM3_CCMR1_Input_IC2PSC_Values<TIM3::CCMR1_Input, 10, 2, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using CC2S = TIM3_CCMR1_Input_CC2S_Values<TIM3::CCMR1_Input, 8, 2, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using IC1F = TIM3_CCMR1_Input_IC1F_Values<TIM3::CCMR1_Input, 4, 4, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using ICPCS = TIM3_CCMR1_Input_ICPCS_Values<TIM3::CCMR1_Input, 2, 2, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using CC1S = TIM3_CCMR1_Input_CC1S_Values<TIM3::CCMR1_Input, 0, 2, ReadWriteMode, TIM3CCMR1_InputBase> ;
    using FieldValues = TIM3_CCMR1_Input_CC1S_Values<TIM3::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40000418, 32, ReadWriteMode, TIM3CCMR1_InputBase, T...> ;

  struct TIM3CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4000041C, 32, ReadWriteMode>
  {
    using OC4M_3 = TIM3_CCMR2_Output_OC4M_3_Values<TIM3::CCMR2_Output, 24, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC3M_3 = TIM3_CCMR2_Output_OC3M_3_Values<TIM3::CCMR2_Output, 16, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC4CE = TIM3_CCMR2_Output_OC4CE_Values<TIM3::CCMR2_Output, 15, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC4M = TIM3_CCMR2_Output_OC4M_Values<TIM3::CCMR2_Output, 12, 3, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC4PE = TIM3_CCMR2_Output_OC4PE_Values<TIM3::CCMR2_Output, 11, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC4FE = TIM3_CCMR2_Output_OC4FE_Values<TIM3::CCMR2_Output, 10, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using CC4S = TIM3_CCMR2_Output_CC4S_Values<TIM3::CCMR2_Output, 8, 2, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC3CE = TIM3_CCMR2_Output_OC3CE_Values<TIM3::CCMR2_Output, 7, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC3M = TIM3_CCMR2_Output_OC3M_Values<TIM3::CCMR2_Output, 4, 3, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC3PE = TIM3_CCMR2_Output_OC3PE_Values<TIM3::CCMR2_Output, 3, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using OC3FE = TIM3_CCMR2_Output_OC3FE_Values<TIM3::CCMR2_Output, 2, 1, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using CC3S = TIM3_CCMR2_Output_CC3S_Values<TIM3::CCMR2_Output, 0, 2, ReadWriteMode, TIM3CCMR2_OutputBase> ;
    using FieldValues = TIM3_CCMR2_Output_CC3S_Values<TIM3::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4000041C, 32, ReadWriteMode, TIM3CCMR2_OutputBase, T...> ;

  struct TIM3CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4000041C, 32, ReadWriteMode>
  {
    using IC4F = TIM3_CCMR2_Input_IC4F_Values<TIM3::CCMR2_Input, 12, 4, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using IC4PSC = TIM3_CCMR2_Input_IC4PSC_Values<TIM3::CCMR2_Input, 10, 2, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using CC4S = TIM3_CCMR2_Input_CC4S_Values<TIM3::CCMR2_Input, 8, 2, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using IC3F = TIM3_CCMR2_Input_IC3F_Values<TIM3::CCMR2_Input, 4, 4, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using IC3PSC = TIM3_CCMR2_Input_IC3PSC_Values<TIM3::CCMR2_Input, 2, 2, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using CC3S = TIM3_CCMR2_Input_CC3S_Values<TIM3::CCMR2_Input, 0, 2, ReadWriteMode, TIM3CCMR2_InputBase> ;
    using FieldValues = TIM3_CCMR2_Input_CC3S_Values<TIM3::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4000041C, 32, ReadWriteMode, TIM3CCMR2_InputBase, T...> ;

  struct TIM3CCERBase {} ;

  struct CCER : public RegisterBase<0x40000420, 32, ReadWriteMode>
  {
    using CC6P = TIM3_CCER_CC6P_Values<TIM3::CCER, 21, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC6E = TIM3_CCER_CC6E_Values<TIM3::CCER, 20, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC5P = TIM3_CCER_CC5P_Values<TIM3::CCER, 17, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC5E = TIM3_CCER_CC5E_Values<TIM3::CCER, 16, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC4NP = TIM3_CCER_CC4NP_Values<TIM3::CCER, 15, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC4NE = TIM3_CCER_CC4NE_Values<TIM3::CCER, 14, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC4P = TIM3_CCER_CC4P_Values<TIM3::CCER, 13, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC4E = TIM3_CCER_CC4E_Values<TIM3::CCER, 12, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC3NP = TIM3_CCER_CC3NP_Values<TIM3::CCER, 11, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC3NE = TIM3_CCER_CC3NE_Values<TIM3::CCER, 10, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC3P = TIM3_CCER_CC3P_Values<TIM3::CCER, 9, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC3E = TIM3_CCER_CC3E_Values<TIM3::CCER, 8, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC2NP = TIM3_CCER_CC2NP_Values<TIM3::CCER, 7, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC2NE = TIM3_CCER_CC2NE_Values<TIM3::CCER, 6, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC2P = TIM3_CCER_CC2P_Values<TIM3::CCER, 5, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC2E = TIM3_CCER_CC2E_Values<TIM3::CCER, 4, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC1NP = TIM3_CCER_CC1NP_Values<TIM3::CCER, 3, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC1NE = TIM3_CCER_CC1NE_Values<TIM3::CCER, 2, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC1P = TIM3_CCER_CC1P_Values<TIM3::CCER, 1, 1, ReadWriteMode, TIM3CCERBase> ;
    using CC1E = TIM3_CCER_CC1E_Values<TIM3::CCER, 0, 1, ReadWriteMode, TIM3CCERBase> ;
    using FieldValues = TIM3_CCER_CC1E_Values<TIM3::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40000420, 32, ReadWriteMode, TIM3CCERBase, T...> ;

  struct TIM3CNTBase {} ;

  struct CNT : public RegisterBase<0x40000424, 32, ReadWriteMode>
  {
    using UIFCPY = TIM3_CNT_UIFCPY_Values<TIM3::CNT, 31, 1, ReadWriteMode, TIM3CNTBase> ;
    using CNTField = TIM3_CNT_CNT_Values<TIM3::CNT, 0, 16, ReadWriteMode, TIM3CNTBase> ;
    using FieldValues = TIM3_CNT_CNT_Values<TIM3::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000424, 32, ReadWriteMode, TIM3CNTBase, T...> ;

  struct TIM3PSCBase {} ;

  struct PSC : public RegisterBase<0x40000428, 32, ReadWriteMode>
  {
    using PSCField = TIM3_PSC_PSC_Values<TIM3::PSC, 0, 16, ReadWriteMode, TIM3PSCBase> ;
    using FieldValues = TIM3_PSC_PSC_Values<TIM3::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000428, 32, ReadWriteMode, TIM3PSCBase, T...> ;

  struct TIM3ARRBase {} ;

  struct ARR : public RegisterBase<0x4000042C, 32, ReadWriteMode>
  {
    using ARRField = TIM3_ARR_ARR_Values<TIM3::ARR, 0, 16, ReadWriteMode, TIM3ARRBase> ;
    using FieldValues = TIM3_ARR_ARR_Values<TIM3::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000042C, 32, ReadWriteMode, TIM3ARRBase, T...> ;

  struct TIM3RCRBase {} ;

  struct RCR : public RegisterBase<0x40000430, 32, ReadWriteMode>
  {
    using REP = TIM3_RCR_REP_Values<TIM3::RCR, 0, 16, ReadWriteMode, TIM3RCRBase> ;
    using FieldValues = TIM3_RCR_REP_Values<TIM3::RCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40000430, 32, ReadWriteMode, TIM3RCRBase, T...> ;

  struct TIM3CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40000434, 32, ReadWriteMode>
  {
    using CCR1Field = TIM3_CCR1_CCR1_Values<TIM3::CCR1, 0, 16, ReadWriteMode, TIM3CCR1Base> ;
    using FieldValues = TIM3_CCR1_CCR1_Values<TIM3::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40000434, 32, ReadWriteMode, TIM3CCR1Base, T...> ;

  struct TIM3CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40000438, 32, ReadWriteMode>
  {
    using CCR2Field = TIM3_CCR2_CCR2_Values<TIM3::CCR2, 0, 16, ReadWriteMode, TIM3CCR2Base> ;
    using FieldValues = TIM3_CCR2_CCR2_Values<TIM3::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40000438, 32, ReadWriteMode, TIM3CCR2Base, T...> ;

  struct TIM3CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4000043C, 32, ReadWriteMode>
  {
    using CCR3Field = TIM3_CCR3_CCR3_Values<TIM3::CCR3, 0, 16, ReadWriteMode, TIM3CCR3Base> ;
    using FieldValues = TIM3_CCR3_CCR3_Values<TIM3::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4000043C, 32, ReadWriteMode, TIM3CCR3Base, T...> ;

  struct TIM3CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40000440, 32, ReadWriteMode>
  {
    using CCR4Field = TIM3_CCR4_CCR4_Values<TIM3::CCR4, 0, 16, ReadWriteMode, TIM3CCR4Base> ;
    using FieldValues = TIM3_CCR4_CCR4_Values<TIM3::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40000440, 32, ReadWriteMode, TIM3CCR4Base, T...> ;

  struct TIM3BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40000444, 32, ReadWriteMode>
  {
    using BK2ID = TIM3_BDTR_BK2ID_Values<TIM3::BDTR, 29, 1, ReadWriteMode, TIM3BDTRBase> ;
    using BKBID = TIM3_BDTR_BKBID_Values<TIM3::BDTR, 28, 1, ReadWriteMode, TIM3BDTRBase> ;
    using BK2DSRM = TIM3_BDTR_BK2DSRM_Values<TIM3::BDTR, 27, 1, ReadWriteMode, TIM3BDTRBase> ;
    using BKDSRM = TIM3_BDTR_BKDSRM_Values<TIM3::BDTR, 26, 1, ReadWriteMode, TIM3BDTRBase> ;
    using BK2P = TIM3_BDTR_BK2P_Values<TIM3::BDTR, 25, 1, ReadWriteMode, TIM3BDTRBase> ;
    using BK2E = TIM3_BDTR_BK2E_Values<TIM3::BDTR, 24, 1, ReadWriteMode, TIM3BDTRBase> ;
    using BK2F = TIM3_BDTR_BK2F_Values<TIM3::BDTR, 20, 4, ReadWriteMode, TIM3BDTRBase> ;
    using BKF = TIM3_BDTR_BKF_Values<TIM3::BDTR, 16, 4, ReadWriteMode, TIM3BDTRBase> ;
    using MOE = TIM3_BDTR_MOE_Values<TIM3::BDTR, 15, 1, ReadWriteMode, TIM3BDTRBase> ;
    using AOE = TIM3_BDTR_AOE_Values<TIM3::BDTR, 14, 1, ReadWriteMode, TIM3BDTRBase> ;
    using BKP = TIM3_BDTR_BKP_Values<TIM3::BDTR, 13, 1, ReadWriteMode, TIM3BDTRBase> ;
    using BKE = TIM3_BDTR_BKE_Values<TIM3::BDTR, 12, 1, ReadWriteMode, TIM3BDTRBase> ;
    using OSSR = TIM3_BDTR_OSSR_Values<TIM3::BDTR, 11, 1, ReadWriteMode, TIM3BDTRBase> ;
    using OSSI = TIM3_BDTR_OSSI_Values<TIM3::BDTR, 10, 1, ReadWriteMode, TIM3BDTRBase> ;
    using LOCK = TIM3_BDTR_LOCK_Values<TIM3::BDTR, 8, 2, ReadWriteMode, TIM3BDTRBase> ;
    using DTG = TIM3_BDTR_DTG_Values<TIM3::BDTR, 0, 8, ReadWriteMode, TIM3BDTRBase> ;
    using FieldValues = TIM3_BDTR_DTG_Values<TIM3::BDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40000444, 32, ReadWriteMode, TIM3BDTRBase, T...> ;

  struct TIM3CCR5Base {} ;

  struct CCR5 : public RegisterBase<0x40000448, 32, ReadWriteMode>
  {
    using CCR5Field = TIM3_CCR5_CCR5_Values<TIM3::CCR5, 0, 16, ReadWriteMode, TIM3CCR5Base> ;
    using GC5C1 = TIM3_CCR5_GC5C1_Values<TIM3::CCR5, 29, 1, ReadWriteMode, TIM3CCR5Base> ;
    using GC5C2 = TIM3_CCR5_GC5C2_Values<TIM3::CCR5, 30, 1, ReadWriteMode, TIM3CCR5Base> ;
    using GC5C3 = TIM3_CCR5_GC5C3_Values<TIM3::CCR5, 31, 1, ReadWriteMode, TIM3CCR5Base> ;
    using FieldValues = TIM3_CCR5_GC5C3_Values<TIM3::CCR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR5Pack  = Register<0x40000448, 32, ReadWriteMode, TIM3CCR5Base, T...> ;

  struct TIM3CCR6Base {} ;

  struct CCR6 : public RegisterBase<0x4000044C, 32, ReadWriteMode>
  {
    using CCR6Field = TIM3_CCR6_CCR6_Values<TIM3::CCR6, 0, 16, ReadWriteMode, TIM3CCR6Base> ;
    using FieldValues = TIM3_CCR6_CCR6_Values<TIM3::CCR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR6Pack  = Register<0x4000044C, 32, ReadWriteMode, TIM3CCR6Base, T...> ;

  struct TIM3CCMR3_OutputBase {} ;

  struct CCMR3_Output : public RegisterBase<0x40000450, 32, ReadWriteMode>
  {
    using OC6M_bit3 = TIM3_CCMR3_Output_OC6M_bit3_Values<TIM3::CCMR3_Output, 24, 1, ReadWriteMode, TIM3CCMR3_OutputBase> ;
    using OC5M_bit3 = TIM3_CCMR3_Output_OC5M_bit3_Values<TIM3::CCMR3_Output, 16, 3, ReadWriteMode, TIM3CCMR3_OutputBase> ;
    using OC6CE = TIM3_CCMR3_Output_OC6CE_Values<TIM3::CCMR3_Output, 15, 1, ReadWriteMode, TIM3CCMR3_OutputBase> ;
    using OC6M = TIM3_CCMR3_Output_OC6M_Values<TIM3::CCMR3_Output, 12, 3, ReadWriteMode, TIM3CCMR3_OutputBase> ;
    using OC6PE = TIM3_CCMR3_Output_OC6PE_Values<TIM3::CCMR3_Output, 11, 1, ReadWriteMode, TIM3CCMR3_OutputBase> ;
    using OC6FE = TIM3_CCMR3_Output_OC6FE_Values<TIM3::CCMR3_Output, 10, 1, ReadWriteMode, TIM3CCMR3_OutputBase> ;
    using OC5CE = TIM3_CCMR3_Output_OC5CE_Values<TIM3::CCMR3_Output, 7, 1, ReadWriteMode, TIM3CCMR3_OutputBase> ;
    using OC5M = TIM3_CCMR3_Output_OC5M_Values<TIM3::CCMR3_Output, 4, 3, ReadWriteMode, TIM3CCMR3_OutputBase> ;
    using OC5PE = TIM3_CCMR3_Output_OC5PE_Values<TIM3::CCMR3_Output, 3, 1, ReadWriteMode, TIM3CCMR3_OutputBase> ;
    using OC5FE = TIM3_CCMR3_Output_OC5FE_Values<TIM3::CCMR3_Output, 2, 1, ReadWriteMode, TIM3CCMR3_OutputBase> ;
    using FieldValues = TIM3_CCMR3_Output_OC5FE_Values<TIM3::CCMR3_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR3_OutputPack  = Register<0x40000450, 32, ReadWriteMode, TIM3CCMR3_OutputBase, T...> ;

  struct TIM3DTR2Base {} ;

  struct DTR2 : public RegisterBase<0x40000454, 32, ReadWriteMode>
  {
    using DTPE = TIM3_DTR2_DTPE_Values<TIM3::DTR2, 17, 1, ReadWriteMode, TIM3DTR2Base> ;
    using DTAE = TIM3_DTR2_DTAE_Values<TIM3::DTR2, 16, 1, ReadWriteMode, TIM3DTR2Base> ;
    using DTGF = TIM3_DTR2_DTGF_Values<TIM3::DTR2, 0, 8, ReadWriteMode, TIM3DTR2Base> ;
    using FieldValues = TIM3_DTR2_DTGF_Values<TIM3::DTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DTR2Pack  = Register<0x40000454, 32, ReadWriteMode, TIM3DTR2Base, T...> ;

  struct TIM3ECRBase {} ;

  struct ECR : public RegisterBase<0x40000458, 32, ReadWriteMode>
  {
    using IE = TIM3_ECR_IE_Values<TIM3::ECR, 0, 1, ReadWriteMode, TIM3ECRBase> ;
    using IDIR = TIM3_ECR_IDIR_Values<TIM3::ECR, 1, 2, ReadWriteMode, TIM3ECRBase> ;
    using IBLK = TIM3_ECR_IBLK_Values<TIM3::ECR, 3, 2, ReadWriteMode, TIM3ECRBase> ;
    using FIDX = TIM3_ECR_FIDX_Values<TIM3::ECR, 5, 1, ReadWriteMode, TIM3ECRBase> ;
    using IPOS = TIM3_ECR_IPOS_Values<TIM3::ECR, 6, 2, ReadWriteMode, TIM3ECRBase> ;
    using PW = TIM3_ECR_PW_Values<TIM3::ECR, 16, 8, ReadWriteMode, TIM3ECRBase> ;
    using PWPRSC = TIM3_ECR_PWPRSC_Values<TIM3::ECR, 24, 3, ReadWriteMode, TIM3ECRBase> ;
    using FieldValues = TIM3_ECR_PWPRSC_Values<TIM3::ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECRPack  = Register<0x40000458, 32, ReadWriteMode, TIM3ECRBase, T...> ;

  struct TIM3TISELBase {} ;

  struct TISEL : public RegisterBase<0x4000045C, 32, ReadWriteMode>
  {
    using TI1SEL = TIM3_TISEL_TI1SEL_Values<TIM3::TISEL, 0, 4, ReadWriteMode, TIM3TISELBase> ;
    using TI2SEL = TIM3_TISEL_TI2SEL_Values<TIM3::TISEL, 8, 4, ReadWriteMode, TIM3TISELBase> ;
    using TI3SEL = TIM3_TISEL_TI3SEL_Values<TIM3::TISEL, 16, 4, ReadWriteMode, TIM3TISELBase> ;
    using TI4SEL = TIM3_TISEL_TI4SEL_Values<TIM3::TISEL, 24, 4, ReadWriteMode, TIM3TISELBase> ;
    using FieldValues = TIM3_TISEL_TI4SEL_Values<TIM3::TISEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TISELPack  = Register<0x4000045C, 32, ReadWriteMode, TIM3TISELBase, T...> ;

  struct TIM3AF1Base {} ;

  struct AF1 : public RegisterBase<0x40000460, 32, ReadWriteMode>
  {
    using ETRSEL = TIM3_AF1_ETRSEL_Values<TIM3::AF1, 14, 4, ReadWriteMode, TIM3AF1Base> ;
    using BKCMP4P = TIM3_AF1_BKCMP4P_Values<TIM3::AF1, 13, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKCMP3P = TIM3_AF1_BKCMP3P_Values<TIM3::AF1, 12, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKCMP2P = TIM3_AF1_BKCMP2P_Values<TIM3::AF1, 11, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKCMP1P = TIM3_AF1_BKCMP1P_Values<TIM3::AF1, 10, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKINP = TIM3_AF1_BKINP_Values<TIM3::AF1, 9, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKCMP7E = TIM3_AF1_BKCMP7E_Values<TIM3::AF1, 7, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKCMP6E = TIM3_AF1_BKCMP6E_Values<TIM3::AF1, 6, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKCMP5E = TIM3_AF1_BKCMP5E_Values<TIM3::AF1, 5, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKCMP4E = TIM3_AF1_BKCMP4E_Values<TIM3::AF1, 4, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKCMP3E = TIM3_AF1_BKCMP3E_Values<TIM3::AF1, 3, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKCMP2E = TIM3_AF1_BKCMP2E_Values<TIM3::AF1, 2, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKCMP1E = TIM3_AF1_BKCMP1E_Values<TIM3::AF1, 1, 1, ReadWriteMode, TIM3AF1Base> ;
    using BKINE = TIM3_AF1_BKINE_Values<TIM3::AF1, 0, 1, ReadWriteMode, TIM3AF1Base> ;
    using FieldValues = TIM3_AF1_BKINE_Values<TIM3::AF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF1Pack  = Register<0x40000460, 32, ReadWriteMode, TIM3AF1Base, T...> ;

  struct TIM3AF2Base {} ;

  struct AF2 : public RegisterBase<0x40000464, 32, ReadWriteMode>
  {
    using OCRSEL = TIM3_AF2_OCRSEL_Values<TIM3::AF2, 16, 3, ReadWriteMode, TIM3AF2Base> ;
    using BK2CMP4P = TIM3_AF2_BK2CMP4P_Values<TIM3::AF2, 13, 1, ReadWriteMode, TIM3AF2Base> ;
    using BK2CMP3P = TIM3_AF2_BK2CMP3P_Values<TIM3::AF2, 12, 1, ReadWriteMode, TIM3AF2Base> ;
    using BK2CMP2P = TIM3_AF2_BK2CMP2P_Values<TIM3::AF2, 11, 1, ReadWriteMode, TIM3AF2Base> ;
    using BK2CMP1P = TIM3_AF2_BK2CMP1P_Values<TIM3::AF2, 10, 1, ReadWriteMode, TIM3AF2Base> ;
    using BK2INP = TIM3_AF2_BK2INP_Values<TIM3::AF2, 9, 1, ReadWriteMode, TIM3AF2Base> ;
    using BK2CMP7E = TIM3_AF2_BK2CMP7E_Values<TIM3::AF2, 7, 1, ReadWriteMode, TIM3AF2Base> ;
    using BK2CMP6E = TIM3_AF2_BK2CMP6E_Values<TIM3::AF2, 6, 1, ReadWriteMode, TIM3AF2Base> ;
    using BK2CMP5E = TIM3_AF2_BK2CMP5E_Values<TIM3::AF2, 5, 1, ReadWriteMode, TIM3AF2Base> ;
    using BK2CMP4E = TIM3_AF2_BK2CMP4E_Values<TIM3::AF2, 4, 1, ReadWriteMode, TIM3AF2Base> ;
    using BK2CMP3E = TIM3_AF2_BK2CMP3E_Values<TIM3::AF2, 3, 1, ReadWriteMode, TIM3AF2Base> ;
    using BK2CMP2E = TIM3_AF2_BK2CMP2E_Values<TIM3::AF2, 2, 1, ReadWriteMode, TIM3AF2Base> ;
    using BK2CMP1E = TIM3_AF2_BK2CMP1E_Values<TIM3::AF2, 1, 1, ReadWriteMode, TIM3AF2Base> ;
    using BKINE = TIM3_AF2_BKINE_Values<TIM3::AF2, 0, 1, ReadWriteMode, TIM3AF2Base> ;
    using FieldValues = TIM3_AF2_BKINE_Values<TIM3::AF2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF2Pack  = Register<0x40000464, 32, ReadWriteMode, TIM3AF2Base, T...> ;

  struct TIM3DCRBase {} ;

  struct DCR : public RegisterBase<0x400007DC, 32, ReadWriteMode>
  {
    using DBL = TIM3_DCR_DBL_Values<TIM3::DCR, 8, 5, ReadWriteMode, TIM3DCRBase> ;
    using DBA = TIM3_DCR_DBA_Values<TIM3::DCR, 0, 5, ReadWriteMode, TIM3DCRBase> ;
    using FieldValues = TIM3_DCR_DBA_Values<TIM3::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x400007DC, 32, ReadWriteMode, TIM3DCRBase, T...> ;

  struct TIM3DMARBase {} ;

  struct DMAR : public RegisterBase<0x400007E0, 32, ReadWriteMode>
  {
    using DMAB = TIM3_DMAR_DMAB_Values<TIM3::DMAR, 0, 32, ReadWriteMode, TIM3DMARBase> ;
    using FieldValues = TIM3_DMAR_DMAB_Values<TIM3::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x400007E0, 32, ReadWriteMode, TIM3DMARBase, T...> ;

} ;

