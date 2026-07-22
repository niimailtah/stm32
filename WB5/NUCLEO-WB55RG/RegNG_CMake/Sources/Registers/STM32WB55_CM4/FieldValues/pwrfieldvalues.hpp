/*******************************************************************************
* Filename      : pwrfieldvalues.hpp
*
* Details       : Enumerations related with PWR peripheral. This header file is
*                 auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_LPR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_LPR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_LPR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_VOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_VOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_VOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_CR1_VOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_CR1_VOS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_DBP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_DBP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_DBP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_FPDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_FPDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_FPDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_FPDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_FPDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_FPDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR1_LPMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR1_LPMS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR1_LPMS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_CR1_LPMS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_CR1_LPMS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PWR_CR1_LPMS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PWR_CR1_LPMS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PWR_CR1_LPMS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PWR_CR1_LPMS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_USV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_USV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_USV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_PVME3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_PVME3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_PVME3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_PVME1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_PVME1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_PVME1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_PLS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_PLS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_PLS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_CR2_PLS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_CR2_PLS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PWR_CR2_PLS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PWR_CR2_PLS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PWR_CR2_PLS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PWR_CR2_PLS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR2_PVDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR2_PVDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR2_PVDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_EIWUL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_EIWUL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_EIWUL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_EC2H_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_EC2H_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_EC2H_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_E802A_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_E802A_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_E802A_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_EBLEA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_EBLEA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_EBLEA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_ECRPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_ECRPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_ECRPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_APC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_APC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_APC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_RRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_RRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_RRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_EBORHSDFB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_EBORHSDFB_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_EBORHSDFB_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_EWUP5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_EWUP5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_EWUP5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_EWUP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_EWUP4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_EWUP4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_EWUP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_EWUP3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_EWUP3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_EWUP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_EWUP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_EWUP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR3_EWUP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR3_EWUP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR3_EWUP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR4_C2BOOT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR4_C2BOOT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR4_C2BOOT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR4_VBRS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR4_VBRS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR4_VBRS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR4_VBE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR4_VBE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR4_VBE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR4_WP5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR4_WP5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR4_WP5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR4_WP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR4_WP4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR4_WP4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR4_WP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR4_WP3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR4_WP3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR4_WP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR4_WP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR4_WP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR4_WP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR4_WP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR4_WP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_WUFI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_WUFI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_WUFI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_C2HF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_C2HF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_C2HF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_AF802_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_AF802_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_AF802_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_BLEAF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_BLEAF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_BLEAF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_CRPEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_CRPEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_CRPEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_WUF802_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_WUF802_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_WUF802_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_BLEWUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_BLEWUF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_BLEWUF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_BORHF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_BORHF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_BORHF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_SDFBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_SDFBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_SDFBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_CWUF5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_CWUF5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_CWUF5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_CWUF4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_CWUF4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_CWUF4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_CWUF3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_CWUF3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_CWUF3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_CWUF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_CWUF2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_CWUF2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR1_CWUF1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR1_CWUF1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR1_CWUF1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR2_PVMO3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR2_PVMO3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR2_PVMO3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR2_PVMO1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR2_PVMO1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR2_PVMO1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR2_PVDO_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR2_PVDO_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR2_PVDO_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR2_VOSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR2_VOSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR2_VOSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR2_REGLPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR2_REGLPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR2_REGLPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR2_REGLPS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR2_REGLPS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR2_REGLPS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR2_SDSMPSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR2_SDSMPSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR2_SDSMPSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SR2_SDBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SR2_SDBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SR2_SDBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_CC2HF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_CC2HF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_CC2HF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_C802AF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_C802AF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_C802AF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_CBLEAF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_CBLEAF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_CBLEAF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_CCRPEF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_CCRPEF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_CCRPEF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_C802WUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_C802WUF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_C802WUF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_CBLEWUF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_CBLEWUF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_CBLEWUF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_CBORHF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_CBORHF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_CBORHF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_CSMPSFBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_CSMPSFBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_CSMPSFBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_CWUF5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_CWUF5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_CWUF5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_CWUF4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_CWUF4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_CWUF4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_CWUF3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_CWUF3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_CWUF3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_CWUF2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_CWUF2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_CWUF2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_SCR_CWUF1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_SCR_CWUF1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_SCR_CWUF1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR5_SMPSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR5_SMPSEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR5_SMPSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR5_BORHC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR5_BORHC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR5_BORHC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR5_SMPSSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR5_SMPSSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR5_SMPSSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_CR5_SMPSSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_CR5_SMPSSC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PWR_CR5_SMPSSC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PWR_CR5_SMPSSC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PWR_CR5_SMPSSC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PWR_CR5_SMPSSC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_CR5_SMPSVOS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<PWR_CR5_SMPSVOS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRA_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRA_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRA_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRA_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRA_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRA_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRB_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRB_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRB_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRB_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRB_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRB_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRC_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRC_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRC_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRC_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRC_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRC_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRD_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRD_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRD_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD15_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD15_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD14_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD14_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD14_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD13_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD13_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD13_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD12_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD12_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD12_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD11_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD11_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD11_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD10_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD10_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD10_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD9_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD9_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD9_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD8_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD8_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD8_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD7_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD7_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD7_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD6_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD6_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD6_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRD_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRD_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRD_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRE_PU4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRE_PU4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRE_PU4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRE_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRE_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRE_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRE_PU2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRE_PU2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRE_PU2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRE_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRE_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRE_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRE_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRE_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRE_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRE_PD4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRE_PD4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRE_PD4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRE_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRE_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRE_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRE_PD2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRE_PD2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRE_PD2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRE_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRE_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRE_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRE_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRE_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRE_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRH_PU3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRH_PU3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRH_PU3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRH_PU1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRH_PU1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRH_PU1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PUCRH_PU0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PUCRH_PU0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PUCRH_PU0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRH_PD3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRH_PD3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRH_PD3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRH_PD1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRH_PD1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRH_PD1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_PDCRH_PD0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_PDCRH_PD0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_PDCRH_PD0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR1_EWKUP802_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR1_EWKUP802_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR1_EWKUP802_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR1_BLEEWKUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR1_BLEEWKUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR1_BLEEWKUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR1_FPDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR1_FPDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR1_FPDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR1_FPDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR1_FPDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR1_FPDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR1_LPMS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR1_LPMS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR1_LPMS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<PWR_C2CR1_LPMS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<PWR_C2CR1_LPMS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<PWR_C2CR1_LPMS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<PWR_C2CR1_LPMS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<PWR_C2CR1_LPMS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<PWR_C2CR1_LPMS_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR3_EIWUL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR3_EIWUL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR3_EIWUL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR3_APC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR3_APC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR3_APC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR3_E802WUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR3_E802WUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR3_E802WUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR3_EBLEWUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR3_EBLEWUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR3_EBLEWUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR3_EWUP5_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR3_EWUP5_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR3_EWUP5_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR3_EWUP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR3_EWUP4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR3_EWUP4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR3_EWUP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR3_EWUP3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR3_EWUP3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR3_EWUP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR3_EWUP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR3_EWUP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_C2CR3_EWUP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_C2CR3_EWUP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_C2CR3_EWUP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_EXTSCR_C2DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_EXTSCR_C2DS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_EXTSCR_C2DS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_EXTSCR_C1DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_EXTSCR_C1DS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_EXTSCR_C1DS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_EXTSCR_CRPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_EXTSCR_CRPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_EXTSCR_CRPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_EXTSCR_C2STOPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_EXTSCR_C2STOPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_EXTSCR_C2STOPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_EXTSCR_C2SBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_EXTSCR_C2SBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_EXTSCR_C2SBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_EXTSCR_C1STOPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_EXTSCR_C1STOPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_EXTSCR_C1STOPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_EXTSCR_C1SBF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_EXTSCR_C1SBF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_EXTSCR_C1SBF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_EXTSCR_CCRPF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_EXTSCR_CCRPF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_EXTSCR_CCRPF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_EXTSCR_C2CSSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_EXTSCR_C2CSSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_EXTSCR_C2CSSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct PWR_EXTSCR_C1CSSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<PWR_EXTSCR_C1CSSF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<PWR_EXTSCR_C1CSSF_Values, BaseType, 1U> ;
} ;

