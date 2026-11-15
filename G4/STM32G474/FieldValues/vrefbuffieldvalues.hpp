/*******************************************************************************
* Filename      : vrefbuffieldvalues.hpp
*
* Details       : Enumerations related with VREFBUF peripheral. This header file
*                 is auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_VREFBUF_CSR_ENVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_VREFBUF_CSR_ENVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_VREFBUF_CSR_ENVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_VREFBUF_CSR_HIZ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_VREFBUF_CSR_HIZ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_VREFBUF_CSR_HIZ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_VREFBUF_CSR_VRR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_VREFBUF_CSR_VRR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_VREFBUF_CSR_VRR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_VREFBUF_CSR_VRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<VREFBUF_VREFBUF_CSR_VRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<VREFBUF_VREFBUF_CSR_VRS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<VREFBUF_VREFBUF_CSR_VRS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<VREFBUF_VREFBUF_CSR_VRS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct VREFBUF_VREFBUF_CCR_TRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

