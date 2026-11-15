/*******************************************************************************
* Filename      : fmacfieldvalues.hpp
*
* Details       : Enumerations related with FMAC peripheral. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_X1BUFCFG_X1_BASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_X1BUFCFG_X1_BUF_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_X1BUFCFG_FULL_WM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_X1BUFCFG_FULL_WM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_X1BUFCFG_FULL_WM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMAC_X1BUFCFG_FULL_WM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMAC_X1BUFCFG_FULL_WM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_X2BUFCFG_X2_BASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_X2BUFCFG_X2_BUF_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_YBUFCFG_Y_BASE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_YBUFCFG_Y_BUF_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_YBUFCFG_EMPTY_WM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_YBUFCFG_EMPTY_WM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_YBUFCFG_EMPTY_WM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<FMAC_YBUFCFG_EMPTY_WM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<FMAC_YBUFCFG_EMPTY_WM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_PARAM_START_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_PARAM_START_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_PARAM_START_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_PARAM_FUNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_PARAM_R_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_PARAM_Q_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_PARAM_P_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_CR_RESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_CR_RESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_CR_RESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_CR_CLIPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_CR_CLIPEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_CR_CLIPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_CR_DMAWEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_CR_DMAWEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_CR_DMAWEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_CR_DMAREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_CR_DMAREN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_CR_DMAREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_CR_SATIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_CR_SATIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_CR_SATIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_CR_UNFLIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_CR_UNFLIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_CR_UNFLIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_CR_OVFLIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_CR_OVFLIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_CR_OVFLIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_CR_WIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_CR_WIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_CR_WIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_CR_RIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_CR_RIEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_CR_RIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_SR_YEMPTY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_SR_YEMPTY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_SR_YEMPTY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_SR_X1FULL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_SR_X1FULL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_SR_X1FULL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_SR_OVFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_SR_OVFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_SR_OVFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_SR_UNFL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_SR_UNFL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_SR_UNFL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_SR_SAT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<FMAC_SR_SAT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<FMAC_SR_SAT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_WDATA_WDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct FMAC_RDATA_RDATA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

