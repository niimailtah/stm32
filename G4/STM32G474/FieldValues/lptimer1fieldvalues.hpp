/*******************************************************************************
* Filename      : lptimer1fieldvalues.hpp
*
* Details       : Enumerations related with LPTIMER1 peripheral. This header
*                 file is auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ISR_DOWN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ISR_DOWN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ISR_DOWN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ISR_UP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ISR_UP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ISR_UP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ISR_ARROK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ISR_ARROK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ISR_ARROK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ISR_CMPOK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ISR_CMPOK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ISR_CMPOK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ISR_EXTTRIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ISR_EXTTRIG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ISR_EXTTRIG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ISR_ARRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ISR_ARRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ISR_ARRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ISR_CMPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ISR_CMPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ISR_CMPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ICR_DOWNCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ICR_DOWNCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ICR_DOWNCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ICR_UPCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ICR_UPCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ICR_UPCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ICR_ARROKCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ICR_ARROKCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ICR_ARROKCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ICR_CMPOKCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ICR_CMPOKCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ICR_CMPOKCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ICR_EXTTRIGCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ICR_EXTTRIGCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ICR_EXTTRIGCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ICR_ARRMCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ICR_ARRMCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ICR_ARRMCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ICR_CMPMCF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_ICR_CMPMCF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_ICR_CMPMCF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_IER_DOWNIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_IER_DOWNIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_IER_DOWNIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_IER_UPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_IER_UPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_IER_UPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_IER_ARROKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_IER_ARROKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_IER_ARROKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_IER_CMPOKIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_IER_CMPOKIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_IER_CMPOKIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_IER_EXTTRIGIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_IER_EXTTRIGIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_IER_EXTTRIGIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_IER_ARRMIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_IER_ARRMIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_IER_ARRMIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_IER_CMPMIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_IER_CMPMIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_IER_CMPMIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_ENC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_ENC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_ENC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_COUNTMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_COUNTMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_COUNTMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_PRELOAD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_PRELOAD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_PRELOAD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_WAVPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_WAVPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_WAVPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_WAVE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_WAVE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_WAVE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_TIMOUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_TIMOUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_TIMOUT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_TRIGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_TRIGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_TRIGEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIMER1_CFGR_TRIGEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIMER1_CFGR_TRIGEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_TRIGSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<LPTIMER1_CFGR_TRIGSEL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_PRESC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_PRESC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_PRESC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIMER1_CFGR_PRESC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIMER1_CFGR_PRESC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<LPTIMER1_CFGR_PRESC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<LPTIMER1_CFGR_PRESC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<LPTIMER1_CFGR_PRESC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<LPTIMER1_CFGR_PRESC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_TRGFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_TRGFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_TRGFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIMER1_CFGR_TRGFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIMER1_CFGR_TRGFLT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_CKFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_CKFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_CKFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIMER1_CFGR_CKFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIMER1_CFGR_CKFLT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_CKPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_CKPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_CKPOL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIMER1_CFGR_CKPOL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIMER1_CFGR_CKPOL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CFGR_CKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CFGR_CKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CFGR_CKSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CR_RSTARE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CR_RSTARE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CR_RSTARE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CR_COUNTRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CR_COUNTRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CR_COUNTRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CR_CNTSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CR_CNTSTRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CR_CNTSTRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CR_SNGSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CR_SNGSTRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CR_SNGSTRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CR_ENABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_CR_ENABLE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_CR_ENABLE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CMP_CMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_ARR_ARR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_CNT_CNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_OR_IN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_OR_IN1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_OR_IN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_OR_IN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_OR_IN2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_OR_IN2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_OR_IN1_2_1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_OR_IN1_2_1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_OR_IN1_2_1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIMER1_OR_IN1_2_1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIMER1_OR_IN1_2_1_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct LPTIMER1_OR_IN2_2_1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<LPTIMER1_OR_IN2_2_1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<LPTIMER1_OR_IN2_2_1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<LPTIMER1_OR_IN2_2_1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<LPTIMER1_OR_IN2_2_1_Values, BaseType, 3U> ;
} ;

