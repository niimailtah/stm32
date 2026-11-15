/*******************************************************************************
* Filename      : tim4registers.hpp
*
* Details       : Advanced-timers. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "tim4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM4
{
  struct TIM4CR1Base {} ;

  struct CR1 : public RegisterBase<0x40000800, 32, ReadWriteMode>
  {
    using DITHEN = TIM4_CR1_DITHEN_Values<TIM4::CR1, 12, 1, ReadWriteMode, TIM4CR1Base> ;
    using UIFREMAP = TIM4_CR1_UIFREMAP_Values<TIM4::CR1, 11, 1, ReadWriteMode, TIM4CR1Base> ;
    using CKD = TIM4_CR1_CKD_Values<TIM4::CR1, 8, 2, ReadWriteMode, TIM4CR1Base> ;
    using ARPE = TIM4_CR1_ARPE_Values<TIM4::CR1, 7, 1, ReadWriteMode, TIM4CR1Base> ;
    using CMS = TIM4_CR1_CMS_Values<TIM4::CR1, 5, 2, ReadWriteMode, TIM4CR1Base> ;
    using DIR = TIM4_CR1_DIR_Values<TIM4::CR1, 4, 1, ReadWriteMode, TIM4CR1Base> ;
    using OPM = TIM4_CR1_OPM_Values<TIM4::CR1, 3, 1, ReadWriteMode, TIM4CR1Base> ;
    using URS = TIM4_CR1_URS_Values<TIM4::CR1, 2, 1, ReadWriteMode, TIM4CR1Base> ;
    using UDIS = TIM4_CR1_UDIS_Values<TIM4::CR1, 1, 1, ReadWriteMode, TIM4CR1Base> ;
    using CEN = TIM4_CR1_CEN_Values<TIM4::CR1, 0, 1, ReadWriteMode, TIM4CR1Base> ;
    using FieldValues = TIM4_CR1_CEN_Values<TIM4::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40000800, 32, ReadWriteMode, TIM4CR1Base, T...> ;

  struct TIM4CR2Base {} ;

  struct CR2 : public RegisterBase<0x40000804, 32, ReadWriteMode>
  {
    using MMS_3 = TIM4_CR2_MMS_3_Values<TIM4::CR2, 25, 1, ReadWriteMode, TIM4CR2Base> ;
    using MMS2 = TIM4_CR2_MMS2_Values<TIM4::CR2, 20, 4, ReadWriteMode, TIM4CR2Base> ;
    using OIS6 = TIM4_CR2_OIS6_Values<TIM4::CR2, 18, 1, ReadWriteMode, TIM4CR2Base> ;
    using OIS5 = TIM4_CR2_OIS5_Values<TIM4::CR2, 16, 1, ReadWriteMode, TIM4CR2Base> ;
    using OIS4N = TIM4_CR2_OIS4N_Values<TIM4::CR2, 15, 1, ReadWriteMode, TIM4CR2Base> ;
    using OIS4 = TIM4_CR2_OIS4_Values<TIM4::CR2, 14, 1, ReadWriteMode, TIM4CR2Base> ;
    using OIS3N = TIM4_CR2_OIS3N_Values<TIM4::CR2, 13, 1, ReadWriteMode, TIM4CR2Base> ;
    using OIS3 = TIM4_CR2_OIS3_Values<TIM4::CR2, 12, 1, ReadWriteMode, TIM4CR2Base> ;
    using OIS2N = TIM4_CR2_OIS2N_Values<TIM4::CR2, 11, 1, ReadWriteMode, TIM4CR2Base> ;
    using OIS2 = TIM4_CR2_OIS2_Values<TIM4::CR2, 10, 1, ReadWriteMode, TIM4CR2Base> ;
    using OIS1N = TIM4_CR2_OIS1N_Values<TIM4::CR2, 9, 1, ReadWriteMode, TIM4CR2Base> ;
    using OIS1 = TIM4_CR2_OIS1_Values<TIM4::CR2, 8, 1, ReadWriteMode, TIM4CR2Base> ;
    using TI1S = TIM4_CR2_TI1S_Values<TIM4::CR2, 7, 1, ReadWriteMode, TIM4CR2Base> ;
    using MMS = TIM4_CR2_MMS_Values<TIM4::CR2, 4, 3, ReadWriteMode, TIM4CR2Base> ;
    using CCDS = TIM4_CR2_CCDS_Values<TIM4::CR2, 3, 1, ReadWriteMode, TIM4CR2Base> ;
    using CCUS = TIM4_CR2_CCUS_Values<TIM4::CR2, 2, 1, ReadWriteMode, TIM4CR2Base> ;
    using CCPC = TIM4_CR2_CCPC_Values<TIM4::CR2, 0, 1, ReadWriteMode, TIM4CR2Base> ;
    using FieldValues = TIM4_CR2_CCPC_Values<TIM4::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40000804, 32, ReadWriteMode, TIM4CR2Base, T...> ;

  struct TIM4SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40000808, 32, ReadWriteMode>
  {
    using SMSPS = TIM4_SMCR_SMSPS_Values<TIM4::SMCR, 25, 1, ReadWriteMode, TIM4SMCRBase> ;
    using SMSPE = TIM4_SMCR_SMSPE_Values<TIM4::SMCR, 24, 1, ReadWriteMode, TIM4SMCRBase> ;
    using TS_4_3 = TIM4_SMCR_TS_4_3_Values<TIM4::SMCR, 20, 2, ReadWriteMode, TIM4SMCRBase> ;
    using SMS_3 = TIM4_SMCR_SMS_3_Values<TIM4::SMCR, 16, 1, ReadWriteMode, TIM4SMCRBase> ;
    using ETP = TIM4_SMCR_ETP_Values<TIM4::SMCR, 15, 1, ReadWriteMode, TIM4SMCRBase> ;
    using ECE = TIM4_SMCR_ECE_Values<TIM4::SMCR, 14, 1, ReadWriteMode, TIM4SMCRBase> ;
    using ETPS = TIM4_SMCR_ETPS_Values<TIM4::SMCR, 12, 2, ReadWriteMode, TIM4SMCRBase> ;
    using ETF = TIM4_SMCR_ETF_Values<TIM4::SMCR, 8, 4, ReadWriteMode, TIM4SMCRBase> ;
    using MSM = TIM4_SMCR_MSM_Values<TIM4::SMCR, 7, 1, ReadWriteMode, TIM4SMCRBase> ;
    using TS = TIM4_SMCR_TS_Values<TIM4::SMCR, 4, 3, ReadWriteMode, TIM4SMCRBase> ;
    using OCCS = TIM4_SMCR_OCCS_Values<TIM4::SMCR, 3, 1, ReadWriteMode, TIM4SMCRBase> ;
    using SMS = TIM4_SMCR_SMS_Values<TIM4::SMCR, 0, 3, ReadWriteMode, TIM4SMCRBase> ;
    using FieldValues = TIM4_SMCR_SMS_Values<TIM4::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40000808, 32, ReadWriteMode, TIM4SMCRBase, T...> ;

  struct TIM4DIERBase {} ;

  struct DIER : public RegisterBase<0x4000080C, 32, ReadWriteMode>
  {
    using TERRIE = TIM4_DIER_TERRIE_Values<TIM4::DIER, 23, 1, ReadWriteMode, TIM4DIERBase> ;
    using IERRIE = TIM4_DIER_IERRIE_Values<TIM4::DIER, 22, 1, ReadWriteMode, TIM4DIERBase> ;
    using DIRIE = TIM4_DIER_DIRIE_Values<TIM4::DIER, 21, 1, ReadWriteMode, TIM4DIERBase> ;
    using IDXIE = TIM4_DIER_IDXIE_Values<TIM4::DIER, 20, 1, ReadWriteMode, TIM4DIERBase> ;
    using TDE = TIM4_DIER_TDE_Values<TIM4::DIER, 14, 1, ReadWriteMode, TIM4DIERBase> ;
    using COMDE = TIM4_DIER_COMDE_Values<TIM4::DIER, 13, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC4DE = TIM4_DIER_CC4DE_Values<TIM4::DIER, 12, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC3DE = TIM4_DIER_CC3DE_Values<TIM4::DIER, 11, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC2DE = TIM4_DIER_CC2DE_Values<TIM4::DIER, 10, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC1DE = TIM4_DIER_CC1DE_Values<TIM4::DIER, 9, 1, ReadWriteMode, TIM4DIERBase> ;
    using UDE = TIM4_DIER_UDE_Values<TIM4::DIER, 8, 1, ReadWriteMode, TIM4DIERBase> ;
    using TIE = TIM4_DIER_TIE_Values<TIM4::DIER, 6, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC4IE = TIM4_DIER_CC4IE_Values<TIM4::DIER, 4, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC3IE = TIM4_DIER_CC3IE_Values<TIM4::DIER, 3, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC2IE = TIM4_DIER_CC2IE_Values<TIM4::DIER, 2, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC1IE = TIM4_DIER_CC1IE_Values<TIM4::DIER, 1, 1, ReadWriteMode, TIM4DIERBase> ;
    using UIE = TIM4_DIER_UIE_Values<TIM4::DIER, 0, 1, ReadWriteMode, TIM4DIERBase> ;
    using BIE = TIM4_DIER_BIE_Values<TIM4::DIER, 7, 1, ReadWriteMode, TIM4DIERBase> ;
    using COMIE = TIM4_DIER_COMIE_Values<TIM4::DIER, 5, 1, ReadWriteMode, TIM4DIERBase> ;
    using FieldValues = TIM4_DIER_COMIE_Values<TIM4::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000080C, 32, ReadWriteMode, TIM4DIERBase, T...> ;

  struct TIM4SRBase {} ;

  struct SR : public RegisterBase<0x40000810, 32, ReadWriteMode>
  {
    using TERRF = TIM4_SR_TERRF_Values<TIM4::SR, 23, 1, ReadWriteMode, TIM4SRBase> ;
    using IERRF = TIM4_SR_IERRF_Values<TIM4::SR, 22, 1, ReadWriteMode, TIM4SRBase> ;
    using DIRF = TIM4_SR_DIRF_Values<TIM4::SR, 21, 1, ReadWriteMode, TIM4SRBase> ;
    using IDXF = TIM4_SR_IDXF_Values<TIM4::SR, 20, 1, ReadWriteMode, TIM4SRBase> ;
    using CC6IF = TIM4_SR_CC6IF_Values<TIM4::SR, 17, 1, ReadWriteMode, TIM4SRBase> ;
    using CC5IF = TIM4_SR_CC5IF_Values<TIM4::SR, 16, 1, ReadWriteMode, TIM4SRBase> ;
    using SBIF = TIM4_SR_SBIF_Values<TIM4::SR, 13, 1, ReadWriteMode, TIM4SRBase> ;
    using CC4OF = TIM4_SR_CC4OF_Values<TIM4::SR, 12, 1, ReadWriteMode, TIM4SRBase> ;
    using CC3OF = TIM4_SR_CC3OF_Values<TIM4::SR, 11, 1, ReadWriteMode, TIM4SRBase> ;
    using CC2OF = TIM4_SR_CC2OF_Values<TIM4::SR, 10, 1, ReadWriteMode, TIM4SRBase> ;
    using CC1OF = TIM4_SR_CC1OF_Values<TIM4::SR, 9, 1, ReadWriteMode, TIM4SRBase> ;
    using B2IF = TIM4_SR_B2IF_Values<TIM4::SR, 8, 1, ReadWriteMode, TIM4SRBase> ;
    using BIF = TIM4_SR_BIF_Values<TIM4::SR, 7, 1, ReadWriteMode, TIM4SRBase> ;
    using TIF = TIM4_SR_TIF_Values<TIM4::SR, 6, 1, ReadWriteMode, TIM4SRBase> ;
    using COMIF = TIM4_SR_COMIF_Values<TIM4::SR, 5, 1, ReadWriteMode, TIM4SRBase> ;
    using CC4IF = TIM4_SR_CC4IF_Values<TIM4::SR, 4, 1, ReadWriteMode, TIM4SRBase> ;
    using CC3IF = TIM4_SR_CC3IF_Values<TIM4::SR, 3, 1, ReadWriteMode, TIM4SRBase> ;
    using CC2IF = TIM4_SR_CC2IF_Values<TIM4::SR, 2, 1, ReadWriteMode, TIM4SRBase> ;
    using CC1IF = TIM4_SR_CC1IF_Values<TIM4::SR, 1, 1, ReadWriteMode, TIM4SRBase> ;
    using UIF = TIM4_SR_UIF_Values<TIM4::SR, 0, 1, ReadWriteMode, TIM4SRBase> ;
    using FieldValues = TIM4_SR_UIF_Values<TIM4::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40000810, 32, ReadWriteMode, TIM4SRBase, T...> ;

  struct TIM4EGRBase {} ;

  struct EGR : public RegisterBase<0x40000814, 32, WriteMode>
  {
    using B2G = TIM4_EGR_B2G_Values<TIM4::EGR, 8, 1, WriteMode, TIM4EGRBase> ;
    using BG = TIM4_EGR_BG_Values<TIM4::EGR, 7, 1, WriteMode, TIM4EGRBase> ;
    using TG = TIM4_EGR_TG_Values<TIM4::EGR, 6, 1, WriteMode, TIM4EGRBase> ;
    using COMG = TIM4_EGR_COMG_Values<TIM4::EGR, 5, 1, WriteMode, TIM4EGRBase> ;
    using CC4G = TIM4_EGR_CC4G_Values<TIM4::EGR, 4, 1, WriteMode, TIM4EGRBase> ;
    using CC3G = TIM4_EGR_CC3G_Values<TIM4::EGR, 3, 1, WriteMode, TIM4EGRBase> ;
    using CC2G = TIM4_EGR_CC2G_Values<TIM4::EGR, 2, 1, WriteMode, TIM4EGRBase> ;
    using CC1G = TIM4_EGR_CC1G_Values<TIM4::EGR, 1, 1, WriteMode, TIM4EGRBase> ;
    using UG = TIM4_EGR_UG_Values<TIM4::EGR, 0, 1, WriteMode, TIM4EGRBase> ;
    using FieldValues = TIM4_EGR_UG_Values<TIM4::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40000814, 32, WriteMode, TIM4EGRBase, T...> ;

  struct TIM4CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40000818, 32, ReadWriteMode>
  {
    using OC2M_3 = TIM4_CCMR1_Output_OC2M_3_Values<TIM4::CCMR1_Output, 24, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC1M_3 = TIM4_CCMR1_Output_OC1M_3_Values<TIM4::CCMR1_Output, 16, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC2CE = TIM4_CCMR1_Output_OC2CE_Values<TIM4::CCMR1_Output, 15, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC2M = TIM4_CCMR1_Output_OC2M_Values<TIM4::CCMR1_Output, 12, 3, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC2PE = TIM4_CCMR1_Output_OC2PE_Values<TIM4::CCMR1_Output, 11, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC2FE = TIM4_CCMR1_Output_OC2FE_Values<TIM4::CCMR1_Output, 10, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using CC2S = TIM4_CCMR1_Output_CC2S_Values<TIM4::CCMR1_Output, 8, 2, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC1CE = TIM4_CCMR1_Output_OC1CE_Values<TIM4::CCMR1_Output, 7, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC1M = TIM4_CCMR1_Output_OC1M_Values<TIM4::CCMR1_Output, 4, 3, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC1PE = TIM4_CCMR1_Output_OC1PE_Values<TIM4::CCMR1_Output, 3, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC1FE = TIM4_CCMR1_Output_OC1FE_Values<TIM4::CCMR1_Output, 2, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using CC1S = TIM4_CCMR1_Output_CC1S_Values<TIM4::CCMR1_Output, 0, 2, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using FieldValues = TIM4_CCMR1_Output_CC1S_Values<TIM4::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40000818, 32, ReadWriteMode, TIM4CCMR1_OutputBase, T...> ;

  struct TIM4CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40000818, 32, ReadWriteMode>
  {
    using IC2F = TIM4_CCMR1_Input_IC2F_Values<TIM4::CCMR1_Input, 12, 4, ReadWriteMode, TIM4CCMR1_InputBase> ;
    using IC2PSC = TIM4_CCMR1_Input_IC2PSC_Values<TIM4::CCMR1_Input, 10, 2, ReadWriteMode, TIM4CCMR1_InputBase> ;
    using CC2S = TIM4_CCMR1_Input_CC2S_Values<TIM4::CCMR1_Input, 8, 2, ReadWriteMode, TIM4CCMR1_InputBase> ;
    using IC1F = TIM4_CCMR1_Input_IC1F_Values<TIM4::CCMR1_Input, 4, 4, ReadWriteMode, TIM4CCMR1_InputBase> ;
    using ICPCS = TIM4_CCMR1_Input_ICPCS_Values<TIM4::CCMR1_Input, 2, 2, ReadWriteMode, TIM4CCMR1_InputBase> ;
    using CC1S = TIM4_CCMR1_Input_CC1S_Values<TIM4::CCMR1_Input, 0, 2, ReadWriteMode, TIM4CCMR1_InputBase> ;
    using FieldValues = TIM4_CCMR1_Input_CC1S_Values<TIM4::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40000818, 32, ReadWriteMode, TIM4CCMR1_InputBase, T...> ;

  struct TIM4CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4000081C, 32, ReadWriteMode>
  {
    using OC4M_3 = TIM4_CCMR2_Output_OC4M_3_Values<TIM4::CCMR2_Output, 24, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC3M_3 = TIM4_CCMR2_Output_OC3M_3_Values<TIM4::CCMR2_Output, 16, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC4CE = TIM4_CCMR2_Output_OC4CE_Values<TIM4::CCMR2_Output, 15, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC4M = TIM4_CCMR2_Output_OC4M_Values<TIM4::CCMR2_Output, 12, 3, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC4PE = TIM4_CCMR2_Output_OC4PE_Values<TIM4::CCMR2_Output, 11, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC4FE = TIM4_CCMR2_Output_OC4FE_Values<TIM4::CCMR2_Output, 10, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using CC4S = TIM4_CCMR2_Output_CC4S_Values<TIM4::CCMR2_Output, 8, 2, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC3CE = TIM4_CCMR2_Output_OC3CE_Values<TIM4::CCMR2_Output, 7, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC3M = TIM4_CCMR2_Output_OC3M_Values<TIM4::CCMR2_Output, 4, 3, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC3PE = TIM4_CCMR2_Output_OC3PE_Values<TIM4::CCMR2_Output, 3, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC3FE = TIM4_CCMR2_Output_OC3FE_Values<TIM4::CCMR2_Output, 2, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using CC3S = TIM4_CCMR2_Output_CC3S_Values<TIM4::CCMR2_Output, 0, 2, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using FieldValues = TIM4_CCMR2_Output_CC3S_Values<TIM4::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4000081C, 32, ReadWriteMode, TIM4CCMR2_OutputBase, T...> ;

  struct TIM4CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4000081C, 32, ReadWriteMode>
  {
    using IC4F = TIM4_CCMR2_Input_IC4F_Values<TIM4::CCMR2_Input, 12, 4, ReadWriteMode, TIM4CCMR2_InputBase> ;
    using IC4PSC = TIM4_CCMR2_Input_IC4PSC_Values<TIM4::CCMR2_Input, 10, 2, ReadWriteMode, TIM4CCMR2_InputBase> ;
    using CC4S = TIM4_CCMR2_Input_CC4S_Values<TIM4::CCMR2_Input, 8, 2, ReadWriteMode, TIM4CCMR2_InputBase> ;
    using IC3F = TIM4_CCMR2_Input_IC3F_Values<TIM4::CCMR2_Input, 4, 4, ReadWriteMode, TIM4CCMR2_InputBase> ;
    using IC3PSC = TIM4_CCMR2_Input_IC3PSC_Values<TIM4::CCMR2_Input, 2, 2, ReadWriteMode, TIM4CCMR2_InputBase> ;
    using CC3S = TIM4_CCMR2_Input_CC3S_Values<TIM4::CCMR2_Input, 0, 2, ReadWriteMode, TIM4CCMR2_InputBase> ;
    using FieldValues = TIM4_CCMR2_Input_CC3S_Values<TIM4::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4000081C, 32, ReadWriteMode, TIM4CCMR2_InputBase, T...> ;

  struct TIM4CCERBase {} ;

  struct CCER : public RegisterBase<0x40000820, 32, ReadWriteMode>
  {
    using CC6P = TIM4_CCER_CC6P_Values<TIM4::CCER, 21, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC6E = TIM4_CCER_CC6E_Values<TIM4::CCER, 20, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC5P = TIM4_CCER_CC5P_Values<TIM4::CCER, 17, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC5E = TIM4_CCER_CC5E_Values<TIM4::CCER, 16, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC4NP = TIM4_CCER_CC4NP_Values<TIM4::CCER, 15, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC4NE = TIM4_CCER_CC4NE_Values<TIM4::CCER, 14, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC4P = TIM4_CCER_CC4P_Values<TIM4::CCER, 13, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC4E = TIM4_CCER_CC4E_Values<TIM4::CCER, 12, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC3NP = TIM4_CCER_CC3NP_Values<TIM4::CCER, 11, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC3NE = TIM4_CCER_CC3NE_Values<TIM4::CCER, 10, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC3P = TIM4_CCER_CC3P_Values<TIM4::CCER, 9, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC3E = TIM4_CCER_CC3E_Values<TIM4::CCER, 8, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC2NP = TIM4_CCER_CC2NP_Values<TIM4::CCER, 7, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC2NE = TIM4_CCER_CC2NE_Values<TIM4::CCER, 6, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC2P = TIM4_CCER_CC2P_Values<TIM4::CCER, 5, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC2E = TIM4_CCER_CC2E_Values<TIM4::CCER, 4, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC1NP = TIM4_CCER_CC1NP_Values<TIM4::CCER, 3, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC1NE = TIM4_CCER_CC1NE_Values<TIM4::CCER, 2, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC1P = TIM4_CCER_CC1P_Values<TIM4::CCER, 1, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC1E = TIM4_CCER_CC1E_Values<TIM4::CCER, 0, 1, ReadWriteMode, TIM4CCERBase> ;
    using FieldValues = TIM4_CCER_CC1E_Values<TIM4::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40000820, 32, ReadWriteMode, TIM4CCERBase, T...> ;

  struct TIM4CNTBase {} ;

  struct CNT : public RegisterBase<0x40000824, 32, ReadWriteMode>
  {
    using UIFCPY = TIM4_CNT_UIFCPY_Values<TIM4::CNT, 31, 1, ReadWriteMode, TIM4CNTBase> ;
    using CNTField = TIM4_CNT_CNT_Values<TIM4::CNT, 0, 16, ReadWriteMode, TIM4CNTBase> ;
    using FieldValues = TIM4_CNT_CNT_Values<TIM4::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000824, 32, ReadWriteMode, TIM4CNTBase, T...> ;

  struct TIM4PSCBase {} ;

  struct PSC : public RegisterBase<0x40000828, 32, ReadWriteMode>
  {
    using PSCField = TIM4_PSC_PSC_Values<TIM4::PSC, 0, 16, ReadWriteMode, TIM4PSCBase> ;
    using FieldValues = TIM4_PSC_PSC_Values<TIM4::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000828, 32, ReadWriteMode, TIM4PSCBase, T...> ;

  struct TIM4ARRBase {} ;

  struct ARR : public RegisterBase<0x4000082C, 32, ReadWriteMode>
  {
    using ARRField = TIM4_ARR_ARR_Values<TIM4::ARR, 0, 16, ReadWriteMode, TIM4ARRBase> ;
    using FieldValues = TIM4_ARR_ARR_Values<TIM4::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000082C, 32, ReadWriteMode, TIM4ARRBase, T...> ;

  struct TIM4RCRBase {} ;

  struct RCR : public RegisterBase<0x40000830, 32, ReadWriteMode>
  {
    using REP = TIM4_RCR_REP_Values<TIM4::RCR, 0, 16, ReadWriteMode, TIM4RCRBase> ;
    using FieldValues = TIM4_RCR_REP_Values<TIM4::RCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40000830, 32, ReadWriteMode, TIM4RCRBase, T...> ;

  struct TIM4CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40000834, 32, ReadWriteMode>
  {
    using CCR1Field = TIM4_CCR1_CCR1_Values<TIM4::CCR1, 0, 16, ReadWriteMode, TIM4CCR1Base> ;
    using FieldValues = TIM4_CCR1_CCR1_Values<TIM4::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40000834, 32, ReadWriteMode, TIM4CCR1Base, T...> ;

  struct TIM4CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40000838, 32, ReadWriteMode>
  {
    using CCR2Field = TIM4_CCR2_CCR2_Values<TIM4::CCR2, 0, 16, ReadWriteMode, TIM4CCR2Base> ;
    using FieldValues = TIM4_CCR2_CCR2_Values<TIM4::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40000838, 32, ReadWriteMode, TIM4CCR2Base, T...> ;

  struct TIM4CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4000083C, 32, ReadWriteMode>
  {
    using CCR3Field = TIM4_CCR3_CCR3_Values<TIM4::CCR3, 0, 16, ReadWriteMode, TIM4CCR3Base> ;
    using FieldValues = TIM4_CCR3_CCR3_Values<TIM4::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4000083C, 32, ReadWriteMode, TIM4CCR3Base, T...> ;

  struct TIM4CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40000840, 32, ReadWriteMode>
  {
    using CCR4Field = TIM4_CCR4_CCR4_Values<TIM4::CCR4, 0, 16, ReadWriteMode, TIM4CCR4Base> ;
    using FieldValues = TIM4_CCR4_CCR4_Values<TIM4::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40000840, 32, ReadWriteMode, TIM4CCR4Base, T...> ;

  struct TIM4BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40000844, 32, ReadWriteMode>
  {
    using BK2ID = TIM4_BDTR_BK2ID_Values<TIM4::BDTR, 29, 1, ReadWriteMode, TIM4BDTRBase> ;
    using BKBID = TIM4_BDTR_BKBID_Values<TIM4::BDTR, 28, 1, ReadWriteMode, TIM4BDTRBase> ;
    using BK2DSRM = TIM4_BDTR_BK2DSRM_Values<TIM4::BDTR, 27, 1, ReadWriteMode, TIM4BDTRBase> ;
    using BKDSRM = TIM4_BDTR_BKDSRM_Values<TIM4::BDTR, 26, 1, ReadWriteMode, TIM4BDTRBase> ;
    using BK2P = TIM4_BDTR_BK2P_Values<TIM4::BDTR, 25, 1, ReadWriteMode, TIM4BDTRBase> ;
    using BK2E = TIM4_BDTR_BK2E_Values<TIM4::BDTR, 24, 1, ReadWriteMode, TIM4BDTRBase> ;
    using BK2F = TIM4_BDTR_BK2F_Values<TIM4::BDTR, 20, 4, ReadWriteMode, TIM4BDTRBase> ;
    using BKF = TIM4_BDTR_BKF_Values<TIM4::BDTR, 16, 4, ReadWriteMode, TIM4BDTRBase> ;
    using MOE = TIM4_BDTR_MOE_Values<TIM4::BDTR, 15, 1, ReadWriteMode, TIM4BDTRBase> ;
    using AOE = TIM4_BDTR_AOE_Values<TIM4::BDTR, 14, 1, ReadWriteMode, TIM4BDTRBase> ;
    using BKP = TIM4_BDTR_BKP_Values<TIM4::BDTR, 13, 1, ReadWriteMode, TIM4BDTRBase> ;
    using BKE = TIM4_BDTR_BKE_Values<TIM4::BDTR, 12, 1, ReadWriteMode, TIM4BDTRBase> ;
    using OSSR = TIM4_BDTR_OSSR_Values<TIM4::BDTR, 11, 1, ReadWriteMode, TIM4BDTRBase> ;
    using OSSI = TIM4_BDTR_OSSI_Values<TIM4::BDTR, 10, 1, ReadWriteMode, TIM4BDTRBase> ;
    using LOCK = TIM4_BDTR_LOCK_Values<TIM4::BDTR, 8, 2, ReadWriteMode, TIM4BDTRBase> ;
    using DTG = TIM4_BDTR_DTG_Values<TIM4::BDTR, 0, 8, ReadWriteMode, TIM4BDTRBase> ;
    using FieldValues = TIM4_BDTR_DTG_Values<TIM4::BDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40000844, 32, ReadWriteMode, TIM4BDTRBase, T...> ;

  struct TIM4CCR5Base {} ;

  struct CCR5 : public RegisterBase<0x40000848, 32, ReadWriteMode>
  {
    using CCR5Field = TIM4_CCR5_CCR5_Values<TIM4::CCR5, 0, 16, ReadWriteMode, TIM4CCR5Base> ;
    using GC5C1 = TIM4_CCR5_GC5C1_Values<TIM4::CCR5, 29, 1, ReadWriteMode, TIM4CCR5Base> ;
    using GC5C2 = TIM4_CCR5_GC5C2_Values<TIM4::CCR5, 30, 1, ReadWriteMode, TIM4CCR5Base> ;
    using GC5C3 = TIM4_CCR5_GC5C3_Values<TIM4::CCR5, 31, 1, ReadWriteMode, TIM4CCR5Base> ;
    using FieldValues = TIM4_CCR5_GC5C3_Values<TIM4::CCR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR5Pack  = Register<0x40000848, 32, ReadWriteMode, TIM4CCR5Base, T...> ;

  struct TIM4CCR6Base {} ;

  struct CCR6 : public RegisterBase<0x4000084C, 32, ReadWriteMode>
  {
    using CCR6Field = TIM4_CCR6_CCR6_Values<TIM4::CCR6, 0, 16, ReadWriteMode, TIM4CCR6Base> ;
    using FieldValues = TIM4_CCR6_CCR6_Values<TIM4::CCR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR6Pack  = Register<0x4000084C, 32, ReadWriteMode, TIM4CCR6Base, T...> ;

  struct TIM4CCMR3_OutputBase {} ;

  struct CCMR3_Output : public RegisterBase<0x40000850, 32, ReadWriteMode>
  {
    using OC6M_bit3 = TIM4_CCMR3_Output_OC6M_bit3_Values<TIM4::CCMR3_Output, 24, 1, ReadWriteMode, TIM4CCMR3_OutputBase> ;
    using OC5M_bit3 = TIM4_CCMR3_Output_OC5M_bit3_Values<TIM4::CCMR3_Output, 16, 3, ReadWriteMode, TIM4CCMR3_OutputBase> ;
    using OC6CE = TIM4_CCMR3_Output_OC6CE_Values<TIM4::CCMR3_Output, 15, 1, ReadWriteMode, TIM4CCMR3_OutputBase> ;
    using OC6M = TIM4_CCMR3_Output_OC6M_Values<TIM4::CCMR3_Output, 12, 3, ReadWriteMode, TIM4CCMR3_OutputBase> ;
    using OC6PE = TIM4_CCMR3_Output_OC6PE_Values<TIM4::CCMR3_Output, 11, 1, ReadWriteMode, TIM4CCMR3_OutputBase> ;
    using OC6FE = TIM4_CCMR3_Output_OC6FE_Values<TIM4::CCMR3_Output, 10, 1, ReadWriteMode, TIM4CCMR3_OutputBase> ;
    using OC5CE = TIM4_CCMR3_Output_OC5CE_Values<TIM4::CCMR3_Output, 7, 1, ReadWriteMode, TIM4CCMR3_OutputBase> ;
    using OC5M = TIM4_CCMR3_Output_OC5M_Values<TIM4::CCMR3_Output, 4, 3, ReadWriteMode, TIM4CCMR3_OutputBase> ;
    using OC5PE = TIM4_CCMR3_Output_OC5PE_Values<TIM4::CCMR3_Output, 3, 1, ReadWriteMode, TIM4CCMR3_OutputBase> ;
    using OC5FE = TIM4_CCMR3_Output_OC5FE_Values<TIM4::CCMR3_Output, 2, 1, ReadWriteMode, TIM4CCMR3_OutputBase> ;
    using FieldValues = TIM4_CCMR3_Output_OC5FE_Values<TIM4::CCMR3_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR3_OutputPack  = Register<0x40000850, 32, ReadWriteMode, TIM4CCMR3_OutputBase, T...> ;

  struct TIM4DTR2Base {} ;

  struct DTR2 : public RegisterBase<0x40000854, 32, ReadWriteMode>
  {
    using DTPE = TIM4_DTR2_DTPE_Values<TIM4::DTR2, 17, 1, ReadWriteMode, TIM4DTR2Base> ;
    using DTAE = TIM4_DTR2_DTAE_Values<TIM4::DTR2, 16, 1, ReadWriteMode, TIM4DTR2Base> ;
    using DTGF = TIM4_DTR2_DTGF_Values<TIM4::DTR2, 0, 8, ReadWriteMode, TIM4DTR2Base> ;
    using FieldValues = TIM4_DTR2_DTGF_Values<TIM4::DTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DTR2Pack  = Register<0x40000854, 32, ReadWriteMode, TIM4DTR2Base, T...> ;

  struct TIM4ECRBase {} ;

  struct ECR : public RegisterBase<0x40000858, 32, ReadWriteMode>
  {
    using IE = TIM4_ECR_IE_Values<TIM4::ECR, 0, 1, ReadWriteMode, TIM4ECRBase> ;
    using IDIR = TIM4_ECR_IDIR_Values<TIM4::ECR, 1, 2, ReadWriteMode, TIM4ECRBase> ;
    using IBLK = TIM4_ECR_IBLK_Values<TIM4::ECR, 3, 2, ReadWriteMode, TIM4ECRBase> ;
    using FIDX = TIM4_ECR_FIDX_Values<TIM4::ECR, 5, 1, ReadWriteMode, TIM4ECRBase> ;
    using IPOS = TIM4_ECR_IPOS_Values<TIM4::ECR, 6, 2, ReadWriteMode, TIM4ECRBase> ;
    using PW = TIM4_ECR_PW_Values<TIM4::ECR, 16, 8, ReadWriteMode, TIM4ECRBase> ;
    using PWPRSC = TIM4_ECR_PWPRSC_Values<TIM4::ECR, 24, 3, ReadWriteMode, TIM4ECRBase> ;
    using FieldValues = TIM4_ECR_PWPRSC_Values<TIM4::ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECRPack  = Register<0x40000858, 32, ReadWriteMode, TIM4ECRBase, T...> ;

  struct TIM4TISELBase {} ;

  struct TISEL : public RegisterBase<0x4000085C, 32, ReadWriteMode>
  {
    using TI1SEL = TIM4_TISEL_TI1SEL_Values<TIM4::TISEL, 0, 4, ReadWriteMode, TIM4TISELBase> ;
    using TI2SEL = TIM4_TISEL_TI2SEL_Values<TIM4::TISEL, 8, 4, ReadWriteMode, TIM4TISELBase> ;
    using TI3SEL = TIM4_TISEL_TI3SEL_Values<TIM4::TISEL, 16, 4, ReadWriteMode, TIM4TISELBase> ;
    using TI4SEL = TIM4_TISEL_TI4SEL_Values<TIM4::TISEL, 24, 4, ReadWriteMode, TIM4TISELBase> ;
    using FieldValues = TIM4_TISEL_TI4SEL_Values<TIM4::TISEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TISELPack  = Register<0x4000085C, 32, ReadWriteMode, TIM4TISELBase, T...> ;

  struct TIM4AF1Base {} ;

  struct AF1 : public RegisterBase<0x40000860, 32, ReadWriteMode>
  {
    using ETRSEL = TIM4_AF1_ETRSEL_Values<TIM4::AF1, 14, 4, ReadWriteMode, TIM4AF1Base> ;
    using BKCMP4P = TIM4_AF1_BKCMP4P_Values<TIM4::AF1, 13, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKCMP3P = TIM4_AF1_BKCMP3P_Values<TIM4::AF1, 12, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKCMP2P = TIM4_AF1_BKCMP2P_Values<TIM4::AF1, 11, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKCMP1P = TIM4_AF1_BKCMP1P_Values<TIM4::AF1, 10, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKINP = TIM4_AF1_BKINP_Values<TIM4::AF1, 9, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKCMP7E = TIM4_AF1_BKCMP7E_Values<TIM4::AF1, 7, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKCMP6E = TIM4_AF1_BKCMP6E_Values<TIM4::AF1, 6, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKCMP5E = TIM4_AF1_BKCMP5E_Values<TIM4::AF1, 5, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKCMP4E = TIM4_AF1_BKCMP4E_Values<TIM4::AF1, 4, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKCMP3E = TIM4_AF1_BKCMP3E_Values<TIM4::AF1, 3, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKCMP2E = TIM4_AF1_BKCMP2E_Values<TIM4::AF1, 2, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKCMP1E = TIM4_AF1_BKCMP1E_Values<TIM4::AF1, 1, 1, ReadWriteMode, TIM4AF1Base> ;
    using BKINE = TIM4_AF1_BKINE_Values<TIM4::AF1, 0, 1, ReadWriteMode, TIM4AF1Base> ;
    using FieldValues = TIM4_AF1_BKINE_Values<TIM4::AF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF1Pack  = Register<0x40000860, 32, ReadWriteMode, TIM4AF1Base, T...> ;

  struct TIM4AF2Base {} ;

  struct AF2 : public RegisterBase<0x40000864, 32, ReadWriteMode>
  {
    using OCRSEL = TIM4_AF2_OCRSEL_Values<TIM4::AF2, 16, 3, ReadWriteMode, TIM4AF2Base> ;
    using BK2CMP4P = TIM4_AF2_BK2CMP4P_Values<TIM4::AF2, 13, 1, ReadWriteMode, TIM4AF2Base> ;
    using BK2CMP3P = TIM4_AF2_BK2CMP3P_Values<TIM4::AF2, 12, 1, ReadWriteMode, TIM4AF2Base> ;
    using BK2CMP2P = TIM4_AF2_BK2CMP2P_Values<TIM4::AF2, 11, 1, ReadWriteMode, TIM4AF2Base> ;
    using BK2CMP1P = TIM4_AF2_BK2CMP1P_Values<TIM4::AF2, 10, 1, ReadWriteMode, TIM4AF2Base> ;
    using BK2INP = TIM4_AF2_BK2INP_Values<TIM4::AF2, 9, 1, ReadWriteMode, TIM4AF2Base> ;
    using BK2CMP7E = TIM4_AF2_BK2CMP7E_Values<TIM4::AF2, 7, 1, ReadWriteMode, TIM4AF2Base> ;
    using BK2CMP6E = TIM4_AF2_BK2CMP6E_Values<TIM4::AF2, 6, 1, ReadWriteMode, TIM4AF2Base> ;
    using BK2CMP5E = TIM4_AF2_BK2CMP5E_Values<TIM4::AF2, 5, 1, ReadWriteMode, TIM4AF2Base> ;
    using BK2CMP4E = TIM4_AF2_BK2CMP4E_Values<TIM4::AF2, 4, 1, ReadWriteMode, TIM4AF2Base> ;
    using BK2CMP3E = TIM4_AF2_BK2CMP3E_Values<TIM4::AF2, 3, 1, ReadWriteMode, TIM4AF2Base> ;
    using BK2CMP2E = TIM4_AF2_BK2CMP2E_Values<TIM4::AF2, 2, 1, ReadWriteMode, TIM4AF2Base> ;
    using BK2CMP1E = TIM4_AF2_BK2CMP1E_Values<TIM4::AF2, 1, 1, ReadWriteMode, TIM4AF2Base> ;
    using BKINE = TIM4_AF2_BKINE_Values<TIM4::AF2, 0, 1, ReadWriteMode, TIM4AF2Base> ;
    using FieldValues = TIM4_AF2_BKINE_Values<TIM4::AF2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF2Pack  = Register<0x40000864, 32, ReadWriteMode, TIM4AF2Base, T...> ;

  struct TIM4DCRBase {} ;

  struct DCR : public RegisterBase<0x40000BDC, 32, ReadWriteMode>
  {
    using DBL = TIM4_DCR_DBL_Values<TIM4::DCR, 8, 5, ReadWriteMode, TIM4DCRBase> ;
    using DBA = TIM4_DCR_DBA_Values<TIM4::DCR, 0, 5, ReadWriteMode, TIM4DCRBase> ;
    using FieldValues = TIM4_DCR_DBA_Values<TIM4::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40000BDC, 32, ReadWriteMode, TIM4DCRBase, T...> ;

  struct TIM4DMARBase {} ;

  struct DMAR : public RegisterBase<0x40000BE0, 32, ReadWriteMode>
  {
    using DMAB = TIM4_DMAR_DMAB_Values<TIM4::DMAR, 0, 32, ReadWriteMode, TIM4DMARBase> ;
    using FieldValues = TIM4_DMAR_DMAB_Values<TIM4::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x40000BE0, 32, ReadWriteMode, TIM4DMARBase, T...> ;

} ;

