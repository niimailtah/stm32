/*******************************************************************************
* Filename      : dbgmcufieldvalues.hpp
*
* Details       : Enumerations related with DBGMCU peripheral. This header file
*                 is auto-generated for STM32G474 device.
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
struct DBGMCU_CR_TRACE_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_CR_TRACE_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_CR_TRACE_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<DBGMCU_CR_TRACE_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<DBGMCU_CR_TRACE_MODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_TIMER2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIMER2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIMER2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_TIM3_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIM3_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIM3_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_TIM4_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIM4_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIM4_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_TIM5_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIM5_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIM5_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_TIMER6_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIMER6_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIMER6_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_TIM7_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIM7_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_TIM7_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_RTC_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_RTC_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_RTC_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_WWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_WWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_WWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_I2C1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_I2C1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_I2C1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_I2C2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_I2C2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_I2C2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_I2C3_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_I2C3_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_I2C3_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1L_FZ_DBG_LPTIMER_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1L_FZ_DBG_LPTIMER_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1L_FZ_DBG_LPTIMER_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB1H_FZ_DBG_I2C4_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB1H_FZ_DBG_I2C4_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB1H_FZ_DBG_I2C4_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_TIM8_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM8_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM8_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_TIM15_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM15_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM15_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_TIM16_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM16_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM16_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_TIM17_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM17_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM17_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_TIM20_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM20_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_TIM20_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_HRTIM0_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_HRTIM0_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_HRTIM0_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_HRTIM1_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_HRTIM1_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_HRTIM1_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_HRTIM2_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_HRTIM2_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_HRTIM2_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct DBGMCU_APB2_FZ_DBG_HRTIM3_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<DBGMCU_APB2_FZ_DBG_HRTIM3_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<DBGMCU_APB2_FZ_DBG_HRTIM3_STOP_Values, BaseType, 1U> ;
} ;

