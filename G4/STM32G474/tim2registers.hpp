/*******************************************************************************
* Filename      : tim2registers.hpp
*
* Details       : Advanced-timers. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "tim2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM2
{
  struct TIM2CR1Base {} ;

  struct CR1 : public RegisterBase<0x40000000, 32, ReadWriteMode>
  {
    using DITHEN = TIM2_CR1_DITHEN_Values<TIM2::CR1, 12, 1, ReadWriteMode, TIM2CR1Base> ;
    using UIFREMAP = TIM2_CR1_UIFREMAP_Values<TIM2::CR1, 11, 1, ReadWriteMode, TIM2CR1Base> ;
    using CKD = TIM2_CR1_CKD_Values<TIM2::CR1, 8, 2, ReadWriteMode, TIM2CR1Base> ;
    using ARPE = TIM2_CR1_ARPE_Values<TIM2::CR1, 7, 1, ReadWriteMode, TIM2CR1Base> ;
    using CMS = TIM2_CR1_CMS_Values<TIM2::CR1, 5, 2, ReadWriteMode, TIM2CR1Base> ;
    using DIR = TIM2_CR1_DIR_Values<TIM2::CR1, 4, 1, ReadWriteMode, TIM2CR1Base> ;
    using OPM = TIM2_CR1_OPM_Values<TIM2::CR1, 3, 1, ReadWriteMode, TIM2CR1Base> ;
    using URS = TIM2_CR1_URS_Values<TIM2::CR1, 2, 1, ReadWriteMode, TIM2CR1Base> ;
    using UDIS = TIM2_CR1_UDIS_Values<TIM2::CR1, 1, 1, ReadWriteMode, TIM2CR1Base> ;
    using CEN = TIM2_CR1_CEN_Values<TIM2::CR1, 0, 1, ReadWriteMode, TIM2CR1Base> ;
    using FieldValues = TIM2_CR1_CEN_Values<TIM2::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40000000, 32, ReadWriteMode, TIM2CR1Base, T...> ;

  struct TIM2CR2Base {} ;

  struct CR2 : public RegisterBase<0x40000004, 32, ReadWriteMode>
  {
    using MMS_3 = TIM2_CR2_MMS_3_Values<TIM2::CR2, 25, 1, ReadWriteMode, TIM2CR2Base> ;
    using MMS2 = TIM2_CR2_MMS2_Values<TIM2::CR2, 20, 4, ReadWriteMode, TIM2CR2Base> ;
    using OIS6 = TIM2_CR2_OIS6_Values<TIM2::CR2, 18, 1, ReadWriteMode, TIM2CR2Base> ;
    using OIS5 = TIM2_CR2_OIS5_Values<TIM2::CR2, 16, 1, ReadWriteMode, TIM2CR2Base> ;
    using OIS4N = TIM2_CR2_OIS4N_Values<TIM2::CR2, 15, 1, ReadWriteMode, TIM2CR2Base> ;
    using OIS4 = TIM2_CR2_OIS4_Values<TIM2::CR2, 14, 1, ReadWriteMode, TIM2CR2Base> ;
    using OIS3N = TIM2_CR2_OIS3N_Values<TIM2::CR2, 13, 1, ReadWriteMode, TIM2CR2Base> ;
    using OIS3 = TIM2_CR2_OIS3_Values<TIM2::CR2, 12, 1, ReadWriteMode, TIM2CR2Base> ;
    using OIS2N = TIM2_CR2_OIS2N_Values<TIM2::CR2, 11, 1, ReadWriteMode, TIM2CR2Base> ;
    using OIS2 = TIM2_CR2_OIS2_Values<TIM2::CR2, 10, 1, ReadWriteMode, TIM2CR2Base> ;
    using OIS1N = TIM2_CR2_OIS1N_Values<TIM2::CR2, 9, 1, ReadWriteMode, TIM2CR2Base> ;
    using OIS1 = TIM2_CR2_OIS1_Values<TIM2::CR2, 8, 1, ReadWriteMode, TIM2CR2Base> ;
    using TI1S = TIM2_CR2_TI1S_Values<TIM2::CR2, 7, 1, ReadWriteMode, TIM2CR2Base> ;
    using MMS = TIM2_CR2_MMS_Values<TIM2::CR2, 4, 3, ReadWriteMode, TIM2CR2Base> ;
    using CCDS = TIM2_CR2_CCDS_Values<TIM2::CR2, 3, 1, ReadWriteMode, TIM2CR2Base> ;
    using CCUS = TIM2_CR2_CCUS_Values<TIM2::CR2, 2, 1, ReadWriteMode, TIM2CR2Base> ;
    using CCPC = TIM2_CR2_CCPC_Values<TIM2::CR2, 0, 1, ReadWriteMode, TIM2CR2Base> ;
    using FieldValues = TIM2_CR2_CCPC_Values<TIM2::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40000004, 32, ReadWriteMode, TIM2CR2Base, T...> ;

  struct TIM2SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40000008, 32, ReadWriteMode>
  {
    using SMSPS = TIM2_SMCR_SMSPS_Values<TIM2::SMCR, 25, 1, ReadWriteMode, TIM2SMCRBase> ;
    using SMSPE = TIM2_SMCR_SMSPE_Values<TIM2::SMCR, 24, 1, ReadWriteMode, TIM2SMCRBase> ;
    using TS_4_3 = TIM2_SMCR_TS_4_3_Values<TIM2::SMCR, 20, 2, ReadWriteMode, TIM2SMCRBase> ;
    using SMS_3 = TIM2_SMCR_SMS_3_Values<TIM2::SMCR, 16, 1, ReadWriteMode, TIM2SMCRBase> ;
    using ETP = TIM2_SMCR_ETP_Values<TIM2::SMCR, 15, 1, ReadWriteMode, TIM2SMCRBase> ;
    using ECE = TIM2_SMCR_ECE_Values<TIM2::SMCR, 14, 1, ReadWriteMode, TIM2SMCRBase> ;
    using ETPS = TIM2_SMCR_ETPS_Values<TIM2::SMCR, 12, 2, ReadWriteMode, TIM2SMCRBase> ;
    using ETF = TIM2_SMCR_ETF_Values<TIM2::SMCR, 8, 4, ReadWriteMode, TIM2SMCRBase> ;
    using MSM = TIM2_SMCR_MSM_Values<TIM2::SMCR, 7, 1, ReadWriteMode, TIM2SMCRBase> ;
    using TS = TIM2_SMCR_TS_Values<TIM2::SMCR, 4, 3, ReadWriteMode, TIM2SMCRBase> ;
    using OCCS = TIM2_SMCR_OCCS_Values<TIM2::SMCR, 3, 1, ReadWriteMode, TIM2SMCRBase> ;
    using SMS = TIM2_SMCR_SMS_Values<TIM2::SMCR, 0, 3, ReadWriteMode, TIM2SMCRBase> ;
    using FieldValues = TIM2_SMCR_SMS_Values<TIM2::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40000008, 32, ReadWriteMode, TIM2SMCRBase, T...> ;

  struct TIM2DIERBase {} ;

  struct DIER : public RegisterBase<0x4000000C, 32, ReadWriteMode>
  {
    using TERRIE = TIM2_DIER_TERRIE_Values<TIM2::DIER, 23, 1, ReadWriteMode, TIM2DIERBase> ;
    using IERRIE = TIM2_DIER_IERRIE_Values<TIM2::DIER, 22, 1, ReadWriteMode, TIM2DIERBase> ;
    using DIRIE = TIM2_DIER_DIRIE_Values<TIM2::DIER, 21, 1, ReadWriteMode, TIM2DIERBase> ;
    using IDXIE = TIM2_DIER_IDXIE_Values<TIM2::DIER, 20, 1, ReadWriteMode, TIM2DIERBase> ;
    using TDE = TIM2_DIER_TDE_Values<TIM2::DIER, 14, 1, ReadWriteMode, TIM2DIERBase> ;
    using COMDE = TIM2_DIER_COMDE_Values<TIM2::DIER, 13, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC4DE = TIM2_DIER_CC4DE_Values<TIM2::DIER, 12, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC3DE = TIM2_DIER_CC3DE_Values<TIM2::DIER, 11, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC2DE = TIM2_DIER_CC2DE_Values<TIM2::DIER, 10, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC1DE = TIM2_DIER_CC1DE_Values<TIM2::DIER, 9, 1, ReadWriteMode, TIM2DIERBase> ;
    using UDE = TIM2_DIER_UDE_Values<TIM2::DIER, 8, 1, ReadWriteMode, TIM2DIERBase> ;
    using TIE = TIM2_DIER_TIE_Values<TIM2::DIER, 6, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC4IE = TIM2_DIER_CC4IE_Values<TIM2::DIER, 4, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC3IE = TIM2_DIER_CC3IE_Values<TIM2::DIER, 3, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC2IE = TIM2_DIER_CC2IE_Values<TIM2::DIER, 2, 1, ReadWriteMode, TIM2DIERBase> ;
    using CC1IE = TIM2_DIER_CC1IE_Values<TIM2::DIER, 1, 1, ReadWriteMode, TIM2DIERBase> ;
    using UIE = TIM2_DIER_UIE_Values<TIM2::DIER, 0, 1, ReadWriteMode, TIM2DIERBase> ;
    using BIE = TIM2_DIER_BIE_Values<TIM2::DIER, 7, 1, ReadWriteMode, TIM2DIERBase> ;
    using COMIE = TIM2_DIER_COMIE_Values<TIM2::DIER, 5, 1, ReadWriteMode, TIM2DIERBase> ;
    using FieldValues = TIM2_DIER_COMIE_Values<TIM2::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000000C, 32, ReadWriteMode, TIM2DIERBase, T...> ;

  struct TIM2SRBase {} ;

  struct SR : public RegisterBase<0x40000010, 32, ReadWriteMode>
  {
    using TERRF = TIM2_SR_TERRF_Values<TIM2::SR, 23, 1, ReadWriteMode, TIM2SRBase> ;
    using IERRF = TIM2_SR_IERRF_Values<TIM2::SR, 22, 1, ReadWriteMode, TIM2SRBase> ;
    using DIRF = TIM2_SR_DIRF_Values<TIM2::SR, 21, 1, ReadWriteMode, TIM2SRBase> ;
    using IDXF = TIM2_SR_IDXF_Values<TIM2::SR, 20, 1, ReadWriteMode, TIM2SRBase> ;
    using CC6IF = TIM2_SR_CC6IF_Values<TIM2::SR, 17, 1, ReadWriteMode, TIM2SRBase> ;
    using CC5IF = TIM2_SR_CC5IF_Values<TIM2::SR, 16, 1, ReadWriteMode, TIM2SRBase> ;
    using SBIF = TIM2_SR_SBIF_Values<TIM2::SR, 13, 1, ReadWriteMode, TIM2SRBase> ;
    using CC4OF = TIM2_SR_CC4OF_Values<TIM2::SR, 12, 1, ReadWriteMode, TIM2SRBase> ;
    using CC3OF = TIM2_SR_CC3OF_Values<TIM2::SR, 11, 1, ReadWriteMode, TIM2SRBase> ;
    using CC2OF = TIM2_SR_CC2OF_Values<TIM2::SR, 10, 1, ReadWriteMode, TIM2SRBase> ;
    using CC1OF = TIM2_SR_CC1OF_Values<TIM2::SR, 9, 1, ReadWriteMode, TIM2SRBase> ;
    using B2IF = TIM2_SR_B2IF_Values<TIM2::SR, 8, 1, ReadWriteMode, TIM2SRBase> ;
    using BIF = TIM2_SR_BIF_Values<TIM2::SR, 7, 1, ReadWriteMode, TIM2SRBase> ;
    using TIF = TIM2_SR_TIF_Values<TIM2::SR, 6, 1, ReadWriteMode, TIM2SRBase> ;
    using COMIF = TIM2_SR_COMIF_Values<TIM2::SR, 5, 1, ReadWriteMode, TIM2SRBase> ;
    using CC4IF = TIM2_SR_CC4IF_Values<TIM2::SR, 4, 1, ReadWriteMode, TIM2SRBase> ;
    using CC3IF = TIM2_SR_CC3IF_Values<TIM2::SR, 3, 1, ReadWriteMode, TIM2SRBase> ;
    using CC2IF = TIM2_SR_CC2IF_Values<TIM2::SR, 2, 1, ReadWriteMode, TIM2SRBase> ;
    using CC1IF = TIM2_SR_CC1IF_Values<TIM2::SR, 1, 1, ReadWriteMode, TIM2SRBase> ;
    using UIF = TIM2_SR_UIF_Values<TIM2::SR, 0, 1, ReadWriteMode, TIM2SRBase> ;
    using FieldValues = TIM2_SR_UIF_Values<TIM2::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40000010, 32, ReadWriteMode, TIM2SRBase, T...> ;

  struct TIM2EGRBase {} ;

  struct EGR : public RegisterBase<0x40000014, 32, WriteMode>
  {
    using B2G = TIM2_EGR_B2G_Values<TIM2::EGR, 8, 1, WriteMode, TIM2EGRBase> ;
    using BG = TIM2_EGR_BG_Values<TIM2::EGR, 7, 1, WriteMode, TIM2EGRBase> ;
    using TG = TIM2_EGR_TG_Values<TIM2::EGR, 6, 1, WriteMode, TIM2EGRBase> ;
    using COMG = TIM2_EGR_COMG_Values<TIM2::EGR, 5, 1, WriteMode, TIM2EGRBase> ;
    using CC4G = TIM2_EGR_CC4G_Values<TIM2::EGR, 4, 1, WriteMode, TIM2EGRBase> ;
    using CC3G = TIM2_EGR_CC3G_Values<TIM2::EGR, 3, 1, WriteMode, TIM2EGRBase> ;
    using CC2G = TIM2_EGR_CC2G_Values<TIM2::EGR, 2, 1, WriteMode, TIM2EGRBase> ;
    using CC1G = TIM2_EGR_CC1G_Values<TIM2::EGR, 1, 1, WriteMode, TIM2EGRBase> ;
    using UG = TIM2_EGR_UG_Values<TIM2::EGR, 0, 1, WriteMode, TIM2EGRBase> ;
    using FieldValues = TIM2_EGR_UG_Values<TIM2::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40000014, 32, WriteMode, TIM2EGRBase, T...> ;

  struct TIM2CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40000018, 32, ReadWriteMode>
  {
    using OC2M_3 = TIM2_CCMR1_Output_OC2M_3_Values<TIM2::CCMR1_Output, 24, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1M_3 = TIM2_CCMR1_Output_OC1M_3_Values<TIM2::CCMR1_Output, 16, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC2CE = TIM2_CCMR1_Output_OC2CE_Values<TIM2::CCMR1_Output, 15, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC2M = TIM2_CCMR1_Output_OC2M_Values<TIM2::CCMR1_Output, 12, 3, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC2PE = TIM2_CCMR1_Output_OC2PE_Values<TIM2::CCMR1_Output, 11, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC2FE = TIM2_CCMR1_Output_OC2FE_Values<TIM2::CCMR1_Output, 10, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using CC2S = TIM2_CCMR1_Output_CC2S_Values<TIM2::CCMR1_Output, 8, 2, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1CE = TIM2_CCMR1_Output_OC1CE_Values<TIM2::CCMR1_Output, 7, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1M = TIM2_CCMR1_Output_OC1M_Values<TIM2::CCMR1_Output, 4, 3, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1PE = TIM2_CCMR1_Output_OC1PE_Values<TIM2::CCMR1_Output, 3, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using OC1FE = TIM2_CCMR1_Output_OC1FE_Values<TIM2::CCMR1_Output, 2, 1, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using CC1S = TIM2_CCMR1_Output_CC1S_Values<TIM2::CCMR1_Output, 0, 2, ReadWriteMode, TIM2CCMR1_OutputBase> ;
    using FieldValues = TIM2_CCMR1_Output_CC1S_Values<TIM2::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40000018, 32, ReadWriteMode, TIM2CCMR1_OutputBase, T...> ;

  struct TIM2CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40000018, 32, ReadWriteMode>
  {
    using IC2F = TIM2_CCMR1_Input_IC2F_Values<TIM2::CCMR1_Input, 12, 4, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using IC2PSC = TIM2_CCMR1_Input_IC2PSC_Values<TIM2::CCMR1_Input, 10, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using CC2S = TIM2_CCMR1_Input_CC2S_Values<TIM2::CCMR1_Input, 8, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using IC1F = TIM2_CCMR1_Input_IC1F_Values<TIM2::CCMR1_Input, 4, 4, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using ICPCS = TIM2_CCMR1_Input_ICPCS_Values<TIM2::CCMR1_Input, 2, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using CC1S = TIM2_CCMR1_Input_CC1S_Values<TIM2::CCMR1_Input, 0, 2, ReadWriteMode, TIM2CCMR1_InputBase> ;
    using FieldValues = TIM2_CCMR1_Input_CC1S_Values<TIM2::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40000018, 32, ReadWriteMode, TIM2CCMR1_InputBase, T...> ;

  struct TIM2CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4000001C, 32, ReadWriteMode>
  {
    using OC4M_3 = TIM2_CCMR2_Output_OC4M_3_Values<TIM2::CCMR2_Output, 24, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3M_3 = TIM2_CCMR2_Output_OC3M_3_Values<TIM2::CCMR2_Output, 16, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC4CE = TIM2_CCMR2_Output_OC4CE_Values<TIM2::CCMR2_Output, 15, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC4M = TIM2_CCMR2_Output_OC4M_Values<TIM2::CCMR2_Output, 12, 3, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC4PE = TIM2_CCMR2_Output_OC4PE_Values<TIM2::CCMR2_Output, 11, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC4FE = TIM2_CCMR2_Output_OC4FE_Values<TIM2::CCMR2_Output, 10, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using CC4S = TIM2_CCMR2_Output_CC4S_Values<TIM2::CCMR2_Output, 8, 2, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3CE = TIM2_CCMR2_Output_OC3CE_Values<TIM2::CCMR2_Output, 7, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3M = TIM2_CCMR2_Output_OC3M_Values<TIM2::CCMR2_Output, 4, 3, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3PE = TIM2_CCMR2_Output_OC3PE_Values<TIM2::CCMR2_Output, 3, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using OC3FE = TIM2_CCMR2_Output_OC3FE_Values<TIM2::CCMR2_Output, 2, 1, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using CC3S = TIM2_CCMR2_Output_CC3S_Values<TIM2::CCMR2_Output, 0, 2, ReadWriteMode, TIM2CCMR2_OutputBase> ;
    using FieldValues = TIM2_CCMR2_Output_CC3S_Values<TIM2::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4000001C, 32, ReadWriteMode, TIM2CCMR2_OutputBase, T...> ;

  struct TIM2CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4000001C, 32, ReadWriteMode>
  {
    using IC4F = TIM2_CCMR2_Input_IC4F_Values<TIM2::CCMR2_Input, 12, 4, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using IC4PSC = TIM2_CCMR2_Input_IC4PSC_Values<TIM2::CCMR2_Input, 10, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using CC4S = TIM2_CCMR2_Input_CC4S_Values<TIM2::CCMR2_Input, 8, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using IC3F = TIM2_CCMR2_Input_IC3F_Values<TIM2::CCMR2_Input, 4, 4, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using IC3PSC = TIM2_CCMR2_Input_IC3PSC_Values<TIM2::CCMR2_Input, 2, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using CC3S = TIM2_CCMR2_Input_CC3S_Values<TIM2::CCMR2_Input, 0, 2, ReadWriteMode, TIM2CCMR2_InputBase> ;
    using FieldValues = TIM2_CCMR2_Input_CC3S_Values<TIM2::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4000001C, 32, ReadWriteMode, TIM2CCMR2_InputBase, T...> ;

  struct TIM2CCERBase {} ;

  struct CCER : public RegisterBase<0x40000020, 32, ReadWriteMode>
  {
    using CC6P = TIM2_CCER_CC6P_Values<TIM2::CCER, 21, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC6E = TIM2_CCER_CC6E_Values<TIM2::CCER, 20, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC5P = TIM2_CCER_CC5P_Values<TIM2::CCER, 17, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC5E = TIM2_CCER_CC5E_Values<TIM2::CCER, 16, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC4NP = TIM2_CCER_CC4NP_Values<TIM2::CCER, 15, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC4NE = TIM2_CCER_CC4NE_Values<TIM2::CCER, 14, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC4P = TIM2_CCER_CC4P_Values<TIM2::CCER, 13, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC4E = TIM2_CCER_CC4E_Values<TIM2::CCER, 12, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC3NP = TIM2_CCER_CC3NP_Values<TIM2::CCER, 11, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC3NE = TIM2_CCER_CC3NE_Values<TIM2::CCER, 10, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC3P = TIM2_CCER_CC3P_Values<TIM2::CCER, 9, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC3E = TIM2_CCER_CC3E_Values<TIM2::CCER, 8, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC2NP = TIM2_CCER_CC2NP_Values<TIM2::CCER, 7, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC2NE = TIM2_CCER_CC2NE_Values<TIM2::CCER, 6, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC2P = TIM2_CCER_CC2P_Values<TIM2::CCER, 5, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC2E = TIM2_CCER_CC2E_Values<TIM2::CCER, 4, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC1NP = TIM2_CCER_CC1NP_Values<TIM2::CCER, 3, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC1NE = TIM2_CCER_CC1NE_Values<TIM2::CCER, 2, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC1P = TIM2_CCER_CC1P_Values<TIM2::CCER, 1, 1, ReadWriteMode, TIM2CCERBase> ;
    using CC1E = TIM2_CCER_CC1E_Values<TIM2::CCER, 0, 1, ReadWriteMode, TIM2CCERBase> ;
    using FieldValues = TIM2_CCER_CC1E_Values<TIM2::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40000020, 32, ReadWriteMode, TIM2CCERBase, T...> ;

  struct TIM2CNTBase {} ;

  struct CNT : public RegisterBase<0x40000024, 32, ReadWriteMode>
  {
    using UIFCPY = TIM2_CNT_UIFCPY_Values<TIM2::CNT, 31, 1, ReadWriteMode, TIM2CNTBase> ;
    using CNTField = TIM2_CNT_CNT_Values<TIM2::CNT, 0, 16, ReadWriteMode, TIM2CNTBase> ;
    using FieldValues = TIM2_CNT_CNT_Values<TIM2::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000024, 32, ReadWriteMode, TIM2CNTBase, T...> ;

  struct TIM2PSCBase {} ;

  struct PSC : public RegisterBase<0x40000028, 32, ReadWriteMode>
  {
    using PSCField = TIM2_PSC_PSC_Values<TIM2::PSC, 0, 16, ReadWriteMode, TIM2PSCBase> ;
    using FieldValues = TIM2_PSC_PSC_Values<TIM2::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000028, 32, ReadWriteMode, TIM2PSCBase, T...> ;

  struct TIM2ARRBase {} ;

  struct ARR : public RegisterBase<0x4000002C, 32, ReadWriteMode>
  {
    using ARRField = TIM2_ARR_ARR_Values<TIM2::ARR, 0, 16, ReadWriteMode, TIM2ARRBase> ;
    using FieldValues = TIM2_ARR_ARR_Values<TIM2::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000002C, 32, ReadWriteMode, TIM2ARRBase, T...> ;

  struct TIM2RCRBase {} ;

  struct RCR : public RegisterBase<0x40000030, 32, ReadWriteMode>
  {
    using REP = TIM2_RCR_REP_Values<TIM2::RCR, 0, 16, ReadWriteMode, TIM2RCRBase> ;
    using FieldValues = TIM2_RCR_REP_Values<TIM2::RCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40000030, 32, ReadWriteMode, TIM2RCRBase, T...> ;

  struct TIM2CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40000034, 32, ReadWriteMode>
  {
    using CCR1Field = TIM2_CCR1_CCR1_Values<TIM2::CCR1, 0, 16, ReadWriteMode, TIM2CCR1Base> ;
    using FieldValues = TIM2_CCR1_CCR1_Values<TIM2::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40000034, 32, ReadWriteMode, TIM2CCR1Base, T...> ;

  struct TIM2CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40000038, 32, ReadWriteMode>
  {
    using CCR2Field = TIM2_CCR2_CCR2_Values<TIM2::CCR2, 0, 16, ReadWriteMode, TIM2CCR2Base> ;
    using FieldValues = TIM2_CCR2_CCR2_Values<TIM2::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40000038, 32, ReadWriteMode, TIM2CCR2Base, T...> ;

  struct TIM2CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4000003C, 32, ReadWriteMode>
  {
    using CCR3Field = TIM2_CCR3_CCR3_Values<TIM2::CCR3, 0, 16, ReadWriteMode, TIM2CCR3Base> ;
    using FieldValues = TIM2_CCR3_CCR3_Values<TIM2::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4000003C, 32, ReadWriteMode, TIM2CCR3Base, T...> ;

  struct TIM2CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40000040, 32, ReadWriteMode>
  {
    using CCR4Field = TIM2_CCR4_CCR4_Values<TIM2::CCR4, 0, 16, ReadWriteMode, TIM2CCR4Base> ;
    using FieldValues = TIM2_CCR4_CCR4_Values<TIM2::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40000040, 32, ReadWriteMode, TIM2CCR4Base, T...> ;

  struct TIM2BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40000044, 32, ReadWriteMode>
  {
    using BK2ID = TIM2_BDTR_BK2ID_Values<TIM2::BDTR, 29, 1, ReadWriteMode, TIM2BDTRBase> ;
    using BKBID = TIM2_BDTR_BKBID_Values<TIM2::BDTR, 28, 1, ReadWriteMode, TIM2BDTRBase> ;
    using BK2DSRM = TIM2_BDTR_BK2DSRM_Values<TIM2::BDTR, 27, 1, ReadWriteMode, TIM2BDTRBase> ;
    using BKDSRM = TIM2_BDTR_BKDSRM_Values<TIM2::BDTR, 26, 1, ReadWriteMode, TIM2BDTRBase> ;
    using BK2P = TIM2_BDTR_BK2P_Values<TIM2::BDTR, 25, 1, ReadWriteMode, TIM2BDTRBase> ;
    using BK2E = TIM2_BDTR_BK2E_Values<TIM2::BDTR, 24, 1, ReadWriteMode, TIM2BDTRBase> ;
    using BK2F = TIM2_BDTR_BK2F_Values<TIM2::BDTR, 20, 4, ReadWriteMode, TIM2BDTRBase> ;
    using BKF = TIM2_BDTR_BKF_Values<TIM2::BDTR, 16, 4, ReadWriteMode, TIM2BDTRBase> ;
    using MOE = TIM2_BDTR_MOE_Values<TIM2::BDTR, 15, 1, ReadWriteMode, TIM2BDTRBase> ;
    using AOE = TIM2_BDTR_AOE_Values<TIM2::BDTR, 14, 1, ReadWriteMode, TIM2BDTRBase> ;
    using BKP = TIM2_BDTR_BKP_Values<TIM2::BDTR, 13, 1, ReadWriteMode, TIM2BDTRBase> ;
    using BKE = TIM2_BDTR_BKE_Values<TIM2::BDTR, 12, 1, ReadWriteMode, TIM2BDTRBase> ;
    using OSSR = TIM2_BDTR_OSSR_Values<TIM2::BDTR, 11, 1, ReadWriteMode, TIM2BDTRBase> ;
    using OSSI = TIM2_BDTR_OSSI_Values<TIM2::BDTR, 10, 1, ReadWriteMode, TIM2BDTRBase> ;
    using LOCK = TIM2_BDTR_LOCK_Values<TIM2::BDTR, 8, 2, ReadWriteMode, TIM2BDTRBase> ;
    using DTG = TIM2_BDTR_DTG_Values<TIM2::BDTR, 0, 8, ReadWriteMode, TIM2BDTRBase> ;
    using FieldValues = TIM2_BDTR_DTG_Values<TIM2::BDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40000044, 32, ReadWriteMode, TIM2BDTRBase, T...> ;

  struct TIM2CCR5Base {} ;

  struct CCR5 : public RegisterBase<0x40000048, 32, ReadWriteMode>
  {
    using CCR5Field = TIM2_CCR5_CCR5_Values<TIM2::CCR5, 0, 16, ReadWriteMode, TIM2CCR5Base> ;
    using GC5C1 = TIM2_CCR5_GC5C1_Values<TIM2::CCR5, 29, 1, ReadWriteMode, TIM2CCR5Base> ;
    using GC5C2 = TIM2_CCR5_GC5C2_Values<TIM2::CCR5, 30, 1, ReadWriteMode, TIM2CCR5Base> ;
    using GC5C3 = TIM2_CCR5_GC5C3_Values<TIM2::CCR5, 31, 1, ReadWriteMode, TIM2CCR5Base> ;
    using FieldValues = TIM2_CCR5_GC5C3_Values<TIM2::CCR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR5Pack  = Register<0x40000048, 32, ReadWriteMode, TIM2CCR5Base, T...> ;

  struct TIM2CCR6Base {} ;

  struct CCR6 : public RegisterBase<0x4000004C, 32, ReadWriteMode>
  {
    using CCR6Field = TIM2_CCR6_CCR6_Values<TIM2::CCR6, 0, 16, ReadWriteMode, TIM2CCR6Base> ;
    using FieldValues = TIM2_CCR6_CCR6_Values<TIM2::CCR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR6Pack  = Register<0x4000004C, 32, ReadWriteMode, TIM2CCR6Base, T...> ;

  struct TIM2CCMR3_OutputBase {} ;

  struct CCMR3_Output : public RegisterBase<0x40000050, 32, ReadWriteMode>
  {
    using OC6M_bit3 = TIM2_CCMR3_Output_OC6M_bit3_Values<TIM2::CCMR3_Output, 24, 1, ReadWriteMode, TIM2CCMR3_OutputBase> ;
    using OC5M_bit3 = TIM2_CCMR3_Output_OC5M_bit3_Values<TIM2::CCMR3_Output, 16, 3, ReadWriteMode, TIM2CCMR3_OutputBase> ;
    using OC6CE = TIM2_CCMR3_Output_OC6CE_Values<TIM2::CCMR3_Output, 15, 1, ReadWriteMode, TIM2CCMR3_OutputBase> ;
    using OC6M = TIM2_CCMR3_Output_OC6M_Values<TIM2::CCMR3_Output, 12, 3, ReadWriteMode, TIM2CCMR3_OutputBase> ;
    using OC6PE = TIM2_CCMR3_Output_OC6PE_Values<TIM2::CCMR3_Output, 11, 1, ReadWriteMode, TIM2CCMR3_OutputBase> ;
    using OC6FE = TIM2_CCMR3_Output_OC6FE_Values<TIM2::CCMR3_Output, 10, 1, ReadWriteMode, TIM2CCMR3_OutputBase> ;
    using OC5CE = TIM2_CCMR3_Output_OC5CE_Values<TIM2::CCMR3_Output, 7, 1, ReadWriteMode, TIM2CCMR3_OutputBase> ;
    using OC5M = TIM2_CCMR3_Output_OC5M_Values<TIM2::CCMR3_Output, 4, 3, ReadWriteMode, TIM2CCMR3_OutputBase> ;
    using OC5PE = TIM2_CCMR3_Output_OC5PE_Values<TIM2::CCMR3_Output, 3, 1, ReadWriteMode, TIM2CCMR3_OutputBase> ;
    using OC5FE = TIM2_CCMR3_Output_OC5FE_Values<TIM2::CCMR3_Output, 2, 1, ReadWriteMode, TIM2CCMR3_OutputBase> ;
    using FieldValues = TIM2_CCMR3_Output_OC5FE_Values<TIM2::CCMR3_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR3_OutputPack  = Register<0x40000050, 32, ReadWriteMode, TIM2CCMR3_OutputBase, T...> ;

  struct TIM2DTR2Base {} ;

  struct DTR2 : public RegisterBase<0x40000054, 32, ReadWriteMode>
  {
    using DTPE = TIM2_DTR2_DTPE_Values<TIM2::DTR2, 17, 1, ReadWriteMode, TIM2DTR2Base> ;
    using DTAE = TIM2_DTR2_DTAE_Values<TIM2::DTR2, 16, 1, ReadWriteMode, TIM2DTR2Base> ;
    using DTGF = TIM2_DTR2_DTGF_Values<TIM2::DTR2, 0, 8, ReadWriteMode, TIM2DTR2Base> ;
    using FieldValues = TIM2_DTR2_DTGF_Values<TIM2::DTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DTR2Pack  = Register<0x40000054, 32, ReadWriteMode, TIM2DTR2Base, T...> ;

  struct TIM2ECRBase {} ;

  struct ECR : public RegisterBase<0x40000058, 32, ReadWriteMode>
  {
    using IE = TIM2_ECR_IE_Values<TIM2::ECR, 0, 1, ReadWriteMode, TIM2ECRBase> ;
    using IDIR = TIM2_ECR_IDIR_Values<TIM2::ECR, 1, 2, ReadWriteMode, TIM2ECRBase> ;
    using IBLK = TIM2_ECR_IBLK_Values<TIM2::ECR, 3, 2, ReadWriteMode, TIM2ECRBase> ;
    using FIDX = TIM2_ECR_FIDX_Values<TIM2::ECR, 5, 1, ReadWriteMode, TIM2ECRBase> ;
    using IPOS = TIM2_ECR_IPOS_Values<TIM2::ECR, 6, 2, ReadWriteMode, TIM2ECRBase> ;
    using PW = TIM2_ECR_PW_Values<TIM2::ECR, 16, 8, ReadWriteMode, TIM2ECRBase> ;
    using PWPRSC = TIM2_ECR_PWPRSC_Values<TIM2::ECR, 24, 3, ReadWriteMode, TIM2ECRBase> ;
    using FieldValues = TIM2_ECR_PWPRSC_Values<TIM2::ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECRPack  = Register<0x40000058, 32, ReadWriteMode, TIM2ECRBase, T...> ;

  struct TIM2TISELBase {} ;

  struct TISEL : public RegisterBase<0x4000005C, 32, ReadWriteMode>
  {
    using TI1SEL = TIM2_TISEL_TI1SEL_Values<TIM2::TISEL, 0, 4, ReadWriteMode, TIM2TISELBase> ;
    using TI2SEL = TIM2_TISEL_TI2SEL_Values<TIM2::TISEL, 8, 4, ReadWriteMode, TIM2TISELBase> ;
    using TI3SEL = TIM2_TISEL_TI3SEL_Values<TIM2::TISEL, 16, 4, ReadWriteMode, TIM2TISELBase> ;
    using TI4SEL = TIM2_TISEL_TI4SEL_Values<TIM2::TISEL, 24, 4, ReadWriteMode, TIM2TISELBase> ;
    using FieldValues = TIM2_TISEL_TI4SEL_Values<TIM2::TISEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TISELPack  = Register<0x4000005C, 32, ReadWriteMode, TIM2TISELBase, T...> ;

  struct TIM2AF1Base {} ;

  struct AF1 : public RegisterBase<0x40000060, 32, ReadWriteMode>
  {
    using ETRSEL = TIM2_AF1_ETRSEL_Values<TIM2::AF1, 14, 4, ReadWriteMode, TIM2AF1Base> ;
    using BKCMP4P = TIM2_AF1_BKCMP4P_Values<TIM2::AF1, 13, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKCMP3P = TIM2_AF1_BKCMP3P_Values<TIM2::AF1, 12, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKCMP2P = TIM2_AF1_BKCMP2P_Values<TIM2::AF1, 11, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKCMP1P = TIM2_AF1_BKCMP1P_Values<TIM2::AF1, 10, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKINP = TIM2_AF1_BKINP_Values<TIM2::AF1, 9, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKCMP7E = TIM2_AF1_BKCMP7E_Values<TIM2::AF1, 7, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKCMP6E = TIM2_AF1_BKCMP6E_Values<TIM2::AF1, 6, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKCMP5E = TIM2_AF1_BKCMP5E_Values<TIM2::AF1, 5, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKCMP4E = TIM2_AF1_BKCMP4E_Values<TIM2::AF1, 4, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKCMP3E = TIM2_AF1_BKCMP3E_Values<TIM2::AF1, 3, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKCMP2E = TIM2_AF1_BKCMP2E_Values<TIM2::AF1, 2, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKCMP1E = TIM2_AF1_BKCMP1E_Values<TIM2::AF1, 1, 1, ReadWriteMode, TIM2AF1Base> ;
    using BKINE = TIM2_AF1_BKINE_Values<TIM2::AF1, 0, 1, ReadWriteMode, TIM2AF1Base> ;
    using FieldValues = TIM2_AF1_BKINE_Values<TIM2::AF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF1Pack  = Register<0x40000060, 32, ReadWriteMode, TIM2AF1Base, T...> ;

  struct TIM2AF2Base {} ;

  struct AF2 : public RegisterBase<0x40000064, 32, ReadWriteMode>
  {
    using OCRSEL = TIM2_AF2_OCRSEL_Values<TIM2::AF2, 16, 3, ReadWriteMode, TIM2AF2Base> ;
    using BK2CMP4P = TIM2_AF2_BK2CMP4P_Values<TIM2::AF2, 13, 1, ReadWriteMode, TIM2AF2Base> ;
    using BK2CMP3P = TIM2_AF2_BK2CMP3P_Values<TIM2::AF2, 12, 1, ReadWriteMode, TIM2AF2Base> ;
    using BK2CMP2P = TIM2_AF2_BK2CMP2P_Values<TIM2::AF2, 11, 1, ReadWriteMode, TIM2AF2Base> ;
    using BK2CMP1P = TIM2_AF2_BK2CMP1P_Values<TIM2::AF2, 10, 1, ReadWriteMode, TIM2AF2Base> ;
    using BK2INP = TIM2_AF2_BK2INP_Values<TIM2::AF2, 9, 1, ReadWriteMode, TIM2AF2Base> ;
    using BK2CMP7E = TIM2_AF2_BK2CMP7E_Values<TIM2::AF2, 7, 1, ReadWriteMode, TIM2AF2Base> ;
    using BK2CMP6E = TIM2_AF2_BK2CMP6E_Values<TIM2::AF2, 6, 1, ReadWriteMode, TIM2AF2Base> ;
    using BK2CMP5E = TIM2_AF2_BK2CMP5E_Values<TIM2::AF2, 5, 1, ReadWriteMode, TIM2AF2Base> ;
    using BK2CMP4E = TIM2_AF2_BK2CMP4E_Values<TIM2::AF2, 4, 1, ReadWriteMode, TIM2AF2Base> ;
    using BK2CMP3E = TIM2_AF2_BK2CMP3E_Values<TIM2::AF2, 3, 1, ReadWriteMode, TIM2AF2Base> ;
    using BK2CMP2E = TIM2_AF2_BK2CMP2E_Values<TIM2::AF2, 2, 1, ReadWriteMode, TIM2AF2Base> ;
    using BK2CMP1E = TIM2_AF2_BK2CMP1E_Values<TIM2::AF2, 1, 1, ReadWriteMode, TIM2AF2Base> ;
    using BKINE = TIM2_AF2_BKINE_Values<TIM2::AF2, 0, 1, ReadWriteMode, TIM2AF2Base> ;
    using FieldValues = TIM2_AF2_BKINE_Values<TIM2::AF2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF2Pack  = Register<0x40000064, 32, ReadWriteMode, TIM2AF2Base, T...> ;

  struct TIM2DCRBase {} ;

  struct DCR : public RegisterBase<0x400003DC, 32, ReadWriteMode>
  {
    using DBL = TIM2_DCR_DBL_Values<TIM2::DCR, 8, 5, ReadWriteMode, TIM2DCRBase> ;
    using DBA = TIM2_DCR_DBA_Values<TIM2::DCR, 0, 5, ReadWriteMode, TIM2DCRBase> ;
    using FieldValues = TIM2_DCR_DBA_Values<TIM2::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x400003DC, 32, ReadWriteMode, TIM2DCRBase, T...> ;

  struct TIM2DMARBase {} ;

  struct DMAR : public RegisterBase<0x400003E0, 32, ReadWriteMode>
  {
    using DMAB = TIM2_DMAR_DMAB_Values<TIM2::DMAR, 0, 32, ReadWriteMode, TIM2DMARBase> ;
    using FieldValues = TIM2_DMAR_DMAB_Values<TIM2::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x400003E0, 32, ReadWriteMode, TIM2DMARBase, T...> ;

} ;

