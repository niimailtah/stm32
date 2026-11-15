/*******************************************************************************
* Filename      : tampfieldvalues.hpp
*
* Details       : Enumerations related with TAMP peripheral. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR1_TAMP1E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR1_TAMP1E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR1_TAMP1E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR1_TAMP2E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR1_TAMP2E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR1_TAMP2E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR1_TAMP3E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR1_TAMP3E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR1_TAMP3E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR1_ITAMP3E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR1_ITAMP3E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR1_ITAMP3E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR1_ITAMP4E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR1_ITAMP4E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR1_ITAMP4E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR1_ITAMP5E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR1_ITAMP5E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR1_ITAMP5E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR1_ITAMP6E_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR1_ITAMP6E_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR1_ITAMP6E_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR2_TAMP1NOER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR2_TAMP1NOER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR2_TAMP1NOER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR2_TAMP2NOER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR2_TAMP2NOER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR2_TAMP2NOER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR2_TAMP3NOER_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR2_TAMP3NOER_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR2_TAMP3NOER_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR2_TAMP1MSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR2_TAMP1MSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR2_TAMP1MSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR2_TAMP2MSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR2_TAMP2MSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR2_TAMP2MSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR2_TAMP3MSK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR2_TAMP3MSK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR2_TAMP3MSK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR2_TAMP1TRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR2_TAMP1TRG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR2_TAMP1TRG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR2_TAMP2TRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR2_TAMP2TRG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR2_TAMP2TRG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_CR2_TAMP3TRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_CR2_TAMP3TRG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_CR2_TAMP3TRG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_FLTCR_TAMPFREQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_FLTCR_TAMPFREQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_FLTCR_TAMPFREQ_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TAMP_FLTCR_TAMPFREQ_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TAMP_FLTCR_TAMPFREQ_Values, BaseType, 3U> ;
  using Value4 = FieldValue<TAMP_FLTCR_TAMPFREQ_Values, BaseType, 4U> ;
  using Value5 = FieldValue<TAMP_FLTCR_TAMPFREQ_Values, BaseType, 5U> ;
  using Value6 = FieldValue<TAMP_FLTCR_TAMPFREQ_Values, BaseType, 6U> ;
  using Value7 = FieldValue<TAMP_FLTCR_TAMPFREQ_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_FLTCR_TAMPFLT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_FLTCR_TAMPFLT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_FLTCR_TAMPFLT_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TAMP_FLTCR_TAMPFLT_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TAMP_FLTCR_TAMPFLT_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_FLTCR_TAMPPRCH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_FLTCR_TAMPPRCH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_FLTCR_TAMPPRCH_Values, BaseType, 1U> ;
  using Value2 = FieldValue<TAMP_FLTCR_TAMPPRCH_Values, BaseType, 2U> ;
  using Value3 = FieldValue<TAMP_FLTCR_TAMPPRCH_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_FLTCR_TAMPPUDIS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_FLTCR_TAMPPUDIS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_FLTCR_TAMPPUDIS_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_IER_TAMP1IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_IER_TAMP1IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_IER_TAMP1IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_IER_TAMP2IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_IER_TAMP2IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_IER_TAMP2IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_IER_TAMP3IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_IER_TAMP3IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_IER_TAMP3IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_IER_ITAMP3IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_IER_ITAMP3IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_IER_ITAMP3IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_IER_ITAMP4IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_IER_ITAMP4IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_IER_ITAMP4IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_IER_ITAMP5IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_IER_ITAMP5IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_IER_ITAMP5IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_IER_ITAMP6IE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_IER_ITAMP6IE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_IER_ITAMP6IE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SR_TAMP1F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SR_TAMP1F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SR_TAMP1F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SR_TAMP2F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SR_TAMP2F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SR_TAMP2F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SR_TAMP3F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SR_TAMP3F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SR_TAMP3F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SR_ITAMP3F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SR_ITAMP3F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SR_ITAMP3F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SR_ITAMP4F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SR_ITAMP4F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SR_ITAMP4F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SR_ITAMP5F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SR_ITAMP5F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SR_ITAMP5F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SR_ITAMP6F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SR_ITAMP6F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SR_ITAMP6F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_MISR_TAMP1MF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_MISR_TAMP1MF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_MISR_TAMP1MF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_MISR_TAMP2MF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_MISR_TAMP2MF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_MISR_TAMP2MF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_MISR_TAMP3MF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_MISR_TAMP3MF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_MISR_TAMP3MF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_MISR_ITAMP3MF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_MISR_ITAMP3MF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_MISR_ITAMP3MF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_MISR_ITAMP4MF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_MISR_ITAMP4MF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_MISR_ITAMP4MF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_MISR_ITAMP5MF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_MISR_ITAMP5MF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_MISR_ITAMP5MF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_MISR_ITAMP6MF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_MISR_ITAMP6MF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_MISR_ITAMP6MF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SCR_CTAMP1F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SCR_CTAMP1F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SCR_CTAMP1F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SCR_CTAMP2F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SCR_CTAMP2F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SCR_CTAMP2F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SCR_CTAMP3F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SCR_CTAMP3F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SCR_CTAMP3F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SCR_CITAMP3F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SCR_CITAMP3F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SCR_CITAMP3F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SCR_CITAMP4F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SCR_CITAMP4F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SCR_CITAMP4F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SCR_CITAMP5F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SCR_CITAMP5F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SCR_CITAMP5F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_SCR_CITAMP6F_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<TAMP_SCR_CITAMP6F_Values, BaseType, 0U> ;
  using Value1 = FieldValue<TAMP_SCR_CITAMP6F_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP0R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP1R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP2R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP3R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP4R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP5R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP6R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP7R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP8R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP9R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP10R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP11R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP12R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP13R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP14R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP15R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP16R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP17R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP18R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP19R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP20R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP21R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP22R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP23R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP24R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP25R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP26R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP27R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP28R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP29R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP30R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct TAMP_BKP31R_BKP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

