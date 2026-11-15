/*******************************************************************************
* Filename      : tim8registers.hpp
*
* Details       : Advanced-timers. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "tim8fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM8
{
  struct TIM8CR1Base {} ;

  struct CR1 : public RegisterBase<0x40013400, 32, ReadWriteMode>
  {
    using DITHEN = TIM8_CR1_DITHEN_Values<TIM8::CR1, 12, 1, ReadWriteMode, TIM8CR1Base> ;
    using UIFREMAP = TIM8_CR1_UIFREMAP_Values<TIM8::CR1, 11, 1, ReadWriteMode, TIM8CR1Base> ;
    using CKD = TIM8_CR1_CKD_Values<TIM8::CR1, 8, 2, ReadWriteMode, TIM8CR1Base> ;
    using ARPE = TIM8_CR1_ARPE_Values<TIM8::CR1, 7, 1, ReadWriteMode, TIM8CR1Base> ;
    using CMS = TIM8_CR1_CMS_Values<TIM8::CR1, 5, 2, ReadWriteMode, TIM8CR1Base> ;
    using DIR = TIM8_CR1_DIR_Values<TIM8::CR1, 4, 1, ReadWriteMode, TIM8CR1Base> ;
    using OPM = TIM8_CR1_OPM_Values<TIM8::CR1, 3, 1, ReadWriteMode, TIM8CR1Base> ;
    using URS = TIM8_CR1_URS_Values<TIM8::CR1, 2, 1, ReadWriteMode, TIM8CR1Base> ;
    using UDIS = TIM8_CR1_UDIS_Values<TIM8::CR1, 1, 1, ReadWriteMode, TIM8CR1Base> ;
    using CEN = TIM8_CR1_CEN_Values<TIM8::CR1, 0, 1, ReadWriteMode, TIM8CR1Base> ;
    using FieldValues = TIM8_CR1_CEN_Values<TIM8::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40013400, 32, ReadWriteMode, TIM8CR1Base, T...> ;

  struct TIM8CR2Base {} ;

  struct CR2 : public RegisterBase<0x40013404, 32, ReadWriteMode>
  {
    using MMS_3 = TIM8_CR2_MMS_3_Values<TIM8::CR2, 25, 1, ReadWriteMode, TIM8CR2Base> ;
    using MMS2 = TIM8_CR2_MMS2_Values<TIM8::CR2, 20, 4, ReadWriteMode, TIM8CR2Base> ;
    using OIS6 = TIM8_CR2_OIS6_Values<TIM8::CR2, 18, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS5 = TIM8_CR2_OIS5_Values<TIM8::CR2, 16, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS4N = TIM8_CR2_OIS4N_Values<TIM8::CR2, 15, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS4 = TIM8_CR2_OIS4_Values<TIM8::CR2, 14, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS3N = TIM8_CR2_OIS3N_Values<TIM8::CR2, 13, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS3 = TIM8_CR2_OIS3_Values<TIM8::CR2, 12, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS2N = TIM8_CR2_OIS2N_Values<TIM8::CR2, 11, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS2 = TIM8_CR2_OIS2_Values<TIM8::CR2, 10, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS1N = TIM8_CR2_OIS1N_Values<TIM8::CR2, 9, 1, ReadWriteMode, TIM8CR2Base> ;
    using OIS1 = TIM8_CR2_OIS1_Values<TIM8::CR2, 8, 1, ReadWriteMode, TIM8CR2Base> ;
    using TI1S = TIM8_CR2_TI1S_Values<TIM8::CR2, 7, 1, ReadWriteMode, TIM8CR2Base> ;
    using MMS = TIM8_CR2_MMS_Values<TIM8::CR2, 4, 3, ReadWriteMode, TIM8CR2Base> ;
    using CCDS = TIM8_CR2_CCDS_Values<TIM8::CR2, 3, 1, ReadWriteMode, TIM8CR2Base> ;
    using CCUS = TIM8_CR2_CCUS_Values<TIM8::CR2, 2, 1, ReadWriteMode, TIM8CR2Base> ;
    using CCPC = TIM8_CR2_CCPC_Values<TIM8::CR2, 0, 1, ReadWriteMode, TIM8CR2Base> ;
    using FieldValues = TIM8_CR2_CCPC_Values<TIM8::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40013404, 32, ReadWriteMode, TIM8CR2Base, T...> ;

  struct TIM8SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40013408, 32, ReadWriteMode>
  {
    using SMSPS = TIM8_SMCR_SMSPS_Values<TIM8::SMCR, 25, 1, ReadWriteMode, TIM8SMCRBase> ;
    using SMSPE = TIM8_SMCR_SMSPE_Values<TIM8::SMCR, 24, 1, ReadWriteMode, TIM8SMCRBase> ;
    using TS_4_3 = TIM8_SMCR_TS_4_3_Values<TIM8::SMCR, 20, 2, ReadWriteMode, TIM8SMCRBase> ;
    using SMS_3 = TIM8_SMCR_SMS_3_Values<TIM8::SMCR, 16, 1, ReadWriteMode, TIM8SMCRBase> ;
    using ETP = TIM8_SMCR_ETP_Values<TIM8::SMCR, 15, 1, ReadWriteMode, TIM8SMCRBase> ;
    using ECE = TIM8_SMCR_ECE_Values<TIM8::SMCR, 14, 1, ReadWriteMode, TIM8SMCRBase> ;
    using ETPS = TIM8_SMCR_ETPS_Values<TIM8::SMCR, 12, 2, ReadWriteMode, TIM8SMCRBase> ;
    using ETF = TIM8_SMCR_ETF_Values<TIM8::SMCR, 8, 4, ReadWriteMode, TIM8SMCRBase> ;
    using MSM = TIM8_SMCR_MSM_Values<TIM8::SMCR, 7, 1, ReadWriteMode, TIM8SMCRBase> ;
    using TS = TIM8_SMCR_TS_Values<TIM8::SMCR, 4, 3, ReadWriteMode, TIM8SMCRBase> ;
    using OCCS = TIM8_SMCR_OCCS_Values<TIM8::SMCR, 3, 1, ReadWriteMode, TIM8SMCRBase> ;
    using SMS = TIM8_SMCR_SMS_Values<TIM8::SMCR, 0, 3, ReadWriteMode, TIM8SMCRBase> ;
    using FieldValues = TIM8_SMCR_SMS_Values<TIM8::SMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40013408, 32, ReadWriteMode, TIM8SMCRBase, T...> ;

  struct TIM8DIERBase {} ;

  struct DIER : public RegisterBase<0x4001340C, 32, ReadWriteMode>
  {
    using TERRIE = TIM8_DIER_TERRIE_Values<TIM8::DIER, 23, 1, ReadWriteMode, TIM8DIERBase> ;
    using IERRIE = TIM8_DIER_IERRIE_Values<TIM8::DIER, 22, 1, ReadWriteMode, TIM8DIERBase> ;
    using DIRIE = TIM8_DIER_DIRIE_Values<TIM8::DIER, 21, 1, ReadWriteMode, TIM8DIERBase> ;
    using IDXIE = TIM8_DIER_IDXIE_Values<TIM8::DIER, 20, 1, ReadWriteMode, TIM8DIERBase> ;
    using TDE = TIM8_DIER_TDE_Values<TIM8::DIER, 14, 1, ReadWriteMode, TIM8DIERBase> ;
    using COMDE = TIM8_DIER_COMDE_Values<TIM8::DIER, 13, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC4DE = TIM8_DIER_CC4DE_Values<TIM8::DIER, 12, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC3DE = TIM8_DIER_CC3DE_Values<TIM8::DIER, 11, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC2DE = TIM8_DIER_CC2DE_Values<TIM8::DIER, 10, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC1DE = TIM8_DIER_CC1DE_Values<TIM8::DIER, 9, 1, ReadWriteMode, TIM8DIERBase> ;
    using UDE = TIM8_DIER_UDE_Values<TIM8::DIER, 8, 1, ReadWriteMode, TIM8DIERBase> ;
    using TIE = TIM8_DIER_TIE_Values<TIM8::DIER, 6, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC4IE = TIM8_DIER_CC4IE_Values<TIM8::DIER, 4, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC3IE = TIM8_DIER_CC3IE_Values<TIM8::DIER, 3, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC2IE = TIM8_DIER_CC2IE_Values<TIM8::DIER, 2, 1, ReadWriteMode, TIM8DIERBase> ;
    using CC1IE = TIM8_DIER_CC1IE_Values<TIM8::DIER, 1, 1, ReadWriteMode, TIM8DIERBase> ;
    using UIE = TIM8_DIER_UIE_Values<TIM8::DIER, 0, 1, ReadWriteMode, TIM8DIERBase> ;
    using BIE = TIM8_DIER_BIE_Values<TIM8::DIER, 7, 1, ReadWriteMode, TIM8DIERBase> ;
    using COMIE = TIM8_DIER_COMIE_Values<TIM8::DIER, 5, 1, ReadWriteMode, TIM8DIERBase> ;
    using FieldValues = TIM8_DIER_COMIE_Values<TIM8::DIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4001340C, 32, ReadWriteMode, TIM8DIERBase, T...> ;

  struct TIM8SRBase {} ;

  struct SR : public RegisterBase<0x40013410, 32, ReadWriteMode>
  {
    using TERRF = TIM8_SR_TERRF_Values<TIM8::SR, 23, 1, ReadWriteMode, TIM8SRBase> ;
    using IERRF = TIM8_SR_IERRF_Values<TIM8::SR, 22, 1, ReadWriteMode, TIM8SRBase> ;
    using DIRF = TIM8_SR_DIRF_Values<TIM8::SR, 21, 1, ReadWriteMode, TIM8SRBase> ;
    using IDXF = TIM8_SR_IDXF_Values<TIM8::SR, 20, 1, ReadWriteMode, TIM8SRBase> ;
    using CC6IF = TIM8_SR_CC6IF_Values<TIM8::SR, 17, 1, ReadWriteMode, TIM8SRBase> ;
    using CC5IF = TIM8_SR_CC5IF_Values<TIM8::SR, 16, 1, ReadWriteMode, TIM8SRBase> ;
    using SBIF = TIM8_SR_SBIF_Values<TIM8::SR, 13, 1, ReadWriteMode, TIM8SRBase> ;
    using CC4OF = TIM8_SR_CC4OF_Values<TIM8::SR, 12, 1, ReadWriteMode, TIM8SRBase> ;
    using CC3OF = TIM8_SR_CC3OF_Values<TIM8::SR, 11, 1, ReadWriteMode, TIM8SRBase> ;
    using CC2OF = TIM8_SR_CC2OF_Values<TIM8::SR, 10, 1, ReadWriteMode, TIM8SRBase> ;
    using CC1OF = TIM8_SR_CC1OF_Values<TIM8::SR, 9, 1, ReadWriteMode, TIM8SRBase> ;
    using B2IF = TIM8_SR_B2IF_Values<TIM8::SR, 8, 1, ReadWriteMode, TIM8SRBase> ;
    using BIF = TIM8_SR_BIF_Values<TIM8::SR, 7, 1, ReadWriteMode, TIM8SRBase> ;
    using TIF = TIM8_SR_TIF_Values<TIM8::SR, 6, 1, ReadWriteMode, TIM8SRBase> ;
    using COMIF = TIM8_SR_COMIF_Values<TIM8::SR, 5, 1, ReadWriteMode, TIM8SRBase> ;
    using CC4IF = TIM8_SR_CC4IF_Values<TIM8::SR, 4, 1, ReadWriteMode, TIM8SRBase> ;
    using CC3IF = TIM8_SR_CC3IF_Values<TIM8::SR, 3, 1, ReadWriteMode, TIM8SRBase> ;
    using CC2IF = TIM8_SR_CC2IF_Values<TIM8::SR, 2, 1, ReadWriteMode, TIM8SRBase> ;
    using CC1IF = TIM8_SR_CC1IF_Values<TIM8::SR, 1, 1, ReadWriteMode, TIM8SRBase> ;
    using UIF = TIM8_SR_UIF_Values<TIM8::SR, 0, 1, ReadWriteMode, TIM8SRBase> ;
    using FieldValues = TIM8_SR_UIF_Values<TIM8::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40013410, 32, ReadWriteMode, TIM8SRBase, T...> ;

  struct TIM8EGRBase {} ;

  struct EGR : public RegisterBase<0x40013414, 32, WriteMode>
  {
    using B2G = TIM8_EGR_B2G_Values<TIM8::EGR, 8, 1, WriteMode, TIM8EGRBase> ;
    using BG = TIM8_EGR_BG_Values<TIM8::EGR, 7, 1, WriteMode, TIM8EGRBase> ;
    using TG = TIM8_EGR_TG_Values<TIM8::EGR, 6, 1, WriteMode, TIM8EGRBase> ;
    using COMG = TIM8_EGR_COMG_Values<TIM8::EGR, 5, 1, WriteMode, TIM8EGRBase> ;
    using CC4G = TIM8_EGR_CC4G_Values<TIM8::EGR, 4, 1, WriteMode, TIM8EGRBase> ;
    using CC3G = TIM8_EGR_CC3G_Values<TIM8::EGR, 3, 1, WriteMode, TIM8EGRBase> ;
    using CC2G = TIM8_EGR_CC2G_Values<TIM8::EGR, 2, 1, WriteMode, TIM8EGRBase> ;
    using CC1G = TIM8_EGR_CC1G_Values<TIM8::EGR, 1, 1, WriteMode, TIM8EGRBase> ;
    using UG = TIM8_EGR_UG_Values<TIM8::EGR, 0, 1, WriteMode, TIM8EGRBase> ;
    using FieldValues = TIM8_EGR_UG_Values<TIM8::EGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40013414, 32, WriteMode, TIM8EGRBase, T...> ;

  struct TIM8CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40013418, 32, ReadWriteMode>
  {
    using OC2M_3 = TIM8_CCMR1_Output_OC2M_3_Values<TIM8::CCMR1_Output, 24, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1M_3 = TIM8_CCMR1_Output_OC1M_3_Values<TIM8::CCMR1_Output, 16, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC2CE = TIM8_CCMR1_Output_OC2CE_Values<TIM8::CCMR1_Output, 15, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC2M = TIM8_CCMR1_Output_OC2M_Values<TIM8::CCMR1_Output, 12, 3, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC2PE = TIM8_CCMR1_Output_OC2PE_Values<TIM8::CCMR1_Output, 11, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC2FE = TIM8_CCMR1_Output_OC2FE_Values<TIM8::CCMR1_Output, 10, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using CC2S = TIM8_CCMR1_Output_CC2S_Values<TIM8::CCMR1_Output, 8, 2, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1CE = TIM8_CCMR1_Output_OC1CE_Values<TIM8::CCMR1_Output, 7, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1M = TIM8_CCMR1_Output_OC1M_Values<TIM8::CCMR1_Output, 4, 3, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1PE = TIM8_CCMR1_Output_OC1PE_Values<TIM8::CCMR1_Output, 3, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using OC1FE = TIM8_CCMR1_Output_OC1FE_Values<TIM8::CCMR1_Output, 2, 1, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using CC1S = TIM8_CCMR1_Output_CC1S_Values<TIM8::CCMR1_Output, 0, 2, ReadWriteMode, TIM8CCMR1_OutputBase> ;
    using FieldValues = TIM8_CCMR1_Output_CC1S_Values<TIM8::CCMR1_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40013418, 32, ReadWriteMode, TIM8CCMR1_OutputBase, T...> ;

  struct TIM8CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40013418, 32, ReadWriteMode>
  {
    using IC2F = TIM8_CCMR1_Input_IC2F_Values<TIM8::CCMR1_Input, 12, 4, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using IC2PSC = TIM8_CCMR1_Input_IC2PSC_Values<TIM8::CCMR1_Input, 10, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using CC2S = TIM8_CCMR1_Input_CC2S_Values<TIM8::CCMR1_Input, 8, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using IC1F = TIM8_CCMR1_Input_IC1F_Values<TIM8::CCMR1_Input, 4, 4, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using ICPCS = TIM8_CCMR1_Input_ICPCS_Values<TIM8::CCMR1_Input, 2, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using CC1S = TIM8_CCMR1_Input_CC1S_Values<TIM8::CCMR1_Input, 0, 2, ReadWriteMode, TIM8CCMR1_InputBase> ;
    using FieldValues = TIM8_CCMR1_Input_CC1S_Values<TIM8::CCMR1_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40013418, 32, ReadWriteMode, TIM8CCMR1_InputBase, T...> ;

  struct TIM8CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4001341C, 32, ReadWriteMode>
  {
    using OC4M_3 = TIM8_CCMR2_Output_OC4M_3_Values<TIM8::CCMR2_Output, 24, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3M_3 = TIM8_CCMR2_Output_OC3M_3_Values<TIM8::CCMR2_Output, 16, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC4CE = TIM8_CCMR2_Output_OC4CE_Values<TIM8::CCMR2_Output, 15, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC4M = TIM8_CCMR2_Output_OC4M_Values<TIM8::CCMR2_Output, 12, 3, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC4PE = TIM8_CCMR2_Output_OC4PE_Values<TIM8::CCMR2_Output, 11, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC4FE = TIM8_CCMR2_Output_OC4FE_Values<TIM8::CCMR2_Output, 10, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using CC4S = TIM8_CCMR2_Output_CC4S_Values<TIM8::CCMR2_Output, 8, 2, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3CE = TIM8_CCMR2_Output_OC3CE_Values<TIM8::CCMR2_Output, 7, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3M = TIM8_CCMR2_Output_OC3M_Values<TIM8::CCMR2_Output, 4, 3, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3PE = TIM8_CCMR2_Output_OC3PE_Values<TIM8::CCMR2_Output, 3, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using OC3FE = TIM8_CCMR2_Output_OC3FE_Values<TIM8::CCMR2_Output, 2, 1, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using CC3S = TIM8_CCMR2_Output_CC3S_Values<TIM8::CCMR2_Output, 0, 2, ReadWriteMode, TIM8CCMR2_OutputBase> ;
    using FieldValues = TIM8_CCMR2_Output_CC3S_Values<TIM8::CCMR2_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4001341C, 32, ReadWriteMode, TIM8CCMR2_OutputBase, T...> ;

  struct TIM8CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4001341C, 32, ReadWriteMode>
  {
    using IC4F = TIM8_CCMR2_Input_IC4F_Values<TIM8::CCMR2_Input, 12, 4, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using IC4PSC = TIM8_CCMR2_Input_IC4PSC_Values<TIM8::CCMR2_Input, 10, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using CC4S = TIM8_CCMR2_Input_CC4S_Values<TIM8::CCMR2_Input, 8, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using IC3F = TIM8_CCMR2_Input_IC3F_Values<TIM8::CCMR2_Input, 4, 4, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using IC3PSC = TIM8_CCMR2_Input_IC3PSC_Values<TIM8::CCMR2_Input, 2, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using CC3S = TIM8_CCMR2_Input_CC3S_Values<TIM8::CCMR2_Input, 0, 2, ReadWriteMode, TIM8CCMR2_InputBase> ;
    using FieldValues = TIM8_CCMR2_Input_CC3S_Values<TIM8::CCMR2_Input, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4001341C, 32, ReadWriteMode, TIM8CCMR2_InputBase, T...> ;

  struct TIM8CCERBase {} ;

  struct CCER : public RegisterBase<0x40013420, 32, ReadWriteMode>
  {
    using CC6P = TIM8_CCER_CC6P_Values<TIM8::CCER, 21, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC6E = TIM8_CCER_CC6E_Values<TIM8::CCER, 20, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC5P = TIM8_CCER_CC5P_Values<TIM8::CCER, 17, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC5E = TIM8_CCER_CC5E_Values<TIM8::CCER, 16, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC4NP = TIM8_CCER_CC4NP_Values<TIM8::CCER, 15, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC4NE = TIM8_CCER_CC4NE_Values<TIM8::CCER, 14, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC4P = TIM8_CCER_CC4P_Values<TIM8::CCER, 13, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC4E = TIM8_CCER_CC4E_Values<TIM8::CCER, 12, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3NP = TIM8_CCER_CC3NP_Values<TIM8::CCER, 11, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3NE = TIM8_CCER_CC3NE_Values<TIM8::CCER, 10, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3P = TIM8_CCER_CC3P_Values<TIM8::CCER, 9, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC3E = TIM8_CCER_CC3E_Values<TIM8::CCER, 8, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2NP = TIM8_CCER_CC2NP_Values<TIM8::CCER, 7, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2NE = TIM8_CCER_CC2NE_Values<TIM8::CCER, 6, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2P = TIM8_CCER_CC2P_Values<TIM8::CCER, 5, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC2E = TIM8_CCER_CC2E_Values<TIM8::CCER, 4, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1NP = TIM8_CCER_CC1NP_Values<TIM8::CCER, 3, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1NE = TIM8_CCER_CC1NE_Values<TIM8::CCER, 2, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1P = TIM8_CCER_CC1P_Values<TIM8::CCER, 1, 1, ReadWriteMode, TIM8CCERBase> ;
    using CC1E = TIM8_CCER_CC1E_Values<TIM8::CCER, 0, 1, ReadWriteMode, TIM8CCERBase> ;
    using FieldValues = TIM8_CCER_CC1E_Values<TIM8::CCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40013420, 32, ReadWriteMode, TIM8CCERBase, T...> ;

  struct TIM8CNTBase {} ;

  struct CNT : public RegisterBase<0x40013424, 32, ReadWriteMode>
  {
    using UIFCPY = TIM8_CNT_UIFCPY_Values<TIM8::CNT, 31, 1, ReadMode, TIM8CNTBase> ;
    using CNTField = TIM8_CNT_CNT_Values<TIM8::CNT, 0, 16, ReadWriteMode, TIM8CNTBase> ;
    using FieldValues = TIM8_CNT_CNT_Values<TIM8::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40013424, 32, ReadWriteMode, TIM8CNTBase, T...> ;

  struct TIM8PSCBase {} ;

  struct PSC : public RegisterBase<0x40013428, 32, ReadWriteMode>
  {
    using PSCField = TIM8_PSC_PSC_Values<TIM8::PSC, 0, 16, ReadWriteMode, TIM8PSCBase> ;
    using FieldValues = TIM8_PSC_PSC_Values<TIM8::PSC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40013428, 32, ReadWriteMode, TIM8PSCBase, T...> ;

  struct TIM8ARRBase {} ;

  struct ARR : public RegisterBase<0x4001342C, 32, ReadWriteMode>
  {
    using ARRField = TIM8_ARR_ARR_Values<TIM8::ARR, 0, 16, ReadWriteMode, TIM8ARRBase> ;
    using FieldValues = TIM8_ARR_ARR_Values<TIM8::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4001342C, 32, ReadWriteMode, TIM8ARRBase, T...> ;

  struct TIM8RCRBase {} ;

  struct RCR : public RegisterBase<0x40013430, 32, ReadWriteMode>
  {
    using REP = TIM8_RCR_REP_Values<TIM8::RCR, 0, 16, ReadWriteMode, TIM8RCRBase> ;
    using FieldValues = TIM8_RCR_REP_Values<TIM8::RCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCRPack  = Register<0x40013430, 32, ReadWriteMode, TIM8RCRBase, T...> ;

  struct TIM8CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40013434, 32, ReadWriteMode>
  {
    using CCR1Field = TIM8_CCR1_CCR1_Values<TIM8::CCR1, 0, 16, ReadWriteMode, TIM8CCR1Base> ;
    using FieldValues = TIM8_CCR1_CCR1_Values<TIM8::CCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40013434, 32, ReadWriteMode, TIM8CCR1Base, T...> ;

  struct TIM8CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40013438, 32, ReadWriteMode>
  {
    using CCR2Field = TIM8_CCR2_CCR2_Values<TIM8::CCR2, 0, 16, ReadWriteMode, TIM8CCR2Base> ;
    using FieldValues = TIM8_CCR2_CCR2_Values<TIM8::CCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40013438, 32, ReadWriteMode, TIM8CCR2Base, T...> ;

  struct TIM8CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4001343C, 32, ReadWriteMode>
  {
    using CCR3Field = TIM8_CCR3_CCR3_Values<TIM8::CCR3, 0, 16, ReadWriteMode, TIM8CCR3Base> ;
    using FieldValues = TIM8_CCR3_CCR3_Values<TIM8::CCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4001343C, 32, ReadWriteMode, TIM8CCR3Base, T...> ;

  struct TIM8CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40013440, 32, ReadWriteMode>
  {
    using CCR4Field = TIM8_CCR4_CCR4_Values<TIM8::CCR4, 0, 16, ReadWriteMode, TIM8CCR4Base> ;
    using FieldValues = TIM8_CCR4_CCR4_Values<TIM8::CCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40013440, 32, ReadWriteMode, TIM8CCR4Base, T...> ;

  struct TIM8BDTRBase {} ;

  struct BDTR : public RegisterBase<0x40013444, 32, ReadWriteMode>
  {
    using BK2ID = TIM8_BDTR_BK2ID_Values<TIM8::BDTR, 29, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BKBID = TIM8_BDTR_BKBID_Values<TIM8::BDTR, 28, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BK2DSRM = TIM8_BDTR_BK2DSRM_Values<TIM8::BDTR, 27, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BKDSRM = TIM8_BDTR_BKDSRM_Values<TIM8::BDTR, 26, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BK2P = TIM8_BDTR_BK2P_Values<TIM8::BDTR, 25, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BK2E = TIM8_BDTR_BK2E_Values<TIM8::BDTR, 24, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BK2F = TIM8_BDTR_BK2F_Values<TIM8::BDTR, 20, 4, ReadWriteMode, TIM8BDTRBase> ;
    using BKF = TIM8_BDTR_BKF_Values<TIM8::BDTR, 16, 4, ReadWriteMode, TIM8BDTRBase> ;
    using MOE = TIM8_BDTR_MOE_Values<TIM8::BDTR, 15, 1, ReadWriteMode, TIM8BDTRBase> ;
    using AOE = TIM8_BDTR_AOE_Values<TIM8::BDTR, 14, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BKP = TIM8_BDTR_BKP_Values<TIM8::BDTR, 13, 1, ReadWriteMode, TIM8BDTRBase> ;
    using BKE = TIM8_BDTR_BKE_Values<TIM8::BDTR, 12, 1, ReadWriteMode, TIM8BDTRBase> ;
    using OSSR = TIM8_BDTR_OSSR_Values<TIM8::BDTR, 11, 1, ReadWriteMode, TIM8BDTRBase> ;
    using OSSI = TIM8_BDTR_OSSI_Values<TIM8::BDTR, 10, 1, ReadWriteMode, TIM8BDTRBase> ;
    using LOCK = TIM8_BDTR_LOCK_Values<TIM8::BDTR, 8, 2, ReadWriteMode, TIM8BDTRBase> ;
    using DTG = TIM8_BDTR_DTG_Values<TIM8::BDTR, 0, 8, ReadWriteMode, TIM8BDTRBase> ;
    using FieldValues = TIM8_BDTR_DTG_Values<TIM8::BDTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTRPack  = Register<0x40013444, 32, ReadWriteMode, TIM8BDTRBase, T...> ;

  struct TIM8CCR5Base {} ;

  struct CCR5 : public RegisterBase<0x40013448, 32, ReadWriteMode>
  {
    using CCR5Field = TIM8_CCR5_CCR5_Values<TIM8::CCR5, 0, 16, ReadWriteMode, TIM8CCR5Base> ;
    using GC5C1 = TIM8_CCR5_GC5C1_Values<TIM8::CCR5, 29, 1, ReadWriteMode, TIM8CCR5Base> ;
    using GC5C2 = TIM8_CCR5_GC5C2_Values<TIM8::CCR5, 30, 1, ReadWriteMode, TIM8CCR5Base> ;
    using GC5C3 = TIM8_CCR5_GC5C3_Values<TIM8::CCR5, 31, 1, ReadWriteMode, TIM8CCR5Base> ;
    using FieldValues = TIM8_CCR5_GC5C3_Values<TIM8::CCR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR5Pack  = Register<0x40013448, 32, ReadWriteMode, TIM8CCR5Base, T...> ;

  struct TIM8CCR6Base {} ;

  struct CCR6 : public RegisterBase<0x4001344C, 32, ReadWriteMode>
  {
    using CCR6Field = TIM8_CCR6_CCR6_Values<TIM8::CCR6, 0, 16, ReadWriteMode, TIM8CCR6Base> ;
    using FieldValues = TIM8_CCR6_CCR6_Values<TIM8::CCR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCR6Pack  = Register<0x4001344C, 32, ReadWriteMode, TIM8CCR6Base, T...> ;

  struct TIM8CCMR3_OutputBase {} ;

  struct CCMR3_Output : public RegisterBase<0x40013450, 32, ReadWriteMode>
  {
    using OC6M_bit3 = TIM8_CCMR3_Output_OC6M_bit3_Values<TIM8::CCMR3_Output, 24, 1, ReadWriteMode, TIM8CCMR3_OutputBase> ;
    using OC5M_bit3 = TIM8_CCMR3_Output_OC5M_bit3_Values<TIM8::CCMR3_Output, 16, 3, ReadWriteMode, TIM8CCMR3_OutputBase> ;
    using OC6CE = TIM8_CCMR3_Output_OC6CE_Values<TIM8::CCMR3_Output, 15, 1, ReadWriteMode, TIM8CCMR3_OutputBase> ;
    using OC6M = TIM8_CCMR3_Output_OC6M_Values<TIM8::CCMR3_Output, 12, 3, ReadWriteMode, TIM8CCMR3_OutputBase> ;
    using OC6PE = TIM8_CCMR3_Output_OC6PE_Values<TIM8::CCMR3_Output, 11, 1, ReadWriteMode, TIM8CCMR3_OutputBase> ;
    using OC6FE = TIM8_CCMR3_Output_OC6FE_Values<TIM8::CCMR3_Output, 10, 1, ReadWriteMode, TIM8CCMR3_OutputBase> ;
    using OC5CE = TIM8_CCMR3_Output_OC5CE_Values<TIM8::CCMR3_Output, 7, 1, ReadWriteMode, TIM8CCMR3_OutputBase> ;
    using OC5M = TIM8_CCMR3_Output_OC5M_Values<TIM8::CCMR3_Output, 4, 3, ReadWriteMode, TIM8CCMR3_OutputBase> ;
    using OC5PE = TIM8_CCMR3_Output_OC5PE_Values<TIM8::CCMR3_Output, 3, 1, ReadWriteMode, TIM8CCMR3_OutputBase> ;
    using OC5FE = TIM8_CCMR3_Output_OC5FE_Values<TIM8::CCMR3_Output, 2, 1, ReadWriteMode, TIM8CCMR3_OutputBase> ;
    using FieldValues = TIM8_CCMR3_Output_OC5FE_Values<TIM8::CCMR3_Output, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCMR3_OutputPack  = Register<0x40013450, 32, ReadWriteMode, TIM8CCMR3_OutputBase, T...> ;

  struct TIM8DTR2Base {} ;

  struct DTR2 : public RegisterBase<0x40013454, 32, ReadWriteMode>
  {
    using DTPE = TIM8_DTR2_DTPE_Values<TIM8::DTR2, 17, 1, ReadWriteMode, TIM8DTR2Base> ;
    using DTAE = TIM8_DTR2_DTAE_Values<TIM8::DTR2, 16, 1, ReadWriteMode, TIM8DTR2Base> ;
    using DTGF = TIM8_DTR2_DTGF_Values<TIM8::DTR2, 0, 8, ReadWriteMode, TIM8DTR2Base> ;
    using FieldValues = TIM8_DTR2_DTGF_Values<TIM8::DTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DTR2Pack  = Register<0x40013454, 32, ReadWriteMode, TIM8DTR2Base, T...> ;

  struct TIM8ECRBase {} ;

  struct ECR : public RegisterBase<0x40013458, 32, ReadWriteMode>
  {
    using IE = TIM8_ECR_IE_Values<TIM8::ECR, 0, 1, ReadWriteMode, TIM8ECRBase> ;
    using IDIR = TIM8_ECR_IDIR_Values<TIM8::ECR, 1, 2, ReadWriteMode, TIM8ECRBase> ;
    using IBLK = TIM8_ECR_IBLK_Values<TIM8::ECR, 3, 2, ReadWriteMode, TIM8ECRBase> ;
    using FIDX = TIM8_ECR_FIDX_Values<TIM8::ECR, 5, 1, ReadWriteMode, TIM8ECRBase> ;
    using IPOS = TIM8_ECR_IPOS_Values<TIM8::ECR, 6, 2, ReadWriteMode, TIM8ECRBase> ;
    using PW = TIM8_ECR_PW_Values<TIM8::ECR, 16, 8, ReadWriteMode, TIM8ECRBase> ;
    using PWPRSC = TIM8_ECR_PWPRSC_Values<TIM8::ECR, 24, 3, ReadWriteMode, TIM8ECRBase> ;
    using FieldValues = TIM8_ECR_PWPRSC_Values<TIM8::ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECRPack  = Register<0x40013458, 32, ReadWriteMode, TIM8ECRBase, T...> ;

  struct TIM8TISELBase {} ;

  struct TISEL : public RegisterBase<0x4001345C, 32, ReadWriteMode>
  {
    using TI1SEL = TIM8_TISEL_TI1SEL_Values<TIM8::TISEL, 0, 4, ReadWriteMode, TIM8TISELBase> ;
    using TI2SEL = TIM8_TISEL_TI2SEL_Values<TIM8::TISEL, 8, 4, ReadWriteMode, TIM8TISELBase> ;
    using TI3SEL = TIM8_TISEL_TI3SEL_Values<TIM8::TISEL, 16, 4, ReadWriteMode, TIM8TISELBase> ;
    using TI4SEL = TIM8_TISEL_TI4SEL_Values<TIM8::TISEL, 24, 4, ReadWriteMode, TIM8TISELBase> ;
    using FieldValues = TIM8_TISEL_TI4SEL_Values<TIM8::TISEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TISELPack  = Register<0x4001345C, 32, ReadWriteMode, TIM8TISELBase, T...> ;

  struct TIM8AF1Base {} ;

  struct AF1 : public RegisterBase<0x40013460, 32, ReadWriteMode>
  {
    using ETRSEL = TIM8_AF1_ETRSEL_Values<TIM8::AF1, 14, 4, ReadWriteMode, TIM8AF1Base> ;
    using BKCMP4P = TIM8_AF1_BKCMP4P_Values<TIM8::AF1, 13, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKCMP3P = TIM8_AF1_BKCMP3P_Values<TIM8::AF1, 12, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKCMP2P = TIM8_AF1_BKCMP2P_Values<TIM8::AF1, 11, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKCMP1P = TIM8_AF1_BKCMP1P_Values<TIM8::AF1, 10, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKINP = TIM8_AF1_BKINP_Values<TIM8::AF1, 9, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKCMP7E = TIM8_AF1_BKCMP7E_Values<TIM8::AF1, 7, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKCMP6E = TIM8_AF1_BKCMP6E_Values<TIM8::AF1, 6, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKCMP5E = TIM8_AF1_BKCMP5E_Values<TIM8::AF1, 5, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKCMP4E = TIM8_AF1_BKCMP4E_Values<TIM8::AF1, 4, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKCMP3E = TIM8_AF1_BKCMP3E_Values<TIM8::AF1, 3, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKCMP2E = TIM8_AF1_BKCMP2E_Values<TIM8::AF1, 2, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKCMP1E = TIM8_AF1_BKCMP1E_Values<TIM8::AF1, 1, 1, ReadWriteMode, TIM8AF1Base> ;
    using BKINE = TIM8_AF1_BKINE_Values<TIM8::AF1, 0, 1, ReadWriteMode, TIM8AF1Base> ;
    using FieldValues = TIM8_AF1_BKINE_Values<TIM8::AF1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF1Pack  = Register<0x40013460, 32, ReadWriteMode, TIM8AF1Base, T...> ;

  struct TIM8AF2Base {} ;

  struct AF2 : public RegisterBase<0x40013464, 32, ReadWriteMode>
  {
    using OCRSEL = TIM8_AF2_OCRSEL_Values<TIM8::AF2, 16, 3, ReadWriteMode, TIM8AF2Base> ;
    using BK2CMP4P = TIM8_AF2_BK2CMP4P_Values<TIM8::AF2, 13, 1, ReadWriteMode, TIM8AF2Base> ;
    using BK2CMP3P = TIM8_AF2_BK2CMP3P_Values<TIM8::AF2, 12, 1, ReadWriteMode, TIM8AF2Base> ;
    using BK2CMP2P = TIM8_AF2_BK2CMP2P_Values<TIM8::AF2, 11, 1, ReadWriteMode, TIM8AF2Base> ;
    using BK2CMP1P = TIM8_AF2_BK2CMP1P_Values<TIM8::AF2, 10, 1, ReadWriteMode, TIM8AF2Base> ;
    using BK2INP = TIM8_AF2_BK2INP_Values<TIM8::AF2, 9, 1, ReadWriteMode, TIM8AF2Base> ;
    using BK2CMP7E = TIM8_AF2_BK2CMP7E_Values<TIM8::AF2, 7, 1, ReadWriteMode, TIM8AF2Base> ;
    using BK2CMP6E = TIM8_AF2_BK2CMP6E_Values<TIM8::AF2, 6, 1, ReadWriteMode, TIM8AF2Base> ;
    using BK2CMP5E = TIM8_AF2_BK2CMP5E_Values<TIM8::AF2, 5, 1, ReadWriteMode, TIM8AF2Base> ;
    using BK2CMP4E = TIM8_AF2_BK2CMP4E_Values<TIM8::AF2, 4, 1, ReadWriteMode, TIM8AF2Base> ;
    using BK2CMP3E = TIM8_AF2_BK2CMP3E_Values<TIM8::AF2, 3, 1, ReadWriteMode, TIM8AF2Base> ;
    using BK2CMP2E = TIM8_AF2_BK2CMP2E_Values<TIM8::AF2, 2, 1, ReadWriteMode, TIM8AF2Base> ;
    using BK2CMP1E = TIM8_AF2_BK2CMP1E_Values<TIM8::AF2, 1, 1, ReadWriteMode, TIM8AF2Base> ;
    using BKINE = TIM8_AF2_BKINE_Values<TIM8::AF2, 0, 1, ReadWriteMode, TIM8AF2Base> ;
    using FieldValues = TIM8_AF2_BKINE_Values<TIM8::AF2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AF2Pack  = Register<0x40013464, 32, ReadWriteMode, TIM8AF2Base, T...> ;

  struct TIM8DCRBase {} ;

  struct DCR : public RegisterBase<0x400137DC, 32, ReadWriteMode>
  {
    using DBL = TIM8_DCR_DBL_Values<TIM8::DCR, 8, 5, ReadWriteMode, TIM8DCRBase> ;
    using DBA = TIM8_DCR_DBA_Values<TIM8::DCR, 0, 5, ReadWriteMode, TIM8DCRBase> ;
    using FieldValues = TIM8_DCR_DBA_Values<TIM8::DCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x400137DC, 32, ReadWriteMode, TIM8DCRBase, T...> ;

  struct TIM8DMARBase {} ;

  struct DMAR : public RegisterBase<0x400137E0, 32, ReadWriteMode>
  {
    using DMAB = TIM8_DMAR_DMAB_Values<TIM8::DMAR, 0, 32, ReadWriteMode, TIM8DMARBase> ;
    using FieldValues = TIM8_DMAR_DMAB_Values<TIM8::DMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x400137E0, 32, ReadWriteMode, TIM8DMARBase, T...> ;

} ;

