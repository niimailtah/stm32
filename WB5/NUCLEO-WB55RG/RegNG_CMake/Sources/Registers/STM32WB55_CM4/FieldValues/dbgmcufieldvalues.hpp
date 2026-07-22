/*******************************************************************************
* Filename      : dbgmcufieldvalues.hpp
*
* Details       : Enumerations related with DBGMCU peripheral. This header file
*                 is auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_IDCODE_DEV_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_IDCODE_REV_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBG_SLEEP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBG_SLEEP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBG_SLEEP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_DBG_STANDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_DBG_STANDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_DBG_STANDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_TRACE_IOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_TRACE_IOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_TRACE_IOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_CR_TRGOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_TRGOEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_TRGOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_TIMER2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_TIMER2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_TIMER2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_RTC_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_RTC_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_RTC_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_WWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_WWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_WWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_I2C1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_I2C1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_I2C1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_I2C3_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_I2C3_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_I2C3_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR1_DBG_LPTIM1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR1_DBG_LPTIM1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR1_DBG_LPTIM1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_C2AP_B1FZR1_DBG_LPTIM2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_LPTIM2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_LPTIM2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_C2AP_B1FZR1_DBG_RTC_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_RTC_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_RTC_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_C2AP_B1FZR1_DBG_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_C2AP_B1FZR1_DBG_I2C1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_I2C1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_I2C1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_C2AP_B1FZR1_DBG_I2C3_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_I2C3_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_I2C3_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_C2AP_B1FZR1_DBG_LPTIM1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_LPTIM1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_C2AP_B1FZR1_DBG_LPTIM1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1FZR2_DBG_LPTIM2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_C2APB1FZR2_DBG_LPTIM2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_C2APB1FZR2_DBG_LPTIM2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_C2APB1FZR2_DBG_LPTIM2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZR_DBG_TIM1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZR_DBG_TIM1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZR_DBG_TIM1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZR_DBG_TIM16_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZR_DBG_TIM16_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZR_DBG_TIM16_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2FZR_DBG_TIM17_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2FZR_DBG_TIM17_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2FZR_DBG_TIM17_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_C2APB2FZR_DBG_TIM1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_C2APB2FZR_DBG_TIM1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_C2APB2FZR_DBG_TIM1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_C2APB2FZR_DBG_TIM16_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_C2APB2FZR_DBG_TIM16_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_C2APB2FZR_DBG_TIM16_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_C2APB2FZR_DBG_TIM17_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_C2APB2FZR_DBG_TIM17_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_C2APB2FZR_DBG_TIM17_STOP_Values, BaseType, 1U> ;
} ;

