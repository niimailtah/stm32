/*******************************************************************************
* Filename      : gpiohregisters.hpp
*
* Details       : General-purpose I/Os. This header file is auto-generated for
*                 STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "gpiohfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct GPIOH
{
  struct GPIOHMODERBase {} ;

  struct MODER : public RegisterBase<0x48001C00, 32, ReadWriteMode>
  {
    using MODER3 = GPIOH_MODER_MODER3_Values<GPIOH::MODER, 6, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODER1 = GPIOH_MODER_MODER1_Values<GPIOH::MODER, 2, 2, ReadWriteMode, GPIOHMODERBase> ;
    using MODER0 = GPIOH_MODER_MODER0_Values<GPIOH::MODER, 0, 2, ReadWriteMode, GPIOHMODERBase> ;
    using FieldValues = GPIOH_MODER_MODER0_Values<GPIOH::MODER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MODERPack  = Register<0x48001C00, 32, ReadWriteMode, GPIOHMODERBase, T...> ;

  struct GPIOHOTYPERBase {} ;

  struct OTYPER : public RegisterBase<0x48001C04, 32, ReadWriteMode>
  {
    using OT3 = GPIOH_OTYPER_OT3_Values<GPIOH::OTYPER, 3, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT1 = GPIOH_OTYPER_OT1_Values<GPIOH::OTYPER, 1, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using OT0 = GPIOH_OTYPER_OT0_Values<GPIOH::OTYPER, 0, 1, ReadWriteMode, GPIOHOTYPERBase> ;
    using FieldValues = GPIOH_OTYPER_OT0_Values<GPIOH::OTYPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OTYPERPack  = Register<0x48001C04, 32, ReadWriteMode, GPIOHOTYPERBase, T...> ;

  struct GPIOHOSPEEDRBase {} ;

  struct OSPEEDR : public RegisterBase<0x48001C08, 32, ReadWriteMode>
  {
    using OSPEEDR3 = GPIOH_OSPEEDR_OSPEEDR3_Values<GPIOH::OSPEEDR, 6, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEEDR1 = GPIOH_OSPEEDR_OSPEEDR1_Values<GPIOH::OSPEEDR, 2, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using OSPEEDR0 = GPIOH_OSPEEDR_OSPEEDR0_Values<GPIOH::OSPEEDR, 0, 2, ReadWriteMode, GPIOHOSPEEDRBase> ;
    using FieldValues = GPIOH_OSPEEDR_OSPEEDR0_Values<GPIOH::OSPEEDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OSPEEDRPack  = Register<0x48001C08, 32, ReadWriteMode, GPIOHOSPEEDRBase, T...> ;

  struct GPIOHPUPDRBase {} ;

  struct PUPDR : public RegisterBase<0x48001C0C, 32, ReadWriteMode>
  {
    using PUPDR3 = GPIOH_PUPDR_PUPDR3_Values<GPIOH::PUPDR, 6, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPDR1 = GPIOH_PUPDR_PUPDR1_Values<GPIOH::PUPDR, 2, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using PUPDR0 = GPIOH_PUPDR_PUPDR0_Values<GPIOH::PUPDR, 0, 2, ReadWriteMode, GPIOHPUPDRBase> ;
    using FieldValues = GPIOH_PUPDR_PUPDR0_Values<GPIOH::PUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PUPDRPack  = Register<0x48001C0C, 32, ReadWriteMode, GPIOHPUPDRBase, T...> ;

  struct GPIOHIDRBase {} ;

  struct IDR : public RegisterBase<0x48001C10, 32, ReadMode>
  {
    using IDR3 = GPIOH_IDR_IDR3_Values<GPIOH::IDR, 3, 1, ReadMode, GPIOHIDRBase> ;
    using IDR1 = GPIOH_IDR_IDR1_Values<GPIOH::IDR, 1, 1, ReadMode, GPIOHIDRBase> ;
    using IDR0 = GPIOH_IDR_IDR0_Values<GPIOH::IDR, 0, 1, ReadMode, GPIOHIDRBase> ;
    using FieldValues = GPIOH_IDR_IDR0_Values<GPIOH::IDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDRPack  = Register<0x48001C10, 32, ReadMode, GPIOHIDRBase, T...> ;

  struct GPIOHODRBase {} ;

  struct ODR : public RegisterBase<0x48001C14, 32, ReadWriteMode>
  {
    using ODR3 = GPIOH_ODR_ODR3_Values<GPIOH::ODR, 3, 1, ReadWriteMode, GPIOHODRBase> ;
    using ODR1 = GPIOH_ODR_ODR1_Values<GPIOH::ODR, 1, 1, ReadWriteMode, GPIOHODRBase> ;
    using ODR0 = GPIOH_ODR_ODR0_Values<GPIOH::ODR, 0, 1, ReadWriteMode, GPIOHODRBase> ;
    using FieldValues = GPIOH_ODR_ODR0_Values<GPIOH::ODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODRPack  = Register<0x48001C14, 32, ReadWriteMode, GPIOHODRBase, T...> ;

  struct GPIOHBSRRBase {} ;

  struct BSRR : public RegisterBase<0x48001C18, 32, WriteMode>
  {
    using BR3 = GPIOH_BSRR_BR3_Values<GPIOH::BSRR, 19, 1, WriteMode, GPIOHBSRRBase> ;
    using BR1 = GPIOH_BSRR_BR1_Values<GPIOH::BSRR, 17, 1, WriteMode, GPIOHBSRRBase> ;
    using BR0 = GPIOH_BSRR_BR0_Values<GPIOH::BSRR, 16, 1, WriteMode, GPIOHBSRRBase> ;
    using BS3 = GPIOH_BSRR_BS3_Values<GPIOH::BSRR, 3, 1, WriteMode, GPIOHBSRRBase> ;
    using BS1 = GPIOH_BSRR_BS1_Values<GPIOH::BSRR, 1, 1, WriteMode, GPIOHBSRRBase> ;
    using BS0 = GPIOH_BSRR_BS0_Values<GPIOH::BSRR, 0, 1, WriteMode, GPIOHBSRRBase> ;
    using FieldValues = GPIOH_BSRR_BS0_Values<GPIOH::BSRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BSRRPack  = Register<0x48001C18, 32, WriteMode, GPIOHBSRRBase, T...> ;

  struct GPIOHLCKRBase {} ;

  struct LCKR : public RegisterBase<0x48001C1C, 32, ReadWriteMode>
  {
    using LCKK = GPIOH_LCKR_LCKK_Values<GPIOH::LCKR, 16, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK3 = GPIOH_LCKR_LCK3_Values<GPIOH::LCKR, 3, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK1 = GPIOH_LCKR_LCK1_Values<GPIOH::LCKR, 1, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using LCK0 = GPIOH_LCKR_LCK0_Values<GPIOH::LCKR, 0, 1, ReadWriteMode, GPIOHLCKRBase> ;
    using FieldValues = GPIOH_LCKR_LCK0_Values<GPIOH::LCKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LCKRPack  = Register<0x48001C1C, 32, ReadWriteMode, GPIOHLCKRBase, T...> ;

  struct GPIOHAFRLBase {} ;

  struct AFRL : public RegisterBase<0x48001C20, 32, ReadWriteMode>
  {
    using AFSEL3 = GPIOH_AFRL_AFSEL3_Values<GPIOH::AFRL, 12, 4, ReadWriteMode, GPIOHAFRLBase> ;
    using AFSEL1 = GPIOH_AFRL_AFSEL1_Values<GPIOH::AFRL, 4, 4, ReadWriteMode, GPIOHAFRLBase> ;
    using AFSEL0 = GPIOH_AFRL_AFSEL0_Values<GPIOH::AFRL, 0, 4, ReadWriteMode, GPIOHAFRLBase> ;
    using FieldValues = GPIOH_AFRL_AFSEL0_Values<GPIOH::AFRL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRLPack  = Register<0x48001C20, 32, ReadWriteMode, GPIOHAFRLBase, T...> ;

  struct GPIOHAFRHBase {} ;

  struct AFRH : public RegisterBase<0x48001C24, 32, ReadWriteMode>
  {
    using AFSEL15 = GPIOH_AFRH_AFSEL15_Values<GPIOH::AFRH, 28, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL14 = GPIOH_AFRH_AFSEL14_Values<GPIOH::AFRH, 24, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL13 = GPIOH_AFRH_AFSEL13_Values<GPIOH::AFRH, 20, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL12 = GPIOH_AFRH_AFSEL12_Values<GPIOH::AFRH, 16, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL11 = GPIOH_AFRH_AFSEL11_Values<GPIOH::AFRH, 12, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL10 = GPIOH_AFRH_AFSEL10_Values<GPIOH::AFRH, 8, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL9 = GPIOH_AFRH_AFSEL9_Values<GPIOH::AFRH, 4, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using AFSEL8 = GPIOH_AFRH_AFSEL8_Values<GPIOH::AFRH, 0, 4, ReadWriteMode, GPIOHAFRHBase> ;
    using FieldValues = GPIOH_AFRH_AFSEL8_Values<GPIOH::AFRH, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AFRHPack  = Register<0x48001C24, 32, ReadWriteMode, GPIOHAFRHBase, T...> ;

  struct GPIOHBRRBase {} ;

  struct BRR : public RegisterBase<0x48001C28, 32, WriteMode>
  {
    using BR0 = GPIOH_BRR_BR0_Values<GPIOH::BRR, 0, 1, WriteMode, GPIOHBRRBase> ;
    using BR1 = GPIOH_BRR_BR1_Values<GPIOH::BRR, 1, 1, WriteMode, GPIOHBRRBase> ;
    using BR3 = GPIOH_BRR_BR3_Values<GPIOH::BRR, 3, 1, WriteMode, GPIOHBRRBase> ;
    using FieldValues = GPIOH_BRR_BR3_Values<GPIOH::BRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x48001C28, 32, WriteMode, GPIOHBRRBase, T...> ;

} ;

