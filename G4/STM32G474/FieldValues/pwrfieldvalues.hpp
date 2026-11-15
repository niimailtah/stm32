/*******************************************************************************
* Filename      : pwrfieldvalues.hpp
*
* Details       : Enumerations related with PWR peripheral. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR1_LPMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR1_LPMS_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR1_LPMS_Values, BaseType, 1U> ;
  using B_0x3 = FieldValue<PWR_PWR_CR1_LPMS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR1_FPD_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CR1_FPD_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CR1_FPD_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR1_DBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR1_DBP_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR1_DBP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR1_VOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR1_VOS_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR1_VOS_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<PWR_PWR_CR1_VOS_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<PWR_PWR_CR1_VOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR1_LPR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CR1_LPR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CR1_LPR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR2_PVDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR2_PVDE_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR2_PVDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR2_PVDLS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR2_PVDLS_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR2_PVDLS_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<PWR_PWR_CR2_PVDLS_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<PWR_PWR_CR2_PVDLS_Values, BaseType, 3U> ;
  using B_0x4 = FieldValue<PWR_PWR_CR2_PVDLS_Values, BaseType, 4U> ;
  using B_0x5 = FieldValue<PWR_PWR_CR2_PVDLS_Values, BaseType, 5U> ;
  using B_0x6 = FieldValue<PWR_PWR_CR2_PVDLS_Values, BaseType, 6U> ;
  using B_0x7 = FieldValue<PWR_PWR_CR2_PVDLS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR2_PVMEN1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR2_PVMEN1_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR2_PVMEN1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR2_PVMEN2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR2_PVMEN2_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR2_PVMEN2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR3_EWUP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CR3_EWUP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CR3_EWUP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR3_EWUP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CR3_EWUP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CR3_EWUP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR3_EWUP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CR3_EWUP3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CR3_EWUP3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR3_EWUP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CR3_EWUP4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CR3_EWUP4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR3_EWUP5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CR3_EWUP5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CR3_EWUP5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR3_RRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR3_RRS_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR3_RRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR3_APC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_CR3_APC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_CR3_APC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR3_UCPD1_STDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR3_UCPD1_STDBY_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR3_UCPD1_STDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR3_UCPD1_DBDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR3_UCPD1_DBDIS_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR3_UCPD1_DBDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR3_EIWUL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR3_EIWUL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR3_EIWUL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR4_WP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR4_WP1_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR4_WP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR4_WP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR4_WP2_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR4_WP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR4_WP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR4_WP3_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR4_WP3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR4_WP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR4_WP4_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR4_WP4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR4_WP5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR4_WP5_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR4_WP5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR4_VBE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR4_VBE_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR4_VBE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR4_VBRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR4_VBRS_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR4_VBRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR1_WUF1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SR1_WUF1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SR1_WUF1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR1_WUF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SR1_WUF2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SR1_WUF2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR1_WUF3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SR1_WUF3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SR1_WUF3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR1_WUF4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SR1_WUF4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SR1_WUF4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR1_WUF5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SR1_WUF5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SR1_WUF5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR1_SBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_SR1_SBF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_SR1_SBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR1_WUFI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SR1_WUFI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SR1_WUFI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR2_REGLPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_SR2_REGLPS_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_SR2_REGLPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR2_REGLPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_SR2_REGLPF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_SR2_REGLPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR2_VOSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_SR2_VOSF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_SR2_VOSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR2_PVDO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_SR2_PVDO_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_SR2_PVDO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR2_PVMO1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_SR2_PVMO1_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_SR2_PVMO1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SR2_PVMO2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_SR2_PVMO2_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_SR2_PVMO2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SCR_CWUF1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SCR_CWUF1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SCR_CWUF1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SCR_CWUF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SCR_CWUF2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SCR_CWUF2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SCR_CWUF3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SCR_CWUF3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SCR_CWUF3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SCR_CWUF4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SCR_CWUF4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SCR_CWUF4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SCR_CWUF5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SCR_CWUF5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SCR_CWUF5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_SCR_CSBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_SCR_CSBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_SCR_CSBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRA_PU15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRA_PU15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRA_PU15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRA_PD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRA_PD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRA_PD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRB_PU15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRB_PU15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRB_PU15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRB_PD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRB_PD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRB_PD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRC_PU15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRC_PU15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRC_PU15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRC_PD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRC_PD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRC_PD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRD_PU15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRD_PU15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRD_PU15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRD_PD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRD_PD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRD_PD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRE_PU15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRE_PU15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRE_PU15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRE_PD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRE_PD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRE_PD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRF_PU15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRF_PU15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRF_PU15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRF_PD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRF_PD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRF_PD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRG_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRG_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRG_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRG_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRG_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRG_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRG_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRG_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRG_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRG_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRG_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRG_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRG_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRG_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRG_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRG_PU5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRG_PU5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRG_PU5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRG_PU6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRG_PU6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRG_PU6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRG_PU7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRG_PU7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRG_PU7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRG_PU8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRG_PU8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRG_PU8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRG_PU9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRG_PU9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRG_PU9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PUCRG_PU10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PUCRG_PU10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PUCRG_PU10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRG_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRG_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRG_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRG_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRG_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRG_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRG_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRG_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRG_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRG_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRG_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRG_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRG_PD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRG_PD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRG_PD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRG_PD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRG_PD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRG_PD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRG_PD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRG_PD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRG_PD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRG_PD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRG_PD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRG_PD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRG_PD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRG_PD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRG_PD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRG_PD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRG_PD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRG_PD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_PDCRG_PD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PWR_PDCRG_PD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PWR_PDCRG_PD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PWR_CR5_R1MODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<PWR_PWR_CR5_R1MODE_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<PWR_PWR_CR5_R1MODE_Values, BaseType, 1U> ;
} ;

