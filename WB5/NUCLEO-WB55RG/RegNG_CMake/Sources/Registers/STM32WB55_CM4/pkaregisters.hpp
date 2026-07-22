/*******************************************************************************
* Filename      : pkaregisters.hpp
*
* Details       : PKA. This header file is auto-generated for STM32WB55_CM4
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "pkafieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PKA
{
  struct PKACRBase {} ;

  struct CR : public RegisterBase<0x58002000, 32, ReadWriteMode>
  {
    using ADDRERRIE = PKA_CR_ADDRERRIE_Values<PKA::CR, 20, 1, ReadWriteMode, PKACRBase> ;
    using RAMERRIE = PKA_CR_RAMERRIE_Values<PKA::CR, 19, 1, ReadWriteMode, PKACRBase> ;
    using PROCENDIE = PKA_CR_PROCENDIE_Values<PKA::CR, 17, 1, ReadWriteMode, PKACRBase> ;
    using MODE = PKA_CR_MODE_Values<PKA::CR, 8, 6, ReadWriteMode, PKACRBase> ;
    using SECLVL = PKA_CR_SECLVL_Values<PKA::CR, 2, 1, ReadWriteMode, PKACRBase> ;
    using START = PKA_CR_START_Values<PKA::CR, 1, 1, ReadWriteMode, PKACRBase> ;
    using EN = PKA_CR_EN_Values<PKA::CR, 0, 1, ReadWriteMode, PKACRBase> ;
    using FieldValues = PKA_CR_EN_Values<PKA::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x58002000, 32, ReadWriteMode, PKACRBase, T...> ;

  struct PKASRBase {} ;

  struct SR : public RegisterBase<0x58002004, 32, ReadMode>
  {
    using ADDRERRF = PKA_SR_ADDRERRF_Values<PKA::SR, 20, 1, ReadMode, PKASRBase> ;
    using RAMERRF = PKA_SR_RAMERRF_Values<PKA::SR, 19, 1, ReadMode, PKASRBase> ;
    using PROCENDF = PKA_SR_PROCENDF_Values<PKA::SR, 17, 1, ReadMode, PKASRBase> ;
    using BUSY = PKA_SR_BUSY_Values<PKA::SR, 16, 1, ReadMode, PKASRBase> ;
    using FieldValues = PKA_SR_BUSY_Values<PKA::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x58002004, 32, ReadMode, PKASRBase, T...> ;

  struct PKACLRFRBase {} ;

  struct CLRFR : public RegisterBase<0x58002008, 32, ReadWriteMode>
  {
    using ADDRERRFC = PKA_CLRFR_ADDRERRFC_Values<PKA::CLRFR, 20, 1, ReadWriteMode, PKACLRFRBase> ;
    using RAMERRFC = PKA_CLRFR_RAMERRFC_Values<PKA::CLRFR, 19, 1, ReadWriteMode, PKACLRFRBase> ;
    using PROCENDFC = PKA_CLRFR_PROCENDFC_Values<PKA::CLRFR, 17, 1, ReadWriteMode, PKACLRFRBase> ;
    using FieldValues = PKA_CLRFR_PROCENDFC_Values<PKA::CLRFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CLRFRPack  = Register<0x58002008, 32, ReadWriteMode, PKACLRFRBase, T...> ;

  struct PKAVERRBase {} ;

  struct VERR : public RegisterBase<0x58003FF4, 32, ReadMode>
  {
    using MINREV = PKA_VERR_MINREV_Values<PKA::VERR, 0, 4, ReadMode, PKAVERRBase> ;
    using MAJREV = PKA_VERR_MAJREV_Values<PKA::VERR, 4, 4, ReadMode, PKAVERRBase> ;
    using FieldValues = PKA_VERR_MAJREV_Values<PKA::VERR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VERRPack  = Register<0x58003FF4, 32, ReadMode, PKAVERRBase, T...> ;

  struct PKAIPIDRBase {} ;

  struct IPIDR : public RegisterBase<0x58003FF8, 32, ReadMode>
  {
    using ID = PKA_IPIDR_ID_Values<PKA::IPIDR, 0, 32, ReadMode, PKAIPIDRBase> ;
    using FieldValues = PKA_IPIDR_ID_Values<PKA::IPIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPIDRPack  = Register<0x58003FF8, 32, ReadMode, PKAIPIDRBase, T...> ;

  struct PKASIDRBase {} ;

  struct SIDR : public RegisterBase<0x58003FFC, 32, ReadMode>
  {
    using SID = PKA_SIDR_SID_Values<PKA::SIDR, 0, 32, ReadMode, PKASIDRBase> ;
    using FieldValues = PKA_SIDR_SID_Values<PKA::SIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SIDRPack  = Register<0x58003FFC, 32, ReadMode, PKASIDRBase, T...> ;

} ;

