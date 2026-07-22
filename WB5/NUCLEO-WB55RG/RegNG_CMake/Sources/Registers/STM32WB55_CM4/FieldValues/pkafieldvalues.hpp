/*******************************************************************************
* Filename      : pkafieldvalues.hpp
*
* Details       : Enumerations related with PKA peripheral. This header file is
*                 auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_CR_ADDRERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_CR_ADDRERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_CR_ADDRERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_CR_RAMERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_CR_RAMERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_CR_RAMERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_CR_PROCENDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_CR_PROCENDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_CR_PROCENDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_CR_MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_CR_SECLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_CR_SECLVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_CR_SECLVL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_CR_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_CR_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_CR_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_CR_EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_CR_EN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_CR_EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_SR_ADDRERRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_SR_ADDRERRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_SR_ADDRERRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_SR_RAMERRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_SR_RAMERRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_SR_RAMERRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_SR_PROCENDF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_SR_PROCENDF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_SR_PROCENDF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_SR_BUSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_SR_BUSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_SR_BUSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_CLRFR_ADDRERRFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_CLRFR_ADDRERRFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_CLRFR_ADDRERRFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_CLRFR_RAMERRFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_CLRFR_RAMERRFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_CLRFR_RAMERRFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_CLRFR_PROCENDFC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_CLRFR_PROCENDFC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_CLRFR_PROCENDFC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_VERR_MINREV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<PKA_VERR_MINREV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_VERR_MAJREV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<PKA_VERR_MAJREV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_IPIDR_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PKA_SIDR_SID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

