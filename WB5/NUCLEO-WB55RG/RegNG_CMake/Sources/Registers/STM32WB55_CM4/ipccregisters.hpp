/*******************************************************************************
* Filename      : ipccregisters.hpp
*
* Details       : IPCC. This header file is auto-generated for STM32WB55_CM4
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "ipccfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct IPCC
{
  struct IPCCC1CRBase {} ;

  struct C1CR : public RegisterBase<0x58000C00, 32, ReadWriteMode>
  {
    using TXFIE = IPCC_C1CR_TXFIE_Values<IPCC::C1CR, 16, 1, ReadWriteMode, IPCCC1CRBase> ;
    using RXOIE = IPCC_C1CR_RXOIE_Values<IPCC::C1CR, 0, 1, ReadWriteMode, IPCCC1CRBase> ;
    using FieldValues = IPCC_C1CR_RXOIE_Values<IPCC::C1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1CRPack  = Register<0x58000C00, 32, ReadWriteMode, IPCCC1CRBase, T...> ;

  struct IPCCC1MRBase {} ;

  struct C1MR : public RegisterBase<0x58000C04, 32, ReadWriteMode>
  {
    using CH6FM = IPCC_C1MR_CH6FM_Values<IPCC::C1MR, 21, 1, ReadWriteMode, IPCCC1MRBase> ;
    using CH5FM = IPCC_C1MR_CH5FM_Values<IPCC::C1MR, 20, 1, ReadWriteMode, IPCCC1MRBase> ;
    using CH4FM = IPCC_C1MR_CH4FM_Values<IPCC::C1MR, 19, 1, ReadWriteMode, IPCCC1MRBase> ;
    using CH3FM = IPCC_C1MR_CH3FM_Values<IPCC::C1MR, 18, 1, ReadWriteMode, IPCCC1MRBase> ;
    using CH2FM = IPCC_C1MR_CH2FM_Values<IPCC::C1MR, 17, 1, ReadWriteMode, IPCCC1MRBase> ;
    using CH1FM = IPCC_C1MR_CH1FM_Values<IPCC::C1MR, 16, 1, ReadWriteMode, IPCCC1MRBase> ;
    using CH6OM = IPCC_C1MR_CH6OM_Values<IPCC::C1MR, 5, 1, ReadWriteMode, IPCCC1MRBase> ;
    using CH5OM = IPCC_C1MR_CH5OM_Values<IPCC::C1MR, 4, 1, ReadWriteMode, IPCCC1MRBase> ;
    using CH4OM = IPCC_C1MR_CH4OM_Values<IPCC::C1MR, 3, 1, ReadWriteMode, IPCCC1MRBase> ;
    using CH3OM = IPCC_C1MR_CH3OM_Values<IPCC::C1MR, 2, 1, ReadWriteMode, IPCCC1MRBase> ;
    using CH2OM = IPCC_C1MR_CH2OM_Values<IPCC::C1MR, 1, 1, ReadWriteMode, IPCCC1MRBase> ;
    using CH1OM = IPCC_C1MR_CH1OM_Values<IPCC::C1MR, 0, 1, ReadWriteMode, IPCCC1MRBase> ;
    using FieldValues = IPCC_C1MR_CH1OM_Values<IPCC::C1MR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1MRPack  = Register<0x58000C04, 32, ReadWriteMode, IPCCC1MRBase, T...> ;

  struct IPCCC1SCRBase {} ;

  struct C1SCR : public RegisterBase<0x58000C08, 32, WriteMode>
  {
    using CH6S = IPCC_C1SCR_CH6S_Values<IPCC::C1SCR, 21, 1, WriteMode, IPCCC1SCRBase> ;
    using CH5S = IPCC_C1SCR_CH5S_Values<IPCC::C1SCR, 20, 1, WriteMode, IPCCC1SCRBase> ;
    using CH4S = IPCC_C1SCR_CH4S_Values<IPCC::C1SCR, 19, 1, WriteMode, IPCCC1SCRBase> ;
    using CH3S = IPCC_C1SCR_CH3S_Values<IPCC::C1SCR, 18, 1, WriteMode, IPCCC1SCRBase> ;
    using CH2S = IPCC_C1SCR_CH2S_Values<IPCC::C1SCR, 17, 1, WriteMode, IPCCC1SCRBase> ;
    using CH1S = IPCC_C1SCR_CH1S_Values<IPCC::C1SCR, 16, 1, WriteMode, IPCCC1SCRBase> ;
    using CH6C = IPCC_C1SCR_CH6C_Values<IPCC::C1SCR, 5, 1, WriteMode, IPCCC1SCRBase> ;
    using CH5C = IPCC_C1SCR_CH5C_Values<IPCC::C1SCR, 4, 1, WriteMode, IPCCC1SCRBase> ;
    using CH4C = IPCC_C1SCR_CH4C_Values<IPCC::C1SCR, 3, 1, WriteMode, IPCCC1SCRBase> ;
    using CH3C = IPCC_C1SCR_CH3C_Values<IPCC::C1SCR, 2, 1, WriteMode, IPCCC1SCRBase> ;
    using CH2C = IPCC_C1SCR_CH2C_Values<IPCC::C1SCR, 1, 1, WriteMode, IPCCC1SCRBase> ;
    using CH1C = IPCC_C1SCR_CH1C_Values<IPCC::C1SCR, 0, 1, WriteMode, IPCCC1SCRBase> ;
    using FieldValues = IPCC_C1SCR_CH1C_Values<IPCC::C1SCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1SCRPack  = Register<0x58000C08, 32, WriteMode, IPCCC1SCRBase, T...> ;

  struct IPCCC1TO2SRBase {} ;

  struct C1TO2SR : public RegisterBase<0x58000C0C, 32, ReadMode>
  {
    using CH6F = IPCC_C1TO2SR_CH6F_Values<IPCC::C1TO2SR, 5, 1, ReadMode, IPCCC1TO2SRBase> ;
    using CH5F = IPCC_C1TO2SR_CH5F_Values<IPCC::C1TO2SR, 4, 1, ReadMode, IPCCC1TO2SRBase> ;
    using CH4F = IPCC_C1TO2SR_CH4F_Values<IPCC::C1TO2SR, 3, 1, ReadMode, IPCCC1TO2SRBase> ;
    using CH3F = IPCC_C1TO2SR_CH3F_Values<IPCC::C1TO2SR, 2, 1, ReadMode, IPCCC1TO2SRBase> ;
    using CH2F = IPCC_C1TO2SR_CH2F_Values<IPCC::C1TO2SR, 1, 1, ReadMode, IPCCC1TO2SRBase> ;
    using CH1F = IPCC_C1TO2SR_CH1F_Values<IPCC::C1TO2SR, 0, 1, ReadMode, IPCCC1TO2SRBase> ;
    using FieldValues = IPCC_C1TO2SR_CH1F_Values<IPCC::C1TO2SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1TO2SRPack  = Register<0x58000C0C, 32, ReadMode, IPCCC1TO2SRBase, T...> ;

  struct IPCCC2CRBase {} ;

  struct C2CR : public RegisterBase<0x58000C10, 32, ReadWriteMode>
  {
    using TXFIE = IPCC_C2CR_TXFIE_Values<IPCC::C2CR, 16, 1, ReadWriteMode, IPCCC2CRBase> ;
    using RXOIE = IPCC_C2CR_RXOIE_Values<IPCC::C2CR, 0, 1, ReadWriteMode, IPCCC2CRBase> ;
    using FieldValues = IPCC_C2CR_RXOIE_Values<IPCC::C2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2CRPack  = Register<0x58000C10, 32, ReadWriteMode, IPCCC2CRBase, T...> ;

  struct IPCCC2MRBase {} ;

  struct C2MR : public RegisterBase<0x58000C14, 32, ReadWriteMode>
  {
    using CH6FM = IPCC_C2MR_CH6FM_Values<IPCC::C2MR, 21, 1, ReadWriteMode, IPCCC2MRBase> ;
    using CH5FM = IPCC_C2MR_CH5FM_Values<IPCC::C2MR, 20, 1, ReadWriteMode, IPCCC2MRBase> ;
    using CH4FM = IPCC_C2MR_CH4FM_Values<IPCC::C2MR, 19, 1, ReadWriteMode, IPCCC2MRBase> ;
    using CH3FM = IPCC_C2MR_CH3FM_Values<IPCC::C2MR, 18, 1, ReadWriteMode, IPCCC2MRBase> ;
    using CH2FM = IPCC_C2MR_CH2FM_Values<IPCC::C2MR, 17, 1, ReadWriteMode, IPCCC2MRBase> ;
    using CH1FM = IPCC_C2MR_CH1FM_Values<IPCC::C2MR, 16, 1, ReadWriteMode, IPCCC2MRBase> ;
    using CH6OM = IPCC_C2MR_CH6OM_Values<IPCC::C2MR, 5, 1, ReadWriteMode, IPCCC2MRBase> ;
    using CH5OM = IPCC_C2MR_CH5OM_Values<IPCC::C2MR, 4, 1, ReadWriteMode, IPCCC2MRBase> ;
    using CH4OM = IPCC_C2MR_CH4OM_Values<IPCC::C2MR, 3, 1, ReadWriteMode, IPCCC2MRBase> ;
    using CH3OM = IPCC_C2MR_CH3OM_Values<IPCC::C2MR, 2, 1, ReadWriteMode, IPCCC2MRBase> ;
    using CH2OM = IPCC_C2MR_CH2OM_Values<IPCC::C2MR, 1, 1, ReadWriteMode, IPCCC2MRBase> ;
    using CH1OM = IPCC_C2MR_CH1OM_Values<IPCC::C2MR, 0, 1, ReadWriteMode, IPCCC2MRBase> ;
    using FieldValues = IPCC_C2MR_CH1OM_Values<IPCC::C2MR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2MRPack  = Register<0x58000C14, 32, ReadWriteMode, IPCCC2MRBase, T...> ;

  struct IPCCC2SCRBase {} ;

  struct C2SCR : public RegisterBase<0x58000C18, 32, WriteMode>
  {
    using CH6S = IPCC_C2SCR_CH6S_Values<IPCC::C2SCR, 21, 1, WriteMode, IPCCC2SCRBase> ;
    using CH5S = IPCC_C2SCR_CH5S_Values<IPCC::C2SCR, 20, 1, WriteMode, IPCCC2SCRBase> ;
    using CH4S = IPCC_C2SCR_CH4S_Values<IPCC::C2SCR, 19, 1, WriteMode, IPCCC2SCRBase> ;
    using CH3S = IPCC_C2SCR_CH3S_Values<IPCC::C2SCR, 18, 1, WriteMode, IPCCC2SCRBase> ;
    using CH2S = IPCC_C2SCR_CH2S_Values<IPCC::C2SCR, 17, 1, WriteMode, IPCCC2SCRBase> ;
    using CH1S = IPCC_C2SCR_CH1S_Values<IPCC::C2SCR, 16, 1, WriteMode, IPCCC2SCRBase> ;
    using CH6C = IPCC_C2SCR_CH6C_Values<IPCC::C2SCR, 5, 1, WriteMode, IPCCC2SCRBase> ;
    using CH5C = IPCC_C2SCR_CH5C_Values<IPCC::C2SCR, 4, 1, WriteMode, IPCCC2SCRBase> ;
    using CH4C = IPCC_C2SCR_CH4C_Values<IPCC::C2SCR, 3, 1, WriteMode, IPCCC2SCRBase> ;
    using CH3C = IPCC_C2SCR_CH3C_Values<IPCC::C2SCR, 2, 1, WriteMode, IPCCC2SCRBase> ;
    using CH2C = IPCC_C2SCR_CH2C_Values<IPCC::C2SCR, 1, 1, WriteMode, IPCCC2SCRBase> ;
    using CH1C = IPCC_C2SCR_CH1C_Values<IPCC::C2SCR, 0, 1, WriteMode, IPCCC2SCRBase> ;
    using FieldValues = IPCC_C2SCR_CH1C_Values<IPCC::C2SCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2SCRPack  = Register<0x58000C18, 32, WriteMode, IPCCC2SCRBase, T...> ;

  struct IPCCC2TOC1SRBase {} ;

  struct C2TOC1SR : public RegisterBase<0x58000C1C, 32, ReadMode>
  {
    using CH6F = IPCC_C2TOC1SR_CH6F_Values<IPCC::C2TOC1SR, 5, 1, ReadMode, IPCCC2TOC1SRBase> ;
    using CH5F = IPCC_C2TOC1SR_CH5F_Values<IPCC::C2TOC1SR, 4, 1, ReadMode, IPCCC2TOC1SRBase> ;
    using CH4F = IPCC_C2TOC1SR_CH4F_Values<IPCC::C2TOC1SR, 3, 1, ReadMode, IPCCC2TOC1SRBase> ;
    using CH3F = IPCC_C2TOC1SR_CH3F_Values<IPCC::C2TOC1SR, 2, 1, ReadMode, IPCCC2TOC1SRBase> ;
    using CH2F = IPCC_C2TOC1SR_CH2F_Values<IPCC::C2TOC1SR, 1, 1, ReadMode, IPCCC2TOC1SRBase> ;
    using CH1F = IPCC_C2TOC1SR_CH1F_Values<IPCC::C2TOC1SR, 0, 1, ReadMode, IPCCC2TOC1SRBase> ;
    using FieldValues = IPCC_C2TOC1SR_CH1F_Values<IPCC::C2TOC1SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2TOC1SRPack  = Register<0x58000C1C, 32, ReadMode, IPCCC2TOC1SRBase, T...> ;

  struct IPCCHWCFGRBase {} ;

  struct HWCFGR : public RegisterBase<0x58000FF0, 32, ReadMode>
  {
    using CHANNELS = IPCC_HWCFGR_CHANNELS_Values<IPCC::HWCFGR, 0, 8, ReadMode, IPCCHWCFGRBase> ;
    using FieldValues = IPCC_HWCFGR_CHANNELS_Values<IPCC::HWCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFGRPack  = Register<0x58000FF0, 32, ReadMode, IPCCHWCFGRBase, T...> ;

  struct IPCCVERRBase {} ;

  struct VERR : public RegisterBase<0x58000FF4, 32, ReadMode>
  {
    using MAJREV = IPCC_VERR_MAJREV_Values<IPCC::VERR, 4, 4, ReadMode, IPCCVERRBase> ;
    using MINREV = IPCC_VERR_MINREV_Values<IPCC::VERR, 0, 4, ReadMode, IPCCVERRBase> ;
    using FieldValues = IPCC_VERR_MINREV_Values<IPCC::VERR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VERRPack  = Register<0x58000FF4, 32, ReadMode, IPCCVERRBase, T...> ;

  struct IPCCIPIDRBase {} ;

  struct IPIDR : public RegisterBase<0x58000FF8, 32, ReadMode>
  {
    using IPID = IPCC_IPIDR_IPID_Values<IPCC::IPIDR, 0, 32, ReadMode, IPCCIPIDRBase> ;
    using FieldValues = IPCC_IPIDR_IPID_Values<IPCC::IPIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPIDRPack  = Register<0x58000FF8, 32, ReadMode, IPCCIPIDRBase, T...> ;

  struct IPCCSIDRBase {} ;

  struct SIDR : public RegisterBase<0x58000FFC, 32, ReadMode>
  {
    using SID = IPCC_SIDR_SID_Values<IPCC::SIDR, 0, 32, ReadMode, IPCCSIDRBase> ;
    using FieldValues = IPCC_SIDR_SID_Values<IPCC::SIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SIDRPack  = Register<0x58000FFC, 32, ReadMode, IPCCSIDRBase, T...> ;

} ;

