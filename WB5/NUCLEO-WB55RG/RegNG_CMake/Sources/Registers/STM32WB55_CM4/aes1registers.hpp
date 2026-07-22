/*******************************************************************************
* Filename      : aes1registers.hpp
*
* Details       : Advanced encryption standard hardware accelerator 1. This
*                 header file is auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "aes1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AES1
{
  struct AES1CRBase {} ;

  struct CR : public RegisterBase<0x50060000, 32, ReadWriteMode>
  {
    using NPBLB = AES1_CR_NPBLB_Values<AES1::CR, 20, 4, ReadWriteMode, AES1CRBase> ;
    using KEYSIZE = AES1_CR_KEYSIZE_Values<AES1::CR, 18, 1, ReadWriteMode, AES1CRBase> ;
    using CHMOD2 = AES1_CR_CHMOD2_Values<AES1::CR, 16, 1, ReadWriteMode, AES1CRBase> ;
    using GCMPH = AES1_CR_GCMPH_Values<AES1::CR, 13, 2, ReadWriteMode, AES1CRBase> ;
    using DMAOUTEN = AES1_CR_DMAOUTEN_Values<AES1::CR, 12, 1, ReadWriteMode, AES1CRBase> ;
    using DMAINEN = AES1_CR_DMAINEN_Values<AES1::CR, 11, 1, ReadWriteMode, AES1CRBase> ;
    using ERRIE = AES1_CR_ERRIE_Values<AES1::CR, 10, 1, ReadWriteMode, AES1CRBase> ;
    using CCFIE = AES1_CR_CCFIE_Values<AES1::CR, 9, 1, ReadWriteMode, AES1CRBase> ;
    using ERRC = AES1_CR_ERRC_Values<AES1::CR, 8, 1, ReadWriteMode, AES1CRBase> ;
    using CCFC = AES1_CR_CCFC_Values<AES1::CR, 7, 1, ReadWriteMode, AES1CRBase> ;
    using CHMOD10 = AES1_CR_CHMOD10_Values<AES1::CR, 5, 2, ReadWriteMode, AES1CRBase> ;
    using MODE = AES1_CR_MODE_Values<AES1::CR, 3, 2, ReadWriteMode, AES1CRBase> ;
    using DATATYPE = AES1_CR_DATATYPE_Values<AES1::CR, 1, 2, ReadWriteMode, AES1CRBase> ;
    using EN = AES1_CR_EN_Values<AES1::CR, 0, 1, ReadWriteMode, AES1CRBase> ;
    using FieldValues = AES1_CR_EN_Values<AES1::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50060000, 32, ReadWriteMode, AES1CRBase, T...> ;

  struct AES1SRBase {} ;

  struct SR : public RegisterBase<0x50060004, 32, ReadMode>
  {
    using BUSY = AES1_SR_BUSY_Values<AES1::SR, 3, 1, ReadMode, AES1SRBase> ;
    using WRERR = AES1_SR_WRERR_Values<AES1::SR, 2, 1, ReadMode, AES1SRBase> ;
    using RDERR = AES1_SR_RDERR_Values<AES1::SR, 1, 1, ReadMode, AES1SRBase> ;
    using CCF = AES1_SR_CCF_Values<AES1::SR, 0, 1, ReadMode, AES1SRBase> ;
    using FieldValues = AES1_SR_CCF_Values<AES1::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x50060004, 32, ReadMode, AES1SRBase, T...> ;

  struct AES1DINRBase {} ;

  struct DINR : public RegisterBase<0x50060008, 32, ReadWriteMode>
  {
    using AES_DINR = AES1_DINR_AES_DINR_Values<AES1::DINR, 0, 32, ReadWriteMode, AES1DINRBase> ;
    using FieldValues = AES1_DINR_AES_DINR_Values<AES1::DINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DINRPack  = Register<0x50060008, 32, ReadWriteMode, AES1DINRBase, T...> ;

  struct AES1DOUTRBase {} ;

  struct DOUTR : public RegisterBase<0x5006000C, 32, ReadMode>
  {
    using AES_DOUTR = AES1_DOUTR_AES_DOUTR_Values<AES1::DOUTR, 0, 32, ReadMode, AES1DOUTRBase> ;
    using FieldValues = AES1_DOUTR_AES_DOUTR_Values<AES1::DOUTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DOUTRPack  = Register<0x5006000C, 32, ReadMode, AES1DOUTRBase, T...> ;

  struct AES1KEYR0Base {} ;

  struct KEYR0 : public RegisterBase<0x50060010, 32, ReadWriteMode>
  {
    using AES_KEYR0 = AES1_KEYR0_AES_KEYR0_Values<AES1::KEYR0, 0, 32, ReadWriteMode, AES1KEYR0Base> ;
    using FieldValues = AES1_KEYR0_AES_KEYR0_Values<AES1::KEYR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR0Pack  = Register<0x50060010, 32, ReadWriteMode, AES1KEYR0Base, T...> ;

  struct AES1KEYR1Base {} ;

  struct KEYR1 : public RegisterBase<0x50060014, 32, ReadWriteMode>
  {
    using AES_KEYR1 = AES1_KEYR1_AES_KEYR1_Values<AES1::KEYR1, 0, 32, ReadWriteMode, AES1KEYR1Base> ;
    using FieldValues = AES1_KEYR1_AES_KEYR1_Values<AES1::KEYR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR1Pack  = Register<0x50060014, 32, ReadWriteMode, AES1KEYR1Base, T...> ;

  struct AES1KEYR2Base {} ;

  struct KEYR2 : public RegisterBase<0x50060018, 32, ReadWriteMode>
  {
    using AES_KEYR2 = AES1_KEYR2_AES_KEYR2_Values<AES1::KEYR2, 0, 32, ReadWriteMode, AES1KEYR2Base> ;
    using FieldValues = AES1_KEYR2_AES_KEYR2_Values<AES1::KEYR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR2Pack  = Register<0x50060018, 32, ReadWriteMode, AES1KEYR2Base, T...> ;

  struct AES1KEYR3Base {} ;

  struct KEYR3 : public RegisterBase<0x5006001C, 32, ReadWriteMode>
  {
    using AES_KEYR3 = AES1_KEYR3_AES_KEYR3_Values<AES1::KEYR3, 0, 32, ReadWriteMode, AES1KEYR3Base> ;
    using FieldValues = AES1_KEYR3_AES_KEYR3_Values<AES1::KEYR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR3Pack  = Register<0x5006001C, 32, ReadWriteMode, AES1KEYR3Base, T...> ;

  struct AES1IVR0Base {} ;

  struct IVR0 : public RegisterBase<0x50060020, 32, ReadWriteMode>
  {
    using AES_IVR0 = AES1_IVR0_AES_IVR0_Values<AES1::IVR0, 0, 32, ReadWriteMode, AES1IVR0Base> ;
    using FieldValues = AES1_IVR0_AES_IVR0_Values<AES1::IVR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR0Pack  = Register<0x50060020, 32, ReadWriteMode, AES1IVR0Base, T...> ;

  struct AES1IVR1Base {} ;

  struct IVR1 : public RegisterBase<0x50060024, 32, ReadWriteMode>
  {
    using AES_IVR1 = AES1_IVR1_AES_IVR1_Values<AES1::IVR1, 0, 32, ReadWriteMode, AES1IVR1Base> ;
    using FieldValues = AES1_IVR1_AES_IVR1_Values<AES1::IVR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR1Pack  = Register<0x50060024, 32, ReadWriteMode, AES1IVR1Base, T...> ;

  struct AES1IVR2Base {} ;

  struct IVR2 : public RegisterBase<0x50060028, 32, ReadWriteMode>
  {
    using AES_IVR2 = AES1_IVR2_AES_IVR2_Values<AES1::IVR2, 0, 32, ReadWriteMode, AES1IVR2Base> ;
    using FieldValues = AES1_IVR2_AES_IVR2_Values<AES1::IVR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR2Pack  = Register<0x50060028, 32, ReadWriteMode, AES1IVR2Base, T...> ;

  struct AES1IVR3Base {} ;

  struct IVR3 : public RegisterBase<0x5006002C, 32, ReadWriteMode>
  {
    using AES_IVR3 = AES1_IVR3_AES_IVR3_Values<AES1::IVR3, 0, 32, ReadWriteMode, AES1IVR3Base> ;
    using FieldValues = AES1_IVR3_AES_IVR3_Values<AES1::IVR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR3Pack  = Register<0x5006002C, 32, ReadWriteMode, AES1IVR3Base, T...> ;

  struct AES1KEYR4Base {} ;

  struct KEYR4 : public RegisterBase<0x50060030, 32, ReadWriteMode>
  {
    using AES_KEYR4 = AES1_KEYR4_AES_KEYR4_Values<AES1::KEYR4, 0, 32, ReadWriteMode, AES1KEYR4Base> ;
    using FieldValues = AES1_KEYR4_AES_KEYR4_Values<AES1::KEYR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR4Pack  = Register<0x50060030, 32, ReadWriteMode, AES1KEYR4Base, T...> ;

  struct AES1KEYR5Base {} ;

  struct KEYR5 : public RegisterBase<0x50060034, 32, ReadWriteMode>
  {
    using AES_KEYR5 = AES1_KEYR5_AES_KEYR5_Values<AES1::KEYR5, 0, 32, ReadWriteMode, AES1KEYR5Base> ;
    using FieldValues = AES1_KEYR5_AES_KEYR5_Values<AES1::KEYR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR5Pack  = Register<0x50060034, 32, ReadWriteMode, AES1KEYR5Base, T...> ;

  struct AES1KEYR6Base {} ;

  struct KEYR6 : public RegisterBase<0x50060038, 32, ReadWriteMode>
  {
    using AES_KEYR6 = AES1_KEYR6_AES_KEYR6_Values<AES1::KEYR6, 0, 32, ReadWriteMode, AES1KEYR6Base> ;
    using FieldValues = AES1_KEYR6_AES_KEYR6_Values<AES1::KEYR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR6Pack  = Register<0x50060038, 32, ReadWriteMode, AES1KEYR6Base, T...> ;

  struct AES1KEYR7Base {} ;

  struct KEYR7 : public RegisterBase<0x5006003C, 32, ReadWriteMode>
  {
    using AES_KEYR7 = AES1_KEYR7_AES_KEYR7_Values<AES1::KEYR7, 0, 32, ReadWriteMode, AES1KEYR7Base> ;
    using FieldValues = AES1_KEYR7_AES_KEYR7_Values<AES1::KEYR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR7Pack  = Register<0x5006003C, 32, ReadWriteMode, AES1KEYR7Base, T...> ;

  struct AES1SUSP0RBase {} ;

  struct SUSP0R : public RegisterBase<0x50060040, 32, ReadWriteMode>
  {
    using AES_SUSP0R = AES1_SUSP0R_AES_SUSP0R_Values<AES1::SUSP0R, 0, 32, ReadWriteMode, AES1SUSP0RBase> ;
    using FieldValues = AES1_SUSP0R_AES_SUSP0R_Values<AES1::SUSP0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP0RPack  = Register<0x50060040, 32, ReadWriteMode, AES1SUSP0RBase, T...> ;

  struct AES1SUSP1RBase {} ;

  struct SUSP1R : public RegisterBase<0x50060044, 32, ReadWriteMode>
  {
    using AES_SUSP1R = AES1_SUSP1R_AES_SUSP1R_Values<AES1::SUSP1R, 0, 32, ReadWriteMode, AES1SUSP1RBase> ;
    using FieldValues = AES1_SUSP1R_AES_SUSP1R_Values<AES1::SUSP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP1RPack  = Register<0x50060044, 32, ReadWriteMode, AES1SUSP1RBase, T...> ;

  struct AES1SUSP2RBase {} ;

  struct SUSP2R : public RegisterBase<0x50060048, 32, ReadWriteMode>
  {
    using AES_SUSP2R = AES1_SUSP2R_AES_SUSP2R_Values<AES1::SUSP2R, 0, 32, ReadWriteMode, AES1SUSP2RBase> ;
    using FieldValues = AES1_SUSP2R_AES_SUSP2R_Values<AES1::SUSP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP2RPack  = Register<0x50060048, 32, ReadWriteMode, AES1SUSP2RBase, T...> ;

  struct AES1SUSP3RBase {} ;

  struct SUSP3R : public RegisterBase<0x5006004C, 32, ReadWriteMode>
  {
    using AES_SUSP3R = AES1_SUSP3R_AES_SUSP3R_Values<AES1::SUSP3R, 0, 32, ReadWriteMode, AES1SUSP3RBase> ;
    using FieldValues = AES1_SUSP3R_AES_SUSP3R_Values<AES1::SUSP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP3RPack  = Register<0x5006004C, 32, ReadWriteMode, AES1SUSP3RBase, T...> ;

  struct AES1SUSP4RBase {} ;

  struct SUSP4R : public RegisterBase<0x50060050, 32, ReadWriteMode>
  {
    using AES_SUSP4R = AES1_SUSP4R_AES_SUSP4R_Values<AES1::SUSP4R, 0, 32, ReadWriteMode, AES1SUSP4RBase> ;
    using FieldValues = AES1_SUSP4R_AES_SUSP4R_Values<AES1::SUSP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP4RPack  = Register<0x50060050, 32, ReadWriteMode, AES1SUSP4RBase, T...> ;

  struct AES1SUSP5RBase {} ;

  struct SUSP5R : public RegisterBase<0x50060054, 32, ReadWriteMode>
  {
    using AES_SUSP5R = AES1_SUSP5R_AES_SUSP5R_Values<AES1::SUSP5R, 0, 32, ReadWriteMode, AES1SUSP5RBase> ;
    using FieldValues = AES1_SUSP5R_AES_SUSP5R_Values<AES1::SUSP5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP5RPack  = Register<0x50060054, 32, ReadWriteMode, AES1SUSP5RBase, T...> ;

  struct AES1SUSP6RBase {} ;

  struct SUSP6R : public RegisterBase<0x50060058, 32, ReadWriteMode>
  {
    using AES_SUSP6R = AES1_SUSP6R_AES_SUSP6R_Values<AES1::SUSP6R, 0, 32, ReadWriteMode, AES1SUSP6RBase> ;
    using FieldValues = AES1_SUSP6R_AES_SUSP6R_Values<AES1::SUSP6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP6RPack  = Register<0x50060058, 32, ReadWriteMode, AES1SUSP6RBase, T...> ;

  struct AES1SUSP7RBase {} ;

  struct SUSP7R : public RegisterBase<0x5006005C, 32, ReadWriteMode>
  {
    using AES_SUSP7R = AES1_SUSP7R_AES_SUSP7R_Values<AES1::SUSP7R, 0, 32, ReadWriteMode, AES1SUSP7RBase> ;
    using FieldValues = AES1_SUSP7R_AES_SUSP7R_Values<AES1::SUSP7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP7RPack  = Register<0x5006005C, 32, ReadWriteMode, AES1SUSP7RBase, T...> ;

  struct AES1HWCFRBase {} ;

  struct HWCFR : public RegisterBase<0x500603F0, 32, ReadMode>
  {
    using CFG4 = AES1_HWCFR_CFG4_Values<AES1::HWCFR, 12, 4, ReadMode, AES1HWCFRBase> ;
    using CFG3 = AES1_HWCFR_CFG3_Values<AES1::HWCFR, 8, 4, ReadMode, AES1HWCFRBase> ;
    using CFG2 = AES1_HWCFR_CFG2_Values<AES1::HWCFR, 4, 4, ReadMode, AES1HWCFRBase> ;
    using CFG1 = AES1_HWCFR_CFG1_Values<AES1::HWCFR, 0, 4, ReadMode, AES1HWCFRBase> ;
    using FieldValues = AES1_HWCFR_CFG1_Values<AES1::HWCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFRPack  = Register<0x500603F0, 32, ReadMode, AES1HWCFRBase, T...> ;

  struct AES1VERRBase {} ;

  struct VERR : public RegisterBase<0x500603F4, 32, ReadMode>
  {
    using MAJREV = AES1_VERR_MAJREV_Values<AES1::VERR, 4, 4, ReadMode, AES1VERRBase> ;
    using MINREV = AES1_VERR_MINREV_Values<AES1::VERR, 0, 4, ReadMode, AES1VERRBase> ;
    using FieldValues = AES1_VERR_MINREV_Values<AES1::VERR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VERRPack  = Register<0x500603F4, 32, ReadMode, AES1VERRBase, T...> ;

  struct AES1IPIDRBase {} ;

  struct IPIDR : public RegisterBase<0x500603F8, 32, ReadMode>
  {
    using ID = AES1_IPIDR_ID_Values<AES1::IPIDR, 0, 32, ReadMode, AES1IPIDRBase> ;
    using FieldValues = AES1_IPIDR_ID_Values<AES1::IPIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPIDRPack  = Register<0x500603F8, 32, ReadMode, AES1IPIDRBase, T...> ;

  struct AES1SIDRBase {} ;

  struct SIDR : public RegisterBase<0x500603FC, 32, ReadMode>
  {
    using ID = AES1_SIDR_ID_Values<AES1::SIDR, 0, 32, ReadMode, AES1SIDRBase> ;
    using FieldValues = AES1_SIDR_ID_Values<AES1::SIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SIDRPack  = Register<0x500603FC, 32, ReadMode, AES1SIDRBase, T...> ;

} ;

