/*******************************************************************************
* Filename      : adc12commonregisters.hpp
*
* Details       : Analog-to-Digital Converter. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "adc12commonfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC12_Common
{
  struct ADC12_CommonCSRBase {} ;

  struct CSR : public RegisterBase<0x50000300, 32, ReadMode>
  {
    using ADDRDY_MST = ADC12_Common_CSR_ADDRDY_MST_Values<ADC12_Common::CSR, 0, 1, ReadMode, ADC12_CommonCSRBase> ;
    using EOSMP_MST = ADC12_Common_CSR_EOSMP_MST_Values<ADC12_Common::CSR, 1, 1, ReadMode, ADC12_CommonCSRBase> ;
    using EOC_MST = ADC12_Common_CSR_EOC_MST_Values<ADC12_Common::CSR, 2, 1, ReadMode, ADC12_CommonCSRBase> ;
    using EOS_MST = ADC12_Common_CSR_EOS_MST_Values<ADC12_Common::CSR, 3, 1, ReadMode, ADC12_CommonCSRBase> ;
    using OVR_MST = ADC12_Common_CSR_OVR_MST_Values<ADC12_Common::CSR, 4, 1, ReadMode, ADC12_CommonCSRBase> ;
    using JEOC_MST = ADC12_Common_CSR_JEOC_MST_Values<ADC12_Common::CSR, 5, 1, ReadMode, ADC12_CommonCSRBase> ;
    using JEOS_MST = ADC12_Common_CSR_JEOS_MST_Values<ADC12_Common::CSR, 6, 1, ReadMode, ADC12_CommonCSRBase> ;
    using AWD1_MST = ADC12_Common_CSR_AWD1_MST_Values<ADC12_Common::CSR, 7, 1, ReadMode, ADC12_CommonCSRBase> ;
    using AWD2_MST = ADC12_Common_CSR_AWD2_MST_Values<ADC12_Common::CSR, 8, 1, ReadMode, ADC12_CommonCSRBase> ;
    using AWD3_MST = ADC12_Common_CSR_AWD3_MST_Values<ADC12_Common::CSR, 9, 1, ReadMode, ADC12_CommonCSRBase> ;
    using JQOVF_MST = ADC12_Common_CSR_JQOVF_MST_Values<ADC12_Common::CSR, 10, 1, ReadMode, ADC12_CommonCSRBase> ;
    using ADRDY_SLV = ADC12_Common_CSR_ADRDY_SLV_Values<ADC12_Common::CSR, 16, 1, ReadMode, ADC12_CommonCSRBase> ;
    using EOSMP_SLV = ADC12_Common_CSR_EOSMP_SLV_Values<ADC12_Common::CSR, 17, 1, ReadMode, ADC12_CommonCSRBase> ;
    using EOC_SLV = ADC12_Common_CSR_EOC_SLV_Values<ADC12_Common::CSR, 18, 1, ReadMode, ADC12_CommonCSRBase> ;
    using EOS_SLV = ADC12_Common_CSR_EOS_SLV_Values<ADC12_Common::CSR, 19, 1, ReadMode, ADC12_CommonCSRBase> ;
    using OVR_SLV = ADC12_Common_CSR_OVR_SLV_Values<ADC12_Common::CSR, 20, 1, ReadMode, ADC12_CommonCSRBase> ;
    using JEOC_SLV = ADC12_Common_CSR_JEOC_SLV_Values<ADC12_Common::CSR, 21, 1, ReadMode, ADC12_CommonCSRBase> ;
    using JEOS_SLV = ADC12_Common_CSR_JEOS_SLV_Values<ADC12_Common::CSR, 22, 1, ReadMode, ADC12_CommonCSRBase> ;
    using AWD1_SLV = ADC12_Common_CSR_AWD1_SLV_Values<ADC12_Common::CSR, 23, 1, ReadMode, ADC12_CommonCSRBase> ;
    using AWD2_SLV = ADC12_Common_CSR_AWD2_SLV_Values<ADC12_Common::CSR, 24, 1, ReadMode, ADC12_CommonCSRBase> ;
    using AWD3_SLV = ADC12_Common_CSR_AWD3_SLV_Values<ADC12_Common::CSR, 25, 1, ReadMode, ADC12_CommonCSRBase> ;
    using JQOVF_SLV = ADC12_Common_CSR_JQOVF_SLV_Values<ADC12_Common::CSR, 26, 1, ReadMode, ADC12_CommonCSRBase> ;
    using FieldValues = ADC12_Common_CSR_JQOVF_SLV_Values<ADC12_Common::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x50000300, 32, ReadMode, ADC12_CommonCSRBase, T...> ;

  struct ADC12_CommonCCRBase {} ;

  struct CCR : public RegisterBase<0x50000308, 32, ReadWriteMode>
  {
    using DUAL = ADC12_Common_CCR_DUAL_Values<ADC12_Common::CCR, 0, 5, ReadWriteMode, ADC12_CommonCCRBase> ;
    using DELAY = ADC12_Common_CCR_DELAY_Values<ADC12_Common::CCR, 8, 4, ReadWriteMode, ADC12_CommonCCRBase> ;
    using DMACFG = ADC12_Common_CCR_DMACFG_Values<ADC12_Common::CCR, 13, 1, ReadWriteMode, ADC12_CommonCCRBase> ;
    using MDMA = ADC12_Common_CCR_MDMA_Values<ADC12_Common::CCR, 14, 2, ReadWriteMode, ADC12_CommonCCRBase> ;
    using CKMODE = ADC12_Common_CCR_CKMODE_Values<ADC12_Common::CCR, 16, 2, ReadWriteMode, ADC12_CommonCCRBase> ;
    using VREFEN = ADC12_Common_CCR_VREFEN_Values<ADC12_Common::CCR, 22, 1, ReadWriteMode, ADC12_CommonCCRBase> ;
    using VSENSESEL = ADC12_Common_CCR_VSENSESEL_Values<ADC12_Common::CCR, 23, 1, ReadWriteMode, ADC12_CommonCCRBase> ;
    using VBATSEL = ADC12_Common_CCR_VBATSEL_Values<ADC12_Common::CCR, 24, 1, ReadWriteMode, ADC12_CommonCCRBase> ;
    using PRESC = ADC12_Common_CCR_PRESC_Values<ADC12_Common::CCR, 18, 4, ReadWriteMode, ADC12_CommonCCRBase> ;
    using FieldValues = ADC12_Common_CCR_PRESC_Values<ADC12_Common::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x50000308, 32, ReadWriteMode, ADC12_CommonCCRBase, T...> ;

  struct ADC12_CommonCDRBase {} ;

  struct CDR : public RegisterBase<0x5000030C, 32, ReadMode>
  {
    using RDATA_SLV = ADC12_Common_CDR_RDATA_SLV_Values<ADC12_Common::CDR, 16, 16, ReadMode, ADC12_CommonCDRBase> ;
    using RDATA_MST = ADC12_Common_CDR_RDATA_MST_Values<ADC12_Common::CDR, 0, 16, ReadMode, ADC12_CommonCDRBase> ;
    using FieldValues = ADC12_Common_CDR_RDATA_MST_Values<ADC12_Common::CDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CDRPack  = Register<0x5000030C, 32, ReadMode, ADC12_CommonCDRBase, T...> ;

} ;

