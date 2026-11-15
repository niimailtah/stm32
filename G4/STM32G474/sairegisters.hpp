/*******************************************************************************
* Filename      : sairegisters.hpp
*
* Details       : Serial audio interface. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "saifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SAI
{
  struct SAIBCR1Base {} ;

  struct BCR1 : public RegisterBase<0x40015424, 32, ReadWriteMode>
  {
    using MCKEN = SAI_BCR1_MCKEN_Values<SAI::BCR1, 27, 1, ReadWriteMode, SAIBCR1Base> ;
    using OSR = SAI_BCR1_OSR_Values<SAI::BCR1, 26, 1, ReadWriteMode, SAIBCR1Base> ;
    using MCJDIV = SAI_BCR1_MCJDIV_Values<SAI::BCR1, 20, 6, ReadWriteMode, SAIBCR1Base> ;
    using NODIV = SAI_BCR1_NODIV_Values<SAI::BCR1, 19, 1, ReadWriteMode, SAIBCR1Base> ;
    using DMAEN = SAI_BCR1_DMAEN_Values<SAI::BCR1, 17, 1, ReadWriteMode, SAIBCR1Base> ;
    using SAIBEN = SAI_BCR1_SAIBEN_Values<SAI::BCR1, 16, 1, ReadWriteMode, SAIBCR1Base> ;
    using OutDri = SAI_BCR1_OutDri_Values<SAI::BCR1, 13, 1, ReadWriteMode, SAIBCR1Base> ;
    using MONO = SAI_BCR1_MONO_Values<SAI::BCR1, 12, 1, ReadWriteMode, SAIBCR1Base> ;
    using SYNCEN = SAI_BCR1_SYNCEN_Values<SAI::BCR1, 10, 2, ReadWriteMode, SAIBCR1Base> ;
    using CKSTR = SAI_BCR1_CKSTR_Values<SAI::BCR1, 9, 1, ReadWriteMode, SAIBCR1Base> ;
    using LSBFIRST = SAI_BCR1_LSBFIRST_Values<SAI::BCR1, 8, 1, ReadWriteMode, SAIBCR1Base> ;
    using DS = SAI_BCR1_DS_Values<SAI::BCR1, 5, 3, ReadWriteMode, SAIBCR1Base> ;
    using PRTCFG = SAI_BCR1_PRTCFG_Values<SAI::BCR1, 2, 2, ReadWriteMode, SAIBCR1Base> ;
    using MODE = SAI_BCR1_MODE_Values<SAI::BCR1, 0, 2, ReadWriteMode, SAIBCR1Base> ;
    using FieldValues = SAI_BCR1_MODE_Values<SAI::BCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR1Pack  = Register<0x40015424, 32, ReadWriteMode, SAIBCR1Base, T...> ;

  struct SAIBCR2Base {} ;

  struct BCR2 : public RegisterBase<0x40015428, 32, ReadWriteMode>
  {
    using COMP = SAI_BCR2_COMP_Values<SAI::BCR2, 14, 2, ReadWriteMode, SAIBCR2Base> ;
    using CPL = SAI_BCR2_CPL_Values<SAI::BCR2, 13, 1, ReadWriteMode, SAIBCR2Base> ;
    using MUTECN = SAI_BCR2_MUTECN_Values<SAI::BCR2, 7, 6, ReadWriteMode, SAIBCR2Base> ;
    using MUTEVAL = SAI_BCR2_MUTEVAL_Values<SAI::BCR2, 6, 1, ReadWriteMode, SAIBCR2Base> ;
    using MUTE = SAI_BCR2_MUTE_Values<SAI::BCR2, 5, 1, ReadWriteMode, SAIBCR2Base> ;
    using TRIS = SAI_BCR2_TRIS_Values<SAI::BCR2, 4, 1, ReadWriteMode, SAIBCR2Base> ;
    using FFLUS = SAI_BCR2_FFLUS_Values<SAI::BCR2, 3, 1, ReadWriteMode, SAIBCR2Base> ;
    using FTH = SAI_BCR2_FTH_Values<SAI::BCR2, 0, 3, ReadWriteMode, SAIBCR2Base> ;
    using FieldValues = SAI_BCR2_FTH_Values<SAI::BCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR2Pack  = Register<0x40015428, 32, ReadWriteMode, SAIBCR2Base, T...> ;

  struct SAIBFRCRBase {} ;

  struct BFRCR : public RegisterBase<0x4001542C, 32, ReadWriteMode>
  {
    using FSOFF = SAI_BFRCR_FSOFF_Values<SAI::BFRCR, 18, 1, ReadWriteMode, SAIBFRCRBase> ;
    using FSPOL = SAI_BFRCR_FSPOL_Values<SAI::BFRCR, 17, 1, ReadWriteMode, SAIBFRCRBase> ;
    using FSDEF = SAI_BFRCR_FSDEF_Values<SAI::BFRCR, 16, 1, ReadWriteMode, SAIBFRCRBase> ;
    using FSALL = SAI_BFRCR_FSALL_Values<SAI::BFRCR, 8, 7, ReadWriteMode, SAIBFRCRBase> ;
    using FRL = SAI_BFRCR_FRL_Values<SAI::BFRCR, 0, 8, ReadWriteMode, SAIBFRCRBase> ;
    using FieldValues = SAI_BFRCR_FRL_Values<SAI::BFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BFRCRPack  = Register<0x4001542C, 32, ReadWriteMode, SAIBFRCRBase, T...> ;

  struct SAIBSLOTRBase {} ;

  struct BSLOTR : public RegisterBase<0x40015430, 32, ReadWriteMode>
  {
    using SLOTEN = SAI_BSLOTR_SLOTEN_Values<SAI::BSLOTR, 16, 16, ReadWriteMode, SAIBSLOTRBase> ;
    using NBSLOT = SAI_BSLOTR_NBSLOT_Values<SAI::BSLOTR, 8, 4, ReadWriteMode, SAIBSLOTRBase> ;
    using SLOTSZ = SAI_BSLOTR_SLOTSZ_Values<SAI::BSLOTR, 6, 2, ReadWriteMode, SAIBSLOTRBase> ;
    using FBOFF = SAI_BSLOTR_FBOFF_Values<SAI::BSLOTR, 0, 5, ReadWriteMode, SAIBSLOTRBase> ;
    using FieldValues = SAI_BSLOTR_FBOFF_Values<SAI::BSLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSLOTRPack  = Register<0x40015430, 32, ReadWriteMode, SAIBSLOTRBase, T...> ;

  struct SAIBIMBase {} ;

  struct BIM : public RegisterBase<0x40015434, 32, ReadWriteMode>
  {
    using LFSDETIE = SAI_BIM_LFSDETIE_Values<SAI::BIM, 6, 1, ReadWriteMode, SAIBIMBase> ;
    using AFSDETIE = SAI_BIM_AFSDETIE_Values<SAI::BIM, 5, 1, ReadWriteMode, SAIBIMBase> ;
    using CNRDYIE = SAI_BIM_CNRDYIE_Values<SAI::BIM, 4, 1, ReadWriteMode, SAIBIMBase> ;
    using FREQIE = SAI_BIM_FREQIE_Values<SAI::BIM, 3, 1, ReadWriteMode, SAIBIMBase> ;
    using WCKCFG = SAI_BIM_WCKCFG_Values<SAI::BIM, 2, 1, ReadWriteMode, SAIBIMBase> ;
    using MUTEDET = SAI_BIM_MUTEDET_Values<SAI::BIM, 1, 1, ReadWriteMode, SAIBIMBase> ;
    using OVRUDRIE = SAI_BIM_OVRUDRIE_Values<SAI::BIM, 0, 1, ReadWriteMode, SAIBIMBase> ;
    using FieldValues = SAI_BIM_OVRUDRIE_Values<SAI::BIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BIMPack  = Register<0x40015434, 32, ReadWriteMode, SAIBIMBase, T...> ;

  struct SAIBSRBase {} ;

  struct BSR : public RegisterBase<0x40015438, 32, ReadMode>
  {
    using FLVL = SAI_BSR_FLVL_Values<SAI::BSR, 16, 3, ReadMode, SAIBSRBase> ;
    using LFSDET = SAI_BSR_LFSDET_Values<SAI::BSR, 6, 1, ReadMode, SAIBSRBase> ;
    using AFSDET = SAI_BSR_AFSDET_Values<SAI::BSR, 5, 1, ReadMode, SAIBSRBase> ;
    using CNRDY = SAI_BSR_CNRDY_Values<SAI::BSR, 4, 1, ReadMode, SAIBSRBase> ;
    using FREQ = SAI_BSR_FREQ_Values<SAI::BSR, 3, 1, ReadMode, SAIBSRBase> ;
    using WCKCFG = SAI_BSR_WCKCFG_Values<SAI::BSR, 2, 1, ReadMode, SAIBSRBase> ;
    using MUTEDET = SAI_BSR_MUTEDET_Values<SAI::BSR, 1, 1, ReadMode, SAIBSRBase> ;
    using OVRUDR = SAI_BSR_OVRUDR_Values<SAI::BSR, 0, 1, ReadMode, SAIBSRBase> ;
    using FieldValues = SAI_BSR_OVRUDR_Values<SAI::BSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRPack  = Register<0x40015438, 32, ReadMode, SAIBSRBase, T...> ;

  struct SAIBCLRFRBase {} ;

  struct BCLRFR : public RegisterBase<0x4001543C, 32, WriteMode>
  {
    using LFSDET = SAI_BCLRFR_LFSDET_Values<SAI::BCLRFR, 6, 1, WriteMode, SAIBCLRFRBase> ;
    using CAFSDET = SAI_BCLRFR_CAFSDET_Values<SAI::BCLRFR, 5, 1, WriteMode, SAIBCLRFRBase> ;
    using CNRDY = SAI_BCLRFR_CNRDY_Values<SAI::BCLRFR, 4, 1, WriteMode, SAIBCLRFRBase> ;
    using WCKCFG = SAI_BCLRFR_WCKCFG_Values<SAI::BCLRFR, 2, 1, WriteMode, SAIBCLRFRBase> ;
    using MUTEDET = SAI_BCLRFR_MUTEDET_Values<SAI::BCLRFR, 1, 1, WriteMode, SAIBCLRFRBase> ;
    using OVRUDR = SAI_BCLRFR_OVRUDR_Values<SAI::BCLRFR, 0, 1, WriteMode, SAIBCLRFRBase> ;
    using FieldValues = SAI_BCLRFR_OVRUDR_Values<SAI::BCLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCLRFRPack  = Register<0x4001543C, 32, WriteMode, SAIBCLRFRBase, T...> ;

  struct SAIBDRBase {} ;

  struct BDR : public RegisterBase<0x40015440, 32, ReadWriteMode>
  {
    using DATA = SAI_BDR_DATA_Values<SAI::BDR, 0, 32, ReadWriteMode, SAIBDRBase> ;
    using FieldValues = SAI_BDR_DATA_Values<SAI::BDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDRPack  = Register<0x40015440, 32, ReadWriteMode, SAIBDRBase, T...> ;

  struct SAIACR1Base {} ;

  struct ACR1 : public RegisterBase<0x40015404, 32, ReadWriteMode>
  {
    using MCKEN = SAI_ACR1_MCKEN_Values<SAI::ACR1, 27, 1, ReadWriteMode, SAIACR1Base> ;
    using OSR = SAI_ACR1_OSR_Values<SAI::ACR1, 26, 1, ReadWriteMode, SAIACR1Base> ;
    using MCJDIV = SAI_ACR1_MCJDIV_Values<SAI::ACR1, 20, 6, ReadWriteMode, SAIACR1Base> ;
    using NODIV = SAI_ACR1_NODIV_Values<SAI::ACR1, 19, 1, ReadWriteMode, SAIACR1Base> ;
    using DMAEN = SAI_ACR1_DMAEN_Values<SAI::ACR1, 17, 1, ReadWriteMode, SAIACR1Base> ;
    using SAIAEN = SAI_ACR1_SAIAEN_Values<SAI::ACR1, 16, 1, ReadWriteMode, SAIACR1Base> ;
    using OutDri = SAI_ACR1_OutDri_Values<SAI::ACR1, 13, 1, ReadWriteMode, SAIACR1Base> ;
    using MONO = SAI_ACR1_MONO_Values<SAI::ACR1, 12, 1, ReadWriteMode, SAIACR1Base> ;
    using SYNCEN = SAI_ACR1_SYNCEN_Values<SAI::ACR1, 10, 2, ReadWriteMode, SAIACR1Base> ;
    using CKSTR = SAI_ACR1_CKSTR_Values<SAI::ACR1, 9, 1, ReadWriteMode, SAIACR1Base> ;
    using LSBFIRST = SAI_ACR1_LSBFIRST_Values<SAI::ACR1, 8, 1, ReadWriteMode, SAIACR1Base> ;
    using DS = SAI_ACR1_DS_Values<SAI::ACR1, 5, 3, ReadWriteMode, SAIACR1Base> ;
    using PRTCFG = SAI_ACR1_PRTCFG_Values<SAI::ACR1, 2, 2, ReadWriteMode, SAIACR1Base> ;
    using MODE = SAI_ACR1_MODE_Values<SAI::ACR1, 0, 2, ReadWriteMode, SAIACR1Base> ;
    using FieldValues = SAI_ACR1_MODE_Values<SAI::ACR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACR1Pack  = Register<0x40015404, 32, ReadWriteMode, SAIACR1Base, T...> ;

  struct SAIACR2Base {} ;

  struct ACR2 : public RegisterBase<0x40015408, 32, ReadWriteMode>
  {
    using COMP = SAI_ACR2_COMP_Values<SAI::ACR2, 14, 2, ReadWriteMode, SAIACR2Base> ;
    using CPL = SAI_ACR2_CPL_Values<SAI::ACR2, 13, 1, ReadWriteMode, SAIACR2Base> ;
    using MUTECN = SAI_ACR2_MUTECN_Values<SAI::ACR2, 7, 6, ReadWriteMode, SAIACR2Base> ;
    using MUTEVAL = SAI_ACR2_MUTEVAL_Values<SAI::ACR2, 6, 1, ReadWriteMode, SAIACR2Base> ;
    using MUTE = SAI_ACR2_MUTE_Values<SAI::ACR2, 5, 1, ReadWriteMode, SAIACR2Base> ;
    using TRIS = SAI_ACR2_TRIS_Values<SAI::ACR2, 4, 1, ReadWriteMode, SAIACR2Base> ;
    using FFLUS = SAI_ACR2_FFLUS_Values<SAI::ACR2, 3, 1, ReadWriteMode, SAIACR2Base> ;
    using FTH = SAI_ACR2_FTH_Values<SAI::ACR2, 0, 3, ReadWriteMode, SAIACR2Base> ;
    using FieldValues = SAI_ACR2_FTH_Values<SAI::ACR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACR2Pack  = Register<0x40015408, 32, ReadWriteMode, SAIACR2Base, T...> ;

  struct SAIAFRCRBase {} ;

  struct AFRCR : public RegisterBase<0x4001540C, 32, ReadWriteMode>
  {
    using FSOFF = SAI_AFRCR_FSOFF_Values<SAI::AFRCR, 18, 1, ReadWriteMode, SAIAFRCRBase> ;
    using FSPOL = SAI_AFRCR_FSPOL_Values<SAI::AFRCR, 17, 1, ReadWriteMode, SAIAFRCRBase> ;
    using FSDEF = SAI_AFRCR_FSDEF_Values<SAI::AFRCR, 16, 1, ReadWriteMode, SAIAFRCRBase> ;
    using FSALL = SAI_AFRCR_FSALL_Values<SAI::AFRCR, 8, 7, ReadWriteMode, SAIAFRCRBase> ;
    using FRL = SAI_AFRCR_FRL_Values<SAI::AFRCR, 0, 8, ReadWriteMode, SAIAFRCRBase> ;
    using FieldValues = SAI_AFRCR_FRL_Values<SAI::AFRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRCRPack  = Register<0x4001540C, 32, ReadWriteMode, SAIAFRCRBase, T...> ;

  struct SAIASLOTRBase {} ;

  struct ASLOTR : public RegisterBase<0x40015410, 32, ReadWriteMode>
  {
    using SLOTEN = SAI_ASLOTR_SLOTEN_Values<SAI::ASLOTR, 16, 16, ReadWriteMode, SAIASLOTRBase> ;
    using NBSLOT = SAI_ASLOTR_NBSLOT_Values<SAI::ASLOTR, 8, 4, ReadWriteMode, SAIASLOTRBase> ;
    using SLOTSZ = SAI_ASLOTR_SLOTSZ_Values<SAI::ASLOTR, 6, 2, ReadWriteMode, SAIASLOTRBase> ;
    using FBOFF = SAI_ASLOTR_FBOFF_Values<SAI::ASLOTR, 0, 5, ReadWriteMode, SAIASLOTRBase> ;
    using FieldValues = SAI_ASLOTR_FBOFF_Values<SAI::ASLOTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ASLOTRPack  = Register<0x40015410, 32, ReadWriteMode, SAIASLOTRBase, T...> ;

  struct SAIAIMBase {} ;

  struct AIM : public RegisterBase<0x40015414, 32, ReadWriteMode>
  {
    using LFSDET = SAI_AIM_LFSDET_Values<SAI::AIM, 6, 1, ReadWriteMode, SAIAIMBase> ;
    using AFSDETIE = SAI_AIM_AFSDETIE_Values<SAI::AIM, 5, 1, ReadWriteMode, SAIAIMBase> ;
    using CNRDYIE = SAI_AIM_CNRDYIE_Values<SAI::AIM, 4, 1, ReadWriteMode, SAIAIMBase> ;
    using FREQIE = SAI_AIM_FREQIE_Values<SAI::AIM, 3, 1, ReadWriteMode, SAIAIMBase> ;
    using WCKCFG = SAI_AIM_WCKCFG_Values<SAI::AIM, 2, 1, ReadWriteMode, SAIAIMBase> ;
    using MUTEDET = SAI_AIM_MUTEDET_Values<SAI::AIM, 1, 1, ReadWriteMode, SAIAIMBase> ;
    using OVRUDRIE = SAI_AIM_OVRUDRIE_Values<SAI::AIM, 0, 1, ReadWriteMode, SAIAIMBase> ;
    using FieldValues = SAI_AIM_OVRUDRIE_Values<SAI::AIM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AIMPack  = Register<0x40015414, 32, ReadWriteMode, SAIAIMBase, T...> ;

  struct SAIASRBase {} ;

  struct ASR : public RegisterBase<0x40015418, 32, ReadWriteMode>
  {
    using FLVL = SAI_ASR_FLVL_Values<SAI::ASR, 16, 3, ReadWriteMode, SAIASRBase> ;
    using LFSDET = SAI_ASR_LFSDET_Values<SAI::ASR, 6, 1, ReadWriteMode, SAIASRBase> ;
    using AFSDET = SAI_ASR_AFSDET_Values<SAI::ASR, 5, 1, ReadWriteMode, SAIASRBase> ;
    using CNRDY = SAI_ASR_CNRDY_Values<SAI::ASR, 4, 1, ReadWriteMode, SAIASRBase> ;
    using FREQ = SAI_ASR_FREQ_Values<SAI::ASR, 3, 1, ReadWriteMode, SAIASRBase> ;
    using WCKCFG = SAI_ASR_WCKCFG_Values<SAI::ASR, 2, 1, ReadWriteMode, SAIASRBase> ;
    using MUTEDET = SAI_ASR_MUTEDET_Values<SAI::ASR, 1, 1, ReadWriteMode, SAIASRBase> ;
    using OVRUDR = SAI_ASR_OVRUDR_Values<SAI::ASR, 0, 1, ReadWriteMode, SAIASRBase> ;
    using FieldValues = SAI_ASR_OVRUDR_Values<SAI::ASR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ASRPack  = Register<0x40015418, 32, ReadWriteMode, SAIASRBase, T...> ;

  struct SAIACLRFRBase {} ;

  struct ACLRFR : public RegisterBase<0x4001541C, 32, ReadWriteMode>
  {
    using LFSDET = SAI_ACLRFR_LFSDET_Values<SAI::ACLRFR, 6, 1, ReadWriteMode, SAIACLRFRBase> ;
    using CAFSDET = SAI_ACLRFR_CAFSDET_Values<SAI::ACLRFR, 5, 1, ReadWriteMode, SAIACLRFRBase> ;
    using CNRDY = SAI_ACLRFR_CNRDY_Values<SAI::ACLRFR, 4, 1, ReadWriteMode, SAIACLRFRBase> ;
    using WCKCFG = SAI_ACLRFR_WCKCFG_Values<SAI::ACLRFR, 2, 1, ReadWriteMode, SAIACLRFRBase> ;
    using MUTEDET = SAI_ACLRFR_MUTEDET_Values<SAI::ACLRFR, 1, 1, ReadWriteMode, SAIACLRFRBase> ;
    using OVRUDR = SAI_ACLRFR_OVRUDR_Values<SAI::ACLRFR, 0, 1, ReadWriteMode, SAIACLRFRBase> ;
    using FieldValues = SAI_ACLRFR_OVRUDR_Values<SAI::ACLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACLRFRPack  = Register<0x4001541C, 32, ReadWriteMode, SAIACLRFRBase, T...> ;

  struct SAIADRBase {} ;

  struct ADR : public RegisterBase<0x40015420, 32, ReadWriteMode>
  {
    using DATA = SAI_ADR_DATA_Values<SAI::ADR, 0, 32, ReadWriteMode, SAIADRBase> ;
    using FieldValues = SAI_ADR_DATA_Values<SAI::ADR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADRPack  = Register<0x40015420, 32, ReadWriteMode, SAIADRBase, T...> ;

  struct SAIPDMCRBase {} ;

  struct PDMCR : public RegisterBase<0x40015444, 32, ReadWriteMode>
  {
    using PDMEN = SAI_PDMCR_PDMEN_Values<SAI::PDMCR, 0, 1, ReadWriteMode, SAIPDMCRBase> ;
    using MICNBR = SAI_PDMCR_MICNBR_Values<SAI::PDMCR, 4, 2, ReadWriteMode, SAIPDMCRBase> ;
    using CKEN1 = SAI_PDMCR_CKEN1_Values<SAI::PDMCR, 8, 1, ReadWriteMode, SAIPDMCRBase> ;
    using CKEN2 = SAI_PDMCR_CKEN2_Values<SAI::PDMCR, 9, 1, ReadWriteMode, SAIPDMCRBase> ;
    using CKEN3 = SAI_PDMCR_CKEN3_Values<SAI::PDMCR, 10, 1, ReadWriteMode, SAIPDMCRBase> ;
    using CKEN4 = SAI_PDMCR_CKEN4_Values<SAI::PDMCR, 11, 1, ReadWriteMode, SAIPDMCRBase> ;
    using FieldValues = SAI_PDMCR_CKEN4_Values<SAI::PDMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDMCRPack  = Register<0x40015444, 32, ReadWriteMode, SAIPDMCRBase, T...> ;

  struct SAIPDMDLYBase {} ;

  struct PDMDLY : public RegisterBase<0x40015448, 32, ReadWriteMode>
  {
    using DLYM1L = SAI_PDMDLY_DLYM1L_Values<SAI::PDMDLY, 0, 3, ReadWriteMode, SAIPDMDLYBase> ;
    using DLYM1R = SAI_PDMDLY_DLYM1R_Values<SAI::PDMDLY, 4, 3, ReadWriteMode, SAIPDMDLYBase> ;
    using DLYM2L = SAI_PDMDLY_DLYM2L_Values<SAI::PDMDLY, 8, 3, ReadWriteMode, SAIPDMDLYBase> ;
    using DLYM2R = SAI_PDMDLY_DLYM2R_Values<SAI::PDMDLY, 12, 3, ReadWriteMode, SAIPDMDLYBase> ;
    using DLYM3L = SAI_PDMDLY_DLYM3L_Values<SAI::PDMDLY, 16, 3, ReadWriteMode, SAIPDMDLYBase> ;
    using DLYM3R = SAI_PDMDLY_DLYM3R_Values<SAI::PDMDLY, 20, 3, ReadWriteMode, SAIPDMDLYBase> ;
    using DLYM4L = SAI_PDMDLY_DLYM4L_Values<SAI::PDMDLY, 24, 3, ReadWriteMode, SAIPDMDLYBase> ;
    using DLYM4R = SAI_PDMDLY_DLYM4R_Values<SAI::PDMDLY, 28, 3, ReadWriteMode, SAIPDMDLYBase> ;
    using FieldValues = SAI_PDMDLY_DLYM4R_Values<SAI::PDMDLY, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PDMDLYPack  = Register<0x40015448, 32, ReadWriteMode, SAIPDMDLYBase, T...> ;

} ;

