/*******************************************************************************
* Filename      : adc5registers.hpp
*
* Details       : Analog-to-Digital Converter. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "adc5fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC5
{
  struct ADC5ISRBase {} ;

  struct ISR : public RegisterBase<0x50000600, 32, ReadWriteMode>
  {
    using JQOVF = ADC5_ISR_JQOVF_Values<ADC5::ISR, 10, 1, ReadWriteMode, ADC5ISRBase> ;
    using AWD3 = ADC5_ISR_AWD3_Values<ADC5::ISR, 9, 1, ReadWriteMode, ADC5ISRBase> ;
    using AWD2 = ADC5_ISR_AWD2_Values<ADC5::ISR, 8, 1, ReadWriteMode, ADC5ISRBase> ;
    using AWD1 = ADC5_ISR_AWD1_Values<ADC5::ISR, 7, 1, ReadWriteMode, ADC5ISRBase> ;
    using JEOS = ADC5_ISR_JEOS_Values<ADC5::ISR, 6, 1, ReadWriteMode, ADC5ISRBase> ;
    using JEOC = ADC5_ISR_JEOC_Values<ADC5::ISR, 5, 1, ReadWriteMode, ADC5ISRBase> ;
    using OVR = ADC5_ISR_OVR_Values<ADC5::ISR, 4, 1, ReadWriteMode, ADC5ISRBase> ;
    using EOS = ADC5_ISR_EOS_Values<ADC5::ISR, 3, 1, ReadWriteMode, ADC5ISRBase> ;
    using EOC = ADC5_ISR_EOC_Values<ADC5::ISR, 2, 1, ReadWriteMode, ADC5ISRBase> ;
    using EOSMP = ADC5_ISR_EOSMP_Values<ADC5::ISR, 1, 1, ReadWriteMode, ADC5ISRBase> ;
    using ADRDY = ADC5_ISR_ADRDY_Values<ADC5::ISR, 0, 1, ReadWriteMode, ADC5ISRBase> ;
    using FieldValues = ADC5_ISR_ADRDY_Values<ADC5::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x50000600, 32, ReadWriteMode, ADC5ISRBase, T...> ;

  struct ADC5IERBase {} ;

  struct IER : public RegisterBase<0x50000604, 32, ReadWriteMode>
  {
    using JQOVFIE = ADC5_IER_JQOVFIE_Values<ADC5::IER, 10, 1, ReadWriteMode, ADC5IERBase> ;
    using AWD3IE = ADC5_IER_AWD3IE_Values<ADC5::IER, 9, 1, ReadWriteMode, ADC5IERBase> ;
    using AWD2IE = ADC5_IER_AWD2IE_Values<ADC5::IER, 8, 1, ReadWriteMode, ADC5IERBase> ;
    using AWD1IE = ADC5_IER_AWD1IE_Values<ADC5::IER, 7, 1, ReadWriteMode, ADC5IERBase> ;
    using JEOSIE = ADC5_IER_JEOSIE_Values<ADC5::IER, 6, 1, ReadWriteMode, ADC5IERBase> ;
    using JEOCIE = ADC5_IER_JEOCIE_Values<ADC5::IER, 5, 1, ReadWriteMode, ADC5IERBase> ;
    using OVRIE = ADC5_IER_OVRIE_Values<ADC5::IER, 4, 1, ReadWriteMode, ADC5IERBase> ;
    using EOSIE = ADC5_IER_EOSIE_Values<ADC5::IER, 3, 1, ReadWriteMode, ADC5IERBase> ;
    using EOCIE = ADC5_IER_EOCIE_Values<ADC5::IER, 2, 1, ReadWriteMode, ADC5IERBase> ;
    using EOSMPIE = ADC5_IER_EOSMPIE_Values<ADC5::IER, 1, 1, ReadWriteMode, ADC5IERBase> ;
    using ADRDYIE = ADC5_IER_ADRDYIE_Values<ADC5::IER, 0, 1, ReadWriteMode, ADC5IERBase> ;
    using FieldValues = ADC5_IER_ADRDYIE_Values<ADC5::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x50000604, 32, ReadWriteMode, ADC5IERBase, T...> ;

  struct ADC5CRBase {} ;

  struct CR : public RegisterBase<0x50000608, 32, ReadWriteMode>
  {
    using ADCAL = ADC5_CR_ADCAL_Values<ADC5::CR, 31, 1, ReadWriteMode, ADC5CRBase> ;
    using ADCALDIF = ADC5_CR_ADCALDIF_Values<ADC5::CR, 30, 1, ReadWriteMode, ADC5CRBase> ;
    using DEEPPWD = ADC5_CR_DEEPPWD_Values<ADC5::CR, 29, 1, ReadWriteMode, ADC5CRBase> ;
    using ADVREGEN = ADC5_CR_ADVREGEN_Values<ADC5::CR, 28, 1, ReadWriteMode, ADC5CRBase> ;
    using JADSTP = ADC5_CR_JADSTP_Values<ADC5::CR, 5, 1, ReadWriteMode, ADC5CRBase> ;
    using ADSTP = ADC5_CR_ADSTP_Values<ADC5::CR, 4, 1, ReadWriteMode, ADC5CRBase> ;
    using JADSTART = ADC5_CR_JADSTART_Values<ADC5::CR, 3, 1, ReadWriteMode, ADC5CRBase> ;
    using ADSTART = ADC5_CR_ADSTART_Values<ADC5::CR, 2, 1, ReadWriteMode, ADC5CRBase> ;
    using ADDIS = ADC5_CR_ADDIS_Values<ADC5::CR, 1, 1, ReadWriteMode, ADC5CRBase> ;
    using ADEN = ADC5_CR_ADEN_Values<ADC5::CR, 0, 1, ReadWriteMode, ADC5CRBase> ;
    using FieldValues = ADC5_CR_ADEN_Values<ADC5::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x50000608, 32, ReadWriteMode, ADC5CRBase, T...> ;

  struct ADC5CFGRBase {} ;

  struct CFGR : public RegisterBase<0x5000060C, 32, ReadWriteMode>
  {
    using JQDIS = ADC5_CFGR_JQDIS_Values<ADC5::CFGR, 31, 1, ReadWriteMode, ADC5CFGRBase> ;
    using AWDCH1CH = ADC5_CFGR_AWDCH1CH_Values<ADC5::CFGR, 26, 5, ReadWriteMode, ADC5CFGRBase> ;
    using JAUTO = ADC5_CFGR_JAUTO_Values<ADC5::CFGR, 25, 1, ReadWriteMode, ADC5CFGRBase> ;
    using JAWD1EN = ADC5_CFGR_JAWD1EN_Values<ADC5::CFGR, 24, 1, ReadWriteMode, ADC5CFGRBase> ;
    using AWD1EN = ADC5_CFGR_AWD1EN_Values<ADC5::CFGR, 23, 1, ReadWriteMode, ADC5CFGRBase> ;
    using AWD1SGL = ADC5_CFGR_AWD1SGL_Values<ADC5::CFGR, 22, 1, ReadWriteMode, ADC5CFGRBase> ;
    using JQM = ADC5_CFGR_JQM_Values<ADC5::CFGR, 21, 1, ReadWriteMode, ADC5CFGRBase> ;
    using JDISCEN = ADC5_CFGR_JDISCEN_Values<ADC5::CFGR, 20, 1, ReadWriteMode, ADC5CFGRBase> ;
    using DISCNUM = ADC5_CFGR_DISCNUM_Values<ADC5::CFGR, 17, 3, ReadWriteMode, ADC5CFGRBase> ;
    using DISCEN = ADC5_CFGR_DISCEN_Values<ADC5::CFGR, 16, 1, ReadWriteMode, ADC5CFGRBase> ;
    using ALIGN = ADC5_CFGR_ALIGN_Values<ADC5::CFGR, 15, 1, ReadWriteMode, ADC5CFGRBase> ;
    using AUTDLY = ADC5_CFGR_AUTDLY_Values<ADC5::CFGR, 14, 1, ReadWriteMode, ADC5CFGRBase> ;
    using CONT = ADC5_CFGR_CONT_Values<ADC5::CFGR, 13, 1, ReadWriteMode, ADC5CFGRBase> ;
    using OVRMOD = ADC5_CFGR_OVRMOD_Values<ADC5::CFGR, 12, 1, ReadWriteMode, ADC5CFGRBase> ;
    using EXTEN = ADC5_CFGR_EXTEN_Values<ADC5::CFGR, 10, 2, ReadWriteMode, ADC5CFGRBase> ;
    using EXTSEL = ADC5_CFGR_EXTSEL_Values<ADC5::CFGR, 5, 5, ReadWriteMode, ADC5CFGRBase> ;
    using RES = ADC5_CFGR_RES_Values<ADC5::CFGR, 3, 2, ReadWriteMode, ADC5CFGRBase> ;
    using DMACFG = ADC5_CFGR_DMACFG_Values<ADC5::CFGR, 1, 1, ReadWriteMode, ADC5CFGRBase> ;
    using DMAEN = ADC5_CFGR_DMAEN_Values<ADC5::CFGR, 0, 1, ReadWriteMode, ADC5CFGRBase> ;
    using FieldValues = ADC5_CFGR_DMAEN_Values<ADC5::CFGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGRPack  = Register<0x5000060C, 32, ReadWriteMode, ADC5CFGRBase, T...> ;

  struct ADC5CFGR2Base {} ;

  struct CFGR2 : public RegisterBase<0x50000610, 32, ReadWriteMode>
  {
    using SMPTRIG = ADC5_CFGR2_SMPTRIG_Values<ADC5::CFGR2, 27, 1, ReadWriteMode, ADC5CFGR2Base> ;
    using BULB = ADC5_CFGR2_BULB_Values<ADC5::CFGR2, 26, 1, ReadWriteMode, ADC5CFGR2Base> ;
    using SWTRIG = ADC5_CFGR2_SWTRIG_Values<ADC5::CFGR2, 25, 1, ReadWriteMode, ADC5CFGR2Base> ;
    using GCOMP = ADC5_CFGR2_GCOMP_Values<ADC5::CFGR2, 16, 1, ReadWriteMode, ADC5CFGR2Base> ;
    using ROVSM = ADC5_CFGR2_ROVSM_Values<ADC5::CFGR2, 10, 1, ReadWriteMode, ADC5CFGR2Base> ;
    using TROVS = ADC5_CFGR2_TROVS_Values<ADC5::CFGR2, 9, 1, ReadWriteMode, ADC5CFGR2Base> ;
    using OVSS = ADC5_CFGR2_OVSS_Values<ADC5::CFGR2, 5, 4, ReadWriteMode, ADC5CFGR2Base> ;
    using OVSR = ADC5_CFGR2_OVSR_Values<ADC5::CFGR2, 2, 3, ReadWriteMode, ADC5CFGR2Base> ;
    using JOVSE = ADC5_CFGR2_JOVSE_Values<ADC5::CFGR2, 1, 1, ReadWriteMode, ADC5CFGR2Base> ;
    using ROVSE = ADC5_CFGR2_ROVSE_Values<ADC5::CFGR2, 0, 1, ReadWriteMode, ADC5CFGR2Base> ;
    using FieldValues = ADC5_CFGR2_ROVSE_Values<ADC5::CFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFGR2Pack  = Register<0x50000610, 32, ReadWriteMode, ADC5CFGR2Base, T...> ;

  struct ADC5SMPR1Base {} ;

  struct SMPR1 : public RegisterBase<0x50000614, 32, ReadWriteMode>
  {
    using SMP9 = ADC5_SMPR1_SMP9_Values<ADC5::SMPR1, 27, 3, ReadWriteMode, ADC5SMPR1Base> ;
    using SMP8 = ADC5_SMPR1_SMP8_Values<ADC5::SMPR1, 24, 3, ReadWriteMode, ADC5SMPR1Base> ;
    using SMP7 = ADC5_SMPR1_SMP7_Values<ADC5::SMPR1, 21, 3, ReadWriteMode, ADC5SMPR1Base> ;
    using SMP6 = ADC5_SMPR1_SMP6_Values<ADC5::SMPR1, 18, 3, ReadWriteMode, ADC5SMPR1Base> ;
    using SMP5 = ADC5_SMPR1_SMP5_Values<ADC5::SMPR1, 15, 3, ReadWriteMode, ADC5SMPR1Base> ;
    using SMP4 = ADC5_SMPR1_SMP4_Values<ADC5::SMPR1, 12, 3, ReadWriteMode, ADC5SMPR1Base> ;
    using SMP3 = ADC5_SMPR1_SMP3_Values<ADC5::SMPR1, 9, 3, ReadWriteMode, ADC5SMPR1Base> ;
    using SMP2 = ADC5_SMPR1_SMP2_Values<ADC5::SMPR1, 6, 3, ReadWriteMode, ADC5SMPR1Base> ;
    using SMP1 = ADC5_SMPR1_SMP1_Values<ADC5::SMPR1, 3, 3, ReadWriteMode, ADC5SMPR1Base> ;
    using SMPPLUS = ADC5_SMPR1_SMPPLUS_Values<ADC5::SMPR1, 31, 1, ReadWriteMode, ADC5SMPR1Base> ;
    using SMP0 = ADC5_SMPR1_SMP0_Values<ADC5::SMPR1, 0, 3, ReadWriteMode, ADC5SMPR1Base> ;
    using FieldValues = ADC5_SMPR1_SMP0_Values<ADC5::SMPR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR1Pack  = Register<0x50000614, 32, ReadWriteMode, ADC5SMPR1Base, T...> ;

  struct ADC5SMPR2Base {} ;

  struct SMPR2 : public RegisterBase<0x50000618, 32, ReadWriteMode>
  {
    using SMP18 = ADC5_SMPR2_SMP18_Values<ADC5::SMPR2, 24, 3, ReadWriteMode, ADC5SMPR2Base> ;
    using SMP17 = ADC5_SMPR2_SMP17_Values<ADC5::SMPR2, 21, 3, ReadWriteMode, ADC5SMPR2Base> ;
    using SMP16 = ADC5_SMPR2_SMP16_Values<ADC5::SMPR2, 18, 3, ReadWriteMode, ADC5SMPR2Base> ;
    using SMP15 = ADC5_SMPR2_SMP15_Values<ADC5::SMPR2, 15, 3, ReadWriteMode, ADC5SMPR2Base> ;
    using SMP14 = ADC5_SMPR2_SMP14_Values<ADC5::SMPR2, 12, 3, ReadWriteMode, ADC5SMPR2Base> ;
    using SMP13 = ADC5_SMPR2_SMP13_Values<ADC5::SMPR2, 9, 3, ReadWriteMode, ADC5SMPR2Base> ;
    using SMP12 = ADC5_SMPR2_SMP12_Values<ADC5::SMPR2, 6, 3, ReadWriteMode, ADC5SMPR2Base> ;
    using SMP11 = ADC5_SMPR2_SMP11_Values<ADC5::SMPR2, 3, 3, ReadWriteMode, ADC5SMPR2Base> ;
    using SMP10 = ADC5_SMPR2_SMP10_Values<ADC5::SMPR2, 0, 3, ReadWriteMode, ADC5SMPR2Base> ;
    using FieldValues = ADC5_SMPR2_SMP10_Values<ADC5::SMPR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SMPR2Pack  = Register<0x50000618, 32, ReadWriteMode, ADC5SMPR2Base, T...> ;

  struct ADC5TR1Base {} ;

  struct TR1 : public RegisterBase<0x50000620, 32, ReadWriteMode>
  {
    using HT1 = ADC5_TR1_HT1_Values<ADC5::TR1, 16, 12, ReadWriteMode, ADC5TR1Base> ;
    using AWDFILT = ADC5_TR1_AWDFILT_Values<ADC5::TR1, 12, 3, ReadWriteMode, ADC5TR1Base> ;
    using LT1 = ADC5_TR1_LT1_Values<ADC5::TR1, 0, 12, ReadWriteMode, ADC5TR1Base> ;
    using FieldValues = ADC5_TR1_LT1_Values<ADC5::TR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR1Pack  = Register<0x50000620, 32, ReadWriteMode, ADC5TR1Base, T...> ;

  struct ADC5TR2Base {} ;

  struct TR2 : public RegisterBase<0x50000624, 32, ReadWriteMode>
  {
    using HT2 = ADC5_TR2_HT2_Values<ADC5::TR2, 16, 8, ReadWriteMode, ADC5TR2Base> ;
    using LT2 = ADC5_TR2_LT2_Values<ADC5::TR2, 0, 8, ReadWriteMode, ADC5TR2Base> ;
    using FieldValues = ADC5_TR2_LT2_Values<ADC5::TR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR2Pack  = Register<0x50000624, 32, ReadWriteMode, ADC5TR2Base, T...> ;

  struct ADC5TR3Base {} ;

  struct TR3 : public RegisterBase<0x50000628, 32, ReadWriteMode>
  {
    using HT3 = ADC5_TR3_HT3_Values<ADC5::TR3, 16, 8, ReadWriteMode, ADC5TR3Base> ;
    using LT3 = ADC5_TR3_LT3_Values<ADC5::TR3, 0, 8, ReadWriteMode, ADC5TR3Base> ;
    using FieldValues = ADC5_TR3_LT3_Values<ADC5::TR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TR3Pack  = Register<0x50000628, 32, ReadWriteMode, ADC5TR3Base, T...> ;

  struct ADC5SQR1Base {} ;

  struct SQR1 : public RegisterBase<0x50000630, 32, ReadWriteMode>
  {
    using SQ4 = ADC5_SQR1_SQ4_Values<ADC5::SQR1, 24, 5, ReadWriteMode, ADC5SQR1Base> ;
    using SQ3 = ADC5_SQR1_SQ3_Values<ADC5::SQR1, 18, 5, ReadWriteMode, ADC5SQR1Base> ;
    using SQ2 = ADC5_SQR1_SQ2_Values<ADC5::SQR1, 12, 5, ReadWriteMode, ADC5SQR1Base> ;
    using SQ1 = ADC5_SQR1_SQ1_Values<ADC5::SQR1, 6, 5, ReadWriteMode, ADC5SQR1Base> ;
    using L = ADC5_SQR1_L_Values<ADC5::SQR1, 0, 4, ReadWriteMode, ADC5SQR1Base> ;
    using FieldValues = ADC5_SQR1_L_Values<ADC5::SQR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR1Pack  = Register<0x50000630, 32, ReadWriteMode, ADC5SQR1Base, T...> ;

  struct ADC5SQR2Base {} ;

  struct SQR2 : public RegisterBase<0x50000634, 32, ReadWriteMode>
  {
    using SQ9 = ADC5_SQR2_SQ9_Values<ADC5::SQR2, 24, 5, ReadWriteMode, ADC5SQR2Base> ;
    using SQ8 = ADC5_SQR2_SQ8_Values<ADC5::SQR2, 18, 5, ReadWriteMode, ADC5SQR2Base> ;
    using SQ7 = ADC5_SQR2_SQ7_Values<ADC5::SQR2, 12, 5, ReadWriteMode, ADC5SQR2Base> ;
    using SQ6 = ADC5_SQR2_SQ6_Values<ADC5::SQR2, 6, 5, ReadWriteMode, ADC5SQR2Base> ;
    using SQ5 = ADC5_SQR2_SQ5_Values<ADC5::SQR2, 0, 5, ReadWriteMode, ADC5SQR2Base> ;
    using FieldValues = ADC5_SQR2_SQ5_Values<ADC5::SQR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR2Pack  = Register<0x50000634, 32, ReadWriteMode, ADC5SQR2Base, T...> ;

  struct ADC5SQR3Base {} ;

  struct SQR3 : public RegisterBase<0x50000638, 32, ReadWriteMode>
  {
    using SQ14 = ADC5_SQR3_SQ14_Values<ADC5::SQR3, 24, 5, ReadWriteMode, ADC5SQR3Base> ;
    using SQ13 = ADC5_SQR3_SQ13_Values<ADC5::SQR3, 18, 5, ReadWriteMode, ADC5SQR3Base> ;
    using SQ12 = ADC5_SQR3_SQ12_Values<ADC5::SQR3, 12, 5, ReadWriteMode, ADC5SQR3Base> ;
    using SQ11 = ADC5_SQR3_SQ11_Values<ADC5::SQR3, 6, 5, ReadWriteMode, ADC5SQR3Base> ;
    using SQ10 = ADC5_SQR3_SQ10_Values<ADC5::SQR3, 0, 5, ReadWriteMode, ADC5SQR3Base> ;
    using FieldValues = ADC5_SQR3_SQ10_Values<ADC5::SQR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR3Pack  = Register<0x50000638, 32, ReadWriteMode, ADC5SQR3Base, T...> ;

  struct ADC5SQR4Base {} ;

  struct SQR4 : public RegisterBase<0x5000063C, 32, ReadWriteMode>
  {
    using SQ16 = ADC5_SQR4_SQ16_Values<ADC5::SQR4, 6, 5, ReadWriteMode, ADC5SQR4Base> ;
    using SQ15 = ADC5_SQR4_SQ15_Values<ADC5::SQR4, 0, 5, ReadWriteMode, ADC5SQR4Base> ;
    using FieldValues = ADC5_SQR4_SQ15_Values<ADC5::SQR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SQR4Pack  = Register<0x5000063C, 32, ReadWriteMode, ADC5SQR4Base, T...> ;

  struct ADC5DRBase {} ;

  struct DR : public RegisterBase<0x50000640, 32, ReadMode>
  {
    using RDATA = ADC5_DR_RDATA_Values<ADC5::DR, 0, 16, ReadMode, ADC5DRBase> ;
    using FieldValues = ADC5_DR_RDATA_Values<ADC5::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x50000640, 32, ReadMode, ADC5DRBase, T...> ;

  struct ADC5JSQRBase {} ;

  struct JSQR : public RegisterBase<0x5000064C, 32, ReadWriteMode>
  {
    using JSQ4 = ADC5_JSQR_JSQ4_Values<ADC5::JSQR, 27, 5, ReadWriteMode, ADC5JSQRBase> ;
    using JSQ3 = ADC5_JSQR_JSQ3_Values<ADC5::JSQR, 21, 5, ReadWriteMode, ADC5JSQRBase> ;
    using JSQ2 = ADC5_JSQR_JSQ2_Values<ADC5::JSQR, 15, 5, ReadWriteMode, ADC5JSQRBase> ;
    using JSQ1 = ADC5_JSQR_JSQ1_Values<ADC5::JSQR, 9, 5, ReadWriteMode, ADC5JSQRBase> ;
    using JEXTEN = ADC5_JSQR_JEXTEN_Values<ADC5::JSQR, 7, 2, ReadWriteMode, ADC5JSQRBase> ;
    using JEXTSEL = ADC5_JSQR_JEXTSEL_Values<ADC5::JSQR, 2, 5, ReadWriteMode, ADC5JSQRBase> ;
    using JL = ADC5_JSQR_JL_Values<ADC5::JSQR, 0, 2, ReadWriteMode, ADC5JSQRBase> ;
    using FieldValues = ADC5_JSQR_JL_Values<ADC5::JSQR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JSQRPack  = Register<0x5000064C, 32, ReadWriteMode, ADC5JSQRBase, T...> ;

  struct ADC5OFR1Base {} ;

  struct OFR1 : public RegisterBase<0x50000660, 32, ReadWriteMode>
  {
    using OFFSET1_EN = ADC5_OFR1_OFFSET1_EN_Values<ADC5::OFR1, 31, 1, ReadWriteMode, ADC5OFR1Base> ;
    using OFFSET1_CH = ADC5_OFR1_OFFSET1_CH_Values<ADC5::OFR1, 26, 5, ReadWriteMode, ADC5OFR1Base> ;
    using SATEN = ADC5_OFR1_SATEN_Values<ADC5::OFR1, 25, 1, ReadWriteMode, ADC5OFR1Base> ;
    using OFFSETPOS = ADC5_OFR1_OFFSETPOS_Values<ADC5::OFR1, 24, 1, ReadWriteMode, ADC5OFR1Base> ;
    using OFFSET1 = ADC5_OFR1_OFFSET1_Values<ADC5::OFR1, 0, 12, ReadWriteMode, ADC5OFR1Base> ;
    using FieldValues = ADC5_OFR1_OFFSET1_Values<ADC5::OFR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR1Pack  = Register<0x50000660, 32, ReadWriteMode, ADC5OFR1Base, T...> ;

  struct ADC5OFR2Base {} ;

  struct OFR2 : public RegisterBase<0x50000664, 32, ReadWriteMode>
  {
    using OFFSET1_EN = ADC5_OFR2_OFFSET1_EN_Values<ADC5::OFR2, 31, 1, ReadWriteMode, ADC5OFR2Base> ;
    using OFFSET1_CH = ADC5_OFR2_OFFSET1_CH_Values<ADC5::OFR2, 26, 5, ReadWriteMode, ADC5OFR2Base> ;
    using SATEN = ADC5_OFR2_SATEN_Values<ADC5::OFR2, 25, 1, ReadWriteMode, ADC5OFR2Base> ;
    using OFFSETPOS = ADC5_OFR2_OFFSETPOS_Values<ADC5::OFR2, 24, 1, ReadWriteMode, ADC5OFR2Base> ;
    using OFFSET1 = ADC5_OFR2_OFFSET1_Values<ADC5::OFR2, 0, 12, ReadWriteMode, ADC5OFR2Base> ;
    using FieldValues = ADC5_OFR2_OFFSET1_Values<ADC5::OFR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR2Pack  = Register<0x50000664, 32, ReadWriteMode, ADC5OFR2Base, T...> ;

  struct ADC5OFR3Base {} ;

  struct OFR3 : public RegisterBase<0x50000668, 32, ReadWriteMode>
  {
    using OFFSET1_EN = ADC5_OFR3_OFFSET1_EN_Values<ADC5::OFR3, 31, 1, ReadWriteMode, ADC5OFR3Base> ;
    using OFFSET1_CH = ADC5_OFR3_OFFSET1_CH_Values<ADC5::OFR3, 26, 5, ReadWriteMode, ADC5OFR3Base> ;
    using SATEN = ADC5_OFR3_SATEN_Values<ADC5::OFR3, 25, 1, ReadWriteMode, ADC5OFR3Base> ;
    using OFFSETPOS = ADC5_OFR3_OFFSETPOS_Values<ADC5::OFR3, 24, 1, ReadWriteMode, ADC5OFR3Base> ;
    using OFFSET1 = ADC5_OFR3_OFFSET1_Values<ADC5::OFR3, 0, 12, ReadWriteMode, ADC5OFR3Base> ;
    using FieldValues = ADC5_OFR3_OFFSET1_Values<ADC5::OFR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR3Pack  = Register<0x50000668, 32, ReadWriteMode, ADC5OFR3Base, T...> ;

  struct ADC5OFR4Base {} ;

  struct OFR4 : public RegisterBase<0x5000066C, 32, ReadWriteMode>
  {
    using OFFSET1_EN = ADC5_OFR4_OFFSET1_EN_Values<ADC5::OFR4, 31, 1, ReadWriteMode, ADC5OFR4Base> ;
    using OFFSET1_CH = ADC5_OFR4_OFFSET1_CH_Values<ADC5::OFR4, 26, 5, ReadWriteMode, ADC5OFR4Base> ;
    using SATEN = ADC5_OFR4_SATEN_Values<ADC5::OFR4, 25, 1, ReadWriteMode, ADC5OFR4Base> ;
    using OFFSETPOS = ADC5_OFR4_OFFSETPOS_Values<ADC5::OFR4, 24, 1, ReadWriteMode, ADC5OFR4Base> ;
    using OFFSET1 = ADC5_OFR4_OFFSET1_Values<ADC5::OFR4, 0, 12, ReadWriteMode, ADC5OFR4Base> ;
    using FieldValues = ADC5_OFR4_OFFSET1_Values<ADC5::OFR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OFR4Pack  = Register<0x5000066C, 32, ReadWriteMode, ADC5OFR4Base, T...> ;

  struct ADC5JDR1Base {} ;

  struct JDR1 : public RegisterBase<0x50000680, 32, ReadMode>
  {
    using JDATA1 = ADC5_JDR1_JDATA1_Values<ADC5::JDR1, 0, 16, ReadMode, ADC5JDR1Base> ;
    using FieldValues = ADC5_JDR1_JDATA1_Values<ADC5::JDR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR1Pack  = Register<0x50000680, 32, ReadMode, ADC5JDR1Base, T...> ;

  struct ADC5JDR2Base {} ;

  struct JDR2 : public RegisterBase<0x50000684, 32, ReadMode>
  {
    using JDATA2 = ADC5_JDR2_JDATA2_Values<ADC5::JDR2, 0, 16, ReadMode, ADC5JDR2Base> ;
    using FieldValues = ADC5_JDR2_JDATA2_Values<ADC5::JDR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR2Pack  = Register<0x50000684, 32, ReadMode, ADC5JDR2Base, T...> ;

  struct ADC5JDR3Base {} ;

  struct JDR3 : public RegisterBase<0x50000688, 32, ReadMode>
  {
    using JDATA3 = ADC5_JDR3_JDATA3_Values<ADC5::JDR3, 0, 16, ReadMode, ADC5JDR3Base> ;
    using FieldValues = ADC5_JDR3_JDATA3_Values<ADC5::JDR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR3Pack  = Register<0x50000688, 32, ReadMode, ADC5JDR3Base, T...> ;

  struct ADC5JDR4Base {} ;

  struct JDR4 : public RegisterBase<0x5000068C, 32, ReadMode>
  {
    using JDATA4 = ADC5_JDR4_JDATA4_Values<ADC5::JDR4, 0, 16, ReadMode, ADC5JDR4Base> ;
    using FieldValues = ADC5_JDR4_JDATA4_Values<ADC5::JDR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using JDR4Pack  = Register<0x5000068C, 32, ReadMode, ADC5JDR4Base, T...> ;

  struct ADC5AWD2CRBase {} ;

  struct AWD2CR : public RegisterBase<0x500006A0, 32, ReadWriteMode>
  {
    using AWD2CH = ADC5_AWD2CR_AWD2CH_Values<ADC5::AWD2CR, 0, 19, ReadWriteMode, ADC5AWD2CRBase> ;
    using FieldValues = ADC5_AWD2CR_AWD2CH_Values<ADC5::AWD2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD2CRPack  = Register<0x500006A0, 32, ReadWriteMode, ADC5AWD2CRBase, T...> ;

  struct ADC5AWD3CRBase {} ;

  struct AWD3CR : public RegisterBase<0x500006A4, 32, ReadWriteMode>
  {
    using AWD3CH = ADC5_AWD3CR_AWD3CH_Values<ADC5::AWD3CR, 0, 19, ReadWriteMode, ADC5AWD3CRBase> ;
    using FieldValues = ADC5_AWD3CR_AWD3CH_Values<ADC5::AWD3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using AWD3CRPack  = Register<0x500006A4, 32, ReadWriteMode, ADC5AWD3CRBase, T...> ;

  struct ADC5DIFSELBase {} ;

  struct DIFSEL : public RegisterBase<0x500006B0, 32, ReadWriteMode>
  {
    using DIFSEL_0 = ADC5_DIFSEL_DIFSEL_0_Values<ADC5::DIFSEL, 0, 1, ReadMode, ADC5DIFSELBase> ;
    using DIFSEL_1_18 = ADC5_DIFSEL_DIFSEL_1_18_Values<ADC5::DIFSEL, 1, 18, ReadWriteMode, ADC5DIFSELBase> ;
    using FieldValues = ADC5_DIFSEL_DIFSEL_1_18_Values<ADC5::DIFSEL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DIFSELPack  = Register<0x500006B0, 32, ReadWriteMode, ADC5DIFSELBase, T...> ;

  struct ADC5CALFACTBase {} ;

  struct CALFACT : public RegisterBase<0x500006B4, 32, ReadWriteMode>
  {
    using CALFACT_D = ADC5_CALFACT_CALFACT_D_Values<ADC5::CALFACT, 16, 7, ReadWriteMode, ADC5CALFACTBase> ;
    using CALFACT_S = ADC5_CALFACT_CALFACT_S_Values<ADC5::CALFACT, 0, 7, ReadWriteMode, ADC5CALFACTBase> ;
    using FieldValues = ADC5_CALFACT_CALFACT_S_Values<ADC5::CALFACT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CALFACTPack  = Register<0x500006B4, 32, ReadWriteMode, ADC5CALFACTBase, T...> ;

  struct ADC5GCOMPBase {} ;

  struct GCOMP : public RegisterBase<0x500006C0, 32, ReadWriteMode>
  {
    using GCOMPCOEFF = ADC5_GCOMP_GCOMPCOEFF_Values<ADC5::GCOMP, 0, 14, ReadWriteMode, ADC5GCOMPBase> ;
    using FieldValues = ADC5_GCOMP_GCOMPCOEFF_Values<ADC5::GCOMP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using GCOMPPack  = Register<0x500006C0, 32, ReadWriteMode, ADC5GCOMPBase, T...> ;

} ;

