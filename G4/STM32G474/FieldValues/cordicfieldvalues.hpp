/*******************************************************************************
* Filename      : cordicfieldvalues.hpp
*
* Details       : Enumerations related with CORDIC peripheral. This header file
*                 is auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_CSR_FUNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CORDIC_CSR_FUNC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_CSR_PRECISION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 7U> ;
  using Value8 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 8U> ;
  using Value9 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 9U> ;
  using Value10 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 10U> ;
  using Value11 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 11U> ;
  using Value12 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 12U> ;
  using Value13 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 13U> ;
  using Value14 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 14U> ;
  using Value15 = FieldValue<CORDIC_CSR_PRECISION_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_CSR_SCALE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CORDIC_CSR_SCALE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CORDIC_CSR_SCALE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<CORDIC_CSR_SCALE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<CORDIC_CSR_SCALE_Values, BaseType, 3U> ;
  using Value4 = FieldValue<CORDIC_CSR_SCALE_Values, BaseType, 4U> ;
  using Value5 = FieldValue<CORDIC_CSR_SCALE_Values, BaseType, 5U> ;
  using Value6 = FieldValue<CORDIC_CSR_SCALE_Values, BaseType, 6U> ;
  using Value7 = FieldValue<CORDIC_CSR_SCALE_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_CSR_IEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CORDIC_CSR_IEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CORDIC_CSR_IEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_CSR_DMAREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CORDIC_CSR_DMAREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CORDIC_CSR_DMAREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_CSR_DMAWEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CORDIC_CSR_DMAWEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CORDIC_CSR_DMAWEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_CSR_NRES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CORDIC_CSR_NRES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CORDIC_CSR_NRES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_CSR_NARGS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CORDIC_CSR_NARGS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CORDIC_CSR_NARGS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_CSR_RESSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CORDIC_CSR_RESSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CORDIC_CSR_RESSIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_CSR_ARGSIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CORDIC_CSR_ARGSIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CORDIC_CSR_ARGSIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_CSR_RRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<CORDIC_CSR_RRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<CORDIC_CSR_RRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_WDATA_ARG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct CORDIC_RDATA_RES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

