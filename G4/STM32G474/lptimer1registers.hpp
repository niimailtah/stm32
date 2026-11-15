/*******************************************************************************
* Filename      : lptimer1registers.hpp
*
* Details       : Low power timer. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "lptimer1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct LPTIMER1
{
  struct LPTIMER1ISRBase {} ;

  struct ISR : public RegisterBase<0x40007C00, 32, ReadMode>
  {
    using DOWN = LPTIMER1_ISR_DOWN_Values<LPTIMER1::ISR, 6, 1, ReadMode, LPTIMER1ISRBase> ;
    using UP = LPTIMER1_ISR_UP_Values<LPTIMER1::ISR, 5, 1, ReadMode, LPTIMER1ISRBase> ;
    using ARROK = LPTIMER1_ISR_ARROK_Values<LPTIMER1::ISR, 4, 1, ReadMode, LPTIMER1ISRBase> ;
    using CMPOK = LPTIMER1_ISR_CMPOK_Values<LPTIMER1::ISR, 3, 1, ReadMode, LPTIMER1ISRBase> ;
    using EXTTRIG = LPTIMER1_ISR_EXTTRIG_Values<LPTIMER1::ISR, 2, 1, ReadMode, LPTIMER1ISRBase> ;
    using ARRM = LPTIMER1_ISR_ARRM_Values<LPTIMER1::ISR, 1, 1, ReadMode, LPTIMER1ISRBase> ;
    using CMPM = LPTIMER1_ISR_CMPM_Values<LPTIMER1::ISR, 0, 1, ReadMode, LPTIMER1ISRBase> ;
    using FieldValues = LPTIMER1_ISR_CMPM_Values<LPTIMER1::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40007C00, 32, ReadMode, LPTIMER1ISRBase, T...> ;

  struct LPTIMER1ICRBase {} ;

  struct ICR : public RegisterBase<0x40007C04, 32, WriteMode>
  {
    using DOWNCF = LPTIMER1_ICR_DOWNCF_Values<LPTIMER1::ICR, 6, 1, WriteMode, LPTIMER1ICRBase> ;
    using UPCF = LPTIMER1_ICR_UPCF_Values<LPTIMER1::ICR, 5, 1, WriteMode, LPTIMER1ICRBase> ;
    using ARROKCF = LPTIMER1_ICR_ARROKCF_Values<LPTIMER1::ICR, 4, 1, WriteMode, LPTIMER1ICRBase> ;
    using CMPOKCF = LPTIMER1_ICR_CMPOKCF_Values<LPTIMER1::ICR, 3, 1, WriteMode, LPTIMER1ICRBase> ;
    using EXTTRIGCF = LPTIMER1_ICR_EXTTRIGCF_Values<LPTIMER1::ICR, 2, 1, WriteMode, LPTIMER1ICRBase> ;
    using ARRMCF = LPTIMER1_ICR_ARRMCF_Values<LPTIMER1::ICR, 1, 1, WriteMode, LPTIMER1ICRBase> ;
    using CMPMCF = LPTIMER1_ICR_CMPMCF_Values<LPTIMER1::ICR, 0, 1, WriteMode, LPTIMER1ICRBase> ;
    using FieldValues = LPTIMER1_ICR_CMPMCF_Values<LPTIMER1::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40007C04, 32, WriteMode, LPTIMER1ICRBase, T...> ;

  struct LPTIMER1IERBase {} ;

  struct IER : public RegisterBase<0x40007C08, 32, ReadWriteMode>
  {
    using DOWNIE = LPTIMER1_IER_DOWNIE_Values<LPTIMER1::IER, 6, 1, ReadWriteMode, LPTIMER1IERBase> ;
    using UPIE = LPTIMER1_IER_UPIE_Values<LPTIMER1::IER, 5, 1, ReadWriteMode, LPTIMER1IERBase> ;
    using ARROKIE = LPTIMER1_IER_ARROKIE_Values<LPTIMER1::IER, 4, 1, ReadWriteMode, LPTIMER1IERBase> ;
    using CMPOKIE = LPTIMER1_IER_CMPOKIE_Values<LPTIMER1::IER, 3, 1, ReadWriteMode, LPTIMER1IERBase> ;
    using EXTTRIGIE = LPTIMER1_IER_EXTTRIGIE_Values<LPTIMER1::IER, 2, 1, ReadWriteMode, LPTIMER1IERBase> ;
    using ARRMIE = LPTIMER1_IER_ARRMIE_Values<LPTIMER1::IER, 1, 1, ReadWriteMode, LPTIMER1IERBase> ;
    using CMPMIE = LPTIMER1_IER_CMPMIE_Values<LPTIMER1::IER, 0, 1, ReadWriteMode, LPTIMER1IERBase> ;
    using FieldValues = LPTIMER1_IER_CMPMIE_Values<LPTIMER1::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40007C08, 32, ReadWriteMode, LPTIMER1IERBase, T...> ;

  struct LPTIMER1CFGRBase {} ;

  struct CFGR : public RegisterBase<0x40007C0C, 32, ReadWriteMode>
  {
    using ENC = LPTIMER1_CFGR_ENC_Values<LPTIMER1::CFGR, 24, 1, ReadWriteMode, LPTIMER1CFGRBase> ;
    using COUNTMODE = LPTIMER1_CFGR_COUNTMODE_Values<LPTIMER1::CFGR, 23, 1, ReadWriteMode, LPTIMER1CFGRBase> ;
    using PRELOAD = LPTIMER1_CFGR_PRELOAD_Values<LPTIMER1::CFGR, 22, 1, ReadWriteMode, LPTIMER1CFGRBase> ;
    using WAVPOL = LPTIMER1_CFGR_WAVPOL_Values<LPTIMER1::CFGR, 21, 1, ReadWriteMode, LPTIMER1CFGRBase> ;
    using WAVE = LPTIMER1_CFGR_WAVE_Values<LPTIMER1::CFGR, 20, 1, ReadWriteMode, LPTIMER1CFGRBase> ;
    using TIMOUT = LPTIMER1_CFGR_TIMOUT_Values<LPTIMER1::CFGR, 19, 1, ReadWriteMode, LPTIMER1CFGRBase> ;
    using TRIGEN = LPTIMER1_CFGR_TRIGEN_Values<LPTIMER1::CFGR, 17, 2, ReadWriteMode, LPTIMER1CFGRBase> ;
    using TRIGSEL = LPTIMER1_CFGR_TRIGSEL_Values<LPTIMER1::CFGR, 13, 4, ReadWriteMode, LPTIMER1CFGRBase> ;
    using PRESC = LPTIMER1_CFGR_PRESC_Values<LPTIMER1::CFGR, 9, 3, ReadWriteMode, LPTIMER1CFGRBase> ;
    using TRGFLT = LPTIMER1_CFGR_TRGFLT_Values<LPTIMER1::CFGR, 6, 2, ReadWriteMode, LPTIMER1CFGRBase> ;
    using CKFLT = LPTIMER1_CFGR_CKFLT_Values<LPTIMER1::CFGR, 3, 2, ReadWriteMode, LPTIMER1CFGRBase> ;
    using CKPOL = LPTIMER1_CFGR_CKPOL_Values<LPTIMER1::CFGR, 1, 2, ReadWriteMode, LPTIMER1CFGRBase> ;
    using CKSEL = LPTIMER1_CFGR_CKSEL_Values<LPTIMER1::CFGR, 0, 1, ReadWriteMode, LPTIMER1CFGRBase> ;
    using FieldValues = LPTIMER1_CFGR_CKSEL_Values<LPTIMER1::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x40007C0C, 32, ReadWriteMode, LPTIMER1CFGRBase, T...> ;

  struct LPTIMER1CRBase {} ;

  struct CR : public RegisterBase<0x40007C10, 32, ReadWriteMode>
  {
    using RSTARE = LPTIMER1_CR_RSTARE_Values<LPTIMER1::CR, 4, 1, ReadWriteMode, LPTIMER1CRBase> ;
    using COUNTRST = LPTIMER1_CR_COUNTRST_Values<LPTIMER1::CR, 3, 1, ReadWriteMode, LPTIMER1CRBase> ;
    using CNTSTRT = LPTIMER1_CR_CNTSTRT_Values<LPTIMER1::CR, 2, 1, ReadWriteMode, LPTIMER1CRBase> ;
    using SNGSTRT = LPTIMER1_CR_SNGSTRT_Values<LPTIMER1::CR, 1, 1, ReadWriteMode, LPTIMER1CRBase> ;
    using ENABLE = LPTIMER1_CR_ENABLE_Values<LPTIMER1::CR, 0, 1, ReadWriteMode, LPTIMER1CRBase> ;
    using FieldValues = LPTIMER1_CR_ENABLE_Values<LPTIMER1::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40007C10, 32, ReadWriteMode, LPTIMER1CRBase, T...> ;

  struct LPTIMER1CMPBase {} ;

  struct CMP : public RegisterBase<0x40007C14, 32, ReadWriteMode>
  {
    using CMPField = LPTIMER1_CMP_CMP_Values<LPTIMER1::CMP, 0, 16, ReadWriteMode, LPTIMER1CMPBase> ;
    using FieldValues = LPTIMER1_CMP_CMP_Values<LPTIMER1::CMP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CMPPack  = Register<0x40007C14, 32, ReadWriteMode, LPTIMER1CMPBase, T...> ;

  struct LPTIMER1ARRBase {} ;

  struct ARR : public RegisterBase<0x40007C18, 32, ReadWriteMode>
  {
    using ARRField = LPTIMER1_ARR_ARR_Values<LPTIMER1::ARR, 0, 16, ReadWriteMode, LPTIMER1ARRBase> ;
    using FieldValues = LPTIMER1_ARR_ARR_Values<LPTIMER1::ARR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x40007C18, 32, ReadWriteMode, LPTIMER1ARRBase, T...> ;

  struct LPTIMER1CNTBase {} ;

  struct CNT : public RegisterBase<0x40007C1C, 32, ReadMode>
  {
    using CNTField = LPTIMER1_CNT_CNT_Values<LPTIMER1::CNT, 0, 16, ReadMode, LPTIMER1CNTBase> ;
    using FieldValues = LPTIMER1_CNT_CNT_Values<LPTIMER1::CNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40007C1C, 32, ReadMode, LPTIMER1CNTBase, T...> ;

  struct LPTIMER1ORBase {} ;

  struct OR : public RegisterBase<0x40007C20, 32, ReadWriteMode>
  {
    using IN1 = LPTIMER1_OR_IN1_Values<LPTIMER1::OR, 0, 1, ReadWriteMode, LPTIMER1ORBase> ;
    using IN2 = LPTIMER1_OR_IN2_Values<LPTIMER1::OR, 1, 1, ReadWriteMode, LPTIMER1ORBase> ;
    using IN1_2_1 = LPTIMER1_OR_IN1_2_1_Values<LPTIMER1::OR, 2, 2, ReadWriteMode, LPTIMER1ORBase> ;
    using IN2_2_1 = LPTIMER1_OR_IN2_2_1_Values<LPTIMER1::OR, 4, 2, ReadWriteMode, LPTIMER1ORBase> ;
    using FieldValues = LPTIMER1_OR_IN2_2_1_Values<LPTIMER1::OR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ORPack  = Register<0x40007C20, 32, ReadWriteMode, LPTIMER1ORBase, T...> ;

} ;

