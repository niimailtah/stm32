/*******************************************************************************
* Filename      : hrtimmasterfieldvalues.hpp
*
* Details       : Enumerations related with HRTIM_Master peripheral. This header
*                 file is auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_BRSTDMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_BRSTDMA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_BRSTDMA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<HRTIM_Master_MCR_BRSTDMA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<HRTIM_Master_MCR_BRSTDMA_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_MREPU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_MREPU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_MREPU_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_PREEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_PREEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_PREEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_DACSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_DACSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_DACSYNC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<HRTIM_Master_MCR_DACSYNC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<HRTIM_Master_MCR_DACSYNC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_TFCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_TFCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_TFCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_TECEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_TECEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_TECEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_TDCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_TDCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_TDCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_TCCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_TCCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_TCCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_TBCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_TBCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_TBCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_TACEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_TACEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_TACEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_MCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_MCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_MCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_SYNC_SRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_SYNC_SRC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_SYNC_SRC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<HRTIM_Master_MCR_SYNC_SRC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<HRTIM_Master_MCR_SYNC_SRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_SYNC_OUT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_SYNC_OUT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_SYNC_OUT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<HRTIM_Master_MCR_SYNC_OUT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<HRTIM_Master_MCR_SYNC_OUT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_SYNCSTRTM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_SYNCSTRTM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_SYNCSTRTM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_SYNCRSTM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_SYNCRSTM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_SYNCRSTM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_SYNC_IN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_SYNC_IN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_SYNC_IN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<HRTIM_Master_MCR_SYNC_IN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<HRTIM_Master_MCR_SYNC_IN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_INTLVD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_INTLVD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_INTLVD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<HRTIM_Master_MCR_INTLVD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<HRTIM_Master_MCR_INTLVD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_HALF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_HALF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_HALF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_RETRIG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_RETRIG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_RETRIG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_CONT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_CONT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_CONT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCR_CK_PSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MCR_CK_PSC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MCR_CK_PSC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<HRTIM_Master_MCR_CK_PSC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<HRTIM_Master_MCR_CK_PSC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<HRTIM_Master_MCR_CK_PSC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<HRTIM_Master_MCR_CK_PSC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<HRTIM_Master_MCR_CK_PSC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<HRTIM_Master_MCR_CK_PSC_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MISR_MUPD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MISR_MUPD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MISR_MUPD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MISR_SYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MISR_SYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MISR_SYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MISR_MREP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MISR_MREP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MISR_MREP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MISR_MCMP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MISR_MCMP4_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MISR_MCMP4_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MISR_MCMP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MISR_MCMP3_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MISR_MCMP3_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MISR_MCMP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MISR_MCMP2_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MISR_MCMP2_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MISR_MCMP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MISR_MCMP1_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MISR_MCMP1_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MICR_MUPDC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MICR_MUPDC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MICR_MUPDC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MICR_SYNCC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MICR_SYNCC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MICR_SYNCC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MICR_MREPC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MICR_MREPC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MICR_MREPC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MICR_MCMP4C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MICR_MCMP4C_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MICR_MCMP4C_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MICR_MCMP3C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MICR_MCMP3C_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MICR_MCMP3C_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MICR_MCMP2C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MICR_MCMP2C_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MICR_MCMP2C_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MICR_MCMP1C_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MICR_MCMP1C_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MICR_MCMP1C_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MUPDDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MUPDDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MUPDDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_SYNCDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_SYNCDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_SYNCDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MREPDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MREPDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MREPDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MCMP4DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MCMP4DE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MCMP4DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MCMP3DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MCMP3DE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MCMP3DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MCMP2DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MCMP2DE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MCMP2DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MCMP1DE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MCMP1DE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MCMP1DE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MUPDIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MUPDIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MUPDIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_SYNCIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_SYNCIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_SYNCIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MREPIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MREPIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MREPIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MCMP4IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MCMP4IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MCMP4IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MCMP3IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MCMP3IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MCMP3IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MCMP2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MCMP2IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MCMP2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MDIER_MCMP1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<HRTIM_Master_MDIER_MCMP1IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<HRTIM_Master_MDIER_MCMP1IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCNTR_MCNT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MPER_MPER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MREP_MREP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCMP1R_MCMP1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCMP2R_MCMP2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCMP3R_MCMP3_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct HRTIM_Master_MCMP4R_MCMP4_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

