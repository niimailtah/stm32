/*******************************************************************************
* Filename      : otghspwrclkfieldvalues.hpp
*
* Details       : Enumerations related with OTG_HS_PWRCLK peripheral. This
*                 header file is auto-generated for STM32F405 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct OTG_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<OTG_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<OTG_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP_Values, BaseType, 1U> ;
} ;

