/*******************************************************************************
* Filename      : fmcregisters.hpp
*
* Details       : Flexible memory controller. This header file is auto-generated
*                 for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fmcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FMC
{
  struct FMCBCR1Base {} ;

  struct BCR1 : public RegisterBase<0xA0000000, 32, ReadWriteMode>
  {
    using MBKEN = FMC_BCR1_MBKEN_Values<FMC::BCR1, 0, 1, ReadWriteMode, FMCBCR1Base> ;
    using MUXEN = FMC_BCR1_MUXEN_Values<FMC::BCR1, 1, 1, ReadWriteMode, FMCBCR1Base> ;
    using MTYP = FMC_BCR1_MTYP_Values<FMC::BCR1, 2, 2, ReadWriteMode, FMCBCR1Base> ;
    using MWID = FMC_BCR1_MWID_Values<FMC::BCR1, 4, 2, ReadWriteMode, FMCBCR1Base> ;
    using FACCEN = FMC_BCR1_FACCEN_Values<FMC::BCR1, 6, 1, ReadWriteMode, FMCBCR1Base> ;
    using BURSTEN = FMC_BCR1_BURSTEN_Values<FMC::BCR1, 8, 1, ReadWriteMode, FMCBCR1Base> ;
    using WAITPOL = FMC_BCR1_WAITPOL_Values<FMC::BCR1, 9, 1, ReadWriteMode, FMCBCR1Base> ;
    using WAITCFG = FMC_BCR1_WAITCFG_Values<FMC::BCR1, 11, 1, ReadWriteMode, FMCBCR1Base> ;
    using WREN = FMC_BCR1_WREN_Values<FMC::BCR1, 12, 1, ReadWriteMode, FMCBCR1Base> ;
    using WAITEN = FMC_BCR1_WAITEN_Values<FMC::BCR1, 13, 1, ReadWriteMode, FMCBCR1Base> ;
    using EXTMOD = FMC_BCR1_EXTMOD_Values<FMC::BCR1, 14, 1, ReadWriteMode, FMCBCR1Base> ;
    using ASYNCWAIT = FMC_BCR1_ASYNCWAIT_Values<FMC::BCR1, 15, 1, ReadWriteMode, FMCBCR1Base> ;
    using CPSIZE = FMC_BCR1_CPSIZE_Values<FMC::BCR1, 16, 3, ReadWriteMode, FMCBCR1Base> ;
    using CBURSTRW = FMC_BCR1_CBURSTRW_Values<FMC::BCR1, 19, 1, ReadWriteMode, FMCBCR1Base> ;
    using CCLKEN = FMC_BCR1_CCLKEN_Values<FMC::BCR1, 20, 1, ReadWriteMode, FMCBCR1Base> ;
    using WFDIS = FMC_BCR1_WFDIS_Values<FMC::BCR1, 21, 1, ReadWriteMode, FMCBCR1Base> ;
    using NBLSET = FMC_BCR1_NBLSET_Values<FMC::BCR1, 22, 2, ReadWriteMode, FMCBCR1Base> ;
    using FieldValues = FMC_BCR1_NBLSET_Values<FMC::BCR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR1Pack  = Register<0xA0000000, 32, ReadWriteMode, FMCBCR1Base, T...> ;

  struct FMCBTR1Base {} ;

  struct BTR1 : public RegisterBase<0xA0000004, 32, ReadWriteMode>
  {
    using DATAHLD = FMC_BTR1_DATAHLD_Values<FMC::BTR1, 30, 2, ReadWriteMode, FMCBTR1Base> ;
    using ACCMOD = FMC_BTR1_ACCMOD_Values<FMC::BTR1, 28, 2, ReadWriteMode, FMCBTR1Base> ;
    using DATLAT = FMC_BTR1_DATLAT_Values<FMC::BTR1, 24, 4, ReadWriteMode, FMCBTR1Base> ;
    using CLKDIV = FMC_BTR1_CLKDIV_Values<FMC::BTR1, 20, 4, ReadWriteMode, FMCBTR1Base> ;
    using BUSTURN = FMC_BTR1_BUSTURN_Values<FMC::BTR1, 16, 4, ReadWriteMode, FMCBTR1Base> ;
    using DATAST = FMC_BTR1_DATAST_Values<FMC::BTR1, 8, 8, ReadWriteMode, FMCBTR1Base> ;
    using ADDHLD = FMC_BTR1_ADDHLD_Values<FMC::BTR1, 4, 4, ReadWriteMode, FMCBTR1Base> ;
    using ADDSET = FMC_BTR1_ADDSET_Values<FMC::BTR1, 0, 4, ReadWriteMode, FMCBTR1Base> ;
    using FieldValues = FMC_BTR1_ADDSET_Values<FMC::BTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR1Pack  = Register<0xA0000004, 32, ReadWriteMode, FMCBTR1Base, T...> ;

  struct FMCBCR2Base {} ;

  struct BCR2 : public RegisterBase<0xA0000008, 32, ReadWriteMode>
  {
    using MBKEN = FMC_BCR2_MBKEN_Values<FMC::BCR2, 0, 1, ReadWriteMode, FMCBCR2Base> ;
    using MUXEN = FMC_BCR2_MUXEN_Values<FMC::BCR2, 1, 1, ReadWriteMode, FMCBCR2Base> ;
    using MTYP = FMC_BCR2_MTYP_Values<FMC::BCR2, 2, 2, ReadWriteMode, FMCBCR2Base> ;
    using MWID = FMC_BCR2_MWID_Values<FMC::BCR2, 4, 2, ReadWriteMode, FMCBCR2Base> ;
    using FACCEN = FMC_BCR2_FACCEN_Values<FMC::BCR2, 6, 1, ReadWriteMode, FMCBCR2Base> ;
    using BURSTEN = FMC_BCR2_BURSTEN_Values<FMC::BCR2, 8, 1, ReadWriteMode, FMCBCR2Base> ;
    using WAITPOL = FMC_BCR2_WAITPOL_Values<FMC::BCR2, 9, 1, ReadWriteMode, FMCBCR2Base> ;
    using WAITCFG = FMC_BCR2_WAITCFG_Values<FMC::BCR2, 11, 1, ReadWriteMode, FMCBCR2Base> ;
    using WREN = FMC_BCR2_WREN_Values<FMC::BCR2, 12, 1, ReadWriteMode, FMCBCR2Base> ;
    using WAITEN = FMC_BCR2_WAITEN_Values<FMC::BCR2, 13, 1, ReadWriteMode, FMCBCR2Base> ;
    using EXTMOD = FMC_BCR2_EXTMOD_Values<FMC::BCR2, 14, 1, ReadWriteMode, FMCBCR2Base> ;
    using ASYNCWAIT = FMC_BCR2_ASYNCWAIT_Values<FMC::BCR2, 15, 1, ReadWriteMode, FMCBCR2Base> ;
    using CPSIZE = FMC_BCR2_CPSIZE_Values<FMC::BCR2, 16, 3, ReadWriteMode, FMCBCR2Base> ;
    using CBURSTRW = FMC_BCR2_CBURSTRW_Values<FMC::BCR2, 19, 1, ReadWriteMode, FMCBCR2Base> ;
    using CCLKEN = FMC_BCR2_CCLKEN_Values<FMC::BCR2, 20, 1, ReadWriteMode, FMCBCR2Base> ;
    using WFDIS = FMC_BCR2_WFDIS_Values<FMC::BCR2, 21, 1, ReadWriteMode, FMCBCR2Base> ;
    using NBLSET = FMC_BCR2_NBLSET_Values<FMC::BCR2, 22, 2, ReadWriteMode, FMCBCR2Base> ;
    using FieldValues = FMC_BCR2_NBLSET_Values<FMC::BCR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR2Pack  = Register<0xA0000008, 32, ReadWriteMode, FMCBCR2Base, T...> ;

  struct FMCBTR2Base {} ;

  struct BTR2 : public RegisterBase<0xA000000C, 32, ReadWriteMode>
  {
    using DATAHLD = FMC_BTR2_DATAHLD_Values<FMC::BTR2, 30, 2, ReadWriteMode, FMCBTR2Base> ;
    using ACCMOD = FMC_BTR2_ACCMOD_Values<FMC::BTR2, 28, 2, ReadWriteMode, FMCBTR2Base> ;
    using DATLAT = FMC_BTR2_DATLAT_Values<FMC::BTR2, 24, 4, ReadWriteMode, FMCBTR2Base> ;
    using CLKDIV = FMC_BTR2_CLKDIV_Values<FMC::BTR2, 20, 4, ReadWriteMode, FMCBTR2Base> ;
    using BUSTURN = FMC_BTR2_BUSTURN_Values<FMC::BTR2, 16, 4, ReadWriteMode, FMCBTR2Base> ;
    using DATAST = FMC_BTR2_DATAST_Values<FMC::BTR2, 8, 8, ReadWriteMode, FMCBTR2Base> ;
    using ADDHLD = FMC_BTR2_ADDHLD_Values<FMC::BTR2, 4, 4, ReadWriteMode, FMCBTR2Base> ;
    using ADDSET = FMC_BTR2_ADDSET_Values<FMC::BTR2, 0, 4, ReadWriteMode, FMCBTR2Base> ;
    using FieldValues = FMC_BTR2_ADDSET_Values<FMC::BTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR2Pack  = Register<0xA000000C, 32, ReadWriteMode, FMCBTR2Base, T...> ;

  struct FMCBCR3Base {} ;

  struct BCR3 : public RegisterBase<0xA0000010, 32, ReadWriteMode>
  {
    using MBKEN = FMC_BCR3_MBKEN_Values<FMC::BCR3, 0, 1, ReadWriteMode, FMCBCR3Base> ;
    using MUXEN = FMC_BCR3_MUXEN_Values<FMC::BCR3, 1, 1, ReadWriteMode, FMCBCR3Base> ;
    using MTYP = FMC_BCR3_MTYP_Values<FMC::BCR3, 2, 2, ReadWriteMode, FMCBCR3Base> ;
    using MWID = FMC_BCR3_MWID_Values<FMC::BCR3, 4, 2, ReadWriteMode, FMCBCR3Base> ;
    using FACCEN = FMC_BCR3_FACCEN_Values<FMC::BCR3, 6, 1, ReadWriteMode, FMCBCR3Base> ;
    using BURSTEN = FMC_BCR3_BURSTEN_Values<FMC::BCR3, 8, 1, ReadWriteMode, FMCBCR3Base> ;
    using WAITPOL = FMC_BCR3_WAITPOL_Values<FMC::BCR3, 9, 1, ReadWriteMode, FMCBCR3Base> ;
    using WAITCFG = FMC_BCR3_WAITCFG_Values<FMC::BCR3, 11, 1, ReadWriteMode, FMCBCR3Base> ;
    using WREN = FMC_BCR3_WREN_Values<FMC::BCR3, 12, 1, ReadWriteMode, FMCBCR3Base> ;
    using WAITEN = FMC_BCR3_WAITEN_Values<FMC::BCR3, 13, 1, ReadWriteMode, FMCBCR3Base> ;
    using EXTMOD = FMC_BCR3_EXTMOD_Values<FMC::BCR3, 14, 1, ReadWriteMode, FMCBCR3Base> ;
    using ASYNCWAIT = FMC_BCR3_ASYNCWAIT_Values<FMC::BCR3, 15, 1, ReadWriteMode, FMCBCR3Base> ;
    using CPSIZE = FMC_BCR3_CPSIZE_Values<FMC::BCR3, 16, 3, ReadWriteMode, FMCBCR3Base> ;
    using CBURSTRW = FMC_BCR3_CBURSTRW_Values<FMC::BCR3, 19, 1, ReadWriteMode, FMCBCR3Base> ;
    using CCLKEN = FMC_BCR3_CCLKEN_Values<FMC::BCR3, 20, 1, ReadWriteMode, FMCBCR3Base> ;
    using WFDIS = FMC_BCR3_WFDIS_Values<FMC::BCR3, 21, 1, ReadWriteMode, FMCBCR3Base> ;
    using NBLSET = FMC_BCR3_NBLSET_Values<FMC::BCR3, 22, 2, ReadWriteMode, FMCBCR3Base> ;
    using FieldValues = FMC_BCR3_NBLSET_Values<FMC::BCR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR3Pack  = Register<0xA0000010, 32, ReadWriteMode, FMCBCR3Base, T...> ;

  struct FMCBTR3Base {} ;

  struct BTR3 : public RegisterBase<0xA0000014, 32, ReadWriteMode>
  {
    using DATAHLD = FMC_BTR3_DATAHLD_Values<FMC::BTR3, 30, 2, ReadWriteMode, FMCBTR3Base> ;
    using ACCMOD = FMC_BTR3_ACCMOD_Values<FMC::BTR3, 28, 2, ReadWriteMode, FMCBTR3Base> ;
    using DATLAT = FMC_BTR3_DATLAT_Values<FMC::BTR3, 24, 4, ReadWriteMode, FMCBTR3Base> ;
    using CLKDIV = FMC_BTR3_CLKDIV_Values<FMC::BTR3, 20, 4, ReadWriteMode, FMCBTR3Base> ;
    using BUSTURN = FMC_BTR3_BUSTURN_Values<FMC::BTR3, 16, 4, ReadWriteMode, FMCBTR3Base> ;
    using DATAST = FMC_BTR3_DATAST_Values<FMC::BTR3, 8, 8, ReadWriteMode, FMCBTR3Base> ;
    using ADDHLD = FMC_BTR3_ADDHLD_Values<FMC::BTR3, 4, 4, ReadWriteMode, FMCBTR3Base> ;
    using ADDSET = FMC_BTR3_ADDSET_Values<FMC::BTR3, 0, 4, ReadWriteMode, FMCBTR3Base> ;
    using FieldValues = FMC_BTR3_ADDSET_Values<FMC::BTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR3Pack  = Register<0xA0000014, 32, ReadWriteMode, FMCBTR3Base, T...> ;

  struct FMCBCR4Base {} ;

  struct BCR4 : public RegisterBase<0xA0000018, 32, ReadWriteMode>
  {
    using MBKEN = FMC_BCR4_MBKEN_Values<FMC::BCR4, 0, 1, ReadWriteMode, FMCBCR4Base> ;
    using MUXEN = FMC_BCR4_MUXEN_Values<FMC::BCR4, 1, 1, ReadWriteMode, FMCBCR4Base> ;
    using MTYP = FMC_BCR4_MTYP_Values<FMC::BCR4, 2, 2, ReadWriteMode, FMCBCR4Base> ;
    using MWID = FMC_BCR4_MWID_Values<FMC::BCR4, 4, 2, ReadWriteMode, FMCBCR4Base> ;
    using FACCEN = FMC_BCR4_FACCEN_Values<FMC::BCR4, 6, 1, ReadWriteMode, FMCBCR4Base> ;
    using BURSTEN = FMC_BCR4_BURSTEN_Values<FMC::BCR4, 8, 1, ReadWriteMode, FMCBCR4Base> ;
    using WAITPOL = FMC_BCR4_WAITPOL_Values<FMC::BCR4, 9, 1, ReadWriteMode, FMCBCR4Base> ;
    using WAITCFG = FMC_BCR4_WAITCFG_Values<FMC::BCR4, 11, 1, ReadWriteMode, FMCBCR4Base> ;
    using WREN = FMC_BCR4_WREN_Values<FMC::BCR4, 12, 1, ReadWriteMode, FMCBCR4Base> ;
    using WAITEN = FMC_BCR4_WAITEN_Values<FMC::BCR4, 13, 1, ReadWriteMode, FMCBCR4Base> ;
    using EXTMOD = FMC_BCR4_EXTMOD_Values<FMC::BCR4, 14, 1, ReadWriteMode, FMCBCR4Base> ;
    using ASYNCWAIT = FMC_BCR4_ASYNCWAIT_Values<FMC::BCR4, 15, 1, ReadWriteMode, FMCBCR4Base> ;
    using CPSIZE = FMC_BCR4_CPSIZE_Values<FMC::BCR4, 16, 3, ReadWriteMode, FMCBCR4Base> ;
    using CBURSTRW = FMC_BCR4_CBURSTRW_Values<FMC::BCR4, 19, 1, ReadWriteMode, FMCBCR4Base> ;
    using CCLKEN = FMC_BCR4_CCLKEN_Values<FMC::BCR4, 20, 1, ReadWriteMode, FMCBCR4Base> ;
    using WFDIS = FMC_BCR4_WFDIS_Values<FMC::BCR4, 21, 1, ReadWriteMode, FMCBCR4Base> ;
    using NBLSET = FMC_BCR4_NBLSET_Values<FMC::BCR4, 22, 2, ReadWriteMode, FMCBCR4Base> ;
    using FieldValues = FMC_BCR4_NBLSET_Values<FMC::BCR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCR4Pack  = Register<0xA0000018, 32, ReadWriteMode, FMCBCR4Base, T...> ;

  struct FMCBTR4Base {} ;

  struct BTR4 : public RegisterBase<0xA000001C, 32, ReadWriteMode>
  {
    using DATAHLD = FMC_BTR4_DATAHLD_Values<FMC::BTR4, 30, 2, ReadWriteMode, FMCBTR4Base> ;
    using ACCMOD = FMC_BTR4_ACCMOD_Values<FMC::BTR4, 28, 2, ReadWriteMode, FMCBTR4Base> ;
    using DATLAT = FMC_BTR4_DATLAT_Values<FMC::BTR4, 24, 4, ReadWriteMode, FMCBTR4Base> ;
    using CLKDIV = FMC_BTR4_CLKDIV_Values<FMC::BTR4, 20, 4, ReadWriteMode, FMCBTR4Base> ;
    using BUSTURN = FMC_BTR4_BUSTURN_Values<FMC::BTR4, 16, 4, ReadWriteMode, FMCBTR4Base> ;
    using DATAST = FMC_BTR4_DATAST_Values<FMC::BTR4, 8, 8, ReadWriteMode, FMCBTR4Base> ;
    using ADDHLD = FMC_BTR4_ADDHLD_Values<FMC::BTR4, 4, 4, ReadWriteMode, FMCBTR4Base> ;
    using ADDSET = FMC_BTR4_ADDSET_Values<FMC::BTR4, 0, 4, ReadWriteMode, FMCBTR4Base> ;
    using FieldValues = FMC_BTR4_ADDSET_Values<FMC::BTR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTR4Pack  = Register<0xA000001C, 32, ReadWriteMode, FMCBTR4Base, T...> ;

  struct FMCPCSCNTRBase {} ;

  struct PCSCNTR : public RegisterBase<0xA0000020, 32, ReadWriteMode>
  {
    using CSCOUNT = FMC_PCSCNTR_CSCOUNT_Values<FMC::PCSCNTR, 0, 16, ReadWriteMode, FMCPCSCNTRBase> ;
    using CNTB1EN = FMC_PCSCNTR_CNTB1EN_Values<FMC::PCSCNTR, 16, 1, ReadWriteMode, FMCPCSCNTRBase> ;
    using CNTB2EN = FMC_PCSCNTR_CNTB2EN_Values<FMC::PCSCNTR, 17, 1, ReadWriteMode, FMCPCSCNTRBase> ;
    using CNTB3EN = FMC_PCSCNTR_CNTB3EN_Values<FMC::PCSCNTR, 18, 1, ReadWriteMode, FMCPCSCNTRBase> ;
    using CNTB4EN = FMC_PCSCNTR_CNTB4EN_Values<FMC::PCSCNTR, 19, 1, ReadWriteMode, FMCPCSCNTRBase> ;
    using FieldValues = FMC_PCSCNTR_CNTB4EN_Values<FMC::PCSCNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCSCNTRPack  = Register<0xA0000020, 32, ReadWriteMode, FMCPCSCNTRBase, T...> ;

  struct FMCPCRBase {} ;

  struct PCR : public RegisterBase<0xA0000080, 32, ReadWriteMode>
  {
    using ECCPS = FMC_PCR_ECCPS_Values<FMC::PCR, 17, 3, ReadWriteMode, FMCPCRBase> ;
    using TAR = FMC_PCR_TAR_Values<FMC::PCR, 13, 4, ReadWriteMode, FMCPCRBase> ;
    using TCLR = FMC_PCR_TCLR_Values<FMC::PCR, 9, 4, ReadWriteMode, FMCPCRBase> ;
    using ECCEN = FMC_PCR_ECCEN_Values<FMC::PCR, 6, 1, ReadWriteMode, FMCPCRBase> ;
    using PWID = FMC_PCR_PWID_Values<FMC::PCR, 4, 2, ReadWriteMode, FMCPCRBase> ;
    using PTYP = FMC_PCR_PTYP_Values<FMC::PCR, 3, 1, ReadWriteMode, FMCPCRBase> ;
    using PBKEN = FMC_PCR_PBKEN_Values<FMC::PCR, 2, 1, ReadWriteMode, FMCPCRBase> ;
    using PWAITEN = FMC_PCR_PWAITEN_Values<FMC::PCR, 1, 1, ReadWriteMode, FMCPCRBase> ;
    using FieldValues = FMC_PCR_PWAITEN_Values<FMC::PCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCRPack  = Register<0xA0000080, 32, ReadWriteMode, FMCPCRBase, T...> ;

  struct FMCSRBase {} ;

  struct SR : public RegisterBase<0xA0000084, 32, ReadWriteMode>
  {
    using FEMPT = FMC_SR_FEMPT_Values<FMC::SR, 6, 1, ReadMode, FMCSRBase> ;
    using IFEN = FMC_SR_IFEN_Values<FMC::SR, 5, 1, ReadWriteMode, FMCSRBase> ;
    using ILEN = FMC_SR_ILEN_Values<FMC::SR, 4, 1, ReadWriteMode, FMCSRBase> ;
    using IREN = FMC_SR_IREN_Values<FMC::SR, 3, 1, ReadWriteMode, FMCSRBase> ;
    using IFS = FMC_SR_IFS_Values<FMC::SR, 2, 1, ReadWriteMode, FMCSRBase> ;
    using ILS = FMC_SR_ILS_Values<FMC::SR, 1, 1, ReadWriteMode, FMCSRBase> ;
    using IRS = FMC_SR_IRS_Values<FMC::SR, 0, 1, ReadWriteMode, FMCSRBase> ;
    using FieldValues = FMC_SR_IRS_Values<FMC::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0xA0000084, 32, ReadWriteMode, FMCSRBase, T...> ;

  struct FMCPMEMBase {} ;

  struct PMEM : public RegisterBase<0xA0000088, 32, ReadWriteMode>
  {
    using MEMHIZx = FMC_PMEM_MEMHIZx_Values<FMC::PMEM, 24, 8, ReadWriteMode, FMCPMEMBase> ;
    using MEMHOLDx = FMC_PMEM_MEMHOLDx_Values<FMC::PMEM, 16, 8, ReadWriteMode, FMCPMEMBase> ;
    using MEMWAITx = FMC_PMEM_MEMWAITx_Values<FMC::PMEM, 8, 8, ReadWriteMode, FMCPMEMBase> ;
    using MEMSETx = FMC_PMEM_MEMSETx_Values<FMC::PMEM, 0, 8, ReadWriteMode, FMCPMEMBase> ;
    using FieldValues = FMC_PMEM_MEMSETx_Values<FMC::PMEM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PMEMPack  = Register<0xA0000088, 32, ReadWriteMode, FMCPMEMBase, T...> ;

  struct FMCPATTBase {} ;

  struct PATT : public RegisterBase<0xA000008C, 32, ReadWriteMode>
  {
    using ATTHIZx = FMC_PATT_ATTHIZx_Values<FMC::PATT, 24, 8, ReadWriteMode, FMCPATTBase> ;
    using ATTHOLDx = FMC_PATT_ATTHOLDx_Values<FMC::PATT, 16, 8, ReadWriteMode, FMCPATTBase> ;
    using ATTWAITx = FMC_PATT_ATTWAITx_Values<FMC::PATT, 8, 8, ReadWriteMode, FMCPATTBase> ;
    using ATTSETx = FMC_PATT_ATTSETx_Values<FMC::PATT, 0, 8, ReadWriteMode, FMCPATTBase> ;
    using FieldValues = FMC_PATT_ATTSETx_Values<FMC::PATT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PATTPack  = Register<0xA000008C, 32, ReadWriteMode, FMCPATTBase, T...> ;

  struct FMCECCRBase {} ;

  struct ECCR : public RegisterBase<0xA0000094, 32, ReadMode>
  {
    using ECCx = FMC_ECCR_ECCx_Values<FMC::ECCR, 0, 32, ReadMode, FMCECCRBase> ;
    using FieldValues = FMC_ECCR_ECCx_Values<FMC::ECCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECCRPack  = Register<0xA0000094, 32, ReadMode, FMCECCRBase, T...> ;

  struct FMCBWTR1Base {} ;

  struct BWTR1 : public RegisterBase<0xA0000104, 32, ReadWriteMode>
  {
    using DATAHLD = FMC_BWTR1_DATAHLD_Values<FMC::BWTR1, 30, 2, ReadWriteMode, FMCBWTR1Base> ;
    using ACCMOD = FMC_BWTR1_ACCMOD_Values<FMC::BWTR1, 28, 2, ReadWriteMode, FMCBWTR1Base> ;
    using BUSTURN = FMC_BWTR1_BUSTURN_Values<FMC::BWTR1, 16, 4, ReadWriteMode, FMCBWTR1Base> ;
    using DATAST = FMC_BWTR1_DATAST_Values<FMC::BWTR1, 8, 8, ReadWriteMode, FMCBWTR1Base> ;
    using ADDHLD = FMC_BWTR1_ADDHLD_Values<FMC::BWTR1, 4, 4, ReadWriteMode, FMCBWTR1Base> ;
    using ADDSET = FMC_BWTR1_ADDSET_Values<FMC::BWTR1, 0, 4, ReadWriteMode, FMCBWTR1Base> ;
    using FieldValues = FMC_BWTR1_ADDSET_Values<FMC::BWTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR1Pack  = Register<0xA0000104, 32, ReadWriteMode, FMCBWTR1Base, T...> ;

  struct FMCBWTR2Base {} ;

  struct BWTR2 : public RegisterBase<0xA000010C, 32, ReadWriteMode>
  {
    using DATAHLD = FMC_BWTR2_DATAHLD_Values<FMC::BWTR2, 30, 2, ReadWriteMode, FMCBWTR2Base> ;
    using ACCMOD = FMC_BWTR2_ACCMOD_Values<FMC::BWTR2, 28, 2, ReadWriteMode, FMCBWTR2Base> ;
    using BUSTURN = FMC_BWTR2_BUSTURN_Values<FMC::BWTR2, 16, 4, ReadWriteMode, FMCBWTR2Base> ;
    using DATAST = FMC_BWTR2_DATAST_Values<FMC::BWTR2, 8, 8, ReadWriteMode, FMCBWTR2Base> ;
    using ADDHLD = FMC_BWTR2_ADDHLD_Values<FMC::BWTR2, 4, 4, ReadWriteMode, FMCBWTR2Base> ;
    using ADDSET = FMC_BWTR2_ADDSET_Values<FMC::BWTR2, 0, 4, ReadWriteMode, FMCBWTR2Base> ;
    using FieldValues = FMC_BWTR2_ADDSET_Values<FMC::BWTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR2Pack  = Register<0xA000010C, 32, ReadWriteMode, FMCBWTR2Base, T...> ;

  struct FMCBWTR3Base {} ;

  struct BWTR3 : public RegisterBase<0xA0000114, 32, ReadWriteMode>
  {
    using DATAHLD = FMC_BWTR3_DATAHLD_Values<FMC::BWTR3, 30, 2, ReadWriteMode, FMCBWTR3Base> ;
    using ACCMOD = FMC_BWTR3_ACCMOD_Values<FMC::BWTR3, 28, 2, ReadWriteMode, FMCBWTR3Base> ;
    using BUSTURN = FMC_BWTR3_BUSTURN_Values<FMC::BWTR3, 16, 4, ReadWriteMode, FMCBWTR3Base> ;
    using DATAST = FMC_BWTR3_DATAST_Values<FMC::BWTR3, 8, 8, ReadWriteMode, FMCBWTR3Base> ;
    using ADDHLD = FMC_BWTR3_ADDHLD_Values<FMC::BWTR3, 4, 4, ReadWriteMode, FMCBWTR3Base> ;
    using ADDSET = FMC_BWTR3_ADDSET_Values<FMC::BWTR3, 0, 4, ReadWriteMode, FMCBWTR3Base> ;
    using FieldValues = FMC_BWTR3_ADDSET_Values<FMC::BWTR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR3Pack  = Register<0xA0000114, 32, ReadWriteMode, FMCBWTR3Base, T...> ;

  struct FMCBWTR4Base {} ;

  struct BWTR4 : public RegisterBase<0xA000011C, 32, ReadWriteMode>
  {
    using DATAHLD = FMC_BWTR4_DATAHLD_Values<FMC::BWTR4, 30, 2, ReadWriteMode, FMCBWTR4Base> ;
    using ACCMOD = FMC_BWTR4_ACCMOD_Values<FMC::BWTR4, 28, 2, ReadWriteMode, FMCBWTR4Base> ;
    using BUSTURN = FMC_BWTR4_BUSTURN_Values<FMC::BWTR4, 16, 4, ReadWriteMode, FMCBWTR4Base> ;
    using DATAST = FMC_BWTR4_DATAST_Values<FMC::BWTR4, 8, 8, ReadWriteMode, FMCBWTR4Base> ;
    using ADDHLD = FMC_BWTR4_ADDHLD_Values<FMC::BWTR4, 4, 4, ReadWriteMode, FMCBWTR4Base> ;
    using ADDSET = FMC_BWTR4_ADDSET_Values<FMC::BWTR4, 0, 4, ReadWriteMode, FMCBWTR4Base> ;
    using FieldValues = FMC_BWTR4_ADDSET_Values<FMC::BWTR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BWTR4Pack  = Register<0xA000011C, 32, ReadWriteMode, FMCBWTR4Base, T...> ;

} ;

