/*******************************************************************************
* Filename      : tim5registers.hpp
*
* Details       : Advanced-timers. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "tim5fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM5
{
  struct TIM5CR1Base {} ;

  struct CR1 : public RegisterBase<0x40000C00, 32, ReadWriteMode>
  {
    using DITHEN = TIM5_CR1_DITHEN_Values<TIM5::CR1, 12, 1, ReadWriteMode, TIM5CR1Base> ;
    using UIFREMAP = TIM5_CR1_UIFREMAP_Values<TIM5::CR1, 11, 1, ReadWriteMode, TIM5CR1Base> ;
    using CKD = TIM5_CR1_CKD_Values<TIM5::CR1, 8, 2, ReadWriteMode, TIM5CR1Base> ;
    using ARPE = TIM5_CR1_ARPE_Values<TIM5::CR1, 7, 1, ReadWriteMode, TIM5CR1Base> ;
    using CMS = TIM5_CR1_CMS_Values<TIM5::CR1, 5, 2, ReadWriteMode, TIM5CR1Base> ;
    using DIR = TIM5_CR1_DIR_Values<TIM5::CR1, 4, 1, ReadWriteMode, TIM5CR1Base> ;
    using OPM = TIM5_CR1_OPM_Values<TIM5::CR1, 3, 1, ReadWriteMode, TIM5CR1Base> ;
    using URS = TIM5_CR1_URS_Values<TIM5::CR1, 2, 1, ReadWriteMode, TIM5CR1Base> ;
    using UDIS = TIM5_CR1_UDIS_Values<TIM5::CR1, 1, 1, ReadWriteMode, TIM5CR1Base> ;
    using CEN = TIM5_CR1_CEN_Values<TIM5::CR1, 0, 1, ReadWriteMode, TIM5CR1Base> ;
    using FieldValues = TIM5_CR1_CEN_Values<TIM5::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40000C00, 32, ReadWriteMode, TIM5CR1Base, T...> ;

  struct TIM5CR2Base {} ;

  struct CR2 : public RegisterBase<0x40000C04, 32, ReadWriteMode>
  {
    using MMS_3 = TIM5_CR2_MMS_3_Values<TIM5::CR2, 25, 1, ReadWriteMode, TIM5CR2Base> ;
    using MMS2 = TIM5_CR2_MMS2_Values<TIM5::CR2, 20, 4, ReadWriteMode, TIM5CR2Base> ;
    using OIS6 = TIM5_CR2_OIS6_Values<TIM5::CR2, 18, 1, ReadWriteMode, TIM5CR2Base> ;
    using OIS5 = TIM5_CR2_OIS5_Values<TIM5::CR2, 16, 1, ReadWriteMode, TIM5CR2Base> ;
    using OIS4N = TIM5_CR2_OIS4N_Values<TIM5::CR2, 15, 1, ReadWriteMode, TIM5CR2Base> ;
    using OIS4 = TIM5_CR2_OIS4_Values<TIM5::CR2, 14, 1, ReadWriteMode, TIM5CR2Base> ;
    using OIS3N = TIM5_CR2_OIS3N_Values<TIM5::CR2, 13, 1, ReadWriteMode, TIM5CR2Base> ;
    using OIS3 = TIM5_CR2_OIS3_Values<TIM5::CR2, 12, 1, ReadWriteMode, TIM5CR2Base> ;
    using OIS2N = TIM5_CR2_OIS2N_Values<TIM5::CR2, 11, 1, ReadWriteMode, TIM5CR2Base> ;
    using OIS2 = TIM5_CR2_OIS2_Values<TIM5::CR2, 10, 1, ReadWriteMode, TIM5CR2Base> ;
    using OIS1N = TIM5_CR2_OIS1N_Values<TIM5::CR2, 9, 1, ReadWriteMode, TIM5CR2Base> ;
    using OIS1 = TIM5_CR2_OIS1_Values<TIM5::CR2, 8, 1, ReadWriteMode, TIM5CR2Base> ;
    using TI1S = TIM5_CR2_TI1S_Values<TIM5::CR2, 7, 1, ReadWriteMode, TIM5CR2Base> ;
    using MMS = TIM5_CR2_MMS_Values<TIM5::CR2, 4, 3, ReadWriteMode, TIM5CR2Base> ;
    using CCDS = TIM5_CR2_CCDS_Values<TIM5::CR2, 3, 1, ReadWriteMode, TIM5CR2Base> ;
    using CCUS = TIM5_CR2_CCUS_Values<TIM5::CR2, 2, 1, ReadWriteMode, TIM5CR2Base> ;
    using CCPC = TIM5_CR2_CCPC_Values<TIM5::CR2, 0, 1, ReadWriteMode, TIM5CR2Base> ;
    using FieldValues = TIM5_CR2_CCPC_Values<TIM5::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40000C04, 32, ReadWriteMode, TIM5CR2Base, T...> ;

  struct TIM5SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40000C08, 32, ReadWriteMode>
  {
    using SMSPS = TIM5_SMCR_SMSPS_Values<TIM5::SMCR, 25, 1, ReadWriteMode, TIM5SMCRBase> ;
    using SMSPE = TIM5_SMCR_SMSPE_Values<TIM5::SMCR, 24, 1, ReadWriteMode, TIM5SMCRBase> ;
    using TS_4_3 = TIM5_SMCR_TS_4_3_Values<TIM5::SMCR, 20, 2, ReadWriteMode, TIM5SMCRBase> ;
    using SMS_3 = TIM5_SMCR_SMS_3_Values<TIM5::SMCR, 16, 1, ReadWriteMode, TIM5SMCRBase> ;
    using ETP = TIM5_SMCR_ETP_Values<TIM5::SMCR, 15, 1, ReadWriteMode, TIM5SMCRBase> ;
    using ECE = TIM5_SMCR_ECE_Values<TIM5::SMCR, 14, 1, ReadWriteMode, TIM5SMCRBase> ;
    using ETPS = TIM5_SMCR_ETPS_Values<TIM5::SMCR, 12, 2, ReadWriteMode, TIM5SMCRBase> ;
    using ETF = TIM5_SMCR_ETF_Values<TIM5::SMCR, 8, 4, ReadWriteMode, TIM5SMCRBase> ;
    using MSM = TIM5_SMCR_MSM_Values<TIM5::SMCR, 7, 1, ReadWriteMode, TIM5SMCRBase> ;
    using TS = TIM5_SMCR_TS_Values<TIM5::SMCR, 4, 3, ReadWriteMode, TIM5SMCRBase> ;
    using OCCS = TIM5_SMCR_OCCS_Values<TIM5::SMCR, 3, 1, ReadWriteMode, TIM5SMCRBase> ;
    using SMS = TIM5_SMCR_SMS_Values<TIM5::SMCR, 0, 3, ReadWriteMode, TIM5SMCRBase> ;
    using FieldValues = TIM5_SMCR_SMS_Values<TIM5::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40000C08, 32, ReadWriteMode, TIM5SMCRBase, T...> ;

  struct TIM5DIERBase {} ;

  struct DIER : public RegisterBase<0x40000C0C, 32, ReadWriteMode>
  {
    using TERRIE = TIM5_DIER_TERRIE_Values<TIM5::DIER, 23, 1, ReadWriteMode, TIM5DIERBase> ;
    using IERRIE = TIM5_DIER_IERRIE_Values<TIM5::DIER, 22, 1, ReadWriteMode, TIM5DIERBase> ;
    using DIRIE = TIM5_DIER_DIRIE_Values<TIM5::DIER, 21, 1, ReadWriteMode, TIM5DIERBase> ;
    using IDXIE = TIM5_DIER_IDXIE_Values<TIM5::DIER, 20, 1, ReadWriteMode, TIM5DIERBase> ;
    using TDE = TIM5_DIER_TDE_Values<TIM5::DIER, 14, 1, ReadWriteMode, TIM5DIERBase> ;
    using COMDE = TIM5_DIER_COMDE_Values<TIM5::DIER, 13, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC4DE = TIM5_DIER_CC4DE_Values<TIM5::DIER, 12, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC3DE = TIM5_DIER_CC3DE_Values<TIM5::DIER, 11, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC2DE = TIM5_DIER_CC2DE_Values<TIM5::DIER, 10, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC1DE = TIM5_DIER_CC1DE_Values<TIM5::DIER, 9, 1, ReadWriteMode, TIM5DIERBase> ;
    using UDE = TIM5_DIER_UDE_Values<TIM5::DIER, 8, 1, ReadWriteMode, TIM5DIERBase> ;
    using TIE = TIM5_DIER_TIE_Values<TIM5::DIER, 6, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC4IE = TIM5_DIER_CC4IE_Values<TIM5::DIER, 4, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC3IE = TIM5_DIER_CC3IE_Values<TIM5::DIER, 3, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC2IE = TIM5_DIER_CC2IE_Values<TIM5::DIER, 2, 1, ReadWriteMode, TIM5DIERBase> ;
    using CC1IE = TIM5_DIER_CC1IE_Values<TIM5::DIER, 1, 1, ReadWriteMode, TIM5DIERBase> ;
    using UIE = TIM5_DIER_UIE_Values<TIM5::DIER, 0, 1, ReadWriteMode, TIM5DIERBase> ;
    using BIE = TIM5_DIER_BIE_Values<TIM5::DIER, 7, 1, ReadWriteMode, TIM5DIERBase> ;
    using COMIE = TIM5_DIER_COMIE_Values<TIM5::DIER, 5, 1, ReadWriteMode, TIM5DIERBase> ;
    using FieldValues = TIM5_DIER_COMIE_Values<TIM5::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x40000C0C, 32, ReadWriteMode, TIM5DIERBase, T...> ;

  struct TIM5SRBase {} ;

  struct SR : public RegisterBase<0x40000C10, 32, ReadWriteMode>
  {
    using TERRF = TIM5_SR_TERRF_Values<TIM5::SR, 23, 1, ReadWriteMode, TIM5SRBase> ;
    using IERRF = TIM5_SR_IERRF_Values<TIM5::SR, 22, 1, ReadWriteMode, TIM5SRBase> ;
    using DIRF = TIM5_SR_DIRF_Values<TIM5::SR, 21, 1, ReadWriteMode, TIM5SRBase> ;
    using IDXF = TIM5_SR_IDXF_Values<TIM5::SR, 20, 1, ReadWriteMode, TIM5SRBase> ;
    using CC6IF = TIM5_SR_CC6IF_Values<TIM5::SR, 17, 1, ReadWriteMode, TIM5SRBase> ;
    using CC5IF = TIM5_SR_CC5IF_Values<TIM5::SR, 16, 1, ReadWriteMode, TIM5SRBase> ;
    using SBIF = TIM5_SR_SBIF_Values<TIM5::SR, 13, 1, ReadWriteMode, TIM5SRBase> ;
    using CC4OF = TIM5_SR_CC4OF_Values<TIM5::SR, 12, 1, ReadWriteMode, TIM5SRBase> ;
    using CC3OF = TIM5_SR_CC3OF_Values<TIM5::SR, 11, 1, ReadWriteMode, TIM5SRBase> ;
    using CC2OF = TIM5_SR_CC2OF_Values<TIM5::SR, 10, 1, ReadWriteMode, TIM5SRBase> ;
    using CC1OF = TIM5_SR_CC1OF_Values<TIM5::SR, 9, 1, ReadWriteMode, TIM5SRBase> ;
    using B2IF = TIM5_SR_B2IF_Values<TIM5::SR, 8, 1, ReadWriteMode, TIM5SRBase> ;
    using BIF = TIM5_SR_BIF_Values<TIM5::SR, 7, 1, ReadWriteMode, TIM5SRBase> ;
    using TIF = TIM5_SR_TIF_Values<TIM5::SR, 6, 1, ReadWriteMode, TIM5SRBase> ;
    using COMIF = TIM5_SR_COMIF_Values<TIM5::SR, 5, 1, ReadWriteMode, TIM5SRBase> ;
    using CC4IF = TIM5_SR_CC4IF_Values<TIM5::SR, 4, 1, ReadWriteMode, TIM5SRBase> ;
    using CC3IF = TIM5_SR_CC3IF_Values<TIM5::SR, 3, 1, ReadWriteMode, TIM5SRBase> ;
    using CC2IF = TIM5_SR_CC2IF_Values<TIM5::SR, 2, 1, ReadWriteMode, TIM5SRBase> ;
    using CC1IF = TIM5_SR_CC1IF_Values<TIM5::SR, 1, 1, ReadWriteMode, TIM5SRBase> ;
    using UIF = TIM5_SR_UIF_Values<TIM5::SR, 0, 1, ReadWriteMode, TIM5SRBase> ;
    using FieldValues = TIM5_SR_UIF_Values<TIM5::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40000C10, 32, ReadWriteMode, TIM5SRBase, T...> ;

  struct TIM5EGRBase {} ;

  struct EGR : public RegisterBase<0x40000C14, 32, WriteMode>
  {
    using B2G = TIM5_EGR_B2G_Values<TIM5::EGR, 8, 1, WriteMode, TIM5EGRBase> ;
    using BG = TIM5_EGR_BG_Values<TIM5::EGR, 7, 1, WriteMode, TIM5EGRBase> ;
    using TG = TIM5_EGR_TG_Values<TIM5::EGR, 6, 1, WriteMode, TIM5EGRBase> ;
    using COMG = TIM5_EGR_COMG_Values<TIM5::EGR, 5, 1, WriteMode, TIM5EGRBase> ;
    using CC4G = TIM5_EGR_CC4G_Values<TIM5::EGR, 4, 1, WriteMode, TIM5EGRBase> ;
    using CC3G = TIM5_EGR_CC3G_Values<TIM5::EGR, 3, 1, WriteMode, TIM5EGRBase> ;
    using CC2G = TIM5_EGR_CC2G_Values<TIM5::EGR, 2, 1, WriteMode, TIM5EGRBase> ;
    using CC1G = TIM5_EGR_CC1G_Values<TIM5::EGR, 1, 1, WriteMode, TIM5EGRBase> ;
    using UG = TIM5_EGR_UG_Values<TIM5::EGR, 0, 1, WriteMode, TIM5EGRBase> ;
    using FieldValues = TIM5_EGR_UG_Values<TIM5::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40000C14, 32, WriteMode, TIM5EGRBase, T...> ;

  struct TIM5CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40000C18, 32, ReadWriteMode>
  {
    using OC2M_3 = TIM5_CCMR1_Output_OC2M_3_Values<TIM5::CCMR1_Output, 24, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC1M_3 = TIM5_CCMR1_Output_OC1M_3_Values<TIM5::CCMR1_Output, 16, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC2CE = TIM5_CCMR1_Output_OC2CE_Values<TIM5::CCMR1_Output, 15, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC2M = TIM5_CCMR1_Output_OC2M_Values<TIM5::CCMR1_Output, 12, 3, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC2PE = TIM5_CCMR1_Output_OC2PE_Values<TIM5::CCMR1_Output, 11, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC2FE = TIM5_CCMR1_Output_OC2FE_Values<TIM5::CCMR1_Output, 10, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using CC2S = TIM5_CCMR1_Output_CC2S_Values<TIM5::CCMR1_Output, 8, 2, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC1CE = TIM5_CCMR1_Output_OC1CE_Values<TIM5::CCMR1_Output, 7, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC1M = TIM5_CCMR1_Output_OC1M_Values<TIM5::CCMR1_Output, 4, 3, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC1PE = TIM5_CCMR1_Output_OC1PE_Values<TIM5::CCMR1_Output, 3, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using OC1FE = TIM5_CCMR1_Output_OC1FE_Values<TIM5::CCMR1_Output, 2, 1, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using CC1S = TIM5_CCMR1_Output_CC1S_Values<TIM5::CCMR1_Output, 0, 2, ReadWriteMode, TIM5CCMR1_OutputBase> ;
    using FieldValues = TIM5_CCMR1_Output_CC1S_Values<TIM5::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40000C18, 32, ReadWriteMode, TIM5CCMR1_OutputBase, T...> ;

  struct TIM5CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40000C18, 32, ReadWriteMode>
  {
    using IC2F = TIM5_CCMR1_Input_IC2F_Values<TIM5::CCMR1_Input, 12, 4, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using IC2PSC = TIM5_CCMR1_Input_IC2PSC_Values<TIM5::CCMR1_Input, 10, 2, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using CC2S = TIM5_CCMR1_Input_CC2S_Values<TIM5::CCMR1_Input, 8, 2, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using IC1F = TIM5_CCMR1_Input_IC1F_Values<TIM5::CCMR1_Input, 4, 4, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using ICPCS = TIM5_CCMR1_Input_ICPCS_Values<TIM5::CCMR1_Input, 2, 2, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using CC1S = TIM5_CCMR1_Input_CC1S_Values<TIM5::CCMR1_Input, 0, 2, ReadWriteMode, TIM5CCMR1_InputBase> ;
    using FieldValues = TIM5_CCMR1_Input_CC1S_Values<TIM5::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40000C18, 32, ReadWriteMode, TIM5CCMR1_InputBase, T...> ;

  struct TIM5CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x40000C1C, 32, ReadWriteMode>
  {
    using OC4M_3 = TIM5_CCMR2_Output_OC4M_3_Values<TIM5::CCMR2_Output, 24, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC3M_3 = TIM5_CCMR2_Output_OC3M_3_Values<TIM5::CCMR2_Output, 16, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC4CE = TIM5_CCMR2_Output_OC4CE_Values<TIM5::CCMR2_Output, 15, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC4M = TIM5_CCMR2_Output_OC4M_Values<TIM5::CCMR2_Output, 12, 3, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC4PE = TIM5_CCMR2_Output_OC4PE_Values<TIM5::CCMR2_Output, 11, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC4FE = TIM5_CCMR2_Output_OC4FE_Values<TIM5::CCMR2_Output, 10, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using CC4S = TIM5_CCMR2_Output_CC4S_Values<TIM5::CCMR2_Output, 8, 2, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC3CE = TIM5_CCMR2_Output_OC3CE_Values<TIM5::CCMR2_Output, 7, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC3M = TIM5_CCMR2_Output_OC3M_Values<TIM5::CCMR2_Output, 4, 3, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC3PE = TIM5_CCMR2_Output_OC3PE_Values<TIM5::CCMR2_Output, 3, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using OC3FE = TIM5_CCMR2_Output_OC3FE_Values<TIM5::CCMR2_Output, 2, 1, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using CC3S = TIM5_CCMR2_Output_CC3S_Values<TIM5::CCMR2_Output, 0, 2, ReadWriteMode, TIM5CCMR2_OutputBase> ;
    using FieldValues = TIM5_CCMR2_Output_CC3S_Values<TIM5::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x40000C1C, 32, ReadWriteMode, TIM5CCMR2_OutputBase, T...> ;

  struct TIM5CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x40000C1C, 32, ReadWriteMode>
  {
    using IC4F = TIM5_CCMR2_Input_IC4F_Values<TIM5::CCMR2_Input, 12, 4, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using IC4PSC = TIM5_CCMR2_Input_IC4PSC_Values<TIM5::CCMR2_Input, 10, 2, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using CC4S = TIM5_CCMR2_Input_CC4S_Values<TIM5::CCMR2_Input, 8, 2, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using IC3F = TIM5_CCMR2_Input_IC3F_Values<TIM5::CCMR2_Input, 4, 4, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using IC3PSC = TIM5_CCMR2_Input_IC3PSC_Values<TIM5::CCMR2_Input, 2, 2, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using CC3S = TIM5_CCMR2_Input_CC3S_Values<TIM5::CCMR2_Input, 0, 2, ReadWriteMode, TIM5CCMR2_InputBase> ;
    using FieldValues = TIM5_CCMR2_Input_CC3S_Values<TIM5::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x40000C1C, 32, ReadWriteMode, TIM5CCMR2_InputBase, T...> ;

  struct TIM5CCERBase {} ;

  struct CCER : public RegisterBase<0x40000C20, 32, ReadWriteMode>
  {
    using CC6P = TIM5_CCER_CC6P_Values<TIM5::CCER, 21, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC6E = TIM5_CCER_CC6E_Values<TIM5::CCER, 20, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC5P = TIM5_CCER_CC5P_Values<TIM5::CCER, 17, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC5E = TIM5_CCER_CC5E_Values<TIM5::CCER, 16, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC4NP = TIM5_CCER_CC4NP_Values<TIM5::CCER, 15, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC4NE = TIM5_CCER_CC4NE_Values<TIM5::CCER, 14, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC4P = TIM5_CCER_CC4P_Values<TIM5::CCER, 13, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC4E = TIM5_CCER_CC4E_Values<TIM5::CCER, 12, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC3NP = TIM5_CCER_CC3NP_Values<TIM5::CCER, 11, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC3NE = TIM5_CCER_CC3NE_Values<TIM5::CCER, 10, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC3P = TIM5_CCER_CC3P_Values<TIM5::CCER, 9, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC3E = TIM5_CCER_CC3E_Values<TIM5::CCER, 8, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC2NP = TIM5_CCER_CC2NP_Values<TIM5::CCER, 7, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC2NE = TIM5_CCER_CC2NE_Values<TIM5::CCER, 6, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC2P = TIM5_CCER_CC2P_Values<TIM5::CCER, 5, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC2E = TIM5_CCER_CC2E_Values<TIM5::CCER, 4, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC1NP = TIM5_CCER_CC1NP_Values<TIM5::CCER, 3, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC1NE = TIM5_CCER_CC1NE_Values<TIM5::CCER, 2, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC1P = TIM5_CCER_CC1P_Values<TIM5::CCER, 1, 1, ReadWriteMode, TIM5CCERBase> ;
    using CC1E = TIM5_CCER_CC1E_Values<TIM5::CCER, 0, 1, ReadWriteMode, TIM5CCERBase> ;
    using FieldValues = TIM5_CCER_CC1E_Values<TIM5::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40000C20, 32, ReadWriteMode, TIM5CCERBase, T...> ;

  struct TIM5CNTBase {} ;

  struct CNT : public RegisterBase<0x40000C24, 32, ReadWriteMode>
  {
    using UIFCPY = TIM5_CNT_UIFCPY_Values<TIM5::CNT, 31, 1, ReadWriteMode, TIM5CNTBase> ;
    using CNTField = TIM5_CNT_CNT_Values<TIM5::CNT, 0, 16, ReadWriteMode, TIM5CNTBase> ;
    using FieldValues = TIM5_CNT_CNT_Values<TIM5::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000C24, 32, ReadWriteMode, TIM5CNTBase, T...> ;

  struct TIM5PSCBase {} ;

  struct PSC : public RegisterBase<0x40000C28, 32, ReadWriteMode>
  {
    using PSCField = TIM5_PSC_PSC_Values<TIM5::PSC, 0, 16, ReadWriteMode, TIM5PSCBase> ;
    using FieldValues = TIM5_PSC_PSC_Values<TIM5::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000C28, 32, ReadWriteMode, TIM5PSCBase, T...> ;

  struct TIM5ARRBase {} ;

  struct ARR : public RegisterBase<0x40000C2C, 32, ReadWriteMode>
  {
    using ARRField = TIM5_ARR_ARR_Values<TIM5::ARR, 0, 16, ReadWriteMode, TIM5ARRBase> ;
    using FieldValues = TIM5_ARR_ARR_Values<TIM5::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x40000C2C, 32, ReadWriteMode, TIM5ARRBase, T...> ;

  struct TIM5RCRBase {} ;

  struct RCR : public RegisterBase<0x40000C30, 32, ReadWriteMode>
  {
    using REP = TIM5_RCR_REP_Values<TIM5::RCR, 0, 16, ReadWriteMode, TIM5RCRBase> ;
    using FieldValues = TIM5_RCR_REP_Values<TIM5::RCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40000C30, 32, ReadWriteMode, TIM5RCRBase, T...> ;

  struct TIM5CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40000C34, 32, ReadWriteMode>
  {
    using CCR1Field = TIM5_CCR1_CCR1_Values<TIM5::CCR1, 0, 16, ReadWriteMode, TIM5CCR1Base> ;
    using FieldValues = TIM5_CCR1_CCR1_Values<TIM5::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40000C34, 32, ReadWriteMode, TIM5CCR1Base, T...> ;

  struct TIM5CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40000C38, 32, ReadWriteMode>
  {
    using CCR2Field = TIM5_CCR2_CCR2_Values<TIM5::CCR2, 0, 16, ReadWriteMode, TIM5CCR2Base> ;
    using FieldValues = TIM5_CCR2_CCR2_Values<TIM5::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40000C38, 32, ReadWriteMode, TIM5CCR2Base, T...> ;

  struct TIM5CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x40000C3C, 32, ReadWriteMode>
  {
    using CCR3Field = TIM5_CCR3_CCR3_Values<TIM5::CCR3, 0, 16, ReadWriteMode, TIM5CCR3Base> ;
    using FieldValues = TIM5_CCR3_CCR3_Values<TIM5::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x40000C3C, 32, ReadWriteMode, TIM5CCR3Base, T...> ;

  struct TIM5CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40000C40, 32, ReadWriteMode>
  {
    using CCR4Field = TIM5_CCR4_CCR4_Values<TIM5::CCR4, 0, 16, ReadWriteMode, TIM5CCR4Base> ;
    using FieldValues = TIM5_CCR4_CCR4_Values<TIM5::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40000C40, 32, ReadWriteMode, TIM5CCR4Base, T...> ;

  struct TIM5BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40000C44, 32, ReadWriteMode>
  {
    using BK2ID = TIM5_BDTR_BK2ID_Values<TIM5::BDTR, 29, 1, ReadWriteMode, TIM5BDTRBase> ;
    using BKBID = TIM5_BDTR_BKBID_Values<TIM5::BDTR, 28, 1, ReadWriteMode, TIM5BDTRBase> ;
    using BK2DSRM = TIM5_BDTR_BK2DSRM_Values<TIM5::BDTR, 27, 1, ReadWriteMode, TIM5BDTRBase> ;
    using BKDSRM = TIM5_BDTR_BKDSRM_Values<TIM5::BDTR, 26, 1, ReadWriteMode, TIM5BDTRBase> ;
    using BK2P = TIM5_BDTR_BK2P_Values<TIM5::BDTR, 25, 1, ReadWriteMode, TIM5BDTRBase> ;
    using BK2E = TIM5_BDTR_BK2E_Values<TIM5::BDTR, 24, 1, ReadWriteMode, TIM5BDTRBase> ;
    using BK2F = TIM5_BDTR_BK2F_Values<TIM5::BDTR, 20, 4, ReadWriteMode, TIM5BDTRBase> ;
    using BKF = TIM5_BDTR_BKF_Values<TIM5::BDTR, 16, 4, ReadWriteMode, TIM5BDTRBase> ;
    using MOE = TIM5_BDTR_MOE_Values<TIM5::BDTR, 15, 1, ReadWriteMode, TIM5BDTRBase> ;
    using AOE = TIM5_BDTR_AOE_Values<TIM5::BDTR, 14, 1, ReadWriteMode, TIM5BDTRBase> ;
    using BKP = TIM5_BDTR_BKP_Values<TIM5::BDTR, 13, 1, ReadWriteMode, TIM5BDTRBase> ;
    using BKE = TIM5_BDTR_BKE_Values<TIM5::BDTR, 12, 1, ReadWriteMode, TIM5BDTRBase> ;
    using OSSR = TIM5_BDTR_OSSR_Values<TIM5::BDTR, 11, 1, ReadWriteMode, TIM5BDTRBase> ;
    using OSSI = TIM5_BDTR_OSSI_Values<TIM5::BDTR, 10, 1, ReadWriteMode, TIM5BDTRBase> ;
    using LOCK = TIM5_BDTR_LOCK_Values<TIM5::BDTR, 8, 2, ReadWriteMode, TIM5BDTRBase> ;
    using DTG = TIM5_BDTR_DTG_Values<TIM5::BDTR, 0, 8, ReadWriteMode, TIM5BDTRBase> ;
    using FieldValues = TIM5_BDTR_DTG_Values<TIM5::BDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40000C44, 32, ReadWriteMode, TIM5BDTRBase, T...> ;

  struct TIM5CCR5Base {} ;

  struct CCR5 : public RegisterBase<0x40000C48, 32, ReadWriteMode>
  {
    using CCR5Field = TIM5_CCR5_CCR5_Values<TIM5::CCR5, 0, 16, ReadWriteMode, TIM5CCR5Base> ;
    using GC5C1 = TIM5_CCR5_GC5C1_Values<TIM5::CCR5, 29, 1, ReadWriteMode, TIM5CCR5Base> ;
    using GC5C2 = TIM5_CCR5_GC5C2_Values<TIM5::CCR5, 30, 1, ReadWriteMode, TIM5CCR5Base> ;
    using GC5C3 = TIM5_CCR5_GC5C3_Values<TIM5::CCR5, 31, 1, ReadWriteMode, TIM5CCR5Base> ;
    using FieldValues = TIM5_CCR5_GC5C3_Values<TIM5::CCR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR5Pack  = Register<0x40000C48, 32, ReadWriteMode, TIM5CCR5Base, T...> ;

  struct TIM5CCR6Base {} ;

  struct CCR6 : public RegisterBase<0x40000C4C, 32, ReadWriteMode>
  {
    using CCR6Field = TIM5_CCR6_CCR6_Values<TIM5::CCR6, 0, 16, ReadWriteMode, TIM5CCR6Base> ;
    using FieldValues = TIM5_CCR6_CCR6_Values<TIM5::CCR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR6Pack  = Register<0x40000C4C, 32, ReadWriteMode, TIM5CCR6Base, T...> ;

  struct TIM5CCMR3_OutputBase {} ;

  struct CCMR3_Output : public RegisterBase<0x40000C50, 32, ReadWriteMode>
  {
    using OC6M_bit3 = TIM5_CCMR3_Output_OC6M_bit3_Values<TIM5::CCMR3_Output, 24, 1, ReadWriteMode, TIM5CCMR3_OutputBase> ;
    using OC5M_bit3 = TIM5_CCMR3_Output_OC5M_bit3_Values<TIM5::CCMR3_Output, 16, 3, ReadWriteMode, TIM5CCMR3_OutputBase> ;
    using OC6CE = TIM5_CCMR3_Output_OC6CE_Values<TIM5::CCMR3_Output, 15, 1, ReadWriteMode, TIM5CCMR3_OutputBase> ;
    using OC6M = TIM5_CCMR3_Output_OC6M_Values<TIM5::CCMR3_Output, 12, 3, ReadWriteMode, TIM5CCMR3_OutputBase> ;
    using OC6PE = TIM5_CCMR3_Output_OC6PE_Values<TIM5::CCMR3_Output, 11, 1, ReadWriteMode, TIM5CCMR3_OutputBase> ;
    using OC6FE = TIM5_CCMR3_Output_OC6FE_Values<TIM5::CCMR3_Output, 10, 1, ReadWriteMode, TIM5CCMR3_OutputBase> ;
    using OC5CE = TIM5_CCMR3_Output_OC5CE_Values<TIM5::CCMR3_Output, 7, 1, ReadWriteMode, TIM5CCMR3_OutputBase> ;
    using OC5M = TIM5_CCMR3_Output_OC5M_Values<TIM5::CCMR3_Output, 4, 3, ReadWriteMode, TIM5CCMR3_OutputBase> ;
    using OC5PE = TIM5_CCMR3_Output_OC5PE_Values<TIM5::CCMR3_Output, 3, 1, ReadWriteMode, TIM5CCMR3_OutputBase> ;
    using OC5FE = TIM5_CCMR3_Output_OC5FE_Values<TIM5::CCMR3_Output, 2, 1, ReadWriteMode, TIM5CCMR3_OutputBase> ;
    using FieldValues = TIM5_CCMR3_Output_OC5FE_Values<TIM5::CCMR3_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR3_OutputPack  = Register<0x40000C50, 32, ReadWriteMode, TIM5CCMR3_OutputBase, T...> ;

  struct TIM5DTR2Base {} ;

  struct DTR2 : public RegisterBase<0x40000C54, 32, ReadWriteMode>
  {
    using DTPE = TIM5_DTR2_DTPE_Values<TIM5::DTR2, 17, 1, ReadWriteMode, TIM5DTR2Base> ;
    using DTAE = TIM5_DTR2_DTAE_Values<TIM5::DTR2, 16, 1, ReadWriteMode, TIM5DTR2Base> ;
    using DTGF = TIM5_DTR2_DTGF_Values<TIM5::DTR2, 0, 8, ReadWriteMode, TIM5DTR2Base> ;
    using FieldValues = TIM5_DTR2_DTGF_Values<TIM5::DTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DTR2Pack  = Register<0x40000C54, 32, ReadWriteMode, TIM5DTR2Base, T...> ;

  struct TIM5ECRBase {} ;

  struct ECR : public RegisterBase<0x40000C58, 32, ReadWriteMode>
  {
    using IE = TIM5_ECR_IE_Values<TIM5::ECR, 0, 1, ReadWriteMode, TIM5ECRBase> ;
    using IDIR = TIM5_ECR_IDIR_Values<TIM5::ECR, 1, 2, ReadWriteMode, TIM5ECRBase> ;
    using IBLK = TIM5_ECR_IBLK_Values<TIM5::ECR, 3, 2, ReadWriteMode, TIM5ECRBase> ;
    using FIDX = TIM5_ECR_FIDX_Values<TIM5::ECR, 5, 1, ReadWriteMode, TIM5ECRBase> ;
    using IPOS = TIM5_ECR_IPOS_Values<TIM5::ECR, 6, 2, ReadWriteMode, TIM5ECRBase> ;
    using PW = TIM5_ECR_PW_Values<TIM5::ECR, 16, 8, ReadWriteMode, TIM5ECRBase> ;
    using PWPRSC = TIM5_ECR_PWPRSC_Values<TIM5::ECR, 24, 3, ReadWriteMode, TIM5ECRBase> ;
    using FieldValues = TIM5_ECR_PWPRSC_Values<TIM5::ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECRPack  = Register<0x40000C58, 32, ReadWriteMode, TIM5ECRBase, T...> ;

  struct TIM5TISELBase {} ;

  struct TISEL : public RegisterBase<0x40000C5C, 32, ReadWriteMode>
  {
    using TI1SEL = TIM5_TISEL_TI1SEL_Values<TIM5::TISEL, 0, 4, ReadWriteMode, TIM5TISELBase> ;
    using TI2SEL = TIM5_TISEL_TI2SEL_Values<TIM5::TISEL, 8, 4, ReadWriteMode, TIM5TISELBase> ;
    using TI3SEL = TIM5_TISEL_TI3SEL_Values<TIM5::TISEL, 16, 4, ReadWriteMode, TIM5TISELBase> ;
    using TI4SEL = TIM5_TISEL_TI4SEL_Values<TIM5::TISEL, 24, 4, ReadWriteMode, TIM5TISELBase> ;
    using FieldValues = TIM5_TISEL_TI4SEL_Values<TIM5::TISEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TISELPack  = Register<0x40000C5C, 32, ReadWriteMode, TIM5TISELBase, T...> ;

  struct TIM5AF1Base {} ;

  struct AF1 : public RegisterBase<0x40000C60, 32, ReadWriteMode>
  {
    using ETRSEL = TIM5_AF1_ETRSEL_Values<TIM5::AF1, 14, 4, ReadWriteMode, TIM5AF1Base> ;
    using BKCMP4P = TIM5_AF1_BKCMP4P_Values<TIM5::AF1, 13, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKCMP3P = TIM5_AF1_BKCMP3P_Values<TIM5::AF1, 12, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKCMP2P = TIM5_AF1_BKCMP2P_Values<TIM5::AF1, 11, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKCMP1P = TIM5_AF1_BKCMP1P_Values<TIM5::AF1, 10, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKINP = TIM5_AF1_BKINP_Values<TIM5::AF1, 9, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKCMP7E = TIM5_AF1_BKCMP7E_Values<TIM5::AF1, 7, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKCMP6E = TIM5_AF1_BKCMP6E_Values<TIM5::AF1, 6, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKCMP5E = TIM5_AF1_BKCMP5E_Values<TIM5::AF1, 5, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKCMP4E = TIM5_AF1_BKCMP4E_Values<TIM5::AF1, 4, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKCMP3E = TIM5_AF1_BKCMP3E_Values<TIM5::AF1, 3, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKCMP2E = TIM5_AF1_BKCMP2E_Values<TIM5::AF1, 2, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKCMP1E = TIM5_AF1_BKCMP1E_Values<TIM5::AF1, 1, 1, ReadWriteMode, TIM5AF1Base> ;
    using BKINE = TIM5_AF1_BKINE_Values<TIM5::AF1, 0, 1, ReadWriteMode, TIM5AF1Base> ;
    using FieldValues = TIM5_AF1_BKINE_Values<TIM5::AF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF1Pack  = Register<0x40000C60, 32, ReadWriteMode, TIM5AF1Base, T...> ;

  struct TIM5AF2Base {} ;

  struct AF2 : public RegisterBase<0x40000C64, 32, ReadWriteMode>
  {
    using OCRSEL = TIM5_AF2_OCRSEL_Values<TIM5::AF2, 16, 3, ReadWriteMode, TIM5AF2Base> ;
    using BK2CMP4P = TIM5_AF2_BK2CMP4P_Values<TIM5::AF2, 13, 1, ReadWriteMode, TIM5AF2Base> ;
    using BK2CMP3P = TIM5_AF2_BK2CMP3P_Values<TIM5::AF2, 12, 1, ReadWriteMode, TIM5AF2Base> ;
    using BK2CMP2P = TIM5_AF2_BK2CMP2P_Values<TIM5::AF2, 11, 1, ReadWriteMode, TIM5AF2Base> ;
    using BK2CMP1P = TIM5_AF2_BK2CMP1P_Values<TIM5::AF2, 10, 1, ReadWriteMode, TIM5AF2Base> ;
    using BK2INP = TIM5_AF2_BK2INP_Values<TIM5::AF2, 9, 1, ReadWriteMode, TIM5AF2Base> ;
    using BK2CMP7E = TIM5_AF2_BK2CMP7E_Values<TIM5::AF2, 7, 1, ReadWriteMode, TIM5AF2Base> ;
    using BK2CMP6E = TIM5_AF2_BK2CMP6E_Values<TIM5::AF2, 6, 1, ReadWriteMode, TIM5AF2Base> ;
    using BK2CMP5E = TIM5_AF2_BK2CMP5E_Values<TIM5::AF2, 5, 1, ReadWriteMode, TIM5AF2Base> ;
    using BK2CMP4E = TIM5_AF2_BK2CMP4E_Values<TIM5::AF2, 4, 1, ReadWriteMode, TIM5AF2Base> ;
    using BK2CMP3E = TIM5_AF2_BK2CMP3E_Values<TIM5::AF2, 3, 1, ReadWriteMode, TIM5AF2Base> ;
    using BK2CMP2E = TIM5_AF2_BK2CMP2E_Values<TIM5::AF2, 2, 1, ReadWriteMode, TIM5AF2Base> ;
    using BK2CMP1E = TIM5_AF2_BK2CMP1E_Values<TIM5::AF2, 1, 1, ReadWriteMode, TIM5AF2Base> ;
    using BKINE = TIM5_AF2_BKINE_Values<TIM5::AF2, 0, 1, ReadWriteMode, TIM5AF2Base> ;
    using FieldValues = TIM5_AF2_BKINE_Values<TIM5::AF2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF2Pack  = Register<0x40000C64, 32, ReadWriteMode, TIM5AF2Base, T...> ;

  struct TIM5DCRBase {} ;

  struct DCR : public RegisterBase<0x40000FDC, 32, ReadWriteMode>
  {
    using DBL = TIM5_DCR_DBL_Values<TIM5::DCR, 8, 5, ReadWriteMode, TIM5DCRBase> ;
    using DBA = TIM5_DCR_DBA_Values<TIM5::DCR, 0, 5, ReadWriteMode, TIM5DCRBase> ;
    using FieldValues = TIM5_DCR_DBA_Values<TIM5::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40000FDC, 32, ReadWriteMode, TIM5DCRBase, T...> ;

  struct TIM5DMARBase {} ;

  struct DMAR : public RegisterBase<0x40000FE0, 32, ReadWriteMode>
  {
    using DMAB = TIM5_DMAR_DMAB_Values<TIM5::DMAR, 0, 32, ReadWriteMode, TIM5DMARBase> ;
    using FieldValues = TIM5_DMAR_DMAB_Values<TIM5::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x40000FE0, 32, ReadWriteMode, TIM5DMARBase, T...> ;

} ;

