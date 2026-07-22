/*******************************************************************************
* Filename      : flashfieldvalues.hpp
*
* Details       : Enumerations related with Flash peripheral. This header file
*                 is auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_LATENCY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_ACR_LATENCY_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_PRFTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_PRFTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR_PRFTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_ICEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_ICEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR_ICEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_DCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_DCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR_DCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_ICRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_ICRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR_ICRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_DCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_DCRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR_DCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_PES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_PES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR_PES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ACR_EMPTY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ACR_EMPTY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ACR_EMPTY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_KEYR_KEYR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTKEYR_OPTKEYR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_EOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_EOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_EOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_OPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_OPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_OPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_PROGERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_PROGERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_PROGERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_WRPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_WRPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_WRPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_PGAERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_PGAERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_PGAERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_SIZERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_SIZERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_SIZERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_PGSERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_PGSERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_PGSERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_MISERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_MISERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_MISERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_FASTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_FASTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_FASTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_OPTNV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_OPTNV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_OPTNV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_RDERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_RDERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_RDERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_OPTVERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_OPTVERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_OPTVERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_BSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_BSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_BSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_CFGBSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_CFGBSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_CFGBSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SR_PESD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SR_PESD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SR_PESD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_PG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_PG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_PG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_PER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_PER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_PER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_MER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_MER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_MER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_PNB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_STRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_STRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_OPTSTRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_OPTSTRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_OPTSTRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_FSTPG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_FSTPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_FSTPG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_EOPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_EOPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_EOPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_RDERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_RDERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_RDERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_OBL_LAUNCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_OBL_LAUNCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_OBL_LAUNCH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_OPTLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_OPTLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_OPTLOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_CR_LOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_CR_LOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_CR_LOCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ECCR_ADDR_ECC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ECCR_SYSF_ECC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ECCR_SYSF_ECC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ECCR_SYSF_ECC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ECCR_ECCCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ECCR_ECCCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ECCR_ECCCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ECCR_CPUID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ECCR_CPUID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ECCR_CPUID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_ECCR_CPUID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_ECCR_CPUID_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_ECCR_CPUID_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_ECCR_CPUID_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_ECCR_CPUID_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_ECCR_CPUID_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ECCR_ECCC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ECCR_ECCC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ECCR_ECCC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_ECCR_ECCD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_ECCR_ECCD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_ECCR_ECCD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_RDP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_ESE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_ESE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_ESE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_BOR_LEV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_BOR_LEV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_BOR_LEV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_OPTR_BOR_LEV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_OPTR_BOR_LEV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_OPTR_BOR_LEV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_OPTR_BOR_LEV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_OPTR_BOR_LEV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_OPTR_BOR_LEV_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_nRST_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_nRST_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_nRST_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_nRST_STDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_nRST_STDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_nRST_STDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_nRST_SHDW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_nRST_SHDW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_nRST_SHDW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_IDWG_SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_IDWG_SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_IDWG_SW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_IWDG_STOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_IWDG_STOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_IWDG_STOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_IWDG_STDBY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_IWDG_STDBY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_IWDG_STDBY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_WWDG_SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_WWDG_SW_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_WWDG_SW_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_nBOOT1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_nBOOT1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_nBOOT1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_SRAM2_PE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_SRAM2_PE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_SRAM2_PE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_SRAM2_RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_SRAM2_RST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_SRAM2_RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_nSWBOOT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_nSWBOOT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_nSWBOOT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_nBOOT0_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_nBOOT0_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_nBOOT0_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_OPTR_AGC_TRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_OPTR_AGC_TRIM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_OPTR_AGC_TRIM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_OPTR_AGC_TRIM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_OPTR_AGC_TRIM_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_OPTR_AGC_TRIM_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_OPTR_AGC_TRIM_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_OPTR_AGC_TRIM_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_OPTR_AGC_TRIM_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PCROP1ASR_PCROP1A_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PCROP1AER_PCROP1A_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PCROP1AER_PCROP_RDP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_PCROP1AER_PCROP_RDP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_PCROP1AER_PCROP_RDP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_WRP1AR_WRP1A_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_WRP1AR_WRP1A_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_WRP1BR_WRP1B_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_WRP1BR_WRP1B_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PCROP1BSR_PCROP1B_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_PCROP1BER_PCROP1B_END_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_IPCCBR_IPCCDBA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2ACR_PRFTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2ACR_PRFTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2ACR_PRFTEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2ACR_ICEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2ACR_ICEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2ACR_ICEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2ACR_ICRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2ACR_ICRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2ACR_ICRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2ACR_PES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2ACR_PES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2ACR_PES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_EOP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_EOP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_EOP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_OPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_OPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_OPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_PROGERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_PROGERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_PROGERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_WRPERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_WRPERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_WRPERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_PGAERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_PGAERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_PGAERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_SIZERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_SIZERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_SIZERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_PGSERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_PGSERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_PGSERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_MISSERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_MISSERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_MISSERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_FASTERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_FASTERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_FASTERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_RDERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_RDERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_RDERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_BSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_BSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_BSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_CFGBSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_CFGBSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_CFGBSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2SR_PESD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2SR_PESD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2SR_PESD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2CR_PG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2CR_PG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2CR_PG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2CR_PER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2CR_PER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2CR_PER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2CR_MER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2CR_MER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2CR_MER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2CR_PNB_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2CR_STRT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2CR_STRT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2CR_STRT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2CR_FSTPG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2CR_FSTPG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2CR_FSTPG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2CR_EOPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2CR_EOPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2CR_EOPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2CR_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2CR_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2CR_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_C2CR_RDERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_C2CR_RDERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_C2CR_RDERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SFR_SFSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SFR_DDS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SFR_DDS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SFR_DDS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SFR_FSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SFR_FSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SFR_FSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SRRVR_SBRV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SRRVR_SBRSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Flash_SRRVR_SBRSA_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SRRVR_BRSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SRRVR_BRSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SRRVR_BRSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SRRVR_SNBRSA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 15U> ;
  using Value16 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 16U> ;
  using Value17 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 17U> ;
  using Value18 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 18U> ;
  using Value19 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 19U> ;
  using Value20 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 20U> ;
  using Value21 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 21U> ;
  using Value22 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 22U> ;
  using Value23 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 23U> ;
  using Value24 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 24U> ;
  using Value25 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 25U> ;
  using Value26 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 26U> ;
  using Value27 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 27U> ;
  using Value28 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 28U> ;
  using Value29 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 29U> ;
  using Value30 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 30U> ;
  using Value31 = FieldValue<Flash_SRRVR_SNBRSA_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SRRVR_C2OPT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SRRVR_C2OPT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SRRVR_C2OPT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct Flash_SRRVR_NBRSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<Flash_SRRVR_NBRSD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<Flash_SRRVR_NBRSD_Values, BaseType, 1U> ;
} ;

