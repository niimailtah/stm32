/*******************************************************************************
* Filename      : syscfgfieldvalues.hpp
*
* Details       : Enumerations related with SYSCFG peripheral. This header file
*                 is auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_MEMRMP_MEM_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_MEMRMP_MEM_MODE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_MEMRMP_FB_mode_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_MEMRMP_FB_mode_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_MEMRMP_FB_mode_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_BOOSTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_BOOSTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_BOOSTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_ANASWVDD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_ANASWVDD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_ANASWVDD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C_PB6_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C_PB6_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C_PB6_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C_PB7_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C_PB7_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C_PB7_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C_PB8_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C_PB8_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C_PB8_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C_PB9_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C_PB9_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C_PB9_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C1_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C1_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C1_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C2_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C2_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C2_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C3_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C3_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C3_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_I2C4_FMP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR1_I2C4_FMP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR1_I2C4_FMP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR1_FPU_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR1_EXTI3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR1_EXTI3_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR1_EXTI2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR1_EXTI2_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR1_EXTI1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR1_EXTI1_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR1_EXTI0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR1_EXTI0_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR2_EXTI7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR2_EXTI7_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR2_EXTI6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR2_EXTI6_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR2_EXTI5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR2_EXTI5_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR2_EXTI4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR2_EXTI4_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR3_EXTI11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR3_EXTI11_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR3_EXTI10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR3_EXTI10_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR3_EXTI9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR3_EXTI9_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR3_EXTI8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR3_EXTI8_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR4_EXTI15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR4_EXTI15_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR4_EXTI14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR4_EXTI14_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR4_EXTI13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR4_EXTI13_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_EXTICR4_EXTI12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 1U> ;
  using Value2 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 2U> ;
  using Value3 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 3U> ;
  using Value4 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 4U> ;
  using Value5 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 5U> ;
  using Value6 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 6U> ;
  using Value7 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 7U> ;
  using Value8 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 8U> ;
  using Value9 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 9U> ;
  using Value10 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 10U> ;
  using Value11 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 11U> ;
  using Value12 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 12U> ;
  using Value13 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 13U> ;
  using Value14 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 14U> ;
  using Value15 = FieldValue<SYSCFG_EXTICR4_EXTI12_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SCSR_CCMER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SCSR_CCMER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SCSR_CCMER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SCSR_CCMBSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SCSR_CCMBSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SCSR_CCMBSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR2_CLL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR2_CLL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR2_CLL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR2_SPL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR2_SPL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR2_SPL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR2_PVDL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR2_PVDL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR2_PVDL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR2_ECCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR2_ECCL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR2_ECCL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_CFGR2_SPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_CFGR2_SPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_CFGR2_SPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page0_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page0_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page0_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page1_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page1_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page1_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page2_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page2_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page2_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page3_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page3_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page3_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page4_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page4_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page4_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page5_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page5_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page5_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page6_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page6_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page6_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page7_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page7_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page7_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page8_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page8_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page8_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page9_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page9_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page9_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page10_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page10_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page10_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page11_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page11_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page11_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page12_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page12_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page12_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page13_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page13_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page13_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page14_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page14_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page14_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page15_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page15_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page15_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page16_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page16_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page16_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page17_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page17_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page17_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page18_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page18_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page18_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page19_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page19_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page19_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page20_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page20_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page20_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page21_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page21_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page21_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page22_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page22_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page22_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page23_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page23_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page23_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page24_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page24_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page24_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page25_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page25_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page25_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page26_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page26_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page26_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page27_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page27_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page27_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page28_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page28_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page28_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page29_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page29_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page29_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page30_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page30_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page30_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SWPR_Page31_WP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<SYSCFG_SWPR_Page31_WP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<SYSCFG_SWPR_Page31_WP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct SYSCFG_SKR_KEY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

