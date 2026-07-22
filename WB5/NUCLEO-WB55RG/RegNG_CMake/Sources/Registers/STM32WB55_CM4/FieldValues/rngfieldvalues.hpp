/*******************************************************************************
* Filename      : rngfieldvalues.hpp
*
* Details       : Enumerations related with RNG peripheral. This header file is
*                 auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_CR_RNGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RNG_CR_RNGEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RNG_CR_RNGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_CR_IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RNG_CR_IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RNG_CR_IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_CR_BYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RNG_CR_BYP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RNG_CR_BYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_SR_SEIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RNG_SR_SEIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RNG_SR_SEIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_SR_CEIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RNG_SR_CEIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RNG_SR_CEIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_SR_SECS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RNG_SR_SECS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RNG_SR_SECS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_SR_CECS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RNG_SR_CECS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RNG_SR_CECS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_SR_DRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RNG_SR_DRDY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RNG_SR_DRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RNG_DR_RNDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

