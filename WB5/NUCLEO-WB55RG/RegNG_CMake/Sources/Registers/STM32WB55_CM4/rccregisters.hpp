/*******************************************************************************
* Filename      : rccregisters.hpp
*
* Details       : Reset and clock control. This header file is auto-generated
*                 for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "rccfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RCC
{
  struct RCCCRBase {} ;

  struct CR : public RegisterBase<0x58000000, 32, ReadWriteMode>
  {
    using PLLSAI1RDY = RCC_CR_PLLSAI1RDY_Values<RCC::CR, 27, 1, ReadMode, RCCCRBase> ;
    using PLLSAI1ON = RCC_CR_PLLSAI1ON_Values<RCC::CR, 26, 1, ReadWriteMode, RCCCRBase> ;
    using PLLRDY = RCC_CR_PLLRDY_Values<RCC::CR, 25, 1, ReadMode, RCCCRBase> ;
    using PLLON = RCC_CR_PLLON_Values<RCC::CR, 24, 1, ReadWriteMode, RCCCRBase> ;
    using HSEPRE = RCC_CR_HSEPRE_Values<RCC::CR, 20, 1, ReadWriteMode, RCCCRBase> ;
    using CSSON = RCC_CR_CSSON_Values<RCC::CR, 19, 1, WriteMode, RCCCRBase> ;
    using HSEBYP = RCC_CR_HSEBYP_Values<RCC::CR, 18, 1, ReadWriteMode, RCCCRBase> ;
    using HSERDY = RCC_CR_HSERDY_Values<RCC::CR, 17, 1, ReadMode, RCCCRBase> ;
    using HSEON = RCC_CR_HSEON_Values<RCC::CR, 16, 1, ReadWriteMode, RCCCRBase> ;
    using HSIKERDY = RCC_CR_HSIKERDY_Values<RCC::CR, 12, 1, ReadMode, RCCCRBase> ;
    using HSIASFS = RCC_CR_HSIASFS_Values<RCC::CR, 11, 1, ReadWriteMode, RCCCRBase> ;
    using HSIRDY = RCC_CR_HSIRDY_Values<RCC::CR, 10, 1, ReadMode, RCCCRBase> ;
    using HSIKERON = RCC_CR_HSIKERON_Values<RCC::CR, 9, 1, ReadWriteMode, RCCCRBase> ;
    using HSION = RCC_CR_HSION_Values<RCC::CR, 8, 1, ReadWriteMode, RCCCRBase> ;
    using MSIRANGE = RCC_CR_MSIRANGE_Values<RCC::CR, 4, 4, ReadWriteMode, RCCCRBase> ;
    using MSIPLLEN = RCC_CR_MSIPLLEN_Values<RCC::CR, 2, 1, ReadWriteMode, RCCCRBase> ;
    using MSIRDY = RCC_CR_MSIRDY_Values<RCC::CR, 1, 1, ReadMode, RCCCRBase> ;
    using MSION = RCC_CR_MSION_Values<RCC::CR, 0, 1, ReadWriteMode, RCCCRBase> ;
    using FieldValues = RCC_CR_MSION_Values<RCC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x58000000, 32, ReadWriteMode, RCCCRBase, T...> ;

  struct RCCICSCRBase {} ;

  struct ICSCR : public RegisterBase<0x58000004, 32, ReadWriteMode>
  {
    using HSITRIM = RCC_ICSCR_HSITRIM_Values<RCC::ICSCR, 24, 7, ReadWriteMode, RCCICSCRBase> ;
    using HSICAL = RCC_ICSCR_HSICAL_Values<RCC::ICSCR, 16, 8, ReadMode, RCCICSCRBase> ;
    using MSITRIM = RCC_ICSCR_MSITRIM_Values<RCC::ICSCR, 8, 8, ReadWriteMode, RCCICSCRBase> ;
    using MSICAL = RCC_ICSCR_MSICAL_Values<RCC::ICSCR, 0, 8, ReadMode, RCCICSCRBase> ;
    using FieldValues = RCC_ICSCR_MSICAL_Values<RCC::ICSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICSCRPack  = Register<0x58000004, 32, ReadWriteMode, RCCICSCRBase, T...> ;

  struct RCCCFGRBase {} ;

  struct CFGR : public RegisterBase<0x58000008, 32, ReadWriteMode>
  {
    using MCOPRE = RCC_CFGR_MCOPRE_Values<RCC::CFGR, 28, 3, ReadWriteMode, RCCCFGRBase> ;
    using MCOSEL = RCC_CFGR_MCOSEL_Values<RCC::CFGR, 24, 4, ReadWriteMode, RCCCFGRBase> ;
    using PPRE2F = RCC_CFGR_PPRE2F_Values<RCC::CFGR, 18, 1, ReadMode, RCCCFGRBase> ;
    using PPRE1F = RCC_CFGR_PPRE1F_Values<RCC::CFGR, 17, 1, ReadMode, RCCCFGRBase> ;
    using HPREF = RCC_CFGR_HPREF_Values<RCC::CFGR, 16, 1, ReadMode, RCCCFGRBase> ;
    using STOPWUCK = RCC_CFGR_STOPWUCK_Values<RCC::CFGR, 15, 1, ReadWriteMode, RCCCFGRBase> ;
    using PPRE2 = RCC_CFGR_PPRE2_Values<RCC::CFGR, 11, 3, ReadWriteMode, RCCCFGRBase> ;
    using PPRE1 = RCC_CFGR_PPRE1_Values<RCC::CFGR, 8, 3, ReadWriteMode, RCCCFGRBase> ;
    using HPRE = RCC_CFGR_HPRE_Values<RCC::CFGR, 4, 4, ReadWriteMode, RCCCFGRBase> ;
    using SWS = RCC_CFGR_SWS_Values<RCC::CFGR, 2, 2, ReadMode, RCCCFGRBase> ;
    using SW = RCC_CFGR_SW_Values<RCC::CFGR, 0, 2, ReadWriteMode, RCCCFGRBase> ;
    using FieldValues = RCC_CFGR_SW_Values<RCC::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x58000008, 32, ReadWriteMode, RCCCFGRBase, T...> ;

  struct RCCPLLCFGRBase {} ;

  struct PLLCFGR : public RegisterBase<0x5800000C, 32, ReadWriteMode>
  {
    using PLLR = RCC_PLLCFGR_PLLR_Values<RCC::PLLCFGR, 29, 3, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLREN = RCC_PLLCFGR_PLLREN_Values<RCC::PLLCFGR, 28, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLQ = RCC_PLLCFGR_PLLQ_Values<RCC::PLLCFGR, 25, 3, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLQEN = RCC_PLLCFGR_PLLQEN_Values<RCC::PLLCFGR, 24, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLP = RCC_PLLCFGR_PLLP_Values<RCC::PLLCFGR, 17, 5, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLPEN = RCC_PLLCFGR_PLLPEN_Values<RCC::PLLCFGR, 16, 1, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLN = RCC_PLLCFGR_PLLN_Values<RCC::PLLCFGR, 8, 7, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLM = RCC_PLLCFGR_PLLM_Values<RCC::PLLCFGR, 4, 3, ReadWriteMode, RCCPLLCFGRBase> ;
    using PLLSRC = RCC_PLLCFGR_PLLSRC_Values<RCC::PLLCFGR, 0, 2, ReadWriteMode, RCCPLLCFGRBase> ;
    using FieldValues = RCC_PLLCFGR_PLLSRC_Values<RCC::PLLCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLLCFGRPack  = Register<0x5800000C, 32, ReadWriteMode, RCCPLLCFGRBase, T...> ;

  struct RCCPLLSAI1CFGRBase {} ;

  struct PLLSAI1CFGR : public RegisterBase<0x58000010, 32, ReadWriteMode>
  {
    using PLLR = RCC_PLLSAI1CFGR_PLLR_Values<RCC::PLLSAI1CFGR, 29, 3, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLREN = RCC_PLLSAI1CFGR_PLLREN_Values<RCC::PLLSAI1CFGR, 28, 1, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLQ = RCC_PLLSAI1CFGR_PLLQ_Values<RCC::PLLSAI1CFGR, 25, 3, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLQEN = RCC_PLLSAI1CFGR_PLLQEN_Values<RCC::PLLSAI1CFGR, 24, 1, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLP = RCC_PLLSAI1CFGR_PLLP_Values<RCC::PLLSAI1CFGR, 17, 5, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLPEN = RCC_PLLSAI1CFGR_PLLPEN_Values<RCC::PLLSAI1CFGR, 16, 1, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using PLLN = RCC_PLLSAI1CFGR_PLLN_Values<RCC::PLLSAI1CFGR, 8, 7, ReadWriteMode, RCCPLLSAI1CFGRBase> ;
    using FieldValues = RCC_PLLSAI1CFGR_PLLN_Values<RCC::PLLSAI1CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PLLSAI1CFGRPack  = Register<0x58000010, 32, ReadWriteMode, RCCPLLSAI1CFGRBase, T...> ;

  struct RCCCIERBase {} ;

  struct CIER : public RegisterBase<0x58000018, 32, ReadWriteMode>
  {
    using LSI2RDYIE = RCC_CIER_LSI2RDYIE_Values<RCC::CIER, 11, 1, ReadWriteMode, RCCCIERBase> ;
    using HSI48RDYIE = RCC_CIER_HSI48RDYIE_Values<RCC::CIER, 10, 1, ReadWriteMode, RCCCIERBase> ;
    using LSECSSIE = RCC_CIER_LSECSSIE_Values<RCC::CIER, 9, 1, ReadWriteMode, RCCCIERBase> ;
    using PLLSAI1RDYIE = RCC_CIER_PLLSAI1RDYIE_Values<RCC::CIER, 6, 1, ReadWriteMode, RCCCIERBase> ;
    using PLLRDYIE = RCC_CIER_PLLRDYIE_Values<RCC::CIER, 5, 1, ReadWriteMode, RCCCIERBase> ;
    using HSERDYIE = RCC_CIER_HSERDYIE_Values<RCC::CIER, 4, 1, ReadWriteMode, RCCCIERBase> ;
    using HSIRDYIE = RCC_CIER_HSIRDYIE_Values<RCC::CIER, 3, 1, ReadWriteMode, RCCCIERBase> ;
    using MSIRDYIE = RCC_CIER_MSIRDYIE_Values<RCC::CIER, 2, 1, ReadWriteMode, RCCCIERBase> ;
    using LSERDYIE = RCC_CIER_LSERDYIE_Values<RCC::CIER, 1, 1, ReadWriteMode, RCCCIERBase> ;
    using LSI1RDYIE = RCC_CIER_LSI1RDYIE_Values<RCC::CIER, 0, 1, ReadWriteMode, RCCCIERBase> ;
    using FieldValues = RCC_CIER_LSI1RDYIE_Values<RCC::CIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CIERPack  = Register<0x58000018, 32, ReadWriteMode, RCCCIERBase, T...> ;

  struct RCCCIFRBase {} ;

  struct CIFR : public RegisterBase<0x5800001C, 32, ReadMode>
  {
    using LSI2RDYF = RCC_CIFR_LSI2RDYF_Values<RCC::CIFR, 11, 1, ReadMode, RCCCIFRBase> ;
    using HSI48RDYF = RCC_CIFR_HSI48RDYF_Values<RCC::CIFR, 10, 1, ReadMode, RCCCIFRBase> ;
    using LSECSSF = RCC_CIFR_LSECSSF_Values<RCC::CIFR, 9, 1, ReadMode, RCCCIFRBase> ;
    using HSECSSF = RCC_CIFR_HSECSSF_Values<RCC::CIFR, 8, 1, ReadMode, RCCCIFRBase> ;
    using PLLSAI1RDYF = RCC_CIFR_PLLSAI1RDYF_Values<RCC::CIFR, 6, 1, ReadMode, RCCCIFRBase> ;
    using PLLRDYF = RCC_CIFR_PLLRDYF_Values<RCC::CIFR, 5, 1, ReadMode, RCCCIFRBase> ;
    using HSERDYF = RCC_CIFR_HSERDYF_Values<RCC::CIFR, 4, 1, ReadMode, RCCCIFRBase> ;
    using HSIRDYF = RCC_CIFR_HSIRDYF_Values<RCC::CIFR, 3, 1, ReadMode, RCCCIFRBase> ;
    using MSIRDYF = RCC_CIFR_MSIRDYF_Values<RCC::CIFR, 2, 1, ReadMode, RCCCIFRBase> ;
    using LSERDYF = RCC_CIFR_LSERDYF_Values<RCC::CIFR, 1, 1, ReadMode, RCCCIFRBase> ;
    using LSI1RDYF = RCC_CIFR_LSI1RDYF_Values<RCC::CIFR, 0, 1, ReadMode, RCCCIFRBase> ;
    using FieldValues = RCC_CIFR_LSI1RDYF_Values<RCC::CIFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CIFRPack  = Register<0x5800001C, 32, ReadMode, RCCCIFRBase, T...> ;

  struct RCCCICRBase {} ;

  struct CICR : public RegisterBase<0x58000020, 32, WriteMode>
  {
    using LSI2RDYC = RCC_CICR_LSI2RDYC_Values<RCC::CICR, 11, 1, WriteMode, RCCCICRBase> ;
    using HSI48RDYC = RCC_CICR_HSI48RDYC_Values<RCC::CICR, 10, 1, WriteMode, RCCCICRBase> ;
    using LSECSSC = RCC_CICR_LSECSSC_Values<RCC::CICR, 9, 1, WriteMode, RCCCICRBase> ;
    using HSECSSC = RCC_CICR_HSECSSC_Values<RCC::CICR, 8, 1, WriteMode, RCCCICRBase> ;
    using PLLSAI1RDYC = RCC_CICR_PLLSAI1RDYC_Values<RCC::CICR, 6, 1, WriteMode, RCCCICRBase> ;
    using PLLRDYC = RCC_CICR_PLLRDYC_Values<RCC::CICR, 5, 1, WriteMode, RCCCICRBase> ;
    using HSERDYC = RCC_CICR_HSERDYC_Values<RCC::CICR, 4, 1, WriteMode, RCCCICRBase> ;
    using HSIRDYC = RCC_CICR_HSIRDYC_Values<RCC::CICR, 3, 1, WriteMode, RCCCICRBase> ;
    using MSIRDYC = RCC_CICR_MSIRDYC_Values<RCC::CICR, 2, 1, WriteMode, RCCCICRBase> ;
    using LSERDYC = RCC_CICR_LSERDYC_Values<RCC::CICR, 1, 1, WriteMode, RCCCICRBase> ;
    using LSI1RDYC = RCC_CICR_LSI1RDYC_Values<RCC::CICR, 0, 1, WriteMode, RCCCICRBase> ;
    using FieldValues = RCC_CICR_LSI1RDYC_Values<RCC::CICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CICRPack  = Register<0x58000020, 32, WriteMode, RCCCICRBase, T...> ;

  struct RCCSMPSCRBase {} ;

  struct SMPSCR : public RegisterBase<0x58000024, 32, ReadWriteMode>
  {
    using SMPSSWS = RCC_SMPSCR_SMPSSWS_Values<RCC::SMPSCR, 8, 2, ReadMode, RCCSMPSCRBase> ;
    using SMPSDIV = RCC_SMPSCR_SMPSDIV_Values<RCC::SMPSCR, 4, 2, ReadWriteMode, RCCSMPSCRBase> ;
    using SMPSSEL = RCC_SMPSCR_SMPSSEL_Values<RCC::SMPSCR, 0, 2, ReadWriteMode, RCCSMPSCRBase> ;
    using FieldValues = RCC_SMPSCR_SMPSSEL_Values<RCC::SMPSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPSCRPack  = Register<0x58000024, 32, ReadWriteMode, RCCSMPSCRBase, T...> ;

  struct RCCAHB1RSTRBase {} ;

  struct AHB1RSTR : public RegisterBase<0x58000028, 32, ReadWriteMode>
  {
    using TSCRST = RCC_AHB1RSTR_TSCRST_Values<RCC::AHB1RSTR, 16, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using CRCRST = RCC_AHB1RSTR_CRCRST_Values<RCC::AHB1RSTR, 12, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using DMAMUXRST = RCC_AHB1RSTR_DMAMUXRST_Values<RCC::AHB1RSTR, 2, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using DMA2RST = RCC_AHB1RSTR_DMA2RST_Values<RCC::AHB1RSTR, 1, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using DMA1RST = RCC_AHB1RSTR_DMA1RST_Values<RCC::AHB1RSTR, 0, 1, ReadWriteMode, RCCAHB1RSTRBase> ;
    using FieldValues = RCC_AHB1RSTR_DMA1RST_Values<RCC::AHB1RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB1RSTRPack  = Register<0x58000028, 32, ReadWriteMode, RCCAHB1RSTRBase, T...> ;

  struct RCCAHB2RSTRBase {} ;

  struct AHB2RSTR : public RegisterBase<0x5800002C, 32, ReadWriteMode>
  {
    using AES1RST = RCC_AHB2RSTR_AES1RST_Values<RCC::AHB2RSTR, 16, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using ADCRST = RCC_AHB2RSTR_ADCRST_Values<RCC::AHB2RSTR, 13, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIOHRST = RCC_AHB2RSTR_GPIOHRST_Values<RCC::AHB2RSTR, 7, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIOERST = RCC_AHB2RSTR_GPIOERST_Values<RCC::AHB2RSTR, 4, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIODRST = RCC_AHB2RSTR_GPIODRST_Values<RCC::AHB2RSTR, 3, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIOCRST = RCC_AHB2RSTR_GPIOCRST_Values<RCC::AHB2RSTR, 2, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIOBRST = RCC_AHB2RSTR_GPIOBRST_Values<RCC::AHB2RSTR, 1, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using GPIOARST = RCC_AHB2RSTR_GPIOARST_Values<RCC::AHB2RSTR, 0, 1, ReadWriteMode, RCCAHB2RSTRBase> ;
    using FieldValues = RCC_AHB2RSTR_GPIOARST_Values<RCC::AHB2RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB2RSTRPack  = Register<0x5800002C, 32, ReadWriteMode, RCCAHB2RSTRBase, T...> ;

  struct RCCAHB3RSTRBase {} ;

  struct AHB3RSTR : public RegisterBase<0x58000030, 32, ReadWriteMode>
  {
    using FLASHRST = RCC_AHB3RSTR_FLASHRST_Values<RCC::AHB3RSTR, 25, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using IPCCRST = RCC_AHB3RSTR_IPCCRST_Values<RCC::AHB3RSTR, 20, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using HSEMRST = RCC_AHB3RSTR_HSEMRST_Values<RCC::AHB3RSTR, 19, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using RNGRST = RCC_AHB3RSTR_RNGRST_Values<RCC::AHB3RSTR, 18, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using AES2RST = RCC_AHB3RSTR_AES2RST_Values<RCC::AHB3RSTR, 17, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using PKARST = RCC_AHB3RSTR_PKARST_Values<RCC::AHB3RSTR, 16, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using QSPIRST = RCC_AHB3RSTR_QSPIRST_Values<RCC::AHB3RSTR, 8, 1, ReadWriteMode, RCCAHB3RSTRBase> ;
    using FieldValues = RCC_AHB3RSTR_QSPIRST_Values<RCC::AHB3RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB3RSTRPack  = Register<0x58000030, 32, ReadWriteMode, RCCAHB3RSTRBase, T...> ;

  struct RCCAPB1RSTR1Base {} ;

  struct APB1RSTR1 : public RegisterBase<0x58000038, 32, ReadWriteMode>
  {
    using LPTIM1RST = RCC_APB1RSTR1_LPTIM1RST_Values<RCC::APB1RSTR1, 31, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using USBFSRST = RCC_APB1RSTR1_USBFSRST_Values<RCC::APB1RSTR1, 26, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using CRSRST = RCC_APB1RSTR1_CRSRST_Values<RCC::APB1RSTR1, 24, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using I2C3RST = RCC_APB1RSTR1_I2C3RST_Values<RCC::APB1RSTR1, 23, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using I2C1RST = RCC_APB1RSTR1_I2C1RST_Values<RCC::APB1RSTR1, 21, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using SPI2RST = RCC_APB1RSTR1_SPI2RST_Values<RCC::APB1RSTR1, 14, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using LCDRST = RCC_APB1RSTR1_LCDRST_Values<RCC::APB1RSTR1, 9, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using TIM2RST = RCC_APB1RSTR1_TIM2RST_Values<RCC::APB1RSTR1, 0, 1, ReadWriteMode, RCCAPB1RSTR1Base> ;
    using FieldValues = RCC_APB1RSTR1_TIM2RST_Values<RCC::APB1RSTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1RSTR1Pack  = Register<0x58000038, 32, ReadWriteMode, RCCAPB1RSTR1Base, T...> ;

  struct RCCAPB1RSTR2Base {} ;

  struct APB1RSTR2 : public RegisterBase<0x5800003C, 32, ReadWriteMode>
  {
    using LPTIM2RST = RCC_APB1RSTR2_LPTIM2RST_Values<RCC::APB1RSTR2, 5, 1, ReadWriteMode, RCCAPB1RSTR2Base> ;
    using LPUART1RST = RCC_APB1RSTR2_LPUART1RST_Values<RCC::APB1RSTR2, 0, 1, ReadWriteMode, RCCAPB1RSTR2Base> ;
    using FieldValues = RCC_APB1RSTR2_LPUART1RST_Values<RCC::APB1RSTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1RSTR2Pack  = Register<0x5800003C, 32, ReadWriteMode, RCCAPB1RSTR2Base, T...> ;

  struct RCCAPB2RSTRBase {} ;

  struct APB2RSTR : public RegisterBase<0x58000040, 32, ReadWriteMode>
  {
    using SAI1RST = RCC_APB2RSTR_SAI1RST_Values<RCC::APB2RSTR, 21, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM17RST = RCC_APB2RSTR_TIM17RST_Values<RCC::APB2RSTR, 18, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM16RST = RCC_APB2RSTR_TIM16RST_Values<RCC::APB2RSTR, 17, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using USART1RST = RCC_APB2RSTR_USART1RST_Values<RCC::APB2RSTR, 14, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using SPI1RST = RCC_APB2RSTR_SPI1RST_Values<RCC::APB2RSTR, 12, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using TIM1RST = RCC_APB2RSTR_TIM1RST_Values<RCC::APB2RSTR, 11, 1, ReadWriteMode, RCCAPB2RSTRBase> ;
    using FieldValues = RCC_APB2RSTR_TIM1RST_Values<RCC::APB2RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2RSTRPack  = Register<0x58000040, 32, ReadWriteMode, RCCAPB2RSTRBase, T...> ;

  struct RCCAPB3RSTRBase {} ;

  struct APB3RSTR : public RegisterBase<0x58000044, 32, ReadWriteMode>
  {
    using RFRST = RCC_APB3RSTR_RFRST_Values<RCC::APB3RSTR, 0, 1, ReadWriteMode, RCCAPB3RSTRBase> ;
    using FieldValues = RCC_APB3RSTR_RFRST_Values<RCC::APB3RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB3RSTRPack  = Register<0x58000044, 32, ReadWriteMode, RCCAPB3RSTRBase, T...> ;

  struct RCCAHB1ENRBase {} ;

  struct AHB1ENR : public RegisterBase<0x58000048, 32, ReadWriteMode>
  {
    using TSCEN = RCC_AHB1ENR_TSCEN_Values<RCC::AHB1ENR, 16, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using CRCEN = RCC_AHB1ENR_CRCEN_Values<RCC::AHB1ENR, 12, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using DMAMUXEN = RCC_AHB1ENR_DMAMUXEN_Values<RCC::AHB1ENR, 2, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using DMA2EN = RCC_AHB1ENR_DMA2EN_Values<RCC::AHB1ENR, 1, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using DMA1EN = RCC_AHB1ENR_DMA1EN_Values<RCC::AHB1ENR, 0, 1, ReadWriteMode, RCCAHB1ENRBase> ;
    using FieldValues = RCC_AHB1ENR_DMA1EN_Values<RCC::AHB1ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB1ENRPack  = Register<0x58000048, 32, ReadWriteMode, RCCAHB1ENRBase, T...> ;

  struct RCCAHB2ENRBase {} ;

  struct AHB2ENR : public RegisterBase<0x5800004C, 32, ReadWriteMode>
  {
    using AES1EN = RCC_AHB2ENR_AES1EN_Values<RCC::AHB2ENR, 16, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using ADCEN = RCC_AHB2ENR_ADCEN_Values<RCC::AHB2ENR, 13, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIOHEN = RCC_AHB2ENR_GPIOHEN_Values<RCC::AHB2ENR, 7, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIOEEN = RCC_AHB2ENR_GPIOEEN_Values<RCC::AHB2ENR, 4, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIODEN = RCC_AHB2ENR_GPIODEN_Values<RCC::AHB2ENR, 3, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIOCEN = RCC_AHB2ENR_GPIOCEN_Values<RCC::AHB2ENR, 2, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIOBEN = RCC_AHB2ENR_GPIOBEN_Values<RCC::AHB2ENR, 1, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using GPIOAEN = RCC_AHB2ENR_GPIOAEN_Values<RCC::AHB2ENR, 0, 1, ReadWriteMode, RCCAHB2ENRBase> ;
    using FieldValues = RCC_AHB2ENR_GPIOAEN_Values<RCC::AHB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB2ENRPack  = Register<0x5800004C, 32, ReadWriteMode, RCCAHB2ENRBase, T...> ;

  struct RCCAHB3ENRBase {} ;

  struct AHB3ENR : public RegisterBase<0x58000050, 32, ReadWriteMode>
  {
    using FLASHEN = RCC_AHB3ENR_FLASHEN_Values<RCC::AHB3ENR, 25, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using IPCCEN = RCC_AHB3ENR_IPCCEN_Values<RCC::AHB3ENR, 20, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using HSEMEN = RCC_AHB3ENR_HSEMEN_Values<RCC::AHB3ENR, 19, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using RNGEN = RCC_AHB3ENR_RNGEN_Values<RCC::AHB3ENR, 18, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using AES2EN = RCC_AHB3ENR_AES2EN_Values<RCC::AHB3ENR, 17, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using PKAEN = RCC_AHB3ENR_PKAEN_Values<RCC::AHB3ENR, 16, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using QSPIEN = RCC_AHB3ENR_QSPIEN_Values<RCC::AHB3ENR, 8, 1, ReadWriteMode, RCCAHB3ENRBase> ;
    using FieldValues = RCC_AHB3ENR_QSPIEN_Values<RCC::AHB3ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB3ENRPack  = Register<0x58000050, 32, ReadWriteMode, RCCAHB3ENRBase, T...> ;

  struct RCCAPB1ENR1Base {} ;

  struct APB1ENR1 : public RegisterBase<0x58000058, 32, ReadWriteMode>
  {
    using LPTIM1EN = RCC_APB1ENR1_LPTIM1EN_Values<RCC::APB1ENR1, 31, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using USBEN = RCC_APB1ENR1_USBEN_Values<RCC::APB1ENR1, 26, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using CRSEN = RCC_APB1ENR1_CRSEN_Values<RCC::APB1ENR1, 24, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using I2C3EN = RCC_APB1ENR1_I2C3EN_Values<RCC::APB1ENR1, 23, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using I2C1EN = RCC_APB1ENR1_I2C1EN_Values<RCC::APB1ENR1, 21, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using SPI2EN = RCC_APB1ENR1_SPI2EN_Values<RCC::APB1ENR1, 14, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using WWDGEN = RCC_APB1ENR1_WWDGEN_Values<RCC::APB1ENR1, 11, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using RTCAPBEN = RCC_APB1ENR1_RTCAPBEN_Values<RCC::APB1ENR1, 10, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using LCDEN = RCC_APB1ENR1_LCDEN_Values<RCC::APB1ENR1, 9, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using TIM2EN = RCC_APB1ENR1_TIM2EN_Values<RCC::APB1ENR1, 0, 1, ReadWriteMode, RCCAPB1ENR1Base> ;
    using FieldValues = RCC_APB1ENR1_TIM2EN_Values<RCC::APB1ENR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1ENR1Pack  = Register<0x58000058, 32, ReadWriteMode, RCCAPB1ENR1Base, T...> ;

  struct RCCAPB1ENR2Base {} ;

  struct APB1ENR2 : public RegisterBase<0x5800005C, 32, ReadWriteMode>
  {
    using LPTIM2EN = RCC_APB1ENR2_LPTIM2EN_Values<RCC::APB1ENR2, 5, 1, ReadWriteMode, RCCAPB1ENR2Base> ;
    using LPUART1EN = RCC_APB1ENR2_LPUART1EN_Values<RCC::APB1ENR2, 0, 1, ReadWriteMode, RCCAPB1ENR2Base> ;
    using FieldValues = RCC_APB1ENR2_LPUART1EN_Values<RCC::APB1ENR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1ENR2Pack  = Register<0x5800005C, 32, ReadWriteMode, RCCAPB1ENR2Base, T...> ;

  struct RCCAPB2ENRBase {} ;

  struct APB2ENR : public RegisterBase<0x58000060, 32, ReadWriteMode>
  {
    using SAI1EN = RCC_APB2ENR_SAI1EN_Values<RCC::APB2ENR, 21, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM17EN = RCC_APB2ENR_TIM17EN_Values<RCC::APB2ENR, 18, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM16EN = RCC_APB2ENR_TIM16EN_Values<RCC::APB2ENR, 17, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using USART1EN = RCC_APB2ENR_USART1EN_Values<RCC::APB2ENR, 14, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using SPI1EN = RCC_APB2ENR_SPI1EN_Values<RCC::APB2ENR, 12, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using TIM1EN = RCC_APB2ENR_TIM1EN_Values<RCC::APB2ENR, 11, 1, ReadWriteMode, RCCAPB2ENRBase> ;
    using FieldValues = RCC_APB2ENR_TIM1EN_Values<RCC::APB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2ENRPack  = Register<0x58000060, 32, ReadWriteMode, RCCAPB2ENRBase, T...> ;

  struct RCCAHB1SMENRBase {} ;

  struct AHB1SMENR : public RegisterBase<0x58000068, 32, ReadWriteMode>
  {
    using TSCSMEN = RCC_AHB1SMENR_TSCSMEN_Values<RCC::AHB1SMENR, 16, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using CRCSMEN = RCC_AHB1SMENR_CRCSMEN_Values<RCC::AHB1SMENR, 12, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using SRAM1SMEN = RCC_AHB1SMENR_SRAM1SMEN_Values<RCC::AHB1SMENR, 9, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using DMAMUXSMEN = RCC_AHB1SMENR_DMAMUXSMEN_Values<RCC::AHB1SMENR, 2, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using DMA2SMEN = RCC_AHB1SMENR_DMA2SMEN_Values<RCC::AHB1SMENR, 1, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using DMA1SMEN = RCC_AHB1SMENR_DMA1SMEN_Values<RCC::AHB1SMENR, 0, 1, ReadWriteMode, RCCAHB1SMENRBase> ;
    using FieldValues = RCC_AHB1SMENR_DMA1SMEN_Values<RCC::AHB1SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB1SMENRPack  = Register<0x58000068, 32, ReadWriteMode, RCCAHB1SMENRBase, T...> ;

  struct RCCAHB2SMENRBase {} ;

  struct AHB2SMENR : public RegisterBase<0x5800006C, 32, ReadWriteMode>
  {
    using AES1SMEN = RCC_AHB2SMENR_AES1SMEN_Values<RCC::AHB2SMENR, 16, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using ADCFSSMEN = RCC_AHB2SMENR_ADCFSSMEN_Values<RCC::AHB2SMENR, 13, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIOHSMEN = RCC_AHB2SMENR_GPIOHSMEN_Values<RCC::AHB2SMENR, 7, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIOESMEN = RCC_AHB2SMENR_GPIOESMEN_Values<RCC::AHB2SMENR, 4, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIODSMEN = RCC_AHB2SMENR_GPIODSMEN_Values<RCC::AHB2SMENR, 3, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIOCSMEN = RCC_AHB2SMENR_GPIOCSMEN_Values<RCC::AHB2SMENR, 2, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIOBSMEN = RCC_AHB2SMENR_GPIOBSMEN_Values<RCC::AHB2SMENR, 1, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using GPIOASMEN = RCC_AHB2SMENR_GPIOASMEN_Values<RCC::AHB2SMENR, 0, 1, ReadWriteMode, RCCAHB2SMENRBase> ;
    using FieldValues = RCC_AHB2SMENR_GPIOASMEN_Values<RCC::AHB2SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB2SMENRPack  = Register<0x5800006C, 32, ReadWriteMode, RCCAHB2SMENRBase, T...> ;

  struct RCCAHB3SMENRBase {} ;

  struct AHB3SMENR : public RegisterBase<0x58000070, 32, ReadWriteMode>
  {
    using FLASHSMEN = RCC_AHB3SMENR_FLASHSMEN_Values<RCC::AHB3SMENR, 25, 1, ReadWriteMode, RCCAHB3SMENRBase> ;
    using SRAM2SMEN = RCC_AHB3SMENR_SRAM2SMEN_Values<RCC::AHB3SMENR, 24, 1, ReadWriteMode, RCCAHB3SMENRBase> ;
    using RNGSMEN = RCC_AHB3SMENR_RNGSMEN_Values<RCC::AHB3SMENR, 18, 1, ReadWriteMode, RCCAHB3SMENRBase> ;
    using AES2SMEN = RCC_AHB3SMENR_AES2SMEN_Values<RCC::AHB3SMENR, 17, 1, ReadWriteMode, RCCAHB3SMENRBase> ;
    using PKASMEN = RCC_AHB3SMENR_PKASMEN_Values<RCC::AHB3SMENR, 16, 1, ReadWriteMode, RCCAHB3SMENRBase> ;
    using QSPISMEN = RCC_AHB3SMENR_QSPISMEN_Values<RCC::AHB3SMENR, 8, 1, ReadWriteMode, RCCAHB3SMENRBase> ;
    using FieldValues = RCC_AHB3SMENR_QSPISMEN_Values<RCC::AHB3SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AHB3SMENRPack  = Register<0x58000070, 32, ReadWriteMode, RCCAHB3SMENRBase, T...> ;

  struct RCCAPB1SMENR1Base {} ;

  struct APB1SMENR1 : public RegisterBase<0x58000078, 32, ReadWriteMode>
  {
    using LPTIM1SMEN = RCC_APB1SMENR1_LPTIM1SMEN_Values<RCC::APB1SMENR1, 31, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using USBSMEN = RCC_APB1SMENR1_USBSMEN_Values<RCC::APB1SMENR1, 26, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using CRSMEN = RCC_APB1SMENR1_CRSMEN_Values<RCC::APB1SMENR1, 24, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using I2C3SMEN = RCC_APB1SMENR1_I2C3SMEN_Values<RCC::APB1SMENR1, 23, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using I2C1SMEN = RCC_APB1SMENR1_I2C1SMEN_Values<RCC::APB1SMENR1, 21, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using SPI2SMEN = RCC_APB1SMENR1_SPI2SMEN_Values<RCC::APB1SMENR1, 14, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using WWDGSMEN = RCC_APB1SMENR1_WWDGSMEN_Values<RCC::APB1SMENR1, 11, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using RTCAPBSMEN = RCC_APB1SMENR1_RTCAPBSMEN_Values<RCC::APB1SMENR1, 10, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using LCDSMEN = RCC_APB1SMENR1_LCDSMEN_Values<RCC::APB1SMENR1, 9, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using TIM2SMEN = RCC_APB1SMENR1_TIM2SMEN_Values<RCC::APB1SMENR1, 0, 1, ReadWriteMode, RCCAPB1SMENR1Base> ;
    using FieldValues = RCC_APB1SMENR1_TIM2SMEN_Values<RCC::APB1SMENR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1SMENR1Pack  = Register<0x58000078, 32, ReadWriteMode, RCCAPB1SMENR1Base, T...> ;

  struct RCCAPB1SMENR2Base {} ;

  struct APB1SMENR2 : public RegisterBase<0x5800007C, 32, ReadWriteMode>
  {
    using LPTIM2SMEN = RCC_APB1SMENR2_LPTIM2SMEN_Values<RCC::APB1SMENR2, 5, 1, ReadWriteMode, RCCAPB1SMENR2Base> ;
    using LPUART1SMEN = RCC_APB1SMENR2_LPUART1SMEN_Values<RCC::APB1SMENR2, 0, 1, ReadWriteMode, RCCAPB1SMENR2Base> ;
    using FieldValues = RCC_APB1SMENR2_LPUART1SMEN_Values<RCC::APB1SMENR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1SMENR2Pack  = Register<0x5800007C, 32, ReadWriteMode, RCCAPB1SMENR2Base, T...> ;

  struct RCCAPB2SMENRBase {} ;

  struct APB2SMENR : public RegisterBase<0x58000080, 32, ReadWriteMode>
  {
    using SAI1SMEN = RCC_APB2SMENR_SAI1SMEN_Values<RCC::APB2SMENR, 21, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using TIM17SMEN = RCC_APB2SMENR_TIM17SMEN_Values<RCC::APB2SMENR, 18, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using TIM16SMEN = RCC_APB2SMENR_TIM16SMEN_Values<RCC::APB2SMENR, 17, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using USART1SMEN = RCC_APB2SMENR_USART1SMEN_Values<RCC::APB2SMENR, 14, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using SPI1SMEN = RCC_APB2SMENR_SPI1SMEN_Values<RCC::APB2SMENR, 12, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using TIM1SMEN = RCC_APB2SMENR_TIM1SMEN_Values<RCC::APB2SMENR, 11, 1, ReadWriteMode, RCCAPB2SMENRBase> ;
    using FieldValues = RCC_APB2SMENR_TIM1SMEN_Values<RCC::APB2SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2SMENRPack  = Register<0x58000080, 32, ReadWriteMode, RCCAPB2SMENRBase, T...> ;

  struct RCCCCIPRBase {} ;

  struct CCIPR : public RegisterBase<0x58000088, 32, ReadWriteMode>
  {
    using RNGSEL = RCC_CCIPR_RNGSEL_Values<RCC::CCIPR, 30, 2, ReadWriteMode, RCCCCIPRBase> ;
    using ADCSEL = RCC_CCIPR_ADCSEL_Values<RCC::CCIPR, 28, 2, ReadWriteMode, RCCCCIPRBase> ;
    using CLK48SEL = RCC_CCIPR_CLK48SEL_Values<RCC::CCIPR, 26, 2, ReadWriteMode, RCCCCIPRBase> ;
    using SAI1SEL = RCC_CCIPR_SAI1SEL_Values<RCC::CCIPR, 22, 2, ReadWriteMode, RCCCCIPRBase> ;
    using LPTIM2SEL = RCC_CCIPR_LPTIM2SEL_Values<RCC::CCIPR, 20, 2, ReadWriteMode, RCCCCIPRBase> ;
    using LPTIM1SEL = RCC_CCIPR_LPTIM1SEL_Values<RCC::CCIPR, 18, 2, ReadWriteMode, RCCCCIPRBase> ;
    using I2C3SEL = RCC_CCIPR_I2C3SEL_Values<RCC::CCIPR, 16, 2, ReadWriteMode, RCCCCIPRBase> ;
    using I2C1SEL = RCC_CCIPR_I2C1SEL_Values<RCC::CCIPR, 12, 2, ReadWriteMode, RCCCCIPRBase> ;
    using LPUART1SEL = RCC_CCIPR_LPUART1SEL_Values<RCC::CCIPR, 10, 2, ReadWriteMode, RCCCCIPRBase> ;
    using USART1SEL = RCC_CCIPR_USART1SEL_Values<RCC::CCIPR, 0, 2, ReadWriteMode, RCCCCIPRBase> ;
    using FieldValues = RCC_CCIPR_USART1SEL_Values<RCC::CCIPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCIPRPack  = Register<0x58000088, 32, ReadWriteMode, RCCCCIPRBase, T...> ;

  struct RCCBDCRBase {} ;

  struct BDCR : public RegisterBase<0x58000090, 32, ReadWriteMode>
  {
    using LSCOSEL = RCC_BDCR_LSCOSEL_Values<RCC::BDCR, 25, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSCOEN = RCC_BDCR_LSCOEN_Values<RCC::BDCR, 24, 1, ReadWriteMode, RCCBDCRBase> ;
    using BDRST = RCC_BDCR_BDRST_Values<RCC::BDCR, 16, 1, ReadWriteMode, RCCBDCRBase> ;
    using RTCEN = RCC_BDCR_RTCEN_Values<RCC::BDCR, 15, 1, ReadWriteMode, RCCBDCRBase> ;
    using RTCSEL = RCC_BDCR_RTCSEL_Values<RCC::BDCR, 8, 2, ReadWriteMode, RCCBDCRBase> ;
    using LSECSSD_ = RCC_BDCR_LSECSSD__Values<RCC::BDCR, 6, 1, ReadMode, RCCBDCRBase> ;
    using LSECSSON = RCC_BDCR_LSECSSON_Values<RCC::BDCR, 5, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSEDRV = RCC_BDCR_LSEDRV_Values<RCC::BDCR, 3, 2, ReadWriteMode, RCCBDCRBase> ;
    using LSEBYP = RCC_BDCR_LSEBYP_Values<RCC::BDCR, 2, 1, ReadWriteMode, RCCBDCRBase> ;
    using LSERDY = RCC_BDCR_LSERDY_Values<RCC::BDCR, 1, 1, ReadMode, RCCBDCRBase> ;
    using LSEON = RCC_BDCR_LSEON_Values<RCC::BDCR, 0, 1, ReadWriteMode, RCCBDCRBase> ;
    using FieldValues = RCC_BDCR_LSEON_Values<RCC::BDCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDCRPack  = Register<0x58000090, 32, ReadWriteMode, RCCBDCRBase, T...> ;

  struct RCCCSRBase {} ;

  struct CSR : public RegisterBase<0x58000094, 32, ReadWriteMode>
  {
    using LPWRRSTF = RCC_CSR_LPWRRSTF_Values<RCC::CSR, 31, 1, ReadMode, RCCCSRBase> ;
    using WWDGRSTF = RCC_CSR_WWDGRSTF_Values<RCC::CSR, 30, 1, ReadMode, RCCCSRBase> ;
    using IWDGRSTF = RCC_CSR_IWDGRSTF_Values<RCC::CSR, 29, 1, ReadMode, RCCCSRBase> ;
    using SFTRSTF = RCC_CSR_SFTRSTF_Values<RCC::CSR, 28, 1, ReadMode, RCCCSRBase> ;
    using BORRSTF = RCC_CSR_BORRSTF_Values<RCC::CSR, 27, 1, ReadMode, RCCCSRBase> ;
    using PINRSTF = RCC_CSR_PINRSTF_Values<RCC::CSR, 26, 1, ReadMode, RCCCSRBase> ;
    using OBLRSTF = RCC_CSR_OBLRSTF_Values<RCC::CSR, 25, 1, ReadMode, RCCCSRBase> ;
    using RMVF = RCC_CSR_RMVF_Values<RCC::CSR, 23, 1, ReadWriteMode, RCCCSRBase> ;
    using RFWKPSEL = RCC_CSR_RFWKPSEL_Values<RCC::CSR, 14, 2, ReadWriteMode, RCCCSRBase> ;
    using LSI2BW = RCC_CSR_LSI2BW_Values<RCC::CSR, 8, 4, ReadWriteMode, RCCCSRBase> ;
    using LSI2TRIMOK = RCC_CSR_LSI2TRIMOK_Values<RCC::CSR, 5, 1, ReadMode, RCCCSRBase> ;
    using LSI2TRIMEN = RCC_CSR_LSI2TRIMEN_Values<RCC::CSR, 4, 1, ReadWriteMode, RCCCSRBase> ;
    using LSI2RDY = RCC_CSR_LSI2RDY_Values<RCC::CSR, 3, 1, ReadMode, RCCCSRBase> ;
    using LSI2ON = RCC_CSR_LSI2ON_Values<RCC::CSR, 2, 1, ReadWriteMode, RCCCSRBase> ;
    using LSI1RDY = RCC_CSR_LSI1RDY_Values<RCC::CSR, 1, 1, ReadMode, RCCCSRBase> ;
    using LSI1ON = RCC_CSR_LSI1ON_Values<RCC::CSR, 0, 1, ReadWriteMode, RCCCSRBase> ;
    using RFRSTS = RCC_CSR_RFRSTS_Values<RCC::CSR, 16, 1, ReadMode, RCCCSRBase> ;
    using FieldValues = RCC_CSR_RFRSTS_Values<RCC::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x58000094, 32, ReadWriteMode, RCCCSRBase, T...> ;

  struct RCCCRRCRBase {} ;

  struct CRRCR : public RegisterBase<0x58000098, 32, ReadWriteMode>
  {
    using HSI48CAL = RCC_CRRCR_HSI48CAL_Values<RCC::CRRCR, 7, 9, ReadMode, RCCCRRCRBase> ;
    using HSI48RDY = RCC_CRRCR_HSI48RDY_Values<RCC::CRRCR, 1, 1, ReadMode, RCCCRRCRBase> ;
    using HSI48ON = RCC_CRRCR_HSI48ON_Values<RCC::CRRCR, 0, 1, ReadWriteMode, RCCCRRCRBase> ;
    using FieldValues = RCC_CRRCR_HSI48ON_Values<RCC::CRRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRRCRPack  = Register<0x58000098, 32, ReadWriteMode, RCCCRRCRBase, T...> ;

  struct RCCHSECRBase {} ;

  struct HSECR : public RegisterBase<0x5800009C, 32, ReadWriteMode>
  {
    using HSETUNE = RCC_HSECR_HSETUNE_Values<RCC::HSECR, 8, 6, ReadMode, RCCHSECRBase> ;
    using HSEGMC = RCC_HSECR_HSEGMC_Values<RCC::HSECR, 4, 3, ReadWriteMode, RCCHSECRBase> ;
    using HSES = RCC_HSECR_HSES_Values<RCC::HSECR, 3, 1, ReadWriteMode, RCCHSECRBase> ;
    using UNLOCKED = RCC_HSECR_UNLOCKED_Values<RCC::HSECR, 0, 1, ReadWriteMode, RCCHSECRBase> ;
    using FieldValues = RCC_HSECR_UNLOCKED_Values<RCC::HSECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HSECRPack  = Register<0x5800009C, 32, ReadWriteMode, RCCHSECRBase, T...> ;

  struct RCCEXTCFGRBase {} ;

  struct EXTCFGR : public RegisterBase<0x58000108, 32, ReadWriteMode>
  {
    using RFCSS = RCC_EXTCFGR_RFCSS_Values<RCC::EXTCFGR, 20, 1, ReadMode, RCCEXTCFGRBase> ;
    using C2HPREF = RCC_EXTCFGR_C2HPREF_Values<RCC::EXTCFGR, 17, 1, ReadMode, RCCEXTCFGRBase> ;
    using SHDHPREF = RCC_EXTCFGR_SHDHPREF_Values<RCC::EXTCFGR, 16, 1, ReadMode, RCCEXTCFGRBase> ;
    using C2HPRE = RCC_EXTCFGR_C2HPRE_Values<RCC::EXTCFGR, 4, 4, ReadWriteMode, RCCEXTCFGRBase> ;
    using SHDHPRE = RCC_EXTCFGR_SHDHPRE_Values<RCC::EXTCFGR, 0, 4, ReadWriteMode, RCCEXTCFGRBase> ;
    using FieldValues = RCC_EXTCFGR_SHDHPRE_Values<RCC::EXTCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EXTCFGRPack  = Register<0x58000108, 32, ReadWriteMode, RCCEXTCFGRBase, T...> ;

  struct RCCC2AHB1ENRBase {} ;

  struct C2AHB1ENR : public RegisterBase<0x58000148, 32, ReadWriteMode>
  {
    using TSCEN = RCC_C2AHB1ENR_TSCEN_Values<RCC::C2AHB1ENR, 16, 1, ReadWriteMode, RCCC2AHB1ENRBase> ;
    using CRCEN = RCC_C2AHB1ENR_CRCEN_Values<RCC::C2AHB1ENR, 12, 1, ReadWriteMode, RCCC2AHB1ENRBase> ;
    using SRAM1EN = RCC_C2AHB1ENR_SRAM1EN_Values<RCC::C2AHB1ENR, 9, 1, ReadWriteMode, RCCC2AHB1ENRBase> ;
    using DMAMUXEN = RCC_C2AHB1ENR_DMAMUXEN_Values<RCC::C2AHB1ENR, 2, 1, ReadWriteMode, RCCC2AHB1ENRBase> ;
    using DMA2EN = RCC_C2AHB1ENR_DMA2EN_Values<RCC::C2AHB1ENR, 1, 1, ReadWriteMode, RCCC2AHB1ENRBase> ;
    using DMA1EN = RCC_C2AHB1ENR_DMA1EN_Values<RCC::C2AHB1ENR, 0, 1, ReadWriteMode, RCCC2AHB1ENRBase> ;
    using FieldValues = RCC_C2AHB1ENR_DMA1EN_Values<RCC::C2AHB1ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2AHB1ENRPack  = Register<0x58000148, 32, ReadWriteMode, RCCC2AHB1ENRBase, T...> ;

  struct RCCC2AHB2ENRBase {} ;

  struct C2AHB2ENR : public RegisterBase<0x5800014C, 32, ReadWriteMode>
  {
    using AES1EN = RCC_C2AHB2ENR_AES1EN_Values<RCC::C2AHB2ENR, 16, 1, ReadWriteMode, RCCC2AHB2ENRBase> ;
    using ADCEN = RCC_C2AHB2ENR_ADCEN_Values<RCC::C2AHB2ENR, 13, 1, ReadWriteMode, RCCC2AHB2ENRBase> ;
    using GPIOHEN = RCC_C2AHB2ENR_GPIOHEN_Values<RCC::C2AHB2ENR, 7, 1, ReadWriteMode, RCCC2AHB2ENRBase> ;
    using GPIOEEN = RCC_C2AHB2ENR_GPIOEEN_Values<RCC::C2AHB2ENR, 4, 1, ReadWriteMode, RCCC2AHB2ENRBase> ;
    using GPIODEN = RCC_C2AHB2ENR_GPIODEN_Values<RCC::C2AHB2ENR, 3, 1, ReadWriteMode, RCCC2AHB2ENRBase> ;
    using GPIOCEN = RCC_C2AHB2ENR_GPIOCEN_Values<RCC::C2AHB2ENR, 2, 1, ReadWriteMode, RCCC2AHB2ENRBase> ;
    using GPIOBEN = RCC_C2AHB2ENR_GPIOBEN_Values<RCC::C2AHB2ENR, 1, 1, ReadWriteMode, RCCC2AHB2ENRBase> ;
    using GPIOAEN = RCC_C2AHB2ENR_GPIOAEN_Values<RCC::C2AHB2ENR, 0, 1, ReadWriteMode, RCCC2AHB2ENRBase> ;
    using FieldValues = RCC_C2AHB2ENR_GPIOAEN_Values<RCC::C2AHB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2AHB2ENRPack  = Register<0x5800014C, 32, ReadWriteMode, RCCC2AHB2ENRBase, T...> ;

  struct RCCC2AHB3ENRBase {} ;

  struct C2AHB3ENR : public RegisterBase<0x58000150, 32, ReadWriteMode>
  {
    using FLASHEN = RCC_C2AHB3ENR_FLASHEN_Values<RCC::C2AHB3ENR, 25, 1, ReadWriteMode, RCCC2AHB3ENRBase> ;
    using IPCCEN = RCC_C2AHB3ENR_IPCCEN_Values<RCC::C2AHB3ENR, 20, 1, ReadWriteMode, RCCC2AHB3ENRBase> ;
    using HSEMEN = RCC_C2AHB3ENR_HSEMEN_Values<RCC::C2AHB3ENR, 19, 1, ReadWriteMode, RCCC2AHB3ENRBase> ;
    using RNGEN = RCC_C2AHB3ENR_RNGEN_Values<RCC::C2AHB3ENR, 18, 1, ReadWriteMode, RCCC2AHB3ENRBase> ;
    using AES2EN = RCC_C2AHB3ENR_AES2EN_Values<RCC::C2AHB3ENR, 17, 1, ReadWriteMode, RCCC2AHB3ENRBase> ;
    using PKAEN = RCC_C2AHB3ENR_PKAEN_Values<RCC::C2AHB3ENR, 16, 1, ReadWriteMode, RCCC2AHB3ENRBase> ;
    using FieldValues = RCC_C2AHB3ENR_PKAEN_Values<RCC::C2AHB3ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2AHB3ENRPack  = Register<0x58000150, 32, ReadWriteMode, RCCC2AHB3ENRBase, T...> ;

  struct RCCC2APB1ENR1Base {} ;

  struct C2APB1ENR1 : public RegisterBase<0x58000158, 32, ReadWriteMode>
  {
    using LPTIM1EN = RCC_C2APB1ENR1_LPTIM1EN_Values<RCC::C2APB1ENR1, 31, 1, ReadWriteMode, RCCC2APB1ENR1Base> ;
    using USBEN = RCC_C2APB1ENR1_USBEN_Values<RCC::C2APB1ENR1, 26, 1, ReadWriteMode, RCCC2APB1ENR1Base> ;
    using CRSEN = RCC_C2APB1ENR1_CRSEN_Values<RCC::C2APB1ENR1, 24, 1, ReadWriteMode, RCCC2APB1ENR1Base> ;
    using I2C3EN = RCC_C2APB1ENR1_I2C3EN_Values<RCC::C2APB1ENR1, 23, 1, ReadWriteMode, RCCC2APB1ENR1Base> ;
    using I2C1EN = RCC_C2APB1ENR1_I2C1EN_Values<RCC::C2APB1ENR1, 21, 1, ReadWriteMode, RCCC2APB1ENR1Base> ;
    using SPI2EN = RCC_C2APB1ENR1_SPI2EN_Values<RCC::C2APB1ENR1, 14, 1, ReadWriteMode, RCCC2APB1ENR1Base> ;
    using RTCAPBEN = RCC_C2APB1ENR1_RTCAPBEN_Values<RCC::C2APB1ENR1, 10, 1, ReadWriteMode, RCCC2APB1ENR1Base> ;
    using LCDEN = RCC_C2APB1ENR1_LCDEN_Values<RCC::C2APB1ENR1, 9, 1, ReadWriteMode, RCCC2APB1ENR1Base> ;
    using TIM2EN = RCC_C2APB1ENR1_TIM2EN_Values<RCC::C2APB1ENR1, 0, 1, ReadWriteMode, RCCC2APB1ENR1Base> ;
    using FieldValues = RCC_C2APB1ENR1_TIM2EN_Values<RCC::C2APB1ENR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2APB1ENR1Pack  = Register<0x58000158, 32, ReadWriteMode, RCCC2APB1ENR1Base, T...> ;

  struct RCCC2APB1ENR2Base {} ;

  struct C2APB1ENR2 : public RegisterBase<0x5800015C, 32, ReadWriteMode>
  {
    using LPTIM2EN = RCC_C2APB1ENR2_LPTIM2EN_Values<RCC::C2APB1ENR2, 5, 1, ReadWriteMode, RCCC2APB1ENR2Base> ;
    using LPUART1EN = RCC_C2APB1ENR2_LPUART1EN_Values<RCC::C2APB1ENR2, 0, 1, ReadWriteMode, RCCC2APB1ENR2Base> ;
    using FieldValues = RCC_C2APB1ENR2_LPUART1EN_Values<RCC::C2APB1ENR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2APB1ENR2Pack  = Register<0x5800015C, 32, ReadWriteMode, RCCC2APB1ENR2Base, T...> ;

  struct RCCC2APB2ENRBase {} ;

  struct C2APB2ENR : public RegisterBase<0x58000160, 32, ReadWriteMode>
  {
    using SAI1EN = RCC_C2APB2ENR_SAI1EN_Values<RCC::C2APB2ENR, 21, 1, ReadWriteMode, RCCC2APB2ENRBase> ;
    using TIM17EN = RCC_C2APB2ENR_TIM17EN_Values<RCC::C2APB2ENR, 18, 1, ReadWriteMode, RCCC2APB2ENRBase> ;
    using TIM16EN = RCC_C2APB2ENR_TIM16EN_Values<RCC::C2APB2ENR, 17, 1, ReadWriteMode, RCCC2APB2ENRBase> ;
    using USART1EN = RCC_C2APB2ENR_USART1EN_Values<RCC::C2APB2ENR, 14, 1, ReadWriteMode, RCCC2APB2ENRBase> ;
    using SPI1EN = RCC_C2APB2ENR_SPI1EN_Values<RCC::C2APB2ENR, 12, 1, ReadWriteMode, RCCC2APB2ENRBase> ;
    using TIM1EN = RCC_C2APB2ENR_TIM1EN_Values<RCC::C2APB2ENR, 11, 1, ReadWriteMode, RCCC2APB2ENRBase> ;
    using FieldValues = RCC_C2APB2ENR_TIM1EN_Values<RCC::C2APB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2APB2ENRPack  = Register<0x58000160, 32, ReadWriteMode, RCCC2APB2ENRBase, T...> ;

  struct RCCC2APB3ENRBase {} ;

  struct C2APB3ENR : public RegisterBase<0x58000164, 32, ReadWriteMode>
  {
    using EN802 = RCC_C2APB3ENR_EN802_Values<RCC::C2APB3ENR, 1, 1, ReadWriteMode, RCCC2APB3ENRBase> ;
    using BLEEN = RCC_C2APB3ENR_BLEEN_Values<RCC::C2APB3ENR, 0, 1, ReadWriteMode, RCCC2APB3ENRBase> ;
    using FieldValues = RCC_C2APB3ENR_BLEEN_Values<RCC::C2APB3ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2APB3ENRPack  = Register<0x58000164, 32, ReadWriteMode, RCCC2APB3ENRBase, T...> ;

  struct RCCC2AHB1SMENRBase {} ;

  struct C2AHB1SMENR : public RegisterBase<0x58000168, 32, ReadWriteMode>
  {
    using TSCSMEN = RCC_C2AHB1SMENR_TSCSMEN_Values<RCC::C2AHB1SMENR, 16, 1, ReadWriteMode, RCCC2AHB1SMENRBase> ;
    using CRCSMEN = RCC_C2AHB1SMENR_CRCSMEN_Values<RCC::C2AHB1SMENR, 12, 1, ReadWriteMode, RCCC2AHB1SMENRBase> ;
    using SRAM1SMEN = RCC_C2AHB1SMENR_SRAM1SMEN_Values<RCC::C2AHB1SMENR, 9, 1, ReadWriteMode, RCCC2AHB1SMENRBase> ;
    using DMAMUXSMEN = RCC_C2AHB1SMENR_DMAMUXSMEN_Values<RCC::C2AHB1SMENR, 2, 1, ReadWriteMode, RCCC2AHB1SMENRBase> ;
    using DMA2SMEN = RCC_C2AHB1SMENR_DMA2SMEN_Values<RCC::C2AHB1SMENR, 1, 1, ReadWriteMode, RCCC2AHB1SMENRBase> ;
    using DMA1SMEN = RCC_C2AHB1SMENR_DMA1SMEN_Values<RCC::C2AHB1SMENR, 0, 1, ReadWriteMode, RCCC2AHB1SMENRBase> ;
    using FieldValues = RCC_C2AHB1SMENR_DMA1SMEN_Values<RCC::C2AHB1SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2AHB1SMENRPack  = Register<0x58000168, 32, ReadWriteMode, RCCC2AHB1SMENRBase, T...> ;

  struct RCCC2AHB2SMENRBase {} ;

  struct C2AHB2SMENR : public RegisterBase<0x5800016C, 32, ReadWriteMode>
  {
    using AES1SMEN = RCC_C2AHB2SMENR_AES1SMEN_Values<RCC::C2AHB2SMENR, 16, 1, ReadWriteMode, RCCC2AHB2SMENRBase> ;
    using ADCFSSMEN = RCC_C2AHB2SMENR_ADCFSSMEN_Values<RCC::C2AHB2SMENR, 13, 1, ReadWriteMode, RCCC2AHB2SMENRBase> ;
    using GPIOHSMEN = RCC_C2AHB2SMENR_GPIOHSMEN_Values<RCC::C2AHB2SMENR, 7, 1, ReadWriteMode, RCCC2AHB2SMENRBase> ;
    using GPIOESMEN = RCC_C2AHB2SMENR_GPIOESMEN_Values<RCC::C2AHB2SMENR, 4, 1, ReadWriteMode, RCCC2AHB2SMENRBase> ;
    using GPIODSMEN = RCC_C2AHB2SMENR_GPIODSMEN_Values<RCC::C2AHB2SMENR, 3, 1, ReadWriteMode, RCCC2AHB2SMENRBase> ;
    using GPIOCSMEN = RCC_C2AHB2SMENR_GPIOCSMEN_Values<RCC::C2AHB2SMENR, 2, 1, ReadWriteMode, RCCC2AHB2SMENRBase> ;
    using GPIOBSMEN = RCC_C2AHB2SMENR_GPIOBSMEN_Values<RCC::C2AHB2SMENR, 1, 1, ReadWriteMode, RCCC2AHB2SMENRBase> ;
    using GPIOASMEN = RCC_C2AHB2SMENR_GPIOASMEN_Values<RCC::C2AHB2SMENR, 0, 1, ReadWriteMode, RCCC2AHB2SMENRBase> ;
    using FieldValues = RCC_C2AHB2SMENR_GPIOASMEN_Values<RCC::C2AHB2SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2AHB2SMENRPack  = Register<0x5800016C, 32, ReadWriteMode, RCCC2AHB2SMENRBase, T...> ;

  struct RCCC2AHB3SMENRBase {} ;

  struct C2AHB3SMENR : public RegisterBase<0x58000170, 32, ReadWriteMode>
  {
    using FLASHSMEN = RCC_C2AHB3SMENR_FLASHSMEN_Values<RCC::C2AHB3SMENR, 25, 1, ReadWriteMode, RCCC2AHB3SMENRBase> ;
    using SRAM2SMEN = RCC_C2AHB3SMENR_SRAM2SMEN_Values<RCC::C2AHB3SMENR, 24, 1, ReadWriteMode, RCCC2AHB3SMENRBase> ;
    using RNGSMEN = RCC_C2AHB3SMENR_RNGSMEN_Values<RCC::C2AHB3SMENR, 18, 1, ReadWriteMode, RCCC2AHB3SMENRBase> ;
    using AES2SMEN = RCC_C2AHB3SMENR_AES2SMEN_Values<RCC::C2AHB3SMENR, 17, 1, ReadWriteMode, RCCC2AHB3SMENRBase> ;
    using PKASMEN = RCC_C2AHB3SMENR_PKASMEN_Values<RCC::C2AHB3SMENR, 16, 1, ReadWriteMode, RCCC2AHB3SMENRBase> ;
    using FieldValues = RCC_C2AHB3SMENR_PKASMEN_Values<RCC::C2AHB3SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2AHB3SMENRPack  = Register<0x58000170, 32, ReadWriteMode, RCCC2AHB3SMENRBase, T...> ;

  struct RCCC2APB1SMENR1Base {} ;

  struct C2APB1SMENR1 : public RegisterBase<0x58000178, 32, ReadWriteMode>
  {
    using LPTIM1SMEN = RCC_C2APB1SMENR1_LPTIM1SMEN_Values<RCC::C2APB1SMENR1, 31, 1, ReadWriteMode, RCCC2APB1SMENR1Base> ;
    using USBSMEN = RCC_C2APB1SMENR1_USBSMEN_Values<RCC::C2APB1SMENR1, 26, 1, ReadWriteMode, RCCC2APB1SMENR1Base> ;
    using CRSMEN = RCC_C2APB1SMENR1_CRSMEN_Values<RCC::C2APB1SMENR1, 24, 1, ReadWriteMode, RCCC2APB1SMENR1Base> ;
    using I2C3SMEN = RCC_C2APB1SMENR1_I2C3SMEN_Values<RCC::C2APB1SMENR1, 23, 1, ReadWriteMode, RCCC2APB1SMENR1Base> ;
    using I2C1SMEN = RCC_C2APB1SMENR1_I2C1SMEN_Values<RCC::C2APB1SMENR1, 21, 1, ReadWriteMode, RCCC2APB1SMENR1Base> ;
    using SPI2SMEN = RCC_C2APB1SMENR1_SPI2SMEN_Values<RCC::C2APB1SMENR1, 14, 1, ReadWriteMode, RCCC2APB1SMENR1Base> ;
    using RTCAPBSMEN = RCC_C2APB1SMENR1_RTCAPBSMEN_Values<RCC::C2APB1SMENR1, 10, 1, ReadWriteMode, RCCC2APB1SMENR1Base> ;
    using LCDSMEN = RCC_C2APB1SMENR1_LCDSMEN_Values<RCC::C2APB1SMENR1, 9, 1, ReadWriteMode, RCCC2APB1SMENR1Base> ;
    using TIM2SMEN = RCC_C2APB1SMENR1_TIM2SMEN_Values<RCC::C2APB1SMENR1, 0, 1, ReadWriteMode, RCCC2APB1SMENR1Base> ;
    using FieldValues = RCC_C2APB1SMENR1_TIM2SMEN_Values<RCC::C2APB1SMENR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2APB1SMENR1Pack  = Register<0x58000178, 32, ReadWriteMode, RCCC2APB1SMENR1Base, T...> ;

  struct RCCC2APB1SMENR2Base {} ;

  struct C2APB1SMENR2 : public RegisterBase<0x5800017C, 32, ReadWriteMode>
  {
    using LPTIM2SMEN = RCC_C2APB1SMENR2_LPTIM2SMEN_Values<RCC::C2APB1SMENR2, 5, 1, ReadWriteMode, RCCC2APB1SMENR2Base> ;
    using LPUART1SMEN = RCC_C2APB1SMENR2_LPUART1SMEN_Values<RCC::C2APB1SMENR2, 0, 1, ReadWriteMode, RCCC2APB1SMENR2Base> ;
    using FieldValues = RCC_C2APB1SMENR2_LPUART1SMEN_Values<RCC::C2APB1SMENR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2APB1SMENR2Pack  = Register<0x5800017C, 32, ReadWriteMode, RCCC2APB1SMENR2Base, T...> ;

  struct RCCC2APB2SMENRBase {} ;

  struct C2APB2SMENR : public RegisterBase<0x58000180, 32, ReadWriteMode>
  {
    using SAI1SMEN = RCC_C2APB2SMENR_SAI1SMEN_Values<RCC::C2APB2SMENR, 21, 1, ReadWriteMode, RCCC2APB2SMENRBase> ;
    using TIM17SMEN = RCC_C2APB2SMENR_TIM17SMEN_Values<RCC::C2APB2SMENR, 18, 1, ReadWriteMode, RCCC2APB2SMENRBase> ;
    using TIM16SMEN = RCC_C2APB2SMENR_TIM16SMEN_Values<RCC::C2APB2SMENR, 17, 1, ReadWriteMode, RCCC2APB2SMENRBase> ;
    using USART1SMEN = RCC_C2APB2SMENR_USART1SMEN_Values<RCC::C2APB2SMENR, 14, 1, ReadWriteMode, RCCC2APB2SMENRBase> ;
    using SPI1SMEN = RCC_C2APB2SMENR_SPI1SMEN_Values<RCC::C2APB2SMENR, 12, 1, ReadWriteMode, RCCC2APB2SMENRBase> ;
    using TIM1SMEN = RCC_C2APB2SMENR_TIM1SMEN_Values<RCC::C2APB2SMENR, 11, 1, ReadWriteMode, RCCC2APB2SMENRBase> ;
    using FieldValues = RCC_C2APB2SMENR_TIM1SMEN_Values<RCC::C2APB2SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2APB2SMENRPack  = Register<0x58000180, 32, ReadWriteMode, RCCC2APB2SMENRBase, T...> ;

  struct RCCC2APB3SMENRBase {} ;

  struct C2APB3SMENR : public RegisterBase<0x58000184, 32, ReadWriteMode>
  {
    using SMEN802 = RCC_C2APB3SMENR_SMEN802_Values<RCC::C2APB3SMENR, 1, 1, ReadWriteMode, RCCC2APB3SMENRBase> ;
    using BLESMEN = RCC_C2APB3SMENR_BLESMEN_Values<RCC::C2APB3SMENR, 0, 1, ReadWriteMode, RCCC2APB3SMENRBase> ;
    using FieldValues = RCC_C2APB3SMENR_BLESMEN_Values<RCC::C2APB3SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2APB3SMENRPack  = Register<0x58000184, 32, ReadWriteMode, RCCC2APB3SMENRBase, T...> ;

} ;

