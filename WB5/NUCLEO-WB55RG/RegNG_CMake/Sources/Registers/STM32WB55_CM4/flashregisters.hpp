/*******************************************************************************
* Filename      : flashregisters.hpp
*
* Details       : Flash. This header file is auto-generated for STM32WB55_CM4
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "flashfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct Flash
{
  struct FlashACRBase {} ;

  struct ACR : public RegisterBase<0x58004000, 32, ReadWriteMode>
  {
    using LATENCY = Flash_ACR_LATENCY_Values<Flash::ACR, 0, 3, ReadWriteMode, FlashACRBase> ;
    using PRFTEN = Flash_ACR_PRFTEN_Values<Flash::ACR, 8, 1, ReadWriteMode, FlashACRBase> ;
    using ICEN = Flash_ACR_ICEN_Values<Flash::ACR, 9, 1, ReadWriteMode, FlashACRBase> ;
    using DCEN = Flash_ACR_DCEN_Values<Flash::ACR, 10, 1, ReadWriteMode, FlashACRBase> ;
    using ICRST = Flash_ACR_ICRST_Values<Flash::ACR, 11, 1, ReadWriteMode, FlashACRBase> ;
    using DCRST = Flash_ACR_DCRST_Values<Flash::ACR, 12, 1, ReadWriteMode, FlashACRBase> ;
    using PES = Flash_ACR_PES_Values<Flash::ACR, 15, 1, ReadWriteMode, FlashACRBase> ;
    using EMPTY = Flash_ACR_EMPTY_Values<Flash::ACR, 16, 1, ReadWriteMode, FlashACRBase> ;
    using FieldValues = Flash_ACR_EMPTY_Values<Flash::ACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ACRPack  = Register<0x58004000, 32, ReadWriteMode, FlashACRBase, T...> ;

  struct FlashKEYRBase {} ;

  struct KEYR : public RegisterBase<0x58004008, 32, WriteMode>
  {
    using KEYRField = Flash_KEYR_KEYR_Values<Flash::KEYR, 0, 32, WriteMode, FlashKEYRBase> ;
    using FieldValues = Flash_KEYR_KEYR_Values<Flash::KEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYRPack  = Register<0x58004008, 32, WriteMode, FlashKEYRBase, T...> ;

  struct FlashOPTKEYRBase {} ;

  struct OPTKEYR : public RegisterBase<0x5800400C, 32, WriteMode>
  {
    using OPTKEYRField = Flash_OPTKEYR_OPTKEYR_Values<Flash::OPTKEYR, 0, 32, WriteMode, FlashOPTKEYRBase> ;
    using FieldValues = Flash_OPTKEYR_OPTKEYR_Values<Flash::OPTKEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTKEYRPack  = Register<0x5800400C, 32, WriteMode, FlashOPTKEYRBase, T...> ;

  struct FlashSRBase {} ;

  struct SR : public RegisterBase<0x58004010, 32, ReadWriteMode>
  {
    using EOP = Flash_SR_EOP_Values<Flash::SR, 0, 1, ReadWriteMode, FlashSRBase> ;
    using OPERR = Flash_SR_OPERR_Values<Flash::SR, 1, 1, ReadWriteMode, FlashSRBase> ;
    using PROGERR = Flash_SR_PROGERR_Values<Flash::SR, 3, 1, ReadWriteMode, FlashSRBase> ;
    using WRPERR = Flash_SR_WRPERR_Values<Flash::SR, 4, 1, ReadWriteMode, FlashSRBase> ;
    using PGAERR = Flash_SR_PGAERR_Values<Flash::SR, 5, 1, ReadWriteMode, FlashSRBase> ;
    using SIZERR = Flash_SR_SIZERR_Values<Flash::SR, 6, 1, ReadWriteMode, FlashSRBase> ;
    using PGSERR = Flash_SR_PGSERR_Values<Flash::SR, 7, 1, ReadWriteMode, FlashSRBase> ;
    using MISERR = Flash_SR_MISERR_Values<Flash::SR, 8, 1, ReadWriteMode, FlashSRBase> ;
    using FASTERR = Flash_SR_FASTERR_Values<Flash::SR, 9, 1, ReadWriteMode, FlashSRBase> ;
    using OPTNV = Flash_SR_OPTNV_Values<Flash::SR, 13, 1, ReadMode, FlashSRBase> ;
    using RDERR = Flash_SR_RDERR_Values<Flash::SR, 14, 1, ReadWriteMode, FlashSRBase> ;
    using OPTVERR = Flash_SR_OPTVERR_Values<Flash::SR, 15, 1, ReadWriteMode, FlashSRBase> ;
    using BSY = Flash_SR_BSY_Values<Flash::SR, 16, 1, ReadMode, FlashSRBase> ;
    using CFGBSY = Flash_SR_CFGBSY_Values<Flash::SR, 18, 1, ReadMode, FlashSRBase> ;
    using PESD = Flash_SR_PESD_Values<Flash::SR, 19, 1, ReadMode, FlashSRBase> ;
    using FieldValues = Flash_SR_PESD_Values<Flash::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x58004010, 32, ReadWriteMode, FlashSRBase, T...> ;

  struct FlashCRBase {} ;

  struct CR : public RegisterBase<0x58004014, 32, ReadWriteMode>
  {
    using PG = Flash_CR_PG_Values<Flash::CR, 0, 1, ReadWriteMode, FlashCRBase> ;
    using PER = Flash_CR_PER_Values<Flash::CR, 1, 1, ReadWriteMode, FlashCRBase> ;
    using MER = Flash_CR_MER_Values<Flash::CR, 2, 1, ReadWriteMode, FlashCRBase> ;
    using PNB = Flash_CR_PNB_Values<Flash::CR, 3, 8, ReadWriteMode, FlashCRBase> ;
    using STRT = Flash_CR_STRT_Values<Flash::CR, 16, 1, ReadWriteMode, FlashCRBase> ;
    using OPTSTRT = Flash_CR_OPTSTRT_Values<Flash::CR, 17, 1, ReadWriteMode, FlashCRBase> ;
    using FSTPG = Flash_CR_FSTPG_Values<Flash::CR, 18, 1, ReadWriteMode, FlashCRBase> ;
    using EOPIE = Flash_CR_EOPIE_Values<Flash::CR, 24, 1, ReadWriteMode, FlashCRBase> ;
    using ERRIE = Flash_CR_ERRIE_Values<Flash::CR, 25, 1, ReadWriteMode, FlashCRBase> ;
    using RDERRIE = Flash_CR_RDERRIE_Values<Flash::CR, 26, 1, ReadWriteMode, FlashCRBase> ;
    using OBL_LAUNCH = Flash_CR_OBL_LAUNCH_Values<Flash::CR, 27, 1, ReadWriteMode, FlashCRBase> ;
    using OPTLOCK = Flash_CR_OPTLOCK_Values<Flash::CR, 30, 1, ReadWriteMode, FlashCRBase> ;
    using LOCK = Flash_CR_LOCK_Values<Flash::CR, 31, 1, ReadWriteMode, FlashCRBase> ;
    using FieldValues = Flash_CR_LOCK_Values<Flash::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x58004014, 32, ReadWriteMode, FlashCRBase, T...> ;

  struct FlashECCRBase {} ;

  struct ECCR : public RegisterBase<0x58004018, 32, ReadWriteMode>
  {
    using ADDR_ECC = Flash_ECCR_ADDR_ECC_Values<Flash::ECCR, 0, 17, ReadMode, FlashECCRBase> ;
    using SYSF_ECC = Flash_ECCR_SYSF_ECC_Values<Flash::ECCR, 20, 1, ReadMode, FlashECCRBase> ;
    using ECCCIE = Flash_ECCR_ECCCIE_Values<Flash::ECCR, 24, 1, ReadWriteMode, FlashECCRBase> ;
    using CPUID = Flash_ECCR_CPUID_Values<Flash::ECCR, 26, 3, ReadMode, FlashECCRBase> ;
    using ECCC = Flash_ECCR_ECCC_Values<Flash::ECCR, 30, 1, ReadWriteMode, FlashECCRBase> ;
    using ECCD = Flash_ECCR_ECCD_Values<Flash::ECCR, 31, 1, ReadWriteMode, FlashECCRBase> ;
    using FieldValues = Flash_ECCR_ECCD_Values<Flash::ECCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ECCRPack  = Register<0x58004018, 32, ReadWriteMode, FlashECCRBase, T...> ;

  struct FlashOPTRBase {} ;

  struct OPTR : public RegisterBase<0x58004020, 32, ReadWriteMode>
  {
    using RDP = Flash_OPTR_RDP_Values<Flash::OPTR, 0, 8, ReadWriteMode, FlashOPTRBase> ;
    using ESE = Flash_OPTR_ESE_Values<Flash::OPTR, 8, 1, ReadWriteMode, FlashOPTRBase> ;
    using BOR_LEV = Flash_OPTR_BOR_LEV_Values<Flash::OPTR, 9, 3, ReadWriteMode, FlashOPTRBase> ;
    using nRST_STOP = Flash_OPTR_nRST_STOP_Values<Flash::OPTR, 12, 1, ReadWriteMode, FlashOPTRBase> ;
    using nRST_STDBY = Flash_OPTR_nRST_STDBY_Values<Flash::OPTR, 13, 1, ReadWriteMode, FlashOPTRBase> ;
    using nRST_SHDW = Flash_OPTR_nRST_SHDW_Values<Flash::OPTR, 14, 1, ReadWriteMode, FlashOPTRBase> ;
    using IDWG_SW = Flash_OPTR_IDWG_SW_Values<Flash::OPTR, 16, 1, ReadWriteMode, FlashOPTRBase> ;
    using IWDG_STOP = Flash_OPTR_IWDG_STOP_Values<Flash::OPTR, 17, 1, ReadWriteMode, FlashOPTRBase> ;
    using IWDG_STDBY = Flash_OPTR_IWDG_STDBY_Values<Flash::OPTR, 18, 1, ReadWriteMode, FlashOPTRBase> ;
    using WWDG_SW = Flash_OPTR_WWDG_SW_Values<Flash::OPTR, 19, 1, ReadWriteMode, FlashOPTRBase> ;
    using nBOOT1 = Flash_OPTR_nBOOT1_Values<Flash::OPTR, 23, 1, ReadWriteMode, FlashOPTRBase> ;
    using SRAM2_PE = Flash_OPTR_SRAM2_PE_Values<Flash::OPTR, 24, 1, ReadWriteMode, FlashOPTRBase> ;
    using SRAM2_RST = Flash_OPTR_SRAM2_RST_Values<Flash::OPTR, 25, 1, ReadWriteMode, FlashOPTRBase> ;
    using nSWBOOT0 = Flash_OPTR_nSWBOOT0_Values<Flash::OPTR, 26, 1, ReadWriteMode, FlashOPTRBase> ;
    using nBOOT0 = Flash_OPTR_nBOOT0_Values<Flash::OPTR, 27, 1, ReadWriteMode, FlashOPTRBase> ;
    using AGC_TRIM = Flash_OPTR_AGC_TRIM_Values<Flash::OPTR, 29, 3, ReadWriteMode, FlashOPTRBase> ;
    using FieldValues = Flash_OPTR_AGC_TRIM_Values<Flash::OPTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPTRPack  = Register<0x58004020, 32, ReadWriteMode, FlashOPTRBase, T...> ;

  struct FlashPCROP1ASRBase {} ;

  struct PCROP1ASR : public RegisterBase<0x58004024, 32, ReadWriteMode>
  {
    using PCROP1A_STRT = Flash_PCROP1ASR_PCROP1A_STRT_Values<Flash::PCROP1ASR, 0, 9, ReadWriteMode, FlashPCROP1ASRBase> ;
    using FieldValues = Flash_PCROP1ASR_PCROP1A_STRT_Values<Flash::PCROP1ASR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCROP1ASRPack  = Register<0x58004024, 32, ReadWriteMode, FlashPCROP1ASRBase, T...> ;

  struct FlashPCROP1AERBase {} ;

  struct PCROP1AER : public RegisterBase<0x58004028, 32, ReadWriteMode>
  {
    using PCROP1A_END = Flash_PCROP1AER_PCROP1A_END_Values<Flash::PCROP1AER, 0, 9, ReadWriteMode, FlashPCROP1AERBase> ;
    using PCROP_RDP = Flash_PCROP1AER_PCROP_RDP_Values<Flash::PCROP1AER, 31, 1, ReadWriteMode, FlashPCROP1AERBase> ;
    using FieldValues = Flash_PCROP1AER_PCROP_RDP_Values<Flash::PCROP1AER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCROP1AERPack  = Register<0x58004028, 32, ReadWriteMode, FlashPCROP1AERBase, T...> ;

  struct FlashWRP1ARBase {} ;

  struct WRP1AR : public RegisterBase<0x5800402C, 32, ReadWriteMode>
  {
    using WRP1A_STRT = Flash_WRP1AR_WRP1A_STRT_Values<Flash::WRP1AR, 0, 8, ReadWriteMode, FlashWRP1ARBase> ;
    using WRP1A_END = Flash_WRP1AR_WRP1A_END_Values<Flash::WRP1AR, 16, 8, ReadWriteMode, FlashWRP1ARBase> ;
    using FieldValues = Flash_WRP1AR_WRP1A_END_Values<Flash::WRP1AR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WRP1ARPack  = Register<0x5800402C, 32, ReadWriteMode, FlashWRP1ARBase, T...> ;

  struct FlashWRP1BRBase {} ;

  struct WRP1BR : public RegisterBase<0x58004030, 32, ReadWriteMode>
  {
    using WRP1B_STRT = Flash_WRP1BR_WRP1B_STRT_Values<Flash::WRP1BR, 16, 8, ReadWriteMode, FlashWRP1BRBase> ;
    using WRP1B_END = Flash_WRP1BR_WRP1B_END_Values<Flash::WRP1BR, 0, 8, ReadWriteMode, FlashWRP1BRBase> ;
    using FieldValues = Flash_WRP1BR_WRP1B_END_Values<Flash::WRP1BR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WRP1BRPack  = Register<0x58004030, 32, ReadWriteMode, FlashWRP1BRBase, T...> ;

  struct FlashPCROP1BSRBase {} ;

  struct PCROP1BSR : public RegisterBase<0x58004034, 32, ReadWriteMode>
  {
    using PCROP1B_STRT = Flash_PCROP1BSR_PCROP1B_STRT_Values<Flash::PCROP1BSR, 0, 9, ReadWriteMode, FlashPCROP1BSRBase> ;
    using FieldValues = Flash_PCROP1BSR_PCROP1B_STRT_Values<Flash::PCROP1BSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCROP1BSRPack  = Register<0x58004034, 32, ReadWriteMode, FlashPCROP1BSRBase, T...> ;

  struct FlashPCROP1BERBase {} ;

  struct PCROP1BER : public RegisterBase<0x58004038, 32, ReadWriteMode>
  {
    using PCROP1B_END = Flash_PCROP1BER_PCROP1B_END_Values<Flash::PCROP1BER, 0, 9, ReadWriteMode, FlashPCROP1BERBase> ;
    using FieldValues = Flash_PCROP1BER_PCROP1B_END_Values<Flash::PCROP1BER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PCROP1BERPack  = Register<0x58004038, 32, ReadWriteMode, FlashPCROP1BERBase, T...> ;

  struct FlashIPCCBRBase {} ;

  struct IPCCBR : public RegisterBase<0x5800403C, 32, ReadWriteMode>
  {
    using IPCCDBA = Flash_IPCCBR_IPCCDBA_Values<Flash::IPCCBR, 0, 14, ReadWriteMode, FlashIPCCBRBase> ;
    using FieldValues = Flash_IPCCBR_IPCCDBA_Values<Flash::IPCCBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPCCBRPack  = Register<0x5800403C, 32, ReadWriteMode, FlashIPCCBRBase, T...> ;

  struct FlashC2ACRBase {} ;

  struct C2ACR : public RegisterBase<0x5800405C, 32, ReadWriteMode>
  {
    using PRFTEN = Flash_C2ACR_PRFTEN_Values<Flash::C2ACR, 8, 1, ReadWriteMode, FlashC2ACRBase> ;
    using ICEN = Flash_C2ACR_ICEN_Values<Flash::C2ACR, 9, 1, ReadWriteMode, FlashC2ACRBase> ;
    using ICRST = Flash_C2ACR_ICRST_Values<Flash::C2ACR, 11, 1, ReadWriteMode, FlashC2ACRBase> ;
    using PES = Flash_C2ACR_PES_Values<Flash::C2ACR, 15, 1, ReadWriteMode, FlashC2ACRBase> ;
    using FieldValues = Flash_C2ACR_PES_Values<Flash::C2ACR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2ACRPack  = Register<0x5800405C, 32, ReadWriteMode, FlashC2ACRBase, T...> ;

  struct FlashC2SRBase {} ;

  struct C2SR : public RegisterBase<0x58004060, 32, ReadWriteMode>
  {
    using EOP = Flash_C2SR_EOP_Values<Flash::C2SR, 0, 1, ReadWriteMode, FlashC2SRBase> ;
    using OPERR = Flash_C2SR_OPERR_Values<Flash::C2SR, 1, 1, ReadWriteMode, FlashC2SRBase> ;
    using PROGERR = Flash_C2SR_PROGERR_Values<Flash::C2SR, 3, 1, ReadWriteMode, FlashC2SRBase> ;
    using WRPERR = Flash_C2SR_WRPERR_Values<Flash::C2SR, 4, 1, ReadWriteMode, FlashC2SRBase> ;
    using PGAERR = Flash_C2SR_PGAERR_Values<Flash::C2SR, 5, 1, ReadWriteMode, FlashC2SRBase> ;
    using SIZERR = Flash_C2SR_SIZERR_Values<Flash::C2SR, 6, 1, ReadWriteMode, FlashC2SRBase> ;
    using PGSERR = Flash_C2SR_PGSERR_Values<Flash::C2SR, 7, 1, ReadWriteMode, FlashC2SRBase> ;
    using MISSERR = Flash_C2SR_MISSERR_Values<Flash::C2SR, 8, 1, ReadWriteMode, FlashC2SRBase> ;
    using FASTERR = Flash_C2SR_FASTERR_Values<Flash::C2SR, 9, 1, ReadWriteMode, FlashC2SRBase> ;
    using RDERR = Flash_C2SR_RDERR_Values<Flash::C2SR, 14, 1, ReadWriteMode, FlashC2SRBase> ;
    using BSY = Flash_C2SR_BSY_Values<Flash::C2SR, 16, 1, ReadWriteMode, FlashC2SRBase> ;
    using CFGBSY = Flash_C2SR_CFGBSY_Values<Flash::C2SR, 18, 1, ReadWriteMode, FlashC2SRBase> ;
    using PESD = Flash_C2SR_PESD_Values<Flash::C2SR, 19, 1, ReadWriteMode, FlashC2SRBase> ;
    using FieldValues = Flash_C2SR_PESD_Values<Flash::C2SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2SRPack  = Register<0x58004060, 32, ReadWriteMode, FlashC2SRBase, T...> ;

  struct FlashC2CRBase {} ;

  struct C2CR : public RegisterBase<0x58004064, 32, ReadWriteMode>
  {
    using PG = Flash_C2CR_PG_Values<Flash::C2CR, 0, 1, ReadWriteMode, FlashC2CRBase> ;
    using PER = Flash_C2CR_PER_Values<Flash::C2CR, 1, 1, ReadWriteMode, FlashC2CRBase> ;
    using MER = Flash_C2CR_MER_Values<Flash::C2CR, 2, 1, ReadWriteMode, FlashC2CRBase> ;
    using PNB = Flash_C2CR_PNB_Values<Flash::C2CR, 3, 8, ReadWriteMode, FlashC2CRBase> ;
    using STRT = Flash_C2CR_STRT_Values<Flash::C2CR, 16, 1, ReadWriteMode, FlashC2CRBase> ;
    using FSTPG = Flash_C2CR_FSTPG_Values<Flash::C2CR, 18, 1, ReadWriteMode, FlashC2CRBase> ;
    using EOPIE = Flash_C2CR_EOPIE_Values<Flash::C2CR, 24, 1, ReadWriteMode, FlashC2CRBase> ;
    using ERRIE = Flash_C2CR_ERRIE_Values<Flash::C2CR, 25, 1, ReadWriteMode, FlashC2CRBase> ;
    using RDERRIE = Flash_C2CR_RDERRIE_Values<Flash::C2CR, 26, 1, ReadWriteMode, FlashC2CRBase> ;
    using FieldValues = Flash_C2CR_RDERRIE_Values<Flash::C2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2CRPack  = Register<0x58004064, 32, ReadWriteMode, FlashC2CRBase, T...> ;

  struct FlashSFRBase {} ;

  struct SFR : public RegisterBase<0x58004080, 32, ReadWriteMode>
  {
    using SFSA = Flash_SFR_SFSA_Values<Flash::SFR, 0, 8, ReadWriteMode, FlashSFRBase> ;
    using DDS = Flash_SFR_DDS_Values<Flash::SFR, 12, 1, ReadWriteMode, FlashSFRBase> ;
    using FSD = Flash_SFR_FSD_Values<Flash::SFR, 8, 1, ReadWriteMode, FlashSFRBase> ;
    using FieldValues = Flash_SFR_FSD_Values<Flash::SFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SFRPack  = Register<0x58004080, 32, ReadWriteMode, FlashSFRBase, T...> ;

  struct FlashSRRVRBase {} ;

  struct SRRVR : public RegisterBase<0x58004084, 32, ReadWriteMode>
  {
    using SBRV = Flash_SRRVR_SBRV_Values<Flash::SRRVR, 0, 18, ReadWriteMode, FlashSRRVRBase> ;
    using SBRSA = Flash_SRRVR_SBRSA_Values<Flash::SRRVR, 18, 5, ReadWriteMode, FlashSRRVRBase> ;
    using BRSD = Flash_SRRVR_BRSD_Values<Flash::SRRVR, 23, 1, ReadWriteMode, FlashSRRVRBase> ;
    using SNBRSA = Flash_SRRVR_SNBRSA_Values<Flash::SRRVR, 25, 5, ReadWriteMode, FlashSRRVRBase> ;
    using C2OPT = Flash_SRRVR_C2OPT_Values<Flash::SRRVR, 31, 1, ReadWriteMode, FlashSRRVRBase> ;
    using NBRSD = Flash_SRRVR_NBRSD_Values<Flash::SRRVR, 30, 1, ReadWriteMode, FlashSRRVRBase> ;
    using FieldValues = Flash_SRRVR_NBRSD_Values<Flash::SRRVR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRRVRPack  = Register<0x58004084, 32, ReadWriteMode, FlashSRRVRBase, T...> ;

} ;

