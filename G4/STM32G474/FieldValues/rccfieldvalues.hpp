/*******************************************************************************
* Filename      : rccfieldvalues.hpp
*
* Details       : Enumerations related with RCC peripheral. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CR_HSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CR_HSION_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CR_HSION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CR_HSIKERON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CR_HSIKERON_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CR_HSIKERON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CR_HSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CR_HSIRDY_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CR_HSIRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CR_HSEON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CR_HSEON_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CR_HSEON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CR_HSERDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CR_HSERDY_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CR_HSERDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CR_HSEBYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CR_HSEBYP_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CR_HSEBYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CR_CSSON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CR_CSSON_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CR_CSSON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CR_PLLON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CR_PLLON_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CR_PLLON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CR_PLLRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CR_PLLRDY_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CR_PLLRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_ICSCR_HSICAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_ICSCR_HSITRIM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CFGR_SW_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CFGR_SW_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CFGR_SW_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CFGR_SW_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CFGR_SW_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CFGR_SWS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CFGR_SWS_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CFGR_SWS_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CFGR_SWS_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CFGR_SWS_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CFGR_HPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x8 = FieldValue<RCC_RCC_CFGR_HPRE_Values, BaseType, 8U> ;
  using B_0x9 = FieldValue<RCC_RCC_CFGR_HPRE_Values, BaseType, 9U> ;
  using B_0xA = FieldValue<RCC_RCC_CFGR_HPRE_Values, BaseType, 10U> ;
  using B_0xB = FieldValue<RCC_RCC_CFGR_HPRE_Values, BaseType, 11U> ;
  using B_0xC = FieldValue<RCC_RCC_CFGR_HPRE_Values, BaseType, 12U> ;
  using B_0xD = FieldValue<RCC_RCC_CFGR_HPRE_Values, BaseType, 13U> ;
  using B_0xE = FieldValue<RCC_RCC_CFGR_HPRE_Values, BaseType, 14U> ;
  using B_0xF = FieldValue<RCC_RCC_CFGR_HPRE_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CFGR_PPRE1_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x4 = FieldValue<RCC_RCC_CFGR_PPRE1_Values, BaseType, 4U> ;
  using B_0x5 = FieldValue<RCC_RCC_CFGR_PPRE1_Values, BaseType, 5U> ;
  using B_0x6 = FieldValue<RCC_RCC_CFGR_PPRE1_Values, BaseType, 6U> ;
  using B_0x7 = FieldValue<RCC_RCC_CFGR_PPRE1_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CFGR_PPRE2_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x4 = FieldValue<RCC_RCC_CFGR_PPRE2_Values, BaseType, 4U> ;
  using B_0x5 = FieldValue<RCC_RCC_CFGR_PPRE2_Values, BaseType, 5U> ;
  using B_0x6 = FieldValue<RCC_RCC_CFGR_PPRE2_Values, BaseType, 6U> ;
  using B_0x7 = FieldValue<RCC_RCC_CFGR_PPRE2_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CFGR_MCOSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CFGR_MCOSEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CFGR_MCOSEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CFGR_MCOSEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CFGR_MCOSEL_Values, BaseType, 3U> ;
  using B_0x4 = FieldValue<RCC_RCC_CFGR_MCOSEL_Values, BaseType, 4U> ;
  using B_0x5 = FieldValue<RCC_RCC_CFGR_MCOSEL_Values, BaseType, 5U> ;
  using B_0x6 = FieldValue<RCC_RCC_CFGR_MCOSEL_Values, BaseType, 6U> ;
  using B_0x7 = FieldValue<RCC_RCC_CFGR_MCOSEL_Values, BaseType, 7U> ;
  using B_0x8 = FieldValue<RCC_RCC_CFGR_MCOSEL_Values, BaseType, 8U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CFGR_MCOPRE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CFGR_MCOPRE_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CFGR_MCOPRE_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CFGR_MCOPRE_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CFGR_MCOPRE_Values, BaseType, 3U> ;
  using B_0x4 = FieldValue<RCC_RCC_CFGR_MCOPRE_Values, BaseType, 4U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_PLLCFGR_PLLSRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_PLLCFGR_PLLSRC_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_PLLCFGR_PLLSRC_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_PLLCFGR_PLLSRC_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_PLLCFGR_PLLSRC_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_PLLCFGR_PLLM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_PLLCFGR_PLLM_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_PLLCFGR_PLLM_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_PLLCFGR_PLLM_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_PLLCFGR_PLLM_Values, BaseType, 3U> ;
  using B_0x4 = FieldValue<RCC_RCC_PLLCFGR_PLLM_Values, BaseType, 4U> ;
  using B_0x5 = FieldValue<RCC_RCC_PLLCFGR_PLLM_Values, BaseType, 5U> ;
  using B_0x6 = FieldValue<RCC_RCC_PLLCFGR_PLLM_Values, BaseType, 6U> ;
  using B_0x7 = FieldValue<RCC_RCC_PLLCFGR_PLLM_Values, BaseType, 7U> ;
  using B_0x8 = FieldValue<RCC_RCC_PLLCFGR_PLLM_Values, BaseType, 8U> ;
  using B_0xF = FieldValue<RCC_RCC_PLLCFGR_PLLM_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_PLLCFGR_PLLN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_PLLCFGR_PLLPEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_PLLCFGR_PLLPEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_PLLCFGR_PLLPEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_PLLCFGR_PLLP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_PLLCFGR_PLLP_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_PLLCFGR_PLLP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_PLLCFGR_PLLQEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_PLLCFGR_PLLQEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_PLLCFGR_PLLQEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_PLLCFGR_PLLQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_PLLCFGR_PLLQ_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_PLLCFGR_PLLQ_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_PLLCFGR_PLLQ_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_PLLCFGR_PLLQ_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_PLLCFGR_PLLREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_PLLCFGR_PLLREN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_PLLCFGR_PLLREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_PLLCFGR_PLLR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_PLLCFGR_PLLR_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_PLLCFGR_PLLR_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_PLLCFGR_PLLR_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_PLLCFGR_PLLR_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_PLLCFGR_PLLPDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_PLLCFGR_PLLPDIV_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_PLLCFGR_PLLPDIV_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_PLLCFGR_PLLPDIV_Values, BaseType, 2U> ;
  using B_0x1F = FieldValue<RCC_RCC_PLLCFGR_PLLPDIV_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIER_LSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIER_LSIRDYIE_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIER_LSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIER_LSERDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIER_LSERDYIE_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIER_LSERDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIER_HSIRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIER_HSIRDYIE_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIER_HSIRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIER_HSERDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIER_HSERDYIE_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIER_HSERDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIER_PLLRDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIER_PLLRDYIE_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIER_PLLRDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIER_LSECSSIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIER_LSECSSIE_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIER_LSECSSIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIER_HSI48RDYIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIER_HSI48RDYIE_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIER_HSI48RDYIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIFR_LSIRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIFR_LSIRDYF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIFR_LSIRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIFR_LSERDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIFR_LSERDYF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIFR_LSERDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIFR_HSIRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIFR_HSIRDYF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIFR_HSIRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIFR_HSERDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIFR_HSERDYF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIFR_HSERDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIFR_PLLRDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIFR_PLLRDYF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIFR_PLLRDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIFR_CSSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIFR_CSSF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIFR_CSSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIFR_LSECSSF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIFR_LSECSSF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIFR_LSECSSF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CIFR_HSI48RDYF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CIFR_HSI48RDYF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CIFR_HSI48RDYF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CICR_LSIRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CICR_LSIRDYC_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CICR_LSIRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CICR_LSERDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CICR_LSERDYC_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CICR_LSERDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CICR_HSIRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CICR_HSIRDYC_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CICR_HSIRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CICR_HSERDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CICR_HSERDYC_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CICR_HSERDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CICR_PLLRDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CICR_PLLRDYC_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CICR_PLLRDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CICR_CSSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CICR_CSSC_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CICR_CSSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CICR_LSECSSC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CICR_LSECSSC_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CICR_LSECSSC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CICR_HSI48RDYC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CICR_HSI48RDYC_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CICR_HSI48RDYC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1RSTR_DMA1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1RSTR_DMA1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1RSTR_DMA1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1RSTR_DMA2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1RSTR_DMA2RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1RSTR_DMA2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1RSTR_DMAMUX1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1RSTR_DMAMUX1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1RSTR_DMAMUX1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1RSTR_CORDICRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1RSTR_CORDICRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1RSTR_CORDICRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1RSTR_FMACRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1RSTR_FMACRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1RSTR_FMACRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1RSTR_FLASHRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1RSTR_FLASHRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1RSTR_FLASHRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1RSTR_CRCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1RSTR_CRCRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1RSTR_CRCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_GPIOARST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_GPIOARST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_GPIOARST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_GPIOBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_GPIOBRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_GPIOBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_GPIOCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_GPIOCRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_GPIOCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_GPIODRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_GPIODRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_GPIODRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_GPIOERST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_GPIOERST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_GPIOERST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_GPIOFRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_GPIOFRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_GPIOFRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_GPIOGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_GPIOGRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_GPIOGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_ADC12RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_ADC12RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_ADC12RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_ADC345RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_ADC345RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_ADC345RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_DAC1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_DAC1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_DAC1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_DAC2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_DAC2RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_DAC2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_DAC3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_DAC3RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_DAC3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_DAC4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_DAC4RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_DAC4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_AESRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_AESRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_AESRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2RSTR_RNGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2RSTR_RNGRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2RSTR_RNGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB3RSTR_FMCRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB3RSTR_FMCRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB3RSTR_FMCRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB3RSTR_QSPIRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB3RSTR_QSPIRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB3RSTR_QSPIRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_TIM2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_TIM2RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_TIM2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_TIM3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_TIM3RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_TIM3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_TIM4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_TIM4RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_TIM4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_TIM5RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_TIM5RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_TIM5RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_TIM6RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_TIM6RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_TIM6RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_TIM7RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_TIM7RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_TIM7RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_CRSRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_CRSRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_CRSRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_SPI2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_SPI2RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_SPI2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_SPI3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_SPI3RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_SPI3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_USART2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_USART2RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_USART2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_USART3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_USART3RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_USART3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_UART4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_UART4RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_UART4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_UART5RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_UART5RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_UART5RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_I2C1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_I2C1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_I2C1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_I2C2RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_I2C2RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_I2C2RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_USBRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_USBRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_USBRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_FDCANRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_FDCANRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_FDCANRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_PWRRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_PWRRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_PWRRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_I2C3RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_I2C3RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_I2C3RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR1_LPTIM1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR1_LPTIM1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR1_LPTIM1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR2_LPUART1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR2_LPUART1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR2_LPUART1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR2_I2C4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR2_I2C4RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR2_I2C4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1RSTR2_UCPD1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1RSTR2_UCPD1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1RSTR2_UCPD1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_SYSCFGRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_SYSCFGRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_SYSCFGRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_TIM1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_TIM1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_TIM1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_SPI1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_SPI1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_SPI1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_TIM8RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_TIM8RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_TIM8RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_USART1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_USART1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_USART1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_SPI4RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_SPI4RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_SPI4RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_TIM15RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_TIM15RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_TIM15RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_TIM16RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_TIM16RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_TIM16RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_TIM17RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_TIM17RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_TIM17RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_TIM20RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_TIM20RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_TIM20RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_SAI1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_SAI1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_SAI1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2RSTR_HRTIM1RST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2RSTR_HRTIM1RST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2RSTR_HRTIM1RST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1ENR_DMA1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1ENR_DMA1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1ENR_DMA1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1ENR_DMA2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1ENR_DMA2EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1ENR_DMA2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1ENR_DMAMUX1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1ENR_DMAMUX1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1ENR_DMAMUX1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1ENR_CORDICEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1ENR_CORDICEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1ENR_CORDICEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1ENR_FMACEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1ENR_FMACEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1ENR_FMACEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1ENR_FLASHEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1ENR_FLASHEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1ENR_FLASHEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1ENR_CRCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1ENR_CRCEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1ENR_CRCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_GPIOAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_GPIOAEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_GPIOAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_GPIOBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_GPIOBEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_GPIOBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_GPIOCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_GPIOCEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_GPIOCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_GPIODEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_GPIODEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_GPIODEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_GPIOEEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_GPIOEEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_GPIOEEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_GPIOFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_GPIOFEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_GPIOFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_GPIOGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_GPIOGEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_GPIOGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_ADC12EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_ADC12EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_ADC12EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_ADC345EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_ADC345EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_ADC345EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_DAC1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_DAC1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_DAC1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_DAC2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_DAC2EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_DAC2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_DAC3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_DAC3EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_DAC3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_DAC4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_DAC4EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_DAC4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_AESEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_AESEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_AESEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2ENR_RNGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2ENR_RNGEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2ENR_RNGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB3ENR_FMCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB3ENR_FMCEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB3ENR_FMCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB3ENR_QSPIEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB3ENR_QSPIEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB3ENR_QSPIEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_TIM2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_TIM2EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_TIM2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_TIM3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_TIM3EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_TIM3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_TIM4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_TIM4EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_TIM4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_TIM5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_TIM5EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_TIM5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_TIM6EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_TIM6EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_TIM6EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_TIM7EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_TIM7EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_TIM7EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_CRSEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_CRSEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_CRSEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_RTCAPBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_RTCAPBEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_RTCAPBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_WWDGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_WWDGEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_WWDGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_SPI2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_SPI2EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_SPI2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_SPI3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_SPI3EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_SPI3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_USART2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_USART2EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_USART2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_USART3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_USART3EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_USART3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_UART4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_UART4EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_UART4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_UART5EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_UART5EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_UART5EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_I2C1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_I2C1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_I2C1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_I2C2EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_I2C2EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_I2C2EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_USBEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_USBEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_USBEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_FDCANEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_FDCANEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_FDCANEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_PWREN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_PWREN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_PWREN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_I2C3EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_I2C3EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_I2C3EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR1_LPTIM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR1_LPTIM1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR1_LPTIM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR2_LPUART1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR2_LPUART1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR2_LPUART1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR2_I2C4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR2_I2C4EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR2_I2C4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1ENR2_UCPD1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1ENR2_UCPD1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1ENR2_UCPD1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_SYSCFGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_SYSCFGEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_SYSCFGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_TIM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_TIM1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_TIM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_SPI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_SPI1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_SPI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_TIM8EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_TIM8EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_TIM8EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_USART1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_USART1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_USART1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_SPI4EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_SPI4EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_SPI4EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_TIM15EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_TIM15EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_TIM15EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_TIM16EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_TIM16EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_TIM16EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_TIM17EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_TIM17EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_TIM17EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_TIM20EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_TIM20EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_TIM20EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_SAI1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_SAI1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_SAI1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2ENR_HRTIM1EN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2ENR_HRTIM1EN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2ENR_HRTIM1EN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1SMENR_DMA1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1SMENR_DMA1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1SMENR_DMA1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1SMENR_DMA2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1SMENR_DMA2SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1SMENR_DMA2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1SMENR_DMAMUX1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1SMENR_DMAMUX1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1SMENR_DMAMUX1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1SMENR_CORDICSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1SMENR_CORDICSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1SMENR_CORDICSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1SMENR_FMACSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1SMENR_FMACSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1SMENR_FMACSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1SMENR_FLASHSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1SMENR_FLASHSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1SMENR_FLASHSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1SMENR_SRAM1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1SMENR_SRAM1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1SMENR_SRAM1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB1SMENR_CRCSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB1SMENR_CRCSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB1SMENR_CRCSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_GPIOASMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_GPIOASMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_GPIOASMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_GPIOBSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_GPIOBSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_GPIOBSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_GPIOCSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_GPIOCSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_GPIOCSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_GPIODSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_GPIODSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_GPIODSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_GPIOESMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_GPIOESMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_GPIOESMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_GPIOFSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_GPIOFSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_GPIOFSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_GPIOGSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_GPIOGSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_GPIOGSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_CCMSRAMSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_CCMSRAMSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_CCMSRAMSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_SRAM2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_SRAM2SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_SRAM2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_ADC12SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_ADC12SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_ADC12SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_ADC345SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_ADC345SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_ADC345SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_DAC1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_DAC1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_DAC1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_DAC2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_DAC2SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_DAC2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_DAC3SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_DAC3SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_DAC3SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_DAC4SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_DAC4SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_DAC4SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_AESSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_AESSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_AESSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB2SMENR_RNGEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB2SMENR_RNGEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB2SMENR_RNGEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB3SMENR_FMCSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB3SMENR_FMCSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB3SMENR_FMCSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_AHB3SMENR_QSPISMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_AHB3SMENR_QSPISMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_AHB3SMENR_QSPISMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_TIM2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_TIM2SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_TIM2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_TIM3SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_TIM3SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_TIM3SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_TIM4SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_TIM4SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_TIM4SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_TIM5SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_TIM5SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_TIM5SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_TIM6SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_TIM6SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_TIM6SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_TIM7SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_TIM7SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_TIM7SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_CRSSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_CRSSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_CRSSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_RTCAPBSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_RTCAPBSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_RTCAPBSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_WWDGSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_WWDGSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_WWDGSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_SPI2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_SPI2SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_SPI2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_SPI3SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_SPI3SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_SPI3SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_USART2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_USART2SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_USART2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_USART3SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_USART3SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_USART3SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_UART4SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_UART4SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_UART4SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_UART5SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_UART5SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_UART5SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_I2C1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_I2C1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_I2C1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_I2C2SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_I2C2SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_I2C2SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_USBSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_USBSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_USBSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_FDCANSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_FDCANSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_FDCANSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_PWRSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_PWRSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_PWRSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_I2C3SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_I2C3SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_I2C3SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR1_LPTIM1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR1_LPTIM1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR1_LPTIM1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR2_LPUART1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR2_LPUART1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR2_LPUART1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR2_I2C4SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR2_I2C4SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR2_I2C4SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB1SMENR2_UCPD1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB1SMENR2_UCPD1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB1SMENR2_UCPD1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_SYSCFGSMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_SYSCFGSMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_SYSCFGSMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_TIM1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_TIM1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_TIM1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_SPI1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_SPI1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_SPI1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_TIM8SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_TIM8SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_TIM8SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_USART1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_USART1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_USART1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_SPI4SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_SPI4SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_SPI4SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_TIM15SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_TIM15SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_TIM15SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_TIM16SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_TIM16SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_TIM16SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_TIM17SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_TIM17SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_TIM17SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_TIM20SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_TIM20SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_TIM20SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_SAI1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_SAI1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_SAI1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_APB2SMENR_HRTIM1SMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_APB2SMENR_HRTIM1SMEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_APB2SMENR_HRTIM1SMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_USART1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_USART1SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_USART1SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_USART1SEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CCIPR_USART1SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_USART2SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_USART2SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_USART2SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_USART2SEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CCIPR_USART2SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_USART3SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_USART3SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_USART3SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_USART3SEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CCIPR_USART3SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_UART4SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_UART4SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_UART4SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_UART4SEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CCIPR_UART4SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_UART5SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_UART5SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_UART5SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_UART5SEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CCIPR_UART5SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_LPUART1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_LPUART1SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_LPUART1SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_LPUART1SEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CCIPR_LPUART1SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_I2C1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_I2C1SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_I2C1SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_I2C1SEL_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_I2C2SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_I2C2SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_I2C2SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_I2C2SEL_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_I2C3SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_I2C3SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_I2C3SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_I2C3SEL_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_LPTIM1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_LPTIM1SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_LPTIM1SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_LPTIM1SEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CCIPR_LPTIM1SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_SAI1SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_SAI1SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_SAI1SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_SAI1SEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CCIPR_SAI1SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_I2S23SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_I2S23SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_I2S23SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_I2S23SEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CCIPR_I2S23SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_FDCANSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<RCC_RCC_CCIPR_FDCANSEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<RCC_RCC_CCIPR_FDCANSEL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<RCC_RCC_CCIPR_FDCANSEL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<RCC_RCC_CCIPR_FDCANSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_CLK48SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_CLK48SEL_Values, BaseType, 0U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_CLK48SEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CCIPR_CLK48SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_ADC12SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_ADC12SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_ADC12SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_ADC12SEL_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR_ADC345SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR_ADC345SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR_ADC345SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR_ADC345SEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_CCIPR_ADC345SEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_BDCR_LSEON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_BDCR_LSEON_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_BDCR_LSEON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_BDCR_LSERDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_BDCR_LSERDY_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_BDCR_LSERDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_BDCR_LSEBYP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_BDCR_LSEBYP_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_BDCR_LSEBYP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_BDCR_LSEDRV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_BDCR_LSEDRV_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_BDCR_LSEDRV_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_BDCR_LSEDRV_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_BDCR_LSEDRV_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_BDCR_LSECSSON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_BDCR_LSECSSON_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_BDCR_LSECSSON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_BDCR_LSECSSD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_BDCR_LSECSSD_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_BDCR_LSECSSD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_BDCR_RTCSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_BDCR_RTCSEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_BDCR_RTCSEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_BDCR_RTCSEL_Values, BaseType, 2U> ;
  using B_0x3 = FieldValue<RCC_RCC_BDCR_RTCSEL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_BDCR_RTCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_BDCR_RTCEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_BDCR_RTCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_BDCR_BDRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_BDCR_BDRST_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_BDCR_BDRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_BDCR_LSCOEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_BDCR_LSCOEN_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_BDCR_LSCOEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_BDCR_LSCOSEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_BDCR_LSCOSEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_BDCR_LSCOSEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CSR_LSION_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CSR_LSION_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CSR_LSION_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CSR_LSIRDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CSR_LSIRDY_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CSR_LSIRDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CSR_RMVF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CSR_RMVF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CSR_RMVF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CSR_OBLRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CSR_OBLRSTF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CSR_OBLRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CSR_PINRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CSR_PINRSTF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CSR_PINRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CSR_BORRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CSR_BORRSTF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CSR_BORRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CSR_SFTRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CSR_SFTRSTF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CSR_SFTRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CSR_IWDGRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CSR_IWDGRSTF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CSR_IWDGRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CSR_WWDGRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CSR_WWDGRSTF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CSR_WWDGRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CSR_LPWRRSTF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CSR_LPWRRSTF_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CSR_LPWRRSTF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CRRCR_HSI48ON_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CRRCR_HSI48ON_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CRRCR_HSI48ON_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CRRCR_HSI48RDY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CRRCR_HSI48RDY_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CRRCR_HSI48RDY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CRRCR_HSI48CAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR2_I2C4SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR2_I2C4SEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR2_I2C4SEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR2_I2C4SEL_Values, BaseType, 2U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct RCC_RCC_CCIPR2_QSPISEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using B_0x0 = FieldValue<RCC_RCC_CCIPR2_QSPISEL_Values, BaseType, 0U> ;
  using B_0x1 = FieldValue<RCC_RCC_CCIPR2_QSPISEL_Values, BaseType, 1U> ;
  using B_0x2 = FieldValue<RCC_RCC_CCIPR2_QSPISEL_Values, BaseType, 2U> ;
} ;

