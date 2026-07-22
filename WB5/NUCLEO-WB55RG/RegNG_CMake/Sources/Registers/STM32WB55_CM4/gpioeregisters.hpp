/*******************************************************************************
* Filename      : gpioeregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "gpioefieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOE
{
  struct GPIOEMODERBase {} ;

  struct MODER : public RegisterBase<0x48001000, 32, ReadWriteMode>
  {
    using MODER4 = GPIOE_MODER_MODER4_Values<GPIOE::MODER, 8, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER3 = GPIOE_MODER_MODER3_Values<GPIOE::MODER, 6, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER2 = GPIOE_MODER_MODER2_Values<GPIOE::MODER, 4, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER1 = GPIOE_MODER_MODER1_Values<GPIOE::MODER, 2, 2, ReadWriteMode, GPIOEMODERBase> ;
    using MODER0 = GPIOE_MODER_MODER0_Values<GPIOE::MODER, 0, 2, ReadWriteMode, GPIOEMODERBase> ;
    using FieldValues = GPIOE_MODER_MODER0_Values<GPIOE::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x48001000, 32, ReadWriteMode, GPIOEMODERBase, T...> ;

  struct GPIOEOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x48001004, 32, ReadWriteMode>
  {
    using OT4 = GPIOE_OTYPER_OT4_Values<GPIOE::OTYPER, 4, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT3 = GPIOE_OTYPER_OT3_Values<GPIOE::OTYPER, 3, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT2 = GPIOE_OTYPER_OT2_Values<GPIOE::OTYPER, 2, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT1 = GPIOE_OTYPER_OT1_Values<GPIOE::OTYPER, 1, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using OT0 = GPIOE_OTYPER_OT0_Values<GPIOE::OTYPER, 0, 1, ReadWriteMode, GPIOEOTYPERBase> ;
    using FieldValues = GPIOE_OTYPER_OT0_Values<GPIOE::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x48001004, 32, ReadWriteMode, GPIOEOTYPERBase, T...> ;

  struct GPIOEOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x48001008, 32, ReadWriteMode>
  {
    using OSPEEDR4 = GPIOE_OSPEEDR_OSPEEDR4_Values<GPIOE::OSPEEDR, 8, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR3 = GPIOE_OSPEEDR_OSPEEDR3_Values<GPIOE::OSPEEDR, 6, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR2 = GPIOE_OSPEEDR_OSPEEDR2_Values<GPIOE::OSPEEDR, 4, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR1 = GPIOE_OSPEEDR_OSPEEDR1_Values<GPIOE::OSPEEDR, 2, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using OSPEEDR0 = GPIOE_OSPEEDR_OSPEEDR0_Values<GPIOE::OSPEEDR, 0, 2, ReadWriteMode, GPIOEOSPEEDRBase> ;
    using FieldValues = GPIOE_OSPEEDR_OSPEEDR0_Values<GPIOE::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x48001008, 32, ReadWriteMode, GPIOEOSPEEDRBase, T...> ;

  struct GPIOEPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x4800100C, 32, ReadWriteMode>
  {
    using PUPDR4 = GPIOE_PUPDR_PUPDR4_Values<GPIOE::PUPDR, 8, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR3 = GPIOE_PUPDR_PUPDR3_Values<GPIOE::PUPDR, 6, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR2 = GPIOE_PUPDR_PUPDR2_Values<GPIOE::PUPDR, 4, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR1 = GPIOE_PUPDR_PUPDR1_Values<GPIOE::PUPDR, 2, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using PUPDR0 = GPIOE_PUPDR_PUPDR0_Values<GPIOE::PUPDR, 0, 2, ReadWriteMode, GPIOEPUPDRBase> ;
    using FieldValues = GPIOE_PUPDR_PUPDR0_Values<GPIOE::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x4800100C, 32, ReadWriteMode, GPIOEPUPDRBase, T...> ;

  struct GPIOEIDRBase {} ;

  struct IDR : public RegisterBase<0x48001010, 32, ReadMode>
  {
    using IDR4 = GPIOE_IDR_IDR4_Values<GPIOE::IDR, 4, 1, ReadMode, GPIOEIDRBase> ;
    using IDR3 = GPIOE_IDR_IDR3_Values<GPIOE::IDR, 3, 1, ReadMode, GPIOEIDRBase> ;
    using IDR2 = GPIOE_IDR_IDR2_Values<GPIOE::IDR, 2, 1, ReadMode, GPIOEIDRBase> ;
    using IDR1 = GPIOE_IDR_IDR1_Values<GPIOE::IDR, 1, 1, ReadMode, GPIOEIDRBase> ;
    using IDR0 = GPIOE_IDR_IDR0_Values<GPIOE::IDR, 0, 1, ReadMode, GPIOEIDRBase> ;
    using FieldValues = GPIOE_IDR_IDR0_Values<GPIOE::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x48001010, 32, ReadMode, GPIOEIDRBase, T...> ;

  struct GPIOEODRBase {} ;

  struct ODR : public RegisterBase<0x48001014, 32, ReadWriteMode>
  {
    using ODR4 = GPIOE_ODR_ODR4_Values<GPIOE::ODR, 4, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR3 = GPIOE_ODR_ODR3_Values<GPIOE::ODR, 3, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR2 = GPIOE_ODR_ODR2_Values<GPIOE::ODR, 2, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR1 = GPIOE_ODR_ODR1_Values<GPIOE::ODR, 1, 1, ReadWriteMode, GPIOEODRBase> ;
    using ODR0 = GPIOE_ODR_ODR0_Values<GPIOE::ODR, 0, 1, ReadWriteMode, GPIOEODRBase> ;
    using FieldValues = GPIOE_ODR_ODR0_Values<GPIOE::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x48001014, 32, ReadWriteMode, GPIOEODRBase, T...> ;

  struct GPIOEBSRRBase {} ;

  struct BSRR : public RegisterBase<0x48001018, 32, WriteMode>
  {
    using BR4 = GPIOE_BSRR_BR4_Values<GPIOE::BSRR, 20, 1, WriteMode, GPIOEBSRRBase> ;
    using BR3 = GPIOE_BSRR_BR3_Values<GPIOE::BSRR, 19, 1, WriteMode, GPIOEBSRRBase> ;
    using BR2 = GPIOE_BSRR_BR2_Values<GPIOE::BSRR, 18, 1, WriteMode, GPIOEBSRRBase> ;
    using BR1 = GPIOE_BSRR_BR1_Values<GPIOE::BSRR, 17, 1, WriteMode, GPIOEBSRRBase> ;
    using BR0 = GPIOE_BSRR_BR0_Values<GPIOE::BSRR, 16, 1, WriteMode, GPIOEBSRRBase> ;
    using BS4 = GPIOE_BSRR_BS4_Values<GPIOE::BSRR, 4, 1, WriteMode, GPIOEBSRRBase> ;
    using BS3 = GPIOE_BSRR_BS3_Values<GPIOE::BSRR, 3, 1, WriteMode, GPIOEBSRRBase> ;
    using BS2 = GPIOE_BSRR_BS2_Values<GPIOE::BSRR, 2, 1, WriteMode, GPIOEBSRRBase> ;
    using BS1 = GPIOE_BSRR_BS1_Values<GPIOE::BSRR, 1, 1, WriteMode, GPIOEBSRRBase> ;
    using BS0 = GPIOE_BSRR_BS0_Values<GPIOE::BSRR, 0, 1, WriteMode, GPIOEBSRRBase> ;
    using FieldValues = GPIOE_BSRR_BS0_Values<GPIOE::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x48001018, 32, WriteMode, GPIOEBSRRBase, T...> ;

  struct GPIOELCKRBase {} ;

  struct LCKR : public RegisterBase<0x4800101C, 32, ReadWriteMode>
  {
    using LCKK = GPIOE_LCKR_LCKK_Values<GPIOE::LCKR, 16, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK4 = GPIOE_LCKR_LCK4_Values<GPIOE::LCKR, 4, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK3 = GPIOE_LCKR_LCK3_Values<GPIOE::LCKR, 3, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK2 = GPIOE_LCKR_LCK2_Values<GPIOE::LCKR, 2, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK1 = GPIOE_LCKR_LCK1_Values<GPIOE::LCKR, 1, 1, ReadWriteMode, GPIOELCKRBase> ;
    using LCK0 = GPIOE_LCKR_LCK0_Values<GPIOE::LCKR, 0, 1, ReadWriteMode, GPIOELCKRBase> ;
    using FieldValues = GPIOE_LCKR_LCK0_Values<GPIOE::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x4800101C, 32, ReadWriteMode, GPIOELCKRBase, T...> ;

  struct GPIOEAFRLBase {} ;

  struct AFRL : public RegisterBase<0x48001020, 32, ReadWriteMode>
  {
    using AFSEL4 = GPIOE_AFRL_AFSEL4_Values<GPIOE::AFRL, 16, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFSEL3 = GPIOE_AFRL_AFSEL3_Values<GPIOE::AFRL, 12, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFSEL2 = GPIOE_AFRL_AFSEL2_Values<GPIOE::AFRL, 8, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFSEL1 = GPIOE_AFRL_AFSEL1_Values<GPIOE::AFRL, 4, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using AFSEL0 = GPIOE_AFRL_AFSEL0_Values<GPIOE::AFRL, 0, 4, ReadWriteMode, GPIOEAFRLBase> ;
    using FieldValues = GPIOE_AFRL_AFSEL0_Values<GPIOE::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x48001020, 32, ReadWriteMode, GPIOEAFRLBase, T...> ;

  struct GPIOEAFRHBase {} ;

  struct AFRH : public RegisterBase<0x48001024, 32, ReadWriteMode>
  {
    using AFSEL15 = GPIOE_AFRH_AFSEL15_Values<GPIOE::AFRH, 28, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL14 = GPIOE_AFRH_AFSEL14_Values<GPIOE::AFRH, 24, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL13 = GPIOE_AFRH_AFSEL13_Values<GPIOE::AFRH, 20, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL12 = GPIOE_AFRH_AFSEL12_Values<GPIOE::AFRH, 16, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL11 = GPIOE_AFRH_AFSEL11_Values<GPIOE::AFRH, 12, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL10 = GPIOE_AFRH_AFSEL10_Values<GPIOE::AFRH, 8, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL9 = GPIOE_AFRH_AFSEL9_Values<GPIOE::AFRH, 4, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using AFSEL8 = GPIOE_AFRH_AFSEL8_Values<GPIOE::AFRH, 0, 4, ReadWriteMode, GPIOEAFRHBase> ;
    using FieldValues = GPIOE_AFRH_AFSEL8_Values<GPIOE::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x48001024, 32, ReadWriteMode, GPIOEAFRHBase, T...> ;

  struct GPIOEBRRBase {} ;

  struct BRR : public RegisterBase<0x48001028, 32, WriteMode>
  {
    using BR0 = GPIOE_BRR_BR0_Values<GPIOE::BRR, 0, 1, WriteMode, GPIOEBRRBase> ;
    using BR1 = GPIOE_BRR_BR1_Values<GPIOE::BRR, 1, 1, WriteMode, GPIOEBRRBase> ;
    using BR2 = GPIOE_BRR_BR2_Values<GPIOE::BRR, 2, 1, WriteMode, GPIOEBRRBase> ;
    using BR3 = GPIOE_BRR_BR3_Values<GPIOE::BRR, 3, 1, WriteMode, GPIOEBRRBase> ;
    using BR4 = GPIOE_BRR_BR4_Values<GPIOE::BRR, 4, 1, WriteMode, GPIOEBRRBase> ;
    using FieldValues = GPIOE_BRR_BR4_Values<GPIOE::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x48001028, 32, WriteMode, GPIOEBRRBase, T...> ;

} ;

