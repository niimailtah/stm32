/*******************************************************************************
* Filename      : rccregisters.hpp
*
* Details       : Reset and clock control. This header file is auto-generated
*                 for STM32G474 device.
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
  struct RCCRCC_CRBase {} ;

  struct RCC_CR : public RegisterBase<0x40021000, 32, ReadWriteMode>
  {
    using HSION = RCC_RCC_CR_HSION_Values<RCC::RCC_CR, 8, 1, ReadWriteMode, RCCRCC_CRBase> ;
    using HSIKERON = RCC_RCC_CR_HSIKERON_Values<RCC::RCC_CR, 9, 1, ReadWriteMode, RCCRCC_CRBase> ;
    using HSIRDY = RCC_RCC_CR_HSIRDY_Values<RCC::RCC_CR, 10, 1, ReadMode, RCCRCC_CRBase> ;
    using HSEON = RCC_RCC_CR_HSEON_Values<RCC::RCC_CR, 16, 1, ReadWriteMode, RCCRCC_CRBase> ;
    using HSERDY = RCC_RCC_CR_HSERDY_Values<RCC::RCC_CR, 17, 1, ReadMode, RCCRCC_CRBase> ;
    using HSEBYP = RCC_RCC_CR_HSEBYP_Values<RCC::RCC_CR, 18, 1, ReadWriteMode, RCCRCC_CRBase> ;
    using CSSON = RCC_RCC_CR_CSSON_Values<RCC::RCC_CR, 19, 1, ReadWriteMode, RCCRCC_CRBase> ;
    using PLLON = RCC_RCC_CR_PLLON_Values<RCC::RCC_CR, 24, 1, ReadWriteMode, RCCRCC_CRBase> ;
    using PLLRDY = RCC_RCC_CR_PLLRDY_Values<RCC::RCC_CR, 25, 1, ReadMode, RCCRCC_CRBase> ;
    using FieldValues = RCC_RCC_CR_PLLRDY_Values<RCC::RCC_CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CRPack  = Register<0x40021000, 32, ReadWriteMode, RCCRCC_CRBase, T...> ;

  struct RCCRCC_ICSCRBase {} ;

  struct RCC_ICSCR : public RegisterBase<0x40021004, 32, ReadWriteMode>
  {
    using HSICAL = RCC_RCC_ICSCR_HSICAL_Values<RCC::RCC_ICSCR, 16, 8, ReadMode, RCCRCC_ICSCRBase> ;
    using HSITRIM = RCC_RCC_ICSCR_HSITRIM_Values<RCC::RCC_ICSCR, 24, 7, ReadWriteMode, RCCRCC_ICSCRBase> ;
    using FieldValues = RCC_RCC_ICSCR_HSITRIM_Values<RCC::RCC_ICSCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_ICSCRPack  = Register<0x40021004, 32, ReadWriteMode, RCCRCC_ICSCRBase, T...> ;

  struct RCCRCC_CFGRBase {} ;

  struct RCC_CFGR : public RegisterBase<0x40021008, 32, ReadWriteMode>
  {
    using SW = RCC_RCC_CFGR_SW_Values<RCC::RCC_CFGR, 0, 2, ReadWriteMode, RCCRCC_CFGRBase> ;
    using SWS = RCC_RCC_CFGR_SWS_Values<RCC::RCC_CFGR, 2, 2, ReadMode, RCCRCC_CFGRBase> ;
    using HPRE = RCC_RCC_CFGR_HPRE_Values<RCC::RCC_CFGR, 4, 4, ReadWriteMode, RCCRCC_CFGRBase> ;
    using PPRE1 = RCC_RCC_CFGR_PPRE1_Values<RCC::RCC_CFGR, 8, 3, ReadWriteMode, RCCRCC_CFGRBase> ;
    using PPRE2 = RCC_RCC_CFGR_PPRE2_Values<RCC::RCC_CFGR, 11, 3, ReadWriteMode, RCCRCC_CFGRBase> ;
    using MCOSEL = RCC_RCC_CFGR_MCOSEL_Values<RCC::RCC_CFGR, 24, 4, ReadWriteMode, RCCRCC_CFGRBase> ;
    using MCOPRE = RCC_RCC_CFGR_MCOPRE_Values<RCC::RCC_CFGR, 28, 3, ReadWriteMode, RCCRCC_CFGRBase> ;
    using FieldValues = RCC_RCC_CFGR_MCOPRE_Values<RCC::RCC_CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CFGRPack  = Register<0x40021008, 32, ReadWriteMode, RCCRCC_CFGRBase, T...> ;

  struct RCCRCC_PLLCFGRBase {} ;

  struct RCC_PLLCFGR : public RegisterBase<0x4002100C, 32, ReadWriteMode>
  {
    using PLLSRC = RCC_RCC_PLLCFGR_PLLSRC_Values<RCC::RCC_PLLCFGR, 0, 2, ReadWriteMode, RCCRCC_PLLCFGRBase> ;
    using PLLM = RCC_RCC_PLLCFGR_PLLM_Values<RCC::RCC_PLLCFGR, 4, 4, ReadWriteMode, RCCRCC_PLLCFGRBase> ;
    using PLLN = RCC_RCC_PLLCFGR_PLLN_Values<RCC::RCC_PLLCFGR, 8, 7, ReadWriteMode, RCCRCC_PLLCFGRBase> ;
    using PLLPEN = RCC_RCC_PLLCFGR_PLLPEN_Values<RCC::RCC_PLLCFGR, 16, 1, ReadWriteMode, RCCRCC_PLLCFGRBase> ;
    using PLLP = RCC_RCC_PLLCFGR_PLLP_Values<RCC::RCC_PLLCFGR, 17, 1, ReadWriteMode, RCCRCC_PLLCFGRBase> ;
    using PLLQEN = RCC_RCC_PLLCFGR_PLLQEN_Values<RCC::RCC_PLLCFGR, 20, 1, ReadWriteMode, RCCRCC_PLLCFGRBase> ;
    using PLLQ = RCC_RCC_PLLCFGR_PLLQ_Values<RCC::RCC_PLLCFGR, 21, 2, ReadWriteMode, RCCRCC_PLLCFGRBase> ;
    using PLLREN = RCC_RCC_PLLCFGR_PLLREN_Values<RCC::RCC_PLLCFGR, 24, 1, ReadWriteMode, RCCRCC_PLLCFGRBase> ;
    using PLLR = RCC_RCC_PLLCFGR_PLLR_Values<RCC::RCC_PLLCFGR, 25, 2, ReadWriteMode, RCCRCC_PLLCFGRBase> ;
    using PLLPDIV = RCC_RCC_PLLCFGR_PLLPDIV_Values<RCC::RCC_PLLCFGR, 27, 5, ReadWriteMode, RCCRCC_PLLCFGRBase> ;
    using FieldValues = RCC_RCC_PLLCFGR_PLLPDIV_Values<RCC::RCC_PLLCFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_PLLCFGRPack  = Register<0x4002100C, 32, ReadWriteMode, RCCRCC_PLLCFGRBase, T...> ;

  struct RCCRCC_CIERBase {} ;

  struct RCC_CIER : public RegisterBase<0x40021018, 32, ReadWriteMode>
  {
    using LSIRDYIE = RCC_RCC_CIER_LSIRDYIE_Values<RCC::RCC_CIER, 0, 1, ReadWriteMode, RCCRCC_CIERBase> ;
    using LSERDYIE = RCC_RCC_CIER_LSERDYIE_Values<RCC::RCC_CIER, 1, 1, ReadWriteMode, RCCRCC_CIERBase> ;
    using HSIRDYIE = RCC_RCC_CIER_HSIRDYIE_Values<RCC::RCC_CIER, 3, 1, ReadWriteMode, RCCRCC_CIERBase> ;
    using HSERDYIE = RCC_RCC_CIER_HSERDYIE_Values<RCC::RCC_CIER, 4, 1, ReadWriteMode, RCCRCC_CIERBase> ;
    using PLLRDYIE = RCC_RCC_CIER_PLLRDYIE_Values<RCC::RCC_CIER, 5, 1, ReadWriteMode, RCCRCC_CIERBase> ;
    using LSECSSIE = RCC_RCC_CIER_LSECSSIE_Values<RCC::RCC_CIER, 9, 1, ReadWriteMode, RCCRCC_CIERBase> ;
    using HSI48RDYIE = RCC_RCC_CIER_HSI48RDYIE_Values<RCC::RCC_CIER, 10, 1, ReadWriteMode, RCCRCC_CIERBase> ;
    using FieldValues = RCC_RCC_CIER_HSI48RDYIE_Values<RCC::RCC_CIER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CIERPack  = Register<0x40021018, 32, ReadWriteMode, RCCRCC_CIERBase, T...> ;

  struct RCCRCC_CIFRBase {} ;

  struct RCC_CIFR : public RegisterBase<0x4002101C, 32, ReadWriteMode>
  {
    using LSIRDYF = RCC_RCC_CIFR_LSIRDYF_Values<RCC::RCC_CIFR, 0, 1, ReadMode, RCCRCC_CIFRBase> ;
    using LSERDYF = RCC_RCC_CIFR_LSERDYF_Values<RCC::RCC_CIFR, 1, 1, ReadMode, RCCRCC_CIFRBase> ;
    using HSIRDYF = RCC_RCC_CIFR_HSIRDYF_Values<RCC::RCC_CIFR, 3, 1, ReadMode, RCCRCC_CIFRBase> ;
    using HSERDYF = RCC_RCC_CIFR_HSERDYF_Values<RCC::RCC_CIFR, 4, 1, ReadMode, RCCRCC_CIFRBase> ;
    using PLLRDYF = RCC_RCC_CIFR_PLLRDYF_Values<RCC::RCC_CIFR, 5, 1, ReadMode, RCCRCC_CIFRBase> ;
    using CSSF = RCC_RCC_CIFR_CSSF_Values<RCC::RCC_CIFR, 8, 1, ReadMode, RCCRCC_CIFRBase> ;
    using LSECSSF = RCC_RCC_CIFR_LSECSSF_Values<RCC::RCC_CIFR, 9, 1, ReadMode, RCCRCC_CIFRBase> ;
    using HSI48RDYF = RCC_RCC_CIFR_HSI48RDYF_Values<RCC::RCC_CIFR, 10, 1, ReadMode, RCCRCC_CIFRBase> ;
    using FieldValues = RCC_RCC_CIFR_HSI48RDYF_Values<RCC::RCC_CIFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CIFRPack  = Register<0x4002101C, 32, ReadWriteMode, RCCRCC_CIFRBase, T...> ;

  struct RCCRCC_CICRBase {} ;

  struct RCC_CICR : public RegisterBase<0x40021020, 32, ReadWriteMode>
  {
    using LSIRDYC = RCC_RCC_CICR_LSIRDYC_Values<RCC::RCC_CICR, 0, 1, WriteMode, RCCRCC_CICRBase> ;
    using LSERDYC = RCC_RCC_CICR_LSERDYC_Values<RCC::RCC_CICR, 1, 1, WriteMode, RCCRCC_CICRBase> ;
    using HSIRDYC = RCC_RCC_CICR_HSIRDYC_Values<RCC::RCC_CICR, 3, 1, WriteMode, RCCRCC_CICRBase> ;
    using HSERDYC = RCC_RCC_CICR_HSERDYC_Values<RCC::RCC_CICR, 4, 1, WriteMode, RCCRCC_CICRBase> ;
    using PLLRDYC = RCC_RCC_CICR_PLLRDYC_Values<RCC::RCC_CICR, 5, 1, WriteMode, RCCRCC_CICRBase> ;
    using CSSC = RCC_RCC_CICR_CSSC_Values<RCC::RCC_CICR, 8, 1, WriteMode, RCCRCC_CICRBase> ;
    using LSECSSC = RCC_RCC_CICR_LSECSSC_Values<RCC::RCC_CICR, 9, 1, WriteMode, RCCRCC_CICRBase> ;
    using HSI48RDYC = RCC_RCC_CICR_HSI48RDYC_Values<RCC::RCC_CICR, 10, 1, WriteMode, RCCRCC_CICRBase> ;
    using FieldValues = RCC_RCC_CICR_HSI48RDYC_Values<RCC::RCC_CICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CICRPack  = Register<0x40021020, 32, ReadWriteMode, RCCRCC_CICRBase, T...> ;

  struct RCCRCC_AHB1RSTRBase {} ;

  struct RCC_AHB1RSTR : public RegisterBase<0x40021028, 32, ReadWriteMode>
  {
    using DMA1RST = RCC_RCC_AHB1RSTR_DMA1RST_Values<RCC::RCC_AHB1RSTR, 0, 1, ReadWriteMode, RCCRCC_AHB1RSTRBase> ;
    using DMA2RST = RCC_RCC_AHB1RSTR_DMA2RST_Values<RCC::RCC_AHB1RSTR, 1, 1, ReadWriteMode, RCCRCC_AHB1RSTRBase> ;
    using DMAMUX1RST = RCC_RCC_AHB1RSTR_DMAMUX1RST_Values<RCC::RCC_AHB1RSTR, 2, 1, ReadWriteMode, RCCRCC_AHB1RSTRBase> ;
    using CORDICRST = RCC_RCC_AHB1RSTR_CORDICRST_Values<RCC::RCC_AHB1RSTR, 3, 1, ReadWriteMode, RCCRCC_AHB1RSTRBase> ;
    using FMACRST = RCC_RCC_AHB1RSTR_FMACRST_Values<RCC::RCC_AHB1RSTR, 4, 1, ReadWriteMode, RCCRCC_AHB1RSTRBase> ;
    using FLASHRST = RCC_RCC_AHB1RSTR_FLASHRST_Values<RCC::RCC_AHB1RSTR, 8, 1, ReadWriteMode, RCCRCC_AHB1RSTRBase> ;
    using CRCRST = RCC_RCC_AHB1RSTR_CRCRST_Values<RCC::RCC_AHB1RSTR, 12, 1, ReadWriteMode, RCCRCC_AHB1RSTRBase> ;
    using FieldValues = RCC_RCC_AHB1RSTR_CRCRST_Values<RCC::RCC_AHB1RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_AHB1RSTRPack  = Register<0x40021028, 32, ReadWriteMode, RCCRCC_AHB1RSTRBase, T...> ;

  struct RCCRCC_AHB2RSTRBase {} ;

  struct RCC_AHB2RSTR : public RegisterBase<0x4002102C, 32, ReadWriteMode>
  {
    using GPIOARST = RCC_RCC_AHB2RSTR_GPIOARST_Values<RCC::RCC_AHB2RSTR, 0, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using GPIOBRST = RCC_RCC_AHB2RSTR_GPIOBRST_Values<RCC::RCC_AHB2RSTR, 1, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using GPIOCRST = RCC_RCC_AHB2RSTR_GPIOCRST_Values<RCC::RCC_AHB2RSTR, 2, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using GPIODRST = RCC_RCC_AHB2RSTR_GPIODRST_Values<RCC::RCC_AHB2RSTR, 3, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using GPIOERST = RCC_RCC_AHB2RSTR_GPIOERST_Values<RCC::RCC_AHB2RSTR, 4, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using GPIOFRST = RCC_RCC_AHB2RSTR_GPIOFRST_Values<RCC::RCC_AHB2RSTR, 5, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using GPIOGRST = RCC_RCC_AHB2RSTR_GPIOGRST_Values<RCC::RCC_AHB2RSTR, 6, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using ADC12RST = RCC_RCC_AHB2RSTR_ADC12RST_Values<RCC::RCC_AHB2RSTR, 13, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using ADC345RST = RCC_RCC_AHB2RSTR_ADC345RST_Values<RCC::RCC_AHB2RSTR, 14, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using DAC1RST = RCC_RCC_AHB2RSTR_DAC1RST_Values<RCC::RCC_AHB2RSTR, 16, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using DAC2RST = RCC_RCC_AHB2RSTR_DAC2RST_Values<RCC::RCC_AHB2RSTR, 17, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using DAC3RST = RCC_RCC_AHB2RSTR_DAC3RST_Values<RCC::RCC_AHB2RSTR, 18, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using DAC4RST = RCC_RCC_AHB2RSTR_DAC4RST_Values<RCC::RCC_AHB2RSTR, 19, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using AESRST = RCC_RCC_AHB2RSTR_AESRST_Values<RCC::RCC_AHB2RSTR, 24, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using RNGRST = RCC_RCC_AHB2RSTR_RNGRST_Values<RCC::RCC_AHB2RSTR, 26, 1, ReadWriteMode, RCCRCC_AHB2RSTRBase> ;
    using FieldValues = RCC_RCC_AHB2RSTR_RNGRST_Values<RCC::RCC_AHB2RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_AHB2RSTRPack  = Register<0x4002102C, 32, ReadWriteMode, RCCRCC_AHB2RSTRBase, T...> ;

  struct RCCRCC_AHB3RSTRBase {} ;

  struct RCC_AHB3RSTR : public RegisterBase<0x40021030, 32, ReadWriteMode>
  {
    using FMCRST = RCC_RCC_AHB3RSTR_FMCRST_Values<RCC::RCC_AHB3RSTR, 0, 1, ReadWriteMode, RCCRCC_AHB3RSTRBase> ;
    using QSPIRST = RCC_RCC_AHB3RSTR_QSPIRST_Values<RCC::RCC_AHB3RSTR, 8, 1, ReadWriteMode, RCCRCC_AHB3RSTRBase> ;
    using FieldValues = RCC_RCC_AHB3RSTR_QSPIRST_Values<RCC::RCC_AHB3RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_AHB3RSTRPack  = Register<0x40021030, 32, ReadWriteMode, RCCRCC_AHB3RSTRBase, T...> ;

  struct RCCRCC_APB1RSTR1Base {} ;

  struct RCC_APB1RSTR1 : public RegisterBase<0x40021038, 32, ReadWriteMode>
  {
    using TIM2RST = RCC_RCC_APB1RSTR1_TIM2RST_Values<RCC::RCC_APB1RSTR1, 0, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using TIM3RST = RCC_RCC_APB1RSTR1_TIM3RST_Values<RCC::RCC_APB1RSTR1, 1, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using TIM4RST = RCC_RCC_APB1RSTR1_TIM4RST_Values<RCC::RCC_APB1RSTR1, 2, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using TIM5RST = RCC_RCC_APB1RSTR1_TIM5RST_Values<RCC::RCC_APB1RSTR1, 3, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using TIM6RST = RCC_RCC_APB1RSTR1_TIM6RST_Values<RCC::RCC_APB1RSTR1, 4, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using TIM7RST = RCC_RCC_APB1RSTR1_TIM7RST_Values<RCC::RCC_APB1RSTR1, 5, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using CRSRST = RCC_RCC_APB1RSTR1_CRSRST_Values<RCC::RCC_APB1RSTR1, 8, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using SPI2RST = RCC_RCC_APB1RSTR1_SPI2RST_Values<RCC::RCC_APB1RSTR1, 14, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using SPI3RST = RCC_RCC_APB1RSTR1_SPI3RST_Values<RCC::RCC_APB1RSTR1, 15, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using USART2RST = RCC_RCC_APB1RSTR1_USART2RST_Values<RCC::RCC_APB1RSTR1, 17, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using USART3RST = RCC_RCC_APB1RSTR1_USART3RST_Values<RCC::RCC_APB1RSTR1, 18, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using UART4RST = RCC_RCC_APB1RSTR1_UART4RST_Values<RCC::RCC_APB1RSTR1, 19, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using UART5RST = RCC_RCC_APB1RSTR1_UART5RST_Values<RCC::RCC_APB1RSTR1, 20, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using I2C1RST = RCC_RCC_APB1RSTR1_I2C1RST_Values<RCC::RCC_APB1RSTR1, 21, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using I2C2RST = RCC_RCC_APB1RSTR1_I2C2RST_Values<RCC::RCC_APB1RSTR1, 22, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using USBRST = RCC_RCC_APB1RSTR1_USBRST_Values<RCC::RCC_APB1RSTR1, 23, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using FDCANRST = RCC_RCC_APB1RSTR1_FDCANRST_Values<RCC::RCC_APB1RSTR1, 25, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using PWRRST = RCC_RCC_APB1RSTR1_PWRRST_Values<RCC::RCC_APB1RSTR1, 28, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using I2C3RST = RCC_RCC_APB1RSTR1_I2C3RST_Values<RCC::RCC_APB1RSTR1, 30, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using LPTIM1RST = RCC_RCC_APB1RSTR1_LPTIM1RST_Values<RCC::RCC_APB1RSTR1, 31, 1, ReadWriteMode, RCCRCC_APB1RSTR1Base> ;
    using FieldValues = RCC_RCC_APB1RSTR1_LPTIM1RST_Values<RCC::RCC_APB1RSTR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB1RSTR1Pack  = Register<0x40021038, 32, ReadWriteMode, RCCRCC_APB1RSTR1Base, T...> ;

  struct RCCRCC_APB1RSTR2Base {} ;

  struct RCC_APB1RSTR2 : public RegisterBase<0x4002103C, 32, ReadWriteMode>
  {
    using LPUART1RST = RCC_RCC_APB1RSTR2_LPUART1RST_Values<RCC::RCC_APB1RSTR2, 0, 1, ReadWriteMode, RCCRCC_APB1RSTR2Base> ;
    using I2C4RST = RCC_RCC_APB1RSTR2_I2C4RST_Values<RCC::RCC_APB1RSTR2, 1, 1, ReadWriteMode, RCCRCC_APB1RSTR2Base> ;
    using UCPD1RST = RCC_RCC_APB1RSTR2_UCPD1RST_Values<RCC::RCC_APB1RSTR2, 8, 1, ReadWriteMode, RCCRCC_APB1RSTR2Base> ;
    using FieldValues = RCC_RCC_APB1RSTR2_UCPD1RST_Values<RCC::RCC_APB1RSTR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB1RSTR2Pack  = Register<0x4002103C, 32, ReadWriteMode, RCCRCC_APB1RSTR2Base, T...> ;

  struct RCCRCC_APB2RSTRBase {} ;

  struct RCC_APB2RSTR : public RegisterBase<0x40021040, 32, ReadWriteMode>
  {
    using SYSCFGRST = RCC_RCC_APB2RSTR_SYSCFGRST_Values<RCC::RCC_APB2RSTR, 0, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using TIM1RST = RCC_RCC_APB2RSTR_TIM1RST_Values<RCC::RCC_APB2RSTR, 11, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using SPI1RST = RCC_RCC_APB2RSTR_SPI1RST_Values<RCC::RCC_APB2RSTR, 12, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using TIM8RST = RCC_RCC_APB2RSTR_TIM8RST_Values<RCC::RCC_APB2RSTR, 13, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using USART1RST = RCC_RCC_APB2RSTR_USART1RST_Values<RCC::RCC_APB2RSTR, 14, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using SPI4RST = RCC_RCC_APB2RSTR_SPI4RST_Values<RCC::RCC_APB2RSTR, 15, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using TIM15RST = RCC_RCC_APB2RSTR_TIM15RST_Values<RCC::RCC_APB2RSTR, 16, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using TIM16RST = RCC_RCC_APB2RSTR_TIM16RST_Values<RCC::RCC_APB2RSTR, 17, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using TIM17RST = RCC_RCC_APB2RSTR_TIM17RST_Values<RCC::RCC_APB2RSTR, 18, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using TIM20RST = RCC_RCC_APB2RSTR_TIM20RST_Values<RCC::RCC_APB2RSTR, 20, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using SAI1RST = RCC_RCC_APB2RSTR_SAI1RST_Values<RCC::RCC_APB2RSTR, 21, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using HRTIM1RST = RCC_RCC_APB2RSTR_HRTIM1RST_Values<RCC::RCC_APB2RSTR, 26, 1, ReadWriteMode, RCCRCC_APB2RSTRBase> ;
    using FieldValues = RCC_RCC_APB2RSTR_HRTIM1RST_Values<RCC::RCC_APB2RSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB2RSTRPack  = Register<0x40021040, 32, ReadWriteMode, RCCRCC_APB2RSTRBase, T...> ;

  struct RCCRCC_AHB1ENRBase {} ;

  struct RCC_AHB1ENR : public RegisterBase<0x40021048, 32, ReadWriteMode>
  {
    using DMA1EN = RCC_RCC_AHB1ENR_DMA1EN_Values<RCC::RCC_AHB1ENR, 0, 1, ReadWriteMode, RCCRCC_AHB1ENRBase> ;
    using DMA2EN = RCC_RCC_AHB1ENR_DMA2EN_Values<RCC::RCC_AHB1ENR, 1, 1, ReadWriteMode, RCCRCC_AHB1ENRBase> ;
    using DMAMUX1EN = RCC_RCC_AHB1ENR_DMAMUX1EN_Values<RCC::RCC_AHB1ENR, 2, 1, ReadWriteMode, RCCRCC_AHB1ENRBase> ;
    using CORDICEN = RCC_RCC_AHB1ENR_CORDICEN_Values<RCC::RCC_AHB1ENR, 3, 1, ReadWriteMode, RCCRCC_AHB1ENRBase> ;
    using FMACEN = RCC_RCC_AHB1ENR_FMACEN_Values<RCC::RCC_AHB1ENR, 4, 1, ReadWriteMode, RCCRCC_AHB1ENRBase> ;
    using FLASHEN = RCC_RCC_AHB1ENR_FLASHEN_Values<RCC::RCC_AHB1ENR, 8, 1, ReadWriteMode, RCCRCC_AHB1ENRBase> ;
    using CRCEN = RCC_RCC_AHB1ENR_CRCEN_Values<RCC::RCC_AHB1ENR, 12, 1, ReadWriteMode, RCCRCC_AHB1ENRBase> ;
    using FieldValues = RCC_RCC_AHB1ENR_CRCEN_Values<RCC::RCC_AHB1ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_AHB1ENRPack  = Register<0x40021048, 32, ReadWriteMode, RCCRCC_AHB1ENRBase, T...> ;

  struct RCCRCC_AHB2ENRBase {} ;

  struct RCC_AHB2ENR : public RegisterBase<0x4002104C, 32, ReadWriteMode>
  {
    using GPIOAEN = RCC_RCC_AHB2ENR_GPIOAEN_Values<RCC::RCC_AHB2ENR, 0, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using GPIOBEN = RCC_RCC_AHB2ENR_GPIOBEN_Values<RCC::RCC_AHB2ENR, 1, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using GPIOCEN = RCC_RCC_AHB2ENR_GPIOCEN_Values<RCC::RCC_AHB2ENR, 2, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using GPIODEN = RCC_RCC_AHB2ENR_GPIODEN_Values<RCC::RCC_AHB2ENR, 3, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using GPIOEEN = RCC_RCC_AHB2ENR_GPIOEEN_Values<RCC::RCC_AHB2ENR, 4, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using GPIOFEN = RCC_RCC_AHB2ENR_GPIOFEN_Values<RCC::RCC_AHB2ENR, 5, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using GPIOGEN = RCC_RCC_AHB2ENR_GPIOGEN_Values<RCC::RCC_AHB2ENR, 6, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using ADC12EN = RCC_RCC_AHB2ENR_ADC12EN_Values<RCC::RCC_AHB2ENR, 13, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using ADC345EN = RCC_RCC_AHB2ENR_ADC345EN_Values<RCC::RCC_AHB2ENR, 14, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using DAC1EN = RCC_RCC_AHB2ENR_DAC1EN_Values<RCC::RCC_AHB2ENR, 16, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using DAC2EN = RCC_RCC_AHB2ENR_DAC2EN_Values<RCC::RCC_AHB2ENR, 17, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using DAC3EN = RCC_RCC_AHB2ENR_DAC3EN_Values<RCC::RCC_AHB2ENR, 18, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using DAC4EN = RCC_RCC_AHB2ENR_DAC4EN_Values<RCC::RCC_AHB2ENR, 19, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using AESEN = RCC_RCC_AHB2ENR_AESEN_Values<RCC::RCC_AHB2ENR, 24, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using RNGEN = RCC_RCC_AHB2ENR_RNGEN_Values<RCC::RCC_AHB2ENR, 26, 1, ReadWriteMode, RCCRCC_AHB2ENRBase> ;
    using FieldValues = RCC_RCC_AHB2ENR_RNGEN_Values<RCC::RCC_AHB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_AHB2ENRPack  = Register<0x4002104C, 32, ReadWriteMode, RCCRCC_AHB2ENRBase, T...> ;

  struct RCCRCC_AHB3ENRBase {} ;

  struct RCC_AHB3ENR : public RegisterBase<0x40021050, 32, ReadWriteMode>
  {
    using FMCEN = RCC_RCC_AHB3ENR_FMCEN_Values<RCC::RCC_AHB3ENR, 0, 1, ReadWriteMode, RCCRCC_AHB3ENRBase> ;
    using QSPIEN = RCC_RCC_AHB3ENR_QSPIEN_Values<RCC::RCC_AHB3ENR, 8, 1, ReadWriteMode, RCCRCC_AHB3ENRBase> ;
    using FieldValues = RCC_RCC_AHB3ENR_QSPIEN_Values<RCC::RCC_AHB3ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_AHB3ENRPack  = Register<0x40021050, 32, ReadWriteMode, RCCRCC_AHB3ENRBase, T...> ;

  struct RCCRCC_APB1ENR1Base {} ;

  struct RCC_APB1ENR1 : public RegisterBase<0x40021058, 32, ReadWriteMode>
  {
    using TIM2EN = RCC_RCC_APB1ENR1_TIM2EN_Values<RCC::RCC_APB1ENR1, 0, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using TIM3EN = RCC_RCC_APB1ENR1_TIM3EN_Values<RCC::RCC_APB1ENR1, 1, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using TIM4EN = RCC_RCC_APB1ENR1_TIM4EN_Values<RCC::RCC_APB1ENR1, 2, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using TIM5EN = RCC_RCC_APB1ENR1_TIM5EN_Values<RCC::RCC_APB1ENR1, 3, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using TIM6EN = RCC_RCC_APB1ENR1_TIM6EN_Values<RCC::RCC_APB1ENR1, 4, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using TIM7EN = RCC_RCC_APB1ENR1_TIM7EN_Values<RCC::RCC_APB1ENR1, 5, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using CRSEN = RCC_RCC_APB1ENR1_CRSEN_Values<RCC::RCC_APB1ENR1, 8, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using RTCAPBEN = RCC_RCC_APB1ENR1_RTCAPBEN_Values<RCC::RCC_APB1ENR1, 10, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using WWDGEN = RCC_RCC_APB1ENR1_WWDGEN_Values<RCC::RCC_APB1ENR1, 11, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using SPI2EN = RCC_RCC_APB1ENR1_SPI2EN_Values<RCC::RCC_APB1ENR1, 14, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using SPI3EN = RCC_RCC_APB1ENR1_SPI3EN_Values<RCC::RCC_APB1ENR1, 15, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using USART2EN = RCC_RCC_APB1ENR1_USART2EN_Values<RCC::RCC_APB1ENR1, 17, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using USART3EN = RCC_RCC_APB1ENR1_USART3EN_Values<RCC::RCC_APB1ENR1, 18, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using UART4EN = RCC_RCC_APB1ENR1_UART4EN_Values<RCC::RCC_APB1ENR1, 19, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using UART5EN = RCC_RCC_APB1ENR1_UART5EN_Values<RCC::RCC_APB1ENR1, 20, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using I2C1EN = RCC_RCC_APB1ENR1_I2C1EN_Values<RCC::RCC_APB1ENR1, 21, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using I2C2EN = RCC_RCC_APB1ENR1_I2C2EN_Values<RCC::RCC_APB1ENR1, 22, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using USBEN = RCC_RCC_APB1ENR1_USBEN_Values<RCC::RCC_APB1ENR1, 23, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using FDCANEN = RCC_RCC_APB1ENR1_FDCANEN_Values<RCC::RCC_APB1ENR1, 25, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using PWREN = RCC_RCC_APB1ENR1_PWREN_Values<RCC::RCC_APB1ENR1, 28, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using I2C3EN = RCC_RCC_APB1ENR1_I2C3EN_Values<RCC::RCC_APB1ENR1, 30, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using LPTIM1EN = RCC_RCC_APB1ENR1_LPTIM1EN_Values<RCC::RCC_APB1ENR1, 31, 1, ReadWriteMode, RCCRCC_APB1ENR1Base> ;
    using FieldValues = RCC_RCC_APB1ENR1_LPTIM1EN_Values<RCC::RCC_APB1ENR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB1ENR1Pack  = Register<0x40021058, 32, ReadWriteMode, RCCRCC_APB1ENR1Base, T...> ;

  struct RCCRCC_APB1ENR2Base {} ;

  struct RCC_APB1ENR2 : public RegisterBase<0x4002105C, 32, ReadWriteMode>
  {
    using LPUART1EN = RCC_RCC_APB1ENR2_LPUART1EN_Values<RCC::RCC_APB1ENR2, 0, 1, ReadWriteMode, RCCRCC_APB1ENR2Base> ;
    using I2C4EN = RCC_RCC_APB1ENR2_I2C4EN_Values<RCC::RCC_APB1ENR2, 1, 1, ReadWriteMode, RCCRCC_APB1ENR2Base> ;
    using UCPD1EN = RCC_RCC_APB1ENR2_UCPD1EN_Values<RCC::RCC_APB1ENR2, 8, 1, ReadWriteMode, RCCRCC_APB1ENR2Base> ;
    using FieldValues = RCC_RCC_APB1ENR2_UCPD1EN_Values<RCC::RCC_APB1ENR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB1ENR2Pack  = Register<0x4002105C, 32, ReadWriteMode, RCCRCC_APB1ENR2Base, T...> ;

  struct RCCRCC_APB2ENRBase {} ;

  struct RCC_APB2ENR : public RegisterBase<0x40021060, 32, ReadWriteMode>
  {
    using SYSCFGEN = RCC_RCC_APB2ENR_SYSCFGEN_Values<RCC::RCC_APB2ENR, 0, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using TIM1EN = RCC_RCC_APB2ENR_TIM1EN_Values<RCC::RCC_APB2ENR, 11, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using SPI1EN = RCC_RCC_APB2ENR_SPI1EN_Values<RCC::RCC_APB2ENR, 12, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using TIM8EN = RCC_RCC_APB2ENR_TIM8EN_Values<RCC::RCC_APB2ENR, 13, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using USART1EN = RCC_RCC_APB2ENR_USART1EN_Values<RCC::RCC_APB2ENR, 14, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using SPI4EN = RCC_RCC_APB2ENR_SPI4EN_Values<RCC::RCC_APB2ENR, 15, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using TIM15EN = RCC_RCC_APB2ENR_TIM15EN_Values<RCC::RCC_APB2ENR, 16, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using TIM16EN = RCC_RCC_APB2ENR_TIM16EN_Values<RCC::RCC_APB2ENR, 17, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using TIM17EN = RCC_RCC_APB2ENR_TIM17EN_Values<RCC::RCC_APB2ENR, 18, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using TIM20EN = RCC_RCC_APB2ENR_TIM20EN_Values<RCC::RCC_APB2ENR, 20, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using SAI1EN = RCC_RCC_APB2ENR_SAI1EN_Values<RCC::RCC_APB2ENR, 21, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using HRTIM1EN = RCC_RCC_APB2ENR_HRTIM1EN_Values<RCC::RCC_APB2ENR, 26, 1, ReadWriteMode, RCCRCC_APB2ENRBase> ;
    using FieldValues = RCC_RCC_APB2ENR_HRTIM1EN_Values<RCC::RCC_APB2ENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB2ENRPack  = Register<0x40021060, 32, ReadWriteMode, RCCRCC_APB2ENRBase, T...> ;

  struct RCCRCC_AHB1SMENRBase {} ;

  struct RCC_AHB1SMENR : public RegisterBase<0x40021068, 32, ReadWriteMode>
  {
    using DMA1SMEN = RCC_RCC_AHB1SMENR_DMA1SMEN_Values<RCC::RCC_AHB1SMENR, 0, 1, ReadWriteMode, RCCRCC_AHB1SMENRBase> ;
    using DMA2SMEN = RCC_RCC_AHB1SMENR_DMA2SMEN_Values<RCC::RCC_AHB1SMENR, 1, 1, ReadWriteMode, RCCRCC_AHB1SMENRBase> ;
    using DMAMUX1SMEN = RCC_RCC_AHB1SMENR_DMAMUX1SMEN_Values<RCC::RCC_AHB1SMENR, 2, 1, ReadWriteMode, RCCRCC_AHB1SMENRBase> ;
    using CORDICSMEN = RCC_RCC_AHB1SMENR_CORDICSMEN_Values<RCC::RCC_AHB1SMENR, 3, 1, ReadWriteMode, RCCRCC_AHB1SMENRBase> ;
    using FMACSMEN = RCC_RCC_AHB1SMENR_FMACSMEN_Values<RCC::RCC_AHB1SMENR, 4, 1, ReadWriteMode, RCCRCC_AHB1SMENRBase> ;
    using FLASHSMEN = RCC_RCC_AHB1SMENR_FLASHSMEN_Values<RCC::RCC_AHB1SMENR, 8, 1, ReadWriteMode, RCCRCC_AHB1SMENRBase> ;
    using SRAM1SMEN = RCC_RCC_AHB1SMENR_SRAM1SMEN_Values<RCC::RCC_AHB1SMENR, 9, 1, ReadWriteMode, RCCRCC_AHB1SMENRBase> ;
    using CRCSMEN = RCC_RCC_AHB1SMENR_CRCSMEN_Values<RCC::RCC_AHB1SMENR, 12, 1, ReadWriteMode, RCCRCC_AHB1SMENRBase> ;
    using FieldValues = RCC_RCC_AHB1SMENR_CRCSMEN_Values<RCC::RCC_AHB1SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_AHB1SMENRPack  = Register<0x40021068, 32, ReadWriteMode, RCCRCC_AHB1SMENRBase, T...> ;

  struct RCCRCC_AHB2SMENRBase {} ;

  struct RCC_AHB2SMENR : public RegisterBase<0x4002106C, 32, ReadWriteMode>
  {
    using GPIOASMEN = RCC_RCC_AHB2SMENR_GPIOASMEN_Values<RCC::RCC_AHB2SMENR, 0, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using GPIOBSMEN = RCC_RCC_AHB2SMENR_GPIOBSMEN_Values<RCC::RCC_AHB2SMENR, 1, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using GPIOCSMEN = RCC_RCC_AHB2SMENR_GPIOCSMEN_Values<RCC::RCC_AHB2SMENR, 2, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using GPIODSMEN = RCC_RCC_AHB2SMENR_GPIODSMEN_Values<RCC::RCC_AHB2SMENR, 3, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using GPIOESMEN = RCC_RCC_AHB2SMENR_GPIOESMEN_Values<RCC::RCC_AHB2SMENR, 4, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using GPIOFSMEN = RCC_RCC_AHB2SMENR_GPIOFSMEN_Values<RCC::RCC_AHB2SMENR, 5, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using GPIOGSMEN = RCC_RCC_AHB2SMENR_GPIOGSMEN_Values<RCC::RCC_AHB2SMENR, 6, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using CCMSRAMSMEN = RCC_RCC_AHB2SMENR_CCMSRAMSMEN_Values<RCC::RCC_AHB2SMENR, 9, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using SRAM2SMEN = RCC_RCC_AHB2SMENR_SRAM2SMEN_Values<RCC::RCC_AHB2SMENR, 10, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using ADC12SMEN = RCC_RCC_AHB2SMENR_ADC12SMEN_Values<RCC::RCC_AHB2SMENR, 13, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using ADC345SMEN = RCC_RCC_AHB2SMENR_ADC345SMEN_Values<RCC::RCC_AHB2SMENR, 14, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using DAC1SMEN = RCC_RCC_AHB2SMENR_DAC1SMEN_Values<RCC::RCC_AHB2SMENR, 16, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using DAC2SMEN = RCC_RCC_AHB2SMENR_DAC2SMEN_Values<RCC::RCC_AHB2SMENR, 17, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using DAC3SMEN = RCC_RCC_AHB2SMENR_DAC3SMEN_Values<RCC::RCC_AHB2SMENR, 18, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using DAC4SMEN = RCC_RCC_AHB2SMENR_DAC4SMEN_Values<RCC::RCC_AHB2SMENR, 19, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using AESSMEN = RCC_RCC_AHB2SMENR_AESSMEN_Values<RCC::RCC_AHB2SMENR, 24, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using RNGEN = RCC_RCC_AHB2SMENR_RNGEN_Values<RCC::RCC_AHB2SMENR, 26, 1, ReadWriteMode, RCCRCC_AHB2SMENRBase> ;
    using FieldValues = RCC_RCC_AHB2SMENR_RNGEN_Values<RCC::RCC_AHB2SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_AHB2SMENRPack  = Register<0x4002106C, 32, ReadWriteMode, RCCRCC_AHB2SMENRBase, T...> ;

  struct RCCRCC_AHB3SMENRBase {} ;

  struct RCC_AHB3SMENR : public RegisterBase<0x40021070, 32, ReadWriteMode>
  {
    using FMCSMEN = RCC_RCC_AHB3SMENR_FMCSMEN_Values<RCC::RCC_AHB3SMENR, 0, 1, ReadWriteMode, RCCRCC_AHB3SMENRBase> ;
    using QSPISMEN = RCC_RCC_AHB3SMENR_QSPISMEN_Values<RCC::RCC_AHB3SMENR, 8, 1, ReadWriteMode, RCCRCC_AHB3SMENRBase> ;
    using FieldValues = RCC_RCC_AHB3SMENR_QSPISMEN_Values<RCC::RCC_AHB3SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_AHB3SMENRPack  = Register<0x40021070, 32, ReadWriteMode, RCCRCC_AHB3SMENRBase, T...> ;

  struct RCCRCC_APB1SMENR1Base {} ;

  struct RCC_APB1SMENR1 : public RegisterBase<0x40021078, 32, ReadWriteMode>
  {
    using TIM2SMEN = RCC_RCC_APB1SMENR1_TIM2SMEN_Values<RCC::RCC_APB1SMENR1, 0, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using TIM3SMEN = RCC_RCC_APB1SMENR1_TIM3SMEN_Values<RCC::RCC_APB1SMENR1, 1, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using TIM4SMEN = RCC_RCC_APB1SMENR1_TIM4SMEN_Values<RCC::RCC_APB1SMENR1, 2, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using TIM5SMEN = RCC_RCC_APB1SMENR1_TIM5SMEN_Values<RCC::RCC_APB1SMENR1, 3, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using TIM6SMEN = RCC_RCC_APB1SMENR1_TIM6SMEN_Values<RCC::RCC_APB1SMENR1, 4, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using TIM7SMEN = RCC_RCC_APB1SMENR1_TIM7SMEN_Values<RCC::RCC_APB1SMENR1, 5, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using CRSSMEN = RCC_RCC_APB1SMENR1_CRSSMEN_Values<RCC::RCC_APB1SMENR1, 8, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using RTCAPBSMEN = RCC_RCC_APB1SMENR1_RTCAPBSMEN_Values<RCC::RCC_APB1SMENR1, 10, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using WWDGSMEN = RCC_RCC_APB1SMENR1_WWDGSMEN_Values<RCC::RCC_APB1SMENR1, 11, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using SPI2SMEN = RCC_RCC_APB1SMENR1_SPI2SMEN_Values<RCC::RCC_APB1SMENR1, 14, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using SPI3SMEN = RCC_RCC_APB1SMENR1_SPI3SMEN_Values<RCC::RCC_APB1SMENR1, 15, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using USART2SMEN = RCC_RCC_APB1SMENR1_USART2SMEN_Values<RCC::RCC_APB1SMENR1, 17, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using USART3SMEN = RCC_RCC_APB1SMENR1_USART3SMEN_Values<RCC::RCC_APB1SMENR1, 18, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using UART4SMEN = RCC_RCC_APB1SMENR1_UART4SMEN_Values<RCC::RCC_APB1SMENR1, 19, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using UART5SMEN = RCC_RCC_APB1SMENR1_UART5SMEN_Values<RCC::RCC_APB1SMENR1, 20, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using I2C1SMEN = RCC_RCC_APB1SMENR1_I2C1SMEN_Values<RCC::RCC_APB1SMENR1, 21, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using I2C2SMEN = RCC_RCC_APB1SMENR1_I2C2SMEN_Values<RCC::RCC_APB1SMENR1, 22, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using USBSMEN = RCC_RCC_APB1SMENR1_USBSMEN_Values<RCC::RCC_APB1SMENR1, 23, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using FDCANSMEN = RCC_RCC_APB1SMENR1_FDCANSMEN_Values<RCC::RCC_APB1SMENR1, 25, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using PWRSMEN = RCC_RCC_APB1SMENR1_PWRSMEN_Values<RCC::RCC_APB1SMENR1, 28, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using I2C3SMEN = RCC_RCC_APB1SMENR1_I2C3SMEN_Values<RCC::RCC_APB1SMENR1, 30, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using LPTIM1SMEN = RCC_RCC_APB1SMENR1_LPTIM1SMEN_Values<RCC::RCC_APB1SMENR1, 31, 1, ReadWriteMode, RCCRCC_APB1SMENR1Base> ;
    using FieldValues = RCC_RCC_APB1SMENR1_LPTIM1SMEN_Values<RCC::RCC_APB1SMENR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB1SMENR1Pack  = Register<0x40021078, 32, ReadWriteMode, RCCRCC_APB1SMENR1Base, T...> ;

  struct RCCRCC_APB1SMENR2Base {} ;

  struct RCC_APB1SMENR2 : public RegisterBase<0x4002107C, 32, ReadWriteMode>
  {
    using LPUART1SMEN = RCC_RCC_APB1SMENR2_LPUART1SMEN_Values<RCC::RCC_APB1SMENR2, 0, 1, ReadWriteMode, RCCRCC_APB1SMENR2Base> ;
    using I2C4SMEN = RCC_RCC_APB1SMENR2_I2C4SMEN_Values<RCC::RCC_APB1SMENR2, 1, 1, ReadWriteMode, RCCRCC_APB1SMENR2Base> ;
    using UCPD1SMEN = RCC_RCC_APB1SMENR2_UCPD1SMEN_Values<RCC::RCC_APB1SMENR2, 8, 1, ReadWriteMode, RCCRCC_APB1SMENR2Base> ;
    using FieldValues = RCC_RCC_APB1SMENR2_UCPD1SMEN_Values<RCC::RCC_APB1SMENR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB1SMENR2Pack  = Register<0x4002107C, 32, ReadWriteMode, RCCRCC_APB1SMENR2Base, T...> ;

  struct RCCRCC_APB2SMENRBase {} ;

  struct RCC_APB2SMENR : public RegisterBase<0x40021080, 32, ReadWriteMode>
  {
    using SYSCFGSMEN = RCC_RCC_APB2SMENR_SYSCFGSMEN_Values<RCC::RCC_APB2SMENR, 0, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using TIM1SMEN = RCC_RCC_APB2SMENR_TIM1SMEN_Values<RCC::RCC_APB2SMENR, 11, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using SPI1SMEN = RCC_RCC_APB2SMENR_SPI1SMEN_Values<RCC::RCC_APB2SMENR, 12, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using TIM8SMEN = RCC_RCC_APB2SMENR_TIM8SMEN_Values<RCC::RCC_APB2SMENR, 13, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using USART1SMEN = RCC_RCC_APB2SMENR_USART1SMEN_Values<RCC::RCC_APB2SMENR, 14, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using SPI4SMEN = RCC_RCC_APB2SMENR_SPI4SMEN_Values<RCC::RCC_APB2SMENR, 15, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using TIM15SMEN = RCC_RCC_APB2SMENR_TIM15SMEN_Values<RCC::RCC_APB2SMENR, 16, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using TIM16SMEN = RCC_RCC_APB2SMENR_TIM16SMEN_Values<RCC::RCC_APB2SMENR, 17, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using TIM17SMEN = RCC_RCC_APB2SMENR_TIM17SMEN_Values<RCC::RCC_APB2SMENR, 18, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using TIM20SMEN = RCC_RCC_APB2SMENR_TIM20SMEN_Values<RCC::RCC_APB2SMENR, 20, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using SAI1SMEN = RCC_RCC_APB2SMENR_SAI1SMEN_Values<RCC::RCC_APB2SMENR, 21, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using HRTIM1SMEN = RCC_RCC_APB2SMENR_HRTIM1SMEN_Values<RCC::RCC_APB2SMENR, 26, 1, ReadWriteMode, RCCRCC_APB2SMENRBase> ;
    using FieldValues = RCC_RCC_APB2SMENR_HRTIM1SMEN_Values<RCC::RCC_APB2SMENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_APB2SMENRPack  = Register<0x40021080, 32, ReadWriteMode, RCCRCC_APB2SMENRBase, T...> ;

  struct RCCRCC_CCIPRBase {} ;

  struct RCC_CCIPR : public RegisterBase<0x40021088, 32, ReadWriteMode>
  {
    using USART1SEL = RCC_RCC_CCIPR_USART1SEL_Values<RCC::RCC_CCIPR, 0, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using USART2SEL = RCC_RCC_CCIPR_USART2SEL_Values<RCC::RCC_CCIPR, 2, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using USART3SEL = RCC_RCC_CCIPR_USART3SEL_Values<RCC::RCC_CCIPR, 4, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using UART4SEL = RCC_RCC_CCIPR_UART4SEL_Values<RCC::RCC_CCIPR, 6, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using UART5SEL = RCC_RCC_CCIPR_UART5SEL_Values<RCC::RCC_CCIPR, 8, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using LPUART1SEL = RCC_RCC_CCIPR_LPUART1SEL_Values<RCC::RCC_CCIPR, 10, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using I2C1SEL = RCC_RCC_CCIPR_I2C1SEL_Values<RCC::RCC_CCIPR, 12, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using I2C2SEL = RCC_RCC_CCIPR_I2C2SEL_Values<RCC::RCC_CCIPR, 14, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using I2C3SEL = RCC_RCC_CCIPR_I2C3SEL_Values<RCC::RCC_CCIPR, 16, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using LPTIM1SEL = RCC_RCC_CCIPR_LPTIM1SEL_Values<RCC::RCC_CCIPR, 18, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using SAI1SEL = RCC_RCC_CCIPR_SAI1SEL_Values<RCC::RCC_CCIPR, 20, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using I2S23SEL = RCC_RCC_CCIPR_I2S23SEL_Values<RCC::RCC_CCIPR, 22, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using FDCANSEL = RCC_RCC_CCIPR_FDCANSEL_Values<RCC::RCC_CCIPR, 24, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using CLK48SEL = RCC_RCC_CCIPR_CLK48SEL_Values<RCC::RCC_CCIPR, 26, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using ADC12SEL = RCC_RCC_CCIPR_ADC12SEL_Values<RCC::RCC_CCIPR, 28, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using ADC345SEL = RCC_RCC_CCIPR_ADC345SEL_Values<RCC::RCC_CCIPR, 30, 2, ReadWriteMode, RCCRCC_CCIPRBase> ;
    using FieldValues = RCC_RCC_CCIPR_ADC345SEL_Values<RCC::RCC_CCIPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CCIPRPack  = Register<0x40021088, 32, ReadWriteMode, RCCRCC_CCIPRBase, T...> ;

  struct RCCRCC_BDCRBase {} ;

  struct RCC_BDCR : public RegisterBase<0x40021090, 32, ReadWriteMode>
  {
    using LSEON = RCC_RCC_BDCR_LSEON_Values<RCC::RCC_BDCR, 0, 1, ReadWriteMode, RCCRCC_BDCRBase> ;
    using LSERDY = RCC_RCC_BDCR_LSERDY_Values<RCC::RCC_BDCR, 1, 1, ReadMode, RCCRCC_BDCRBase> ;
    using LSEBYP = RCC_RCC_BDCR_LSEBYP_Values<RCC::RCC_BDCR, 2, 1, ReadWriteMode, RCCRCC_BDCRBase> ;
    using LSEDRV = RCC_RCC_BDCR_LSEDRV_Values<RCC::RCC_BDCR, 3, 2, ReadWriteMode, RCCRCC_BDCRBase> ;
    using LSECSSON = RCC_RCC_BDCR_LSECSSON_Values<RCC::RCC_BDCR, 5, 1, ReadWriteMode, RCCRCC_BDCRBase> ;
    using LSECSSD = RCC_RCC_BDCR_LSECSSD_Values<RCC::RCC_BDCR, 6, 1, ReadMode, RCCRCC_BDCRBase> ;
    using RTCSEL = RCC_RCC_BDCR_RTCSEL_Values<RCC::RCC_BDCR, 8, 2, ReadWriteMode, RCCRCC_BDCRBase> ;
    using RTCEN = RCC_RCC_BDCR_RTCEN_Values<RCC::RCC_BDCR, 15, 1, ReadWriteMode, RCCRCC_BDCRBase> ;
    using BDRST = RCC_RCC_BDCR_BDRST_Values<RCC::RCC_BDCR, 16, 1, ReadWriteMode, RCCRCC_BDCRBase> ;
    using LSCOEN = RCC_RCC_BDCR_LSCOEN_Values<RCC::RCC_BDCR, 24, 1, ReadWriteMode, RCCRCC_BDCRBase> ;
    using LSCOSEL = RCC_RCC_BDCR_LSCOSEL_Values<RCC::RCC_BDCR, 25, 1, ReadWriteMode, RCCRCC_BDCRBase> ;
    using FieldValues = RCC_RCC_BDCR_LSCOSEL_Values<RCC::RCC_BDCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_BDCRPack  = Register<0x40021090, 32, ReadWriteMode, RCCRCC_BDCRBase, T...> ;

  struct RCCRCC_CSRBase {} ;

  struct RCC_CSR : public RegisterBase<0x40021094, 32, ReadWriteMode>
  {
    using LSION = RCC_RCC_CSR_LSION_Values<RCC::RCC_CSR, 0, 1, ReadWriteMode, RCCRCC_CSRBase> ;
    using LSIRDY = RCC_RCC_CSR_LSIRDY_Values<RCC::RCC_CSR, 1, 1, ReadMode, RCCRCC_CSRBase> ;
    using RMVF = RCC_RCC_CSR_RMVF_Values<RCC::RCC_CSR, 23, 1, ReadWriteMode, RCCRCC_CSRBase> ;
    using OBLRSTF = RCC_RCC_CSR_OBLRSTF_Values<RCC::RCC_CSR, 25, 1, ReadMode, RCCRCC_CSRBase> ;
    using PINRSTF = RCC_RCC_CSR_PINRSTF_Values<RCC::RCC_CSR, 26, 1, ReadMode, RCCRCC_CSRBase> ;
    using BORRSTF = RCC_RCC_CSR_BORRSTF_Values<RCC::RCC_CSR, 27, 1, ReadMode, RCCRCC_CSRBase> ;
    using SFTRSTF = RCC_RCC_CSR_SFTRSTF_Values<RCC::RCC_CSR, 28, 1, ReadMode, RCCRCC_CSRBase> ;
    using IWDGRSTF = RCC_RCC_CSR_IWDGRSTF_Values<RCC::RCC_CSR, 29, 1, ReadMode, RCCRCC_CSRBase> ;
    using WWDGRSTF = RCC_RCC_CSR_WWDGRSTF_Values<RCC::RCC_CSR, 30, 1, ReadMode, RCCRCC_CSRBase> ;
    using LPWRRSTF = RCC_RCC_CSR_LPWRRSTF_Values<RCC::RCC_CSR, 31, 1, ReadMode, RCCRCC_CSRBase> ;
    using FieldValues = RCC_RCC_CSR_LPWRRSTF_Values<RCC::RCC_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CSRPack  = Register<0x40021094, 32, ReadWriteMode, RCCRCC_CSRBase, T...> ;

  struct RCCRCC_CRRCRBase {} ;

  struct RCC_CRRCR : public RegisterBase<0x40021098, 32, ReadWriteMode>
  {
    using HSI48ON = RCC_RCC_CRRCR_HSI48ON_Values<RCC::RCC_CRRCR, 0, 1, ReadWriteMode, RCCRCC_CRRCRBase> ;
    using HSI48RDY = RCC_RCC_CRRCR_HSI48RDY_Values<RCC::RCC_CRRCR, 1, 1, ReadMode, RCCRCC_CRRCRBase> ;
    using HSI48CAL = RCC_RCC_CRRCR_HSI48CAL_Values<RCC::RCC_CRRCR, 7, 9, ReadMode, RCCRCC_CRRCRBase> ;
    using FieldValues = RCC_RCC_CRRCR_HSI48CAL_Values<RCC::RCC_CRRCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CRRCRPack  = Register<0x40021098, 32, ReadWriteMode, RCCRCC_CRRCRBase, T...> ;

  struct RCCRCC_CCIPR2Base {} ;

  struct RCC_CCIPR2 : public RegisterBase<0x4002109C, 32, ReadWriteMode>
  {
    using I2C4SEL = RCC_RCC_CCIPR2_I2C4SEL_Values<RCC::RCC_CCIPR2, 0, 2, ReadWriteMode, RCCRCC_CCIPR2Base> ;
    using QSPISEL = RCC_RCC_CCIPR2_QSPISEL_Values<RCC::RCC_CCIPR2, 20, 2, ReadWriteMode, RCCRCC_CCIPR2Base> ;
    using FieldValues = RCC_RCC_CCIPR2_QSPISEL_Values<RCC::RCC_CCIPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RCC_CCIPR2Pack  = Register<0x4002109C, 32, ReadWriteMode, RCCRCC_CCIPR2Base, T...> ;

} ;

