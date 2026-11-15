/*******************************************************************************
* Filename      : syscfgregisters.hpp
*
* Details       : System configuration controller. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "syscfgfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SYSCFG
{
  struct SYSCFGMEMRMPBase {} ;

  struct MEMRMP : public RegisterBase<0x40010000, 32, ReadWriteMode>
  {
    using MEM_MODE = SYSCFG_MEMRMP_MEM_MODE_Values<SYSCFG::MEMRMP, 0, 3, ReadWriteMode, SYSCFGMEMRMPBase> ;
    using FB_mode = SYSCFG_MEMRMP_FB_mode_Values<SYSCFG::MEMRMP, 8, 1, ReadWriteMode, SYSCFGMEMRMPBase> ;
    using FieldValues = SYSCFG_MEMRMP_FB_mode_Values<SYSCFG::MEMRMP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MEMRMPPack  = Register<0x40010000, 32, ReadWriteMode, SYSCFGMEMRMPBase, T...> ;

  struct SYSCFGCFGR1Base {} ;

  struct CFGR1 : public RegisterBase<0x40010004, 32, ReadWriteMode>
  {
    using BOOSTEN = SYSCFG_CFGR1_BOOSTEN_Values<SYSCFG::CFGR1, 8, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using ANASWVDD = SYSCFG_CFGR1_ANASWVDD_Values<SYSCFG::CFGR1, 9, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C_PB6_FMP = SYSCFG_CFGR1_I2C_PB6_FMP_Values<SYSCFG::CFGR1, 16, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C_PB7_FMP = SYSCFG_CFGR1_I2C_PB7_FMP_Values<SYSCFG::CFGR1, 17, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C_PB8_FMP = SYSCFG_CFGR1_I2C_PB8_FMP_Values<SYSCFG::CFGR1, 18, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C_PB9_FMP = SYSCFG_CFGR1_I2C_PB9_FMP_Values<SYSCFG::CFGR1, 19, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C1_FMP = SYSCFG_CFGR1_I2C1_FMP_Values<SYSCFG::CFGR1, 20, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C2_FMP = SYSCFG_CFGR1_I2C2_FMP_Values<SYSCFG::CFGR1, 21, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C3_FMP = SYSCFG_CFGR1_I2C3_FMP_Values<SYSCFG::CFGR1, 22, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using I2C4_FMP = SYSCFG_CFGR1_I2C4_FMP_Values<SYSCFG::CFGR1, 23, 1, ReadWriteMode, SYSCFGCFGR1Base> ;
    using FPU_IE = SYSCFG_CFGR1_FPU_IE_Values<SYSCFG::CFGR1, 26, 6, ReadWriteMode, SYSCFGCFGR1Base> ;
    using FieldValues = SYSCFG_CFGR1_FPU_IE_Values<SYSCFG::CFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR1Pack  = Register<0x40010004, 32, ReadWriteMode, SYSCFGCFGR1Base, T...> ;

  struct SYSCFGEXTICR1Base {} ;

  struct EXTICR1 : public RegisterBase<0x40010008, 32, ReadWriteMode>
  {
    using EXTI3 = SYSCFG_EXTICR1_EXTI3_Values<SYSCFG::EXTICR1, 12, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI2 = SYSCFG_EXTICR1_EXTI2_Values<SYSCFG::EXTICR1, 8, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI1 = SYSCFG_EXTICR1_EXTI1_Values<SYSCFG::EXTICR1, 4, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using EXTI0 = SYSCFG_EXTICR1_EXTI0_Values<SYSCFG::EXTICR1, 0, 4, ReadWriteMode, SYSCFGEXTICR1Base> ;
    using FieldValues = SYSCFG_EXTICR1_EXTI0_Values<SYSCFG::EXTICR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR1Pack  = Register<0x40010008, 32, ReadWriteMode, SYSCFGEXTICR1Base, T...> ;

  struct SYSCFGEXTICR2Base {} ;

  struct EXTICR2 : public RegisterBase<0x4001000C, 32, ReadWriteMode>
  {
    using EXTI7 = SYSCFG_EXTICR2_EXTI7_Values<SYSCFG::EXTICR2, 12, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI6 = SYSCFG_EXTICR2_EXTI6_Values<SYSCFG::EXTICR2, 8, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI5 = SYSCFG_EXTICR2_EXTI5_Values<SYSCFG::EXTICR2, 4, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using EXTI4 = SYSCFG_EXTICR2_EXTI4_Values<SYSCFG::EXTICR2, 0, 4, ReadWriteMode, SYSCFGEXTICR2Base> ;
    using FieldValues = SYSCFG_EXTICR2_EXTI4_Values<SYSCFG::EXTICR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR2Pack  = Register<0x4001000C, 32, ReadWriteMode, SYSCFGEXTICR2Base, T...> ;

  struct SYSCFGEXTICR3Base {} ;

  struct EXTICR3 : public RegisterBase<0x40010010, 32, ReadWriteMode>
  {
    using EXTI11 = SYSCFG_EXTICR3_EXTI11_Values<SYSCFG::EXTICR3, 12, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI10 = SYSCFG_EXTICR3_EXTI10_Values<SYSCFG::EXTICR3, 8, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI9 = SYSCFG_EXTICR3_EXTI9_Values<SYSCFG::EXTICR3, 4, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using EXTI8 = SYSCFG_EXTICR3_EXTI8_Values<SYSCFG::EXTICR3, 0, 4, ReadWriteMode, SYSCFGEXTICR3Base> ;
    using FieldValues = SYSCFG_EXTICR3_EXTI8_Values<SYSCFG::EXTICR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR3Pack  = Register<0x40010010, 32, ReadWriteMode, SYSCFGEXTICR3Base, T...> ;

  struct SYSCFGEXTICR4Base {} ;

  struct EXTICR4 : public RegisterBase<0x40010014, 32, ReadWriteMode>
  {
    using EXTI15 = SYSCFG_EXTICR4_EXTI15_Values<SYSCFG::EXTICR4, 12, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI14 = SYSCFG_EXTICR4_EXTI14_Values<SYSCFG::EXTICR4, 8, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI13 = SYSCFG_EXTICR4_EXTI13_Values<SYSCFG::EXTICR4, 4, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using EXTI12 = SYSCFG_EXTICR4_EXTI12_Values<SYSCFG::EXTICR4, 0, 4, ReadWriteMode, SYSCFGEXTICR4Base> ;
    using FieldValues = SYSCFG_EXTICR4_EXTI12_Values<SYSCFG::EXTICR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTICR4Pack  = Register<0x40010014, 32, ReadWriteMode, SYSCFGEXTICR4Base, T...> ;

  struct SYSCFGSCSRBase {} ;

  struct SCSR : public RegisterBase<0x40010018, 32, ReadWriteMode>
  {
    using CCMER = SYSCFG_SCSR_CCMER_Values<SYSCFG::SCSR, 0, 1, ReadWriteMode, SYSCFGSCSRBase> ;
    using CCMBSY = SYSCFG_SCSR_CCMBSY_Values<SYSCFG::SCSR, 1, 1, ReadMode, SYSCFGSCSRBase> ;
    using FieldValues = SYSCFG_SCSR_CCMBSY_Values<SYSCFG::SCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SCSRPack  = Register<0x40010018, 32, ReadWriteMode, SYSCFGSCSRBase, T...> ;

  struct SYSCFGCFGR2Base {} ;

  struct CFGR2 : public RegisterBase<0x4001001C, 32, ReadWriteMode>
  {
    using CLL = SYSCFG_CFGR2_CLL_Values<SYSCFG::CFGR2, 0, 1, ReadWriteMode, SYSCFGCFGR2Base> ;
    using SPL = SYSCFG_CFGR2_SPL_Values<SYSCFG::CFGR2, 1, 1, ReadWriteMode, SYSCFGCFGR2Base> ;
    using PVDL = SYSCFG_CFGR2_PVDL_Values<SYSCFG::CFGR2, 2, 1, ReadWriteMode, SYSCFGCFGR2Base> ;
    using ECCL = SYSCFG_CFGR2_ECCL_Values<SYSCFG::CFGR2, 3, 1, ReadWriteMode, SYSCFGCFGR2Base> ;
    using SPF = SYSCFG_CFGR2_SPF_Values<SYSCFG::CFGR2, 8, 1, ReadWriteMode, SYSCFGCFGR2Base> ;
    using FieldValues = SYSCFG_CFGR2_SPF_Values<SYSCFG::CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR2Pack  = Register<0x4001001C, 32, ReadWriteMode, SYSCFGCFGR2Base, T...> ;

  struct SYSCFGSWPRBase {} ;

  struct SWPR : public RegisterBase<0x40010020, 32, ReadWriteMode>
  {
    using Page0_WP = SYSCFG_SWPR_Page0_WP_Values<SYSCFG::SWPR, 0, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page1_WP = SYSCFG_SWPR_Page1_WP_Values<SYSCFG::SWPR, 1, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page2_WP = SYSCFG_SWPR_Page2_WP_Values<SYSCFG::SWPR, 2, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page3_WP = SYSCFG_SWPR_Page3_WP_Values<SYSCFG::SWPR, 3, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page4_WP = SYSCFG_SWPR_Page4_WP_Values<SYSCFG::SWPR, 4, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page5_WP = SYSCFG_SWPR_Page5_WP_Values<SYSCFG::SWPR, 5, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page6_WP = SYSCFG_SWPR_Page6_WP_Values<SYSCFG::SWPR, 6, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page7_WP = SYSCFG_SWPR_Page7_WP_Values<SYSCFG::SWPR, 7, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page8_WP = SYSCFG_SWPR_Page8_WP_Values<SYSCFG::SWPR, 8, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page9_WP = SYSCFG_SWPR_Page9_WP_Values<SYSCFG::SWPR, 9, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page10_WP = SYSCFG_SWPR_Page10_WP_Values<SYSCFG::SWPR, 10, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page11_WP = SYSCFG_SWPR_Page11_WP_Values<SYSCFG::SWPR, 11, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page12_WP = SYSCFG_SWPR_Page12_WP_Values<SYSCFG::SWPR, 12, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page13_WP = SYSCFG_SWPR_Page13_WP_Values<SYSCFG::SWPR, 13, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page14_WP = SYSCFG_SWPR_Page14_WP_Values<SYSCFG::SWPR, 14, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page15_WP = SYSCFG_SWPR_Page15_WP_Values<SYSCFG::SWPR, 15, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page16_WP = SYSCFG_SWPR_Page16_WP_Values<SYSCFG::SWPR, 16, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page17_WP = SYSCFG_SWPR_Page17_WP_Values<SYSCFG::SWPR, 17, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page18_WP = SYSCFG_SWPR_Page18_WP_Values<SYSCFG::SWPR, 18, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page19_WP = SYSCFG_SWPR_Page19_WP_Values<SYSCFG::SWPR, 19, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page20_WP = SYSCFG_SWPR_Page20_WP_Values<SYSCFG::SWPR, 20, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page21_WP = SYSCFG_SWPR_Page21_WP_Values<SYSCFG::SWPR, 21, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page22_WP = SYSCFG_SWPR_Page22_WP_Values<SYSCFG::SWPR, 22, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page23_WP = SYSCFG_SWPR_Page23_WP_Values<SYSCFG::SWPR, 23, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page24_WP = SYSCFG_SWPR_Page24_WP_Values<SYSCFG::SWPR, 24, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page25_WP = SYSCFG_SWPR_Page25_WP_Values<SYSCFG::SWPR, 25, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page26_WP = SYSCFG_SWPR_Page26_WP_Values<SYSCFG::SWPR, 26, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page27_WP = SYSCFG_SWPR_Page27_WP_Values<SYSCFG::SWPR, 27, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page28_WP = SYSCFG_SWPR_Page28_WP_Values<SYSCFG::SWPR, 28, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page29_WP = SYSCFG_SWPR_Page29_WP_Values<SYSCFG::SWPR, 29, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page30_WP = SYSCFG_SWPR_Page30_WP_Values<SYSCFG::SWPR, 30, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using Page31_WP = SYSCFG_SWPR_Page31_WP_Values<SYSCFG::SWPR, 31, 1, ReadWriteMode, SYSCFGSWPRBase> ;
    using FieldValues = SYSCFG_SWPR_Page31_WP_Values<SYSCFG::SWPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWPRPack  = Register<0x40010020, 32, ReadWriteMode, SYSCFGSWPRBase, T...> ;

  struct SYSCFGSKRBase {} ;

  struct SKR : public RegisterBase<0x40010024, 32, WriteMode>
  {
    using KEY = SYSCFG_SKR_KEY_Values<SYSCFG::SKR, 0, 8, WriteMode, SYSCFGSKRBase> ;
    using FieldValues = SYSCFG_SKR_KEY_Values<SYSCFG::SKR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SKRPack  = Register<0x40010024, 32, WriteMode, SYSCFGSKRBase, T...> ;

} ;

