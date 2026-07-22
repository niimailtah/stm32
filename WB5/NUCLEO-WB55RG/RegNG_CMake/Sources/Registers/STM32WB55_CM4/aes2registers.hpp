/*******************************************************************************
* Filename      : aes2registers.hpp
*
* Details       : Advanced encryption standard hardware accelerator 1. This
*                 header file is auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "aes2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct AES2
{
  struct AES2CRBase {} ;

  struct CR : public RegisterBase<0x58001800, 32, ReadWriteMode>
  {
    using NPBLB = AES2_CR_NPBLB_Values<AES2::CR, 20, 4, ReadWriteMode, AES2CRBase> ;
    using KEYSIZE = AES2_CR_KEYSIZE_Values<AES2::CR, 18, 1, ReadWriteMode, AES2CRBase> ;
    using CHMOD2 = AES2_CR_CHMOD2_Values<AES2::CR, 16, 1, ReadWriteMode, AES2CRBase> ;
    using GCMPH = AES2_CR_GCMPH_Values<AES2::CR, 13, 2, ReadWriteMode, AES2CRBase> ;
    using DMAOUTEN = AES2_CR_DMAOUTEN_Values<AES2::CR, 12, 1, ReadWriteMode, AES2CRBase> ;
    using DMAINEN = AES2_CR_DMAINEN_Values<AES2::CR, 11, 1, ReadWriteMode, AES2CRBase> ;
    using ERRIE = AES2_CR_ERRIE_Values<AES2::CR, 10, 1, ReadWriteMode, AES2CRBase> ;
    using CCFIE = AES2_CR_CCFIE_Values<AES2::CR, 9, 1, ReadWriteMode, AES2CRBase> ;
    using ERRC = AES2_CR_ERRC_Values<AES2::CR, 8, 1, ReadWriteMode, AES2CRBase> ;
    using CCFC = AES2_CR_CCFC_Values<AES2::CR, 7, 1, ReadWriteMode, AES2CRBase> ;
    using CHMOD10 = AES2_CR_CHMOD10_Values<AES2::CR, 5, 2, ReadWriteMode, AES2CRBase> ;
    using MODE = AES2_CR_MODE_Values<AES2::CR, 3, 2, ReadWriteMode, AES2CRBase> ;
    using DATATYPE = AES2_CR_DATATYPE_Values<AES2::CR, 1, 2, ReadWriteMode, AES2CRBase> ;
    using EN = AES2_CR_EN_Values<AES2::CR, 0, 1, ReadWriteMode, AES2CRBase> ;
    using FieldValues = AES2_CR_EN_Values<AES2::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x58001800, 32, ReadWriteMode, AES2CRBase, T...> ;

  struct AES2SRBase {} ;

  struct SR : public RegisterBase<0x58001804, 32, ReadMode>
  {
    using BUSY = AES2_SR_BUSY_Values<AES2::SR, 3, 1, ReadMode, AES2SRBase> ;
    using WRERR = AES2_SR_WRERR_Values<AES2::SR, 2, 1, ReadMode, AES2SRBase> ;
    using RDERR = AES2_SR_RDERR_Values<AES2::SR, 1, 1, ReadMode, AES2SRBase> ;
    using CCF = AES2_SR_CCF_Values<AES2::SR, 0, 1, ReadMode, AES2SRBase> ;
    using FieldValues = AES2_SR_CCF_Values<AES2::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x58001804, 32, ReadMode, AES2SRBase, T...> ;

  struct AES2DINRBase {} ;

  struct DINR : public RegisterBase<0x58001808, 32, ReadWriteMode>
  {
    using AES_DINR = AES2_DINR_AES_DINR_Values<AES2::DINR, 0, 32, ReadWriteMode, AES2DINRBase> ;
    using FieldValues = AES2_DINR_AES_DINR_Values<AES2::DINR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DINRPack  = Register<0x58001808, 32, ReadWriteMode, AES2DINRBase, T...> ;

  struct AES2DOUTRBase {} ;

  struct DOUTR : public RegisterBase<0x5800180C, 32, ReadMode>
  {
    using AES_DOUTR = AES2_DOUTR_AES_DOUTR_Values<AES2::DOUTR, 0, 32, ReadMode, AES2DOUTRBase> ;
    using FieldValues = AES2_DOUTR_AES_DOUTR_Values<AES2::DOUTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DOUTRPack  = Register<0x5800180C, 32, ReadMode, AES2DOUTRBase, T...> ;

  struct AES2KEYR0Base {} ;

  struct KEYR0 : public RegisterBase<0x58001810, 32, ReadWriteMode>
  {
    using AES_KEYR0 = AES2_KEYR0_AES_KEYR0_Values<AES2::KEYR0, 0, 32, ReadWriteMode, AES2KEYR0Base> ;
    using FieldValues = AES2_KEYR0_AES_KEYR0_Values<AES2::KEYR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR0Pack  = Register<0x58001810, 32, ReadWriteMode, AES2KEYR0Base, T...> ;

  struct AES2KEYR1Base {} ;

  struct KEYR1 : public RegisterBase<0x58001814, 32, ReadWriteMode>
  {
    using AES_KEYR1 = AES2_KEYR1_AES_KEYR1_Values<AES2::KEYR1, 0, 32, ReadWriteMode, AES2KEYR1Base> ;
    using FieldValues = AES2_KEYR1_AES_KEYR1_Values<AES2::KEYR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR1Pack  = Register<0x58001814, 32, ReadWriteMode, AES2KEYR1Base, T...> ;

  struct AES2KEYR2Base {} ;

  struct KEYR2 : public RegisterBase<0x58001818, 32, ReadWriteMode>
  {
    using AES_KEYR2 = AES2_KEYR2_AES_KEYR2_Values<AES2::KEYR2, 0, 32, ReadWriteMode, AES2KEYR2Base> ;
    using FieldValues = AES2_KEYR2_AES_KEYR2_Values<AES2::KEYR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR2Pack  = Register<0x58001818, 32, ReadWriteMode, AES2KEYR2Base, T...> ;

  struct AES2KEYR3Base {} ;

  struct KEYR3 : public RegisterBase<0x5800181C, 32, ReadWriteMode>
  {
    using AES_KEYR3 = AES2_KEYR3_AES_KEYR3_Values<AES2::KEYR3, 0, 32, ReadWriteMode, AES2KEYR3Base> ;
    using FieldValues = AES2_KEYR3_AES_KEYR3_Values<AES2::KEYR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR3Pack  = Register<0x5800181C, 32, ReadWriteMode, AES2KEYR3Base, T...> ;

  struct AES2IVR0Base {} ;

  struct IVR0 : public RegisterBase<0x58001820, 32, ReadWriteMode>
  {
    using AES_IVR0 = AES2_IVR0_AES_IVR0_Values<AES2::IVR0, 0, 32, ReadWriteMode, AES2IVR0Base> ;
    using FieldValues = AES2_IVR0_AES_IVR0_Values<AES2::IVR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR0Pack  = Register<0x58001820, 32, ReadWriteMode, AES2IVR0Base, T...> ;

  struct AES2IVR1Base {} ;

  struct IVR1 : public RegisterBase<0x58001824, 32, ReadWriteMode>
  {
    using AES_IVR1 = AES2_IVR1_AES_IVR1_Values<AES2::IVR1, 0, 32, ReadWriteMode, AES2IVR1Base> ;
    using FieldValues = AES2_IVR1_AES_IVR1_Values<AES2::IVR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR1Pack  = Register<0x58001824, 32, ReadWriteMode, AES2IVR1Base, T...> ;

  struct AES2IVR2Base {} ;

  struct IVR2 : public RegisterBase<0x58001828, 32, ReadWriteMode>
  {
    using AES_IVR2 = AES2_IVR2_AES_IVR2_Values<AES2::IVR2, 0, 32, ReadWriteMode, AES2IVR2Base> ;
    using FieldValues = AES2_IVR2_AES_IVR2_Values<AES2::IVR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR2Pack  = Register<0x58001828, 32, ReadWriteMode, AES2IVR2Base, T...> ;

  struct AES2IVR3Base {} ;

  struct IVR3 : public RegisterBase<0x5800182C, 32, ReadWriteMode>
  {
    using AES_IVR3 = AES2_IVR3_AES_IVR3_Values<AES2::IVR3, 0, 32, ReadWriteMode, AES2IVR3Base> ;
    using FieldValues = AES2_IVR3_AES_IVR3_Values<AES2::IVR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IVR3Pack  = Register<0x5800182C, 32, ReadWriteMode, AES2IVR3Base, T...> ;

  struct AES2KEYR4Base {} ;

  struct KEYR4 : public RegisterBase<0x58001830, 32, ReadWriteMode>
  {
    using AES_KEYR4 = AES2_KEYR4_AES_KEYR4_Values<AES2::KEYR4, 0, 32, ReadWriteMode, AES2KEYR4Base> ;
    using FieldValues = AES2_KEYR4_AES_KEYR4_Values<AES2::KEYR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR4Pack  = Register<0x58001830, 32, ReadWriteMode, AES2KEYR4Base, T...> ;

  struct AES2KEYR5Base {} ;

  struct KEYR5 : public RegisterBase<0x58001834, 32, ReadWriteMode>
  {
    using AES_KEYR5 = AES2_KEYR5_AES_KEYR5_Values<AES2::KEYR5, 0, 32, ReadWriteMode, AES2KEYR5Base> ;
    using FieldValues = AES2_KEYR5_AES_KEYR5_Values<AES2::KEYR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR5Pack  = Register<0x58001834, 32, ReadWriteMode, AES2KEYR5Base, T...> ;

  struct AES2KEYR6Base {} ;

  struct KEYR6 : public RegisterBase<0x58001838, 32, ReadWriteMode>
  {
    using AES_KEYR6 = AES2_KEYR6_AES_KEYR6_Values<AES2::KEYR6, 0, 32, ReadWriteMode, AES2KEYR6Base> ;
    using FieldValues = AES2_KEYR6_AES_KEYR6_Values<AES2::KEYR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR6Pack  = Register<0x58001838, 32, ReadWriteMode, AES2KEYR6Base, T...> ;

  struct AES2KEYR7Base {} ;

  struct KEYR7 : public RegisterBase<0x5800183C, 32, ReadWriteMode>
  {
    using AES_KEYR7 = AES2_KEYR7_AES_KEYR7_Values<AES2::KEYR7, 0, 32, ReadWriteMode, AES2KEYR7Base> ;
    using FieldValues = AES2_KEYR7_AES_KEYR7_Values<AES2::KEYR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYR7Pack  = Register<0x5800183C, 32, ReadWriteMode, AES2KEYR7Base, T...> ;

  struct AES2SUSP0RBase {} ;

  struct SUSP0R : public RegisterBase<0x58001840, 32, ReadWriteMode>
  {
    using AES_SUSP0R = AES2_SUSP0R_AES_SUSP0R_Values<AES2::SUSP0R, 0, 32, ReadWriteMode, AES2SUSP0RBase> ;
    using FieldValues = AES2_SUSP0R_AES_SUSP0R_Values<AES2::SUSP0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP0RPack  = Register<0x58001840, 32, ReadWriteMode, AES2SUSP0RBase, T...> ;

  struct AES2SUSP1RBase {} ;

  struct SUSP1R : public RegisterBase<0x58001844, 32, ReadWriteMode>
  {
    using AES_SUSP1R = AES2_SUSP1R_AES_SUSP1R_Values<AES2::SUSP1R, 0, 32, ReadWriteMode, AES2SUSP1RBase> ;
    using FieldValues = AES2_SUSP1R_AES_SUSP1R_Values<AES2::SUSP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP1RPack  = Register<0x58001844, 32, ReadWriteMode, AES2SUSP1RBase, T...> ;

  struct AES2SUSP2RBase {} ;

  struct SUSP2R : public RegisterBase<0x58001848, 32, ReadWriteMode>
  {
    using AES_SUSP2R = AES2_SUSP2R_AES_SUSP2R_Values<AES2::SUSP2R, 0, 32, ReadWriteMode, AES2SUSP2RBase> ;
    using FieldValues = AES2_SUSP2R_AES_SUSP2R_Values<AES2::SUSP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP2RPack  = Register<0x58001848, 32, ReadWriteMode, AES2SUSP2RBase, T...> ;

  struct AES2SUSP3RBase {} ;

  struct SUSP3R : public RegisterBase<0x5800184C, 32, ReadWriteMode>
  {
    using AES_SUSP3R = AES2_SUSP3R_AES_SUSP3R_Values<AES2::SUSP3R, 0, 32, ReadWriteMode, AES2SUSP3RBase> ;
    using FieldValues = AES2_SUSP3R_AES_SUSP3R_Values<AES2::SUSP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP3RPack  = Register<0x5800184C, 32, ReadWriteMode, AES2SUSP3RBase, T...> ;

  struct AES2SUSP4RBase {} ;

  struct SUSP4R : public RegisterBase<0x58001850, 32, ReadWriteMode>
  {
    using AES_SUSP4R = AES2_SUSP4R_AES_SUSP4R_Values<AES2::SUSP4R, 0, 32, ReadWriteMode, AES2SUSP4RBase> ;
    using FieldValues = AES2_SUSP4R_AES_SUSP4R_Values<AES2::SUSP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP4RPack  = Register<0x58001850, 32, ReadWriteMode, AES2SUSP4RBase, T...> ;

  struct AES2SUSP5RBase {} ;

  struct SUSP5R : public RegisterBase<0x58001854, 32, ReadWriteMode>
  {
    using AES_SUSP5R = AES2_SUSP5R_AES_SUSP5R_Values<AES2::SUSP5R, 0, 32, ReadWriteMode, AES2SUSP5RBase> ;
    using FieldValues = AES2_SUSP5R_AES_SUSP5R_Values<AES2::SUSP5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP5RPack  = Register<0x58001854, 32, ReadWriteMode, AES2SUSP5RBase, T...> ;

  struct AES2SUSP6RBase {} ;

  struct SUSP6R : public RegisterBase<0x58001858, 32, ReadWriteMode>
  {
    using AES_SUSP6R = AES2_SUSP6R_AES_SUSP6R_Values<AES2::SUSP6R, 0, 32, ReadWriteMode, AES2SUSP6RBase> ;
    using FieldValues = AES2_SUSP6R_AES_SUSP6R_Values<AES2::SUSP6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP6RPack  = Register<0x58001858, 32, ReadWriteMode, AES2SUSP6RBase, T...> ;

  struct AES2SUSP7RBase {} ;

  struct SUSP7R : public RegisterBase<0x5800185C, 32, ReadWriteMode>
  {
    using AES_SUSP7R = AES2_SUSP7R_AES_SUSP7R_Values<AES2::SUSP7R, 0, 32, ReadWriteMode, AES2SUSP7RBase> ;
    using FieldValues = AES2_SUSP7R_AES_SUSP7R_Values<AES2::SUSP7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SUSP7RPack  = Register<0x5800185C, 32, ReadWriteMode, AES2SUSP7RBase, T...> ;

  struct AES2HWCFRBase {} ;

  struct HWCFR : public RegisterBase<0x58001860, 32, ReadMode>
  {
    using CFG4 = AES2_HWCFR_CFG4_Values<AES2::HWCFR, 12, 4, ReadMode, AES2HWCFRBase> ;
    using CFG3 = AES2_HWCFR_CFG3_Values<AES2::HWCFR, 8, 4, ReadMode, AES2HWCFRBase> ;
    using CFG2 = AES2_HWCFR_CFG2_Values<AES2::HWCFR, 4, 4, ReadMode, AES2HWCFRBase> ;
    using CFG1 = AES2_HWCFR_CFG1_Values<AES2::HWCFR, 0, 4, ReadMode, AES2HWCFRBase> ;
    using FieldValues = AES2_HWCFR_CFG1_Values<AES2::HWCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFRPack  = Register<0x58001860, 32, ReadMode, AES2HWCFRBase, T...> ;

  struct AES2VERRBase {} ;

  struct VERR : public RegisterBase<0x58001864, 32, ReadMode>
  {
    using MAJREV = AES2_VERR_MAJREV_Values<AES2::VERR, 4, 4, ReadMode, AES2VERRBase> ;
    using MINREV = AES2_VERR_MINREV_Values<AES2::VERR, 0, 4, ReadMode, AES2VERRBase> ;
    using FieldValues = AES2_VERR_MINREV_Values<AES2::VERR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VERRPack  = Register<0x58001864, 32, ReadMode, AES2VERRBase, T...> ;

  struct AES2IPIDRBase {} ;

  struct IPIDR : public RegisterBase<0x58001868, 32, ReadMode>
  {
    using ID = AES2_IPIDR_ID_Values<AES2::IPIDR, 0, 32, ReadMode, AES2IPIDRBase> ;
    using FieldValues = AES2_IPIDR_ID_Values<AES2::IPIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPIDRPack  = Register<0x58001868, 32, ReadMode, AES2IPIDRBase, T...> ;

  struct AES2SIDRBase {} ;

  struct SIDR : public RegisterBase<0x5800186C, 32, ReadMode>
  {
    using ID = AES2_SIDR_ID_Values<AES2::SIDR, 0, 32, ReadMode, AES2SIDRBase> ;
    using FieldValues = AES2_SIDR_ID_Values<AES2::SIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SIDRPack  = Register<0x5800186C, 32, ReadMode, AES2SIDRBase, T...> ;

} ;

