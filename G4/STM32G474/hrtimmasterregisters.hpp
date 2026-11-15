/*******************************************************************************
* Filename      : hrtimmasterregisters.hpp
*
* Details       : High Resolution Timer: Master Timers. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "hrtimmasterfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct HRTIM_Master
{
  struct HRTIM_MasterMCRBase {} ;

  struct MCR : public RegisterBase<0x40016800, 32, ReadWriteMode>
  {
    using BRSTDMA = HRTIM_Master_MCR_BRSTDMA_Values<HRTIM_Master::MCR, 30, 2, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using MREPU = HRTIM_Master_MCR_MREPU_Values<HRTIM_Master::MCR, 29, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using PREEN = HRTIM_Master_MCR_PREEN_Values<HRTIM_Master::MCR, 27, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using DACSYNC = HRTIM_Master_MCR_DACSYNC_Values<HRTIM_Master::MCR, 25, 2, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using TFCEN = HRTIM_Master_MCR_TFCEN_Values<HRTIM_Master::MCR, 22, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using TECEN = HRTIM_Master_MCR_TECEN_Values<HRTIM_Master::MCR, 21, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using TDCEN = HRTIM_Master_MCR_TDCEN_Values<HRTIM_Master::MCR, 20, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using TCCEN = HRTIM_Master_MCR_TCCEN_Values<HRTIM_Master::MCR, 19, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using TBCEN = HRTIM_Master_MCR_TBCEN_Values<HRTIM_Master::MCR, 18, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using TACEN = HRTIM_Master_MCR_TACEN_Values<HRTIM_Master::MCR, 17, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using MCEN = HRTIM_Master_MCR_MCEN_Values<HRTIM_Master::MCR, 16, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using SYNC_SRC = HRTIM_Master_MCR_SYNC_SRC_Values<HRTIM_Master::MCR, 14, 2, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using SYNC_OUT = HRTIM_Master_MCR_SYNC_OUT_Values<HRTIM_Master::MCR, 12, 2, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using SYNCSTRTM = HRTIM_Master_MCR_SYNCSTRTM_Values<HRTIM_Master::MCR, 11, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using SYNCRSTM = HRTIM_Master_MCR_SYNCRSTM_Values<HRTIM_Master::MCR, 10, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using SYNC_IN = HRTIM_Master_MCR_SYNC_IN_Values<HRTIM_Master::MCR, 8, 2, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using INTLVD = HRTIM_Master_MCR_INTLVD_Values<HRTIM_Master::MCR, 6, 2, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using HALF = HRTIM_Master_MCR_HALF_Values<HRTIM_Master::MCR, 5, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using RETRIG = HRTIM_Master_MCR_RETRIG_Values<HRTIM_Master::MCR, 4, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using CONT = HRTIM_Master_MCR_CONT_Values<HRTIM_Master::MCR, 3, 1, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using CK_PSC = HRTIM_Master_MCR_CK_PSC_Values<HRTIM_Master::MCR, 0, 3, ReadWriteMode, HRTIM_MasterMCRBase> ;
    using FieldValues = HRTIM_Master_MCR_CK_PSC_Values<HRTIM_Master::MCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MCRPack  = Register<0x40016800, 32, ReadWriteMode, HRTIM_MasterMCRBase, T...> ;

  struct HRTIM_MasterMISRBase {} ;

  struct MISR : public RegisterBase<0x40016804, 32, ReadMode>
  {
    using MUPD = HRTIM_Master_MISR_MUPD_Values<HRTIM_Master::MISR, 6, 1, ReadMode, HRTIM_MasterMISRBase> ;
    using SYNC = HRTIM_Master_MISR_SYNC_Values<HRTIM_Master::MISR, 5, 1, ReadMode, HRTIM_MasterMISRBase> ;
    using MREP = HRTIM_Master_MISR_MREP_Values<HRTIM_Master::MISR, 4, 1, ReadMode, HRTIM_MasterMISRBase> ;
    using MCMP4 = HRTIM_Master_MISR_MCMP4_Values<HRTIM_Master::MISR, 3, 1, ReadMode, HRTIM_MasterMISRBase> ;
    using MCMP3 = HRTIM_Master_MISR_MCMP3_Values<HRTIM_Master::MISR, 2, 1, ReadMode, HRTIM_MasterMISRBase> ;
    using MCMP2 = HRTIM_Master_MISR_MCMP2_Values<HRTIM_Master::MISR, 1, 1, ReadMode, HRTIM_MasterMISRBase> ;
    using MCMP1 = HRTIM_Master_MISR_MCMP1_Values<HRTIM_Master::MISR, 0, 1, ReadMode, HRTIM_MasterMISRBase> ;
    using FieldValues = HRTIM_Master_MISR_MCMP1_Values<HRTIM_Master::MISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISRPack  = Register<0x40016804, 32, ReadMode, HRTIM_MasterMISRBase, T...> ;

  struct HRTIM_MasterMICRBase {} ;

  struct MICR : public RegisterBase<0x40016808, 32, WriteMode>
  {
    using MUPDC = HRTIM_Master_MICR_MUPDC_Values<HRTIM_Master::MICR, 6, 1, WriteMode, HRTIM_MasterMICRBase> ;
    using SYNCC = HRTIM_Master_MICR_SYNCC_Values<HRTIM_Master::MICR, 5, 1, WriteMode, HRTIM_MasterMICRBase> ;
    using MREPC = HRTIM_Master_MICR_MREPC_Values<HRTIM_Master::MICR, 4, 1, WriteMode, HRTIM_MasterMICRBase> ;
    using MCMP4C = HRTIM_Master_MICR_MCMP4C_Values<HRTIM_Master::MICR, 3, 1, WriteMode, HRTIM_MasterMICRBase> ;
    using MCMP3C = HRTIM_Master_MICR_MCMP3C_Values<HRTIM_Master::MICR, 2, 1, WriteMode, HRTIM_MasterMICRBase> ;
    using MCMP2C = HRTIM_Master_MICR_MCMP2C_Values<HRTIM_Master::MICR, 1, 1, WriteMode, HRTIM_MasterMICRBase> ;
    using MCMP1C = HRTIM_Master_MICR_MCMP1C_Values<HRTIM_Master::MICR, 0, 1, WriteMode, HRTIM_MasterMICRBase> ;
    using FieldValues = HRTIM_Master_MICR_MCMP1C_Values<HRTIM_Master::MICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MICRPack  = Register<0x40016808, 32, WriteMode, HRTIM_MasterMICRBase, T...> ;

  struct HRTIM_MasterMDIERBase {} ;

  struct MDIER : public RegisterBase<0x4001680C, 32, ReadWriteMode>
  {
    using MUPDDE = HRTIM_Master_MDIER_MUPDDE_Values<HRTIM_Master::MDIER, 22, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using SYNCDE = HRTIM_Master_MDIER_SYNCDE_Values<HRTIM_Master::MDIER, 21, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using MREPDE = HRTIM_Master_MDIER_MREPDE_Values<HRTIM_Master::MDIER, 20, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using MCMP4DE = HRTIM_Master_MDIER_MCMP4DE_Values<HRTIM_Master::MDIER, 19, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using MCMP3DE = HRTIM_Master_MDIER_MCMP3DE_Values<HRTIM_Master::MDIER, 18, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using MCMP2DE = HRTIM_Master_MDIER_MCMP2DE_Values<HRTIM_Master::MDIER, 17, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using MCMP1DE = HRTIM_Master_MDIER_MCMP1DE_Values<HRTIM_Master::MDIER, 16, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using MUPDIE = HRTIM_Master_MDIER_MUPDIE_Values<HRTIM_Master::MDIER, 6, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using SYNCIE = HRTIM_Master_MDIER_SYNCIE_Values<HRTIM_Master::MDIER, 5, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using MREPIE = HRTIM_Master_MDIER_MREPIE_Values<HRTIM_Master::MDIER, 4, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using MCMP4IE = HRTIM_Master_MDIER_MCMP4IE_Values<HRTIM_Master::MDIER, 3, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using MCMP3IE = HRTIM_Master_MDIER_MCMP3IE_Values<HRTIM_Master::MDIER, 2, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using MCMP2IE = HRTIM_Master_MDIER_MCMP2IE_Values<HRTIM_Master::MDIER, 1, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using MCMP1IE = HRTIM_Master_MDIER_MCMP1IE_Values<HRTIM_Master::MDIER, 0, 1, ReadWriteMode, HRTIM_MasterMDIERBase> ;
    using FieldValues = HRTIM_Master_MDIER_MCMP1IE_Values<HRTIM_Master::MDIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MDIERPack  = Register<0x4001680C, 32, ReadWriteMode, HRTIM_MasterMDIERBase, T...> ;

  struct HRTIM_MasterMCNTRBase {} ;

  struct MCNTR : public RegisterBase<0x40016810, 32, ReadWriteMode>
  {
    using MCNT = HRTIM_Master_MCNTR_MCNT_Values<HRTIM_Master::MCNTR, 0, 16, ReadWriteMode, HRTIM_MasterMCNTRBase> ;
    using FieldValues = HRTIM_Master_MCNTR_MCNT_Values<HRTIM_Master::MCNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MCNTRPack  = Register<0x40016810, 32, ReadWriteMode, HRTIM_MasterMCNTRBase, T...> ;

  struct HRTIM_MasterMPERBase {} ;

  struct MPER : public RegisterBase<0x40016814, 32, ReadWriteMode>
  {
    using MPERField = HRTIM_Master_MPER_MPER_Values<HRTIM_Master::MPER, 0, 16, ReadWriteMode, HRTIM_MasterMPERBase> ;
    using FieldValues = HRTIM_Master_MPER_MPER_Values<HRTIM_Master::MPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MPERPack  = Register<0x40016814, 32, ReadWriteMode, HRTIM_MasterMPERBase, T...> ;

  struct HRTIM_MasterMREPBase {} ;

  struct MREP : public RegisterBase<0x40016818, 32, ReadWriteMode>
  {
    using MREPField = HRTIM_Master_MREP_MREP_Values<HRTIM_Master::MREP, 0, 8, ReadWriteMode, HRTIM_MasterMREPBase> ;
    using FieldValues = HRTIM_Master_MREP_MREP_Values<HRTIM_Master::MREP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MREPPack  = Register<0x40016818, 32, ReadWriteMode, HRTIM_MasterMREPBase, T...> ;

  struct HRTIM_MasterMCMP1RBase {} ;

  struct MCMP1R : public RegisterBase<0x4001681C, 32, ReadWriteMode>
  {
    using MCMP1 = HRTIM_Master_MCMP1R_MCMP1_Values<HRTIM_Master::MCMP1R, 0, 16, ReadWriteMode, HRTIM_MasterMCMP1RBase> ;
    using FieldValues = HRTIM_Master_MCMP1R_MCMP1_Values<HRTIM_Master::MCMP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MCMP1RPack  = Register<0x4001681C, 32, ReadWriteMode, HRTIM_MasterMCMP1RBase, T...> ;

  struct HRTIM_MasterMCMP2RBase {} ;

  struct MCMP2R : public RegisterBase<0x40016824, 32, ReadWriteMode>
  {
    using MCMP2 = HRTIM_Master_MCMP2R_MCMP2_Values<HRTIM_Master::MCMP2R, 0, 16, ReadWriteMode, HRTIM_MasterMCMP2RBase> ;
    using FieldValues = HRTIM_Master_MCMP2R_MCMP2_Values<HRTIM_Master::MCMP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MCMP2RPack  = Register<0x40016824, 32, ReadWriteMode, HRTIM_MasterMCMP2RBase, T...> ;

  struct HRTIM_MasterMCMP3RBase {} ;

  struct MCMP3R : public RegisterBase<0x40016828, 32, ReadWriteMode>
  {
    using MCMP3 = HRTIM_Master_MCMP3R_MCMP3_Values<HRTIM_Master::MCMP3R, 0, 16, ReadWriteMode, HRTIM_MasterMCMP3RBase> ;
    using FieldValues = HRTIM_Master_MCMP3R_MCMP3_Values<HRTIM_Master::MCMP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MCMP3RPack  = Register<0x40016828, 32, ReadWriteMode, HRTIM_MasterMCMP3RBase, T...> ;

  struct HRTIM_MasterMCMP4RBase {} ;

  struct MCMP4R : public RegisterBase<0x4001682C, 32, ReadWriteMode>
  {
    using MCMP4 = HRTIM_Master_MCMP4R_MCMP4_Values<HRTIM_Master::MCMP4R, 0, 16, ReadWriteMode, HRTIM_MasterMCMP4RBase> ;
    using FieldValues = HRTIM_Master_MCMP4R_MCMP4_Values<HRTIM_Master::MCMP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MCMP4RPack  = Register<0x4001682C, 32, ReadWriteMode, HRTIM_MasterMCMP4RBase, T...> ;

} ;

