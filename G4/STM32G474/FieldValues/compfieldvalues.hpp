/*******************************************************************************
* Filename      : compfieldvalues.hpp
*
* Details       : Enumerations related with COMP peripheral. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C1CSR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C1CSR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C1CSR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C1CSR_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C1CSR_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C1CSR_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C1CSR_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C1CSR_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C1CSR_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C1CSR_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C1CSR_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C1CSR_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C1CSR_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C1CSR_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C1CSR_INPSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C1CSR_POL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C1CSR_POL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C1CSR_POL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C1CSR_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C1CSR_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C1CSR_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C1CSR_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C1CSR_HYST_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C1CSR_HYST_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C1CSR_HYST_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C1CSR_HYST_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C1CSR_HYST_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C1CSR_BLANKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C1CSR_BLANKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C1CSR_BLANKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C1CSR_BLANKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C1CSR_BLANKSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C1CSR_BLANKSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C1CSR_BLANKSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C1CSR_BLANKSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C1CSR_BLANKSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C1CSR_BRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C1CSR_BRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C1CSR_BRGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C1CSR_SCALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C1CSR_SCALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C1CSR_SCALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C1CSR_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C1CSR_VALUE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C1CSR_VALUE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C1CSR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C1CSR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C1CSR_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C2CSR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C2CSR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C2CSR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C2CSR_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C2CSR_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C2CSR_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C2CSR_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C2CSR_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C2CSR_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C2CSR_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C2CSR_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C2CSR_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C2CSR_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C2CSR_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C2CSR_INPSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C2CSR_POL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C2CSR_POL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C2CSR_POL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C2CSR_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C2CSR_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C2CSR_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C2CSR_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C2CSR_HYST_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C2CSR_HYST_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C2CSR_HYST_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C2CSR_HYST_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C2CSR_HYST_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C2CSR_BLANKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C2CSR_BLANKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C2CSR_BLANKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C2CSR_BLANKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C2CSR_BLANKSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C2CSR_BLANKSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C2CSR_BLANKSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C2CSR_BLANKSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C2CSR_BLANKSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C2CSR_BRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C2CSR_BRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C2CSR_BRGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C2CSR_SCALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C2CSR_SCALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C2CSR_SCALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C2CSR_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C2CSR_VALUE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C2CSR_VALUE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C2CSR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C2CSR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C2CSR_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C3CSR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C3CSR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C3CSR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C3CSR_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C3CSR_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C3CSR_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C3CSR_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C3CSR_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C3CSR_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C3CSR_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C3CSR_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C3CSR_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C3CSR_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C3CSR_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C3CSR_INPSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C3CSR_POL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C3CSR_POL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C3CSR_POL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C3CSR_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C3CSR_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C3CSR_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C3CSR_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C3CSR_HYST_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C3CSR_HYST_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C3CSR_HYST_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C3CSR_HYST_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C3CSR_HYST_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C3CSR_BLANKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C3CSR_BLANKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C3CSR_BLANKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C3CSR_BLANKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C3CSR_BLANKSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C3CSR_BLANKSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C3CSR_BLANKSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C3CSR_BLANKSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C3CSR_BLANKSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C3CSR_BRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C3CSR_BRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C3CSR_BRGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C3CSR_SCALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C3CSR_SCALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C3CSR_SCALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C3CSR_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C3CSR_VALUE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C3CSR_VALUE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C3CSR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C3CSR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C3CSR_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C4CSR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C4CSR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C4CSR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C4CSR_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C4CSR_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C4CSR_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C4CSR_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C4CSR_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C4CSR_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C4CSR_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C4CSR_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C4CSR_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C4CSR_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C4CSR_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C4CSR_INPSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C4CSR_POL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C4CSR_POL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C4CSR_POL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C4CSR_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C4CSR_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C4CSR_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C4CSR_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C4CSR_HYST_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C4CSR_HYST_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C4CSR_HYST_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C4CSR_HYST_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C4CSR_HYST_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C4CSR_BLANKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C4CSR_BLANKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C4CSR_BLANKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C4CSR_BLANKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C4CSR_BLANKSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C4CSR_BLANKSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C4CSR_BLANKSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C4CSR_BLANKSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C4CSR_BLANKSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C4CSR_BRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C4CSR_BRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C4CSR_BRGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C4CSR_SCALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C4CSR_SCALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C4CSR_SCALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C4CSR_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C4CSR_VALUE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C4CSR_VALUE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C4CSR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C4CSR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C4CSR_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C5CSR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C5CSR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C5CSR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C5CSR_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C5CSR_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C5CSR_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C5CSR_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C5CSR_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C5CSR_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C5CSR_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C5CSR_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C5CSR_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C5CSR_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C5CSR_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C5CSR_INPSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C5CSR_POL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C5CSR_POL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C5CSR_POL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C5CSR_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C5CSR_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C5CSR_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C5CSR_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C5CSR_HYST_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C5CSR_HYST_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C5CSR_HYST_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C5CSR_HYST_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C5CSR_HYST_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C5CSR_BLANKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C5CSR_BLANKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C5CSR_BLANKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C5CSR_BLANKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C5CSR_BLANKSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C5CSR_BLANKSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C5CSR_BLANKSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C5CSR_BLANKSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C5CSR_BLANKSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C5CSR_BRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C5CSR_BRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C5CSR_BRGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C5CSR_SCALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C5CSR_SCALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C5CSR_SCALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C5CSR_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C5CSR_VALUE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C5CSR_VALUE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C5CSR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C5CSR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C5CSR_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C6CSR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C6CSR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C6CSR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C6CSR_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C6CSR_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C6CSR_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C6CSR_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C6CSR_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C6CSR_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C6CSR_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C6CSR_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C6CSR_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C6CSR_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C6CSR_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C6CSR_INPSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C6CSR_POL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C6CSR_POL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C6CSR_POL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C6CSR_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C6CSR_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C6CSR_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C6CSR_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C6CSR_HYST_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C6CSR_HYST_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C6CSR_HYST_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C6CSR_HYST_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C6CSR_HYST_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C6CSR_BLANKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C6CSR_BLANKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C6CSR_BLANKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C6CSR_BLANKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C6CSR_BLANKSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C6CSR_BLANKSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C6CSR_BLANKSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C6CSR_BLANKSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C6CSR_BLANKSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C6CSR_BRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C6CSR_BRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C6CSR_BRGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C6CSR_SCALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C6CSR_SCALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C6CSR_SCALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C6CSR_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C6CSR_VALUE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C6CSR_VALUE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C6CSR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C6CSR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C6CSR_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C7CSR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C7CSR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C7CSR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C7CSR_INMSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C7CSR_INMSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C7CSR_INMSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C7CSR_INMSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C7CSR_INMSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C7CSR_INMSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C7CSR_INMSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C7CSR_INMSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C7CSR_INMSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C7CSR_INPSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C7CSR_INPSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C7CSR_INPSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C7CSR_POL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C7CSR_POL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C7CSR_POL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C7CSR_HYST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C7CSR_HYST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C7CSR_HYST_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C7CSR_HYST_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C7CSR_HYST_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C7CSR_HYST_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C7CSR_HYST_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C7CSR_HYST_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C7CSR_HYST_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C7CSR_BLANKSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C7CSR_BLANKSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C7CSR_BLANKSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<COMP_COMP_C7CSR_BLANKSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<COMP_COMP_C7CSR_BLANKSEL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<COMP_COMP_C7CSR_BLANKSEL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<COMP_COMP_C7CSR_BLANKSEL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<COMP_COMP_C7CSR_BLANKSEL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<COMP_COMP_C7CSR_BLANKSEL_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C7CSR_BRGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C7CSR_BRGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C7CSR_BRGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C7CSR_SCALEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C7CSR_SCALEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C7CSR_SCALEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C7CSR_VALUE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C7CSR_VALUE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C7CSR_VALUE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct COMP_COMP_C7CSR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<COMP_COMP_C7CSR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<COMP_COMP_C7CSR_LOCK_Values, BaseType, 1U> ;
} ;

