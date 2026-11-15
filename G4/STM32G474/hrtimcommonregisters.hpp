/*******************************************************************************
* Filename      : hrtimcommonregisters.hpp
*
* Details       : High Resolution Timer: Common functions. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "hrtimcommonfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct HRTIM_Common
{
  struct HRTIM_CommonCR1Base {} ;

  struct CR1 : public RegisterBase<0x40016B80, 32, ReadWriteMode>
  {
    using AD4USRC = HRTIM_Common_CR1_AD4USRC_Values<HRTIM_Common::CR1, 25, 3, ReadWriteMode, HRTIM_CommonCR1Base> ;
    using AD3USRC = HRTIM_Common_CR1_AD3USRC_Values<HRTIM_Common::CR1, 22, 3, ReadWriteMode, HRTIM_CommonCR1Base> ;
    using AD2USRC = HRTIM_Common_CR1_AD2USRC_Values<HRTIM_Common::CR1, 19, 3, ReadWriteMode, HRTIM_CommonCR1Base> ;
    using AD1USRC = HRTIM_Common_CR1_AD1USRC_Values<HRTIM_Common::CR1, 16, 3, ReadWriteMode, HRTIM_CommonCR1Base> ;
    using TFUDIS = HRTIM_Common_CR1_TFUDIS_Values<HRTIM_Common::CR1, 6, 1, ReadWriteMode, HRTIM_CommonCR1Base> ;
    using TEUDIS = HRTIM_Common_CR1_TEUDIS_Values<HRTIM_Common::CR1, 5, 1, ReadWriteMode, HRTIM_CommonCR1Base> ;
    using TDUDIS = HRTIM_Common_CR1_TDUDIS_Values<HRTIM_Common::CR1, 4, 1, ReadWriteMode, HRTIM_CommonCR1Base> ;
    using TCUDIS = HRTIM_Common_CR1_TCUDIS_Values<HRTIM_Common::CR1, 3, 1, ReadWriteMode, HRTIM_CommonCR1Base> ;
    using TBUDIS = HRTIM_Common_CR1_TBUDIS_Values<HRTIM_Common::CR1, 2, 1, ReadWriteMode, HRTIM_CommonCR1Base> ;
    using TAUDIS = HRTIM_Common_CR1_TAUDIS_Values<HRTIM_Common::CR1, 1, 1, ReadWriteMode, HRTIM_CommonCR1Base> ;
    using MUDIS = HRTIM_Common_CR1_MUDIS_Values<HRTIM_Common::CR1, 0, 1, ReadWriteMode, HRTIM_CommonCR1Base> ;
    using FieldValues = HRTIM_Common_CR1_MUDIS_Values<HRTIM_Common::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40016B80, 32, ReadWriteMode, HRTIM_CommonCR1Base, T...> ;

  struct HRTIM_CommonCR2Base {} ;

  struct CR2 : public RegisterBase<0x40016B84, 32, ReadWriteMode>
  {
    using SWPF = HRTIM_Common_CR2_SWPF_Values<HRTIM_Common::CR2, 21, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using SWPE = HRTIM_Common_CR2_SWPE_Values<HRTIM_Common::CR2, 20, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using SWPD = HRTIM_Common_CR2_SWPD_Values<HRTIM_Common::CR2, 19, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using SWPC = HRTIM_Common_CR2_SWPC_Values<HRTIM_Common::CR2, 18, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using SWPB = HRTIM_Common_CR2_SWPB_Values<HRTIM_Common::CR2, 17, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using SWPA = HRTIM_Common_CR2_SWPA_Values<HRTIM_Common::CR2, 16, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TFRST = HRTIM_Common_CR2_TFRST_Values<HRTIM_Common::CR2, 14, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TERST = HRTIM_Common_CR2_TERST_Values<HRTIM_Common::CR2, 13, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TDRST = HRTIM_Common_CR2_TDRST_Values<HRTIM_Common::CR2, 12, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TCRST = HRTIM_Common_CR2_TCRST_Values<HRTIM_Common::CR2, 11, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TBRST = HRTIM_Common_CR2_TBRST_Values<HRTIM_Common::CR2, 10, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TARST = HRTIM_Common_CR2_TARST_Values<HRTIM_Common::CR2, 9, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using MRST = HRTIM_Common_CR2_MRST_Values<HRTIM_Common::CR2, 8, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TFSWU = HRTIM_Common_CR2_TFSWU_Values<HRTIM_Common::CR2, 6, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TESWU = HRTIM_Common_CR2_TESWU_Values<HRTIM_Common::CR2, 5, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TDSWU = HRTIM_Common_CR2_TDSWU_Values<HRTIM_Common::CR2, 4, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TCSWU = HRTIM_Common_CR2_TCSWU_Values<HRTIM_Common::CR2, 3, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TBSWU = HRTIM_Common_CR2_TBSWU_Values<HRTIM_Common::CR2, 2, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using TASWU = HRTIM_Common_CR2_TASWU_Values<HRTIM_Common::CR2, 1, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using MSWU = HRTIM_Common_CR2_MSWU_Values<HRTIM_Common::CR2, 0, 1, ReadWriteMode, HRTIM_CommonCR2Base> ;
    using FieldValues = HRTIM_Common_CR2_MSWU_Values<HRTIM_Common::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40016B84, 32, ReadWriteMode, HRTIM_CommonCR2Base, T...> ;

  struct HRTIM_CommonISRBase {} ;

  struct ISR : public RegisterBase<0x40016B88, 32, ReadMode>
  {
    using BMPER = HRTIM_Common_ISR_BMPER_Values<HRTIM_Common::ISR, 17, 1, ReadMode, HRTIM_CommonISRBase> ;
    using DLLRDY = HRTIM_Common_ISR_DLLRDY_Values<HRTIM_Common::ISR, 16, 1, ReadMode, HRTIM_CommonISRBase> ;
    using FLT6 = HRTIM_Common_ISR_FLT6_Values<HRTIM_Common::ISR, 6, 1, ReadMode, HRTIM_CommonISRBase> ;
    using SYSFLT = HRTIM_Common_ISR_SYSFLT_Values<HRTIM_Common::ISR, 5, 1, ReadMode, HRTIM_CommonISRBase> ;
    using FLT5 = HRTIM_Common_ISR_FLT5_Values<HRTIM_Common::ISR, 4, 1, ReadMode, HRTIM_CommonISRBase> ;
    using FLT4 = HRTIM_Common_ISR_FLT4_Values<HRTIM_Common::ISR, 3, 1, ReadMode, HRTIM_CommonISRBase> ;
    using FLT3 = HRTIM_Common_ISR_FLT3_Values<HRTIM_Common::ISR, 2, 1, ReadMode, HRTIM_CommonISRBase> ;
    using FLT2 = HRTIM_Common_ISR_FLT2_Values<HRTIM_Common::ISR, 1, 1, ReadMode, HRTIM_CommonISRBase> ;
    using FLT1 = HRTIM_Common_ISR_FLT1_Values<HRTIM_Common::ISR, 0, 1, ReadMode, HRTIM_CommonISRBase> ;
    using FieldValues = HRTIM_Common_ISR_FLT1_Values<HRTIM_Common::ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISRPack  = Register<0x40016B88, 32, ReadMode, HRTIM_CommonISRBase, T...> ;

  struct HRTIM_CommonICRBase {} ;

  struct ICR : public RegisterBase<0x40016B8C, 32, WriteMode>
  {
    using BMPERC = HRTIM_Common_ICR_BMPERC_Values<HRTIM_Common::ICR, 17, 1, WriteMode, HRTIM_CommonICRBase> ;
    using DLLRDYC = HRTIM_Common_ICR_DLLRDYC_Values<HRTIM_Common::ICR, 16, 1, WriteMode, HRTIM_CommonICRBase> ;
    using FLT6C = HRTIM_Common_ICR_FLT6C_Values<HRTIM_Common::ICR, 6, 1, WriteMode, HRTIM_CommonICRBase> ;
    using SYSFLTC = HRTIM_Common_ICR_SYSFLTC_Values<HRTIM_Common::ICR, 5, 1, WriteMode, HRTIM_CommonICRBase> ;
    using FLT5C = HRTIM_Common_ICR_FLT5C_Values<HRTIM_Common::ICR, 4, 1, WriteMode, HRTIM_CommonICRBase> ;
    using FLT4C = HRTIM_Common_ICR_FLT4C_Values<HRTIM_Common::ICR, 3, 1, WriteMode, HRTIM_CommonICRBase> ;
    using FLT3C = HRTIM_Common_ICR_FLT3C_Values<HRTIM_Common::ICR, 2, 1, WriteMode, HRTIM_CommonICRBase> ;
    using FLT2C = HRTIM_Common_ICR_FLT2C_Values<HRTIM_Common::ICR, 1, 1, WriteMode, HRTIM_CommonICRBase> ;
    using FLT1C = HRTIM_Common_ICR_FLT1C_Values<HRTIM_Common::ICR, 0, 1, WriteMode, HRTIM_CommonICRBase> ;
    using FieldValues = HRTIM_Common_ICR_FLT1C_Values<HRTIM_Common::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x40016B8C, 32, WriteMode, HRTIM_CommonICRBase, T...> ;

  struct HRTIM_CommonIERBase {} ;

  struct IER : public RegisterBase<0x40016B90, 32, ReadWriteMode>
  {
    using BMPERIE = HRTIM_Common_IER_BMPERIE_Values<HRTIM_Common::IER, 17, 1, ReadWriteMode, HRTIM_CommonIERBase> ;
    using DLLRDYIE = HRTIM_Common_IER_DLLRDYIE_Values<HRTIM_Common::IER, 16, 1, ReadWriteMode, HRTIM_CommonIERBase> ;
    using FLT6IE = HRTIM_Common_IER_FLT6IE_Values<HRTIM_Common::IER, 6, 1, ReadWriteMode, HRTIM_CommonIERBase> ;
    using SYSFLTE = HRTIM_Common_IER_SYSFLTE_Values<HRTIM_Common::IER, 5, 1, ReadWriteMode, HRTIM_CommonIERBase> ;
    using FLT5IE = HRTIM_Common_IER_FLT5IE_Values<HRTIM_Common::IER, 4, 1, ReadWriteMode, HRTIM_CommonIERBase> ;
    using FLT4IE = HRTIM_Common_IER_FLT4IE_Values<HRTIM_Common::IER, 3, 1, ReadWriteMode, HRTIM_CommonIERBase> ;
    using FLT3IE = HRTIM_Common_IER_FLT3IE_Values<HRTIM_Common::IER, 2, 1, ReadWriteMode, HRTIM_CommonIERBase> ;
    using FLT2IE = HRTIM_Common_IER_FLT2IE_Values<HRTIM_Common::IER, 1, 1, ReadWriteMode, HRTIM_CommonIERBase> ;
    using FLT1IE = HRTIM_Common_IER_FLT1IE_Values<HRTIM_Common::IER, 0, 1, ReadWriteMode, HRTIM_CommonIERBase> ;
    using FieldValues = HRTIM_Common_IER_FLT1IE_Values<HRTIM_Common::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x40016B90, 32, ReadWriteMode, HRTIM_CommonIERBase, T...> ;

  struct HRTIM_CommonOENRBase {} ;

  struct OENR : public RegisterBase<0x40016B94, 32, ReadWriteMode>
  {
    using TF2ODS = HRTIM_Common_OENR_TF2ODS_Values<HRTIM_Common::OENR, 11, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using TF1ODS = HRTIM_Common_OENR_TF1ODS_Values<HRTIM_Common::OENR, 10, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using TE2OEN = HRTIM_Common_OENR_TE2OEN_Values<HRTIM_Common::OENR, 9, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using TE1OEN = HRTIM_Common_OENR_TE1OEN_Values<HRTIM_Common::OENR, 8, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using TD2OEN = HRTIM_Common_OENR_TD2OEN_Values<HRTIM_Common::OENR, 7, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using TD1OEN = HRTIM_Common_OENR_TD1OEN_Values<HRTIM_Common::OENR, 6, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using TC2OEN = HRTIM_Common_OENR_TC2OEN_Values<HRTIM_Common::OENR, 5, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using TC1OEN = HRTIM_Common_OENR_TC1OEN_Values<HRTIM_Common::OENR, 4, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using TB2OEN = HRTIM_Common_OENR_TB2OEN_Values<HRTIM_Common::OENR, 3, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using TB1OEN = HRTIM_Common_OENR_TB1OEN_Values<HRTIM_Common::OENR, 2, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using TA2OEN = HRTIM_Common_OENR_TA2OEN_Values<HRTIM_Common::OENR, 1, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using TA1OEN = HRTIM_Common_OENR_TA1OEN_Values<HRTIM_Common::OENR, 0, 1, ReadWriteMode, HRTIM_CommonOENRBase> ;
    using FieldValues = HRTIM_Common_OENR_TA1OEN_Values<HRTIM_Common::OENR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OENRPack  = Register<0x40016B94, 32, ReadWriteMode, HRTIM_CommonOENRBase, T...> ;

  struct HRTIM_CommonODISRBase {} ;

  struct ODISR : public RegisterBase<0x40016B98, 32, WriteMode>
  {
    using TF2ODIS = HRTIM_Common_ODISR_TF2ODIS_Values<HRTIM_Common::ODISR, 11, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using TF1ODIS = HRTIM_Common_ODISR_TF1ODIS_Values<HRTIM_Common::ODISR, 10, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using TE2ODIS = HRTIM_Common_ODISR_TE2ODIS_Values<HRTIM_Common::ODISR, 9, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using TE1ODIS = HRTIM_Common_ODISR_TE1ODIS_Values<HRTIM_Common::ODISR, 8, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using TD2ODIS = HRTIM_Common_ODISR_TD2ODIS_Values<HRTIM_Common::ODISR, 7, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using TD1ODIS = HRTIM_Common_ODISR_TD1ODIS_Values<HRTIM_Common::ODISR, 6, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using TC2ODIS = HRTIM_Common_ODISR_TC2ODIS_Values<HRTIM_Common::ODISR, 5, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using TC1ODIS = HRTIM_Common_ODISR_TC1ODIS_Values<HRTIM_Common::ODISR, 4, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using TB2ODIS = HRTIM_Common_ODISR_TB2ODIS_Values<HRTIM_Common::ODISR, 3, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using TB1ODIS = HRTIM_Common_ODISR_TB1ODIS_Values<HRTIM_Common::ODISR, 2, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using TA2ODIS = HRTIM_Common_ODISR_TA2ODIS_Values<HRTIM_Common::ODISR, 1, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using TA1ODIS = HRTIM_Common_ODISR_TA1ODIS_Values<HRTIM_Common::ODISR, 0, 1, WriteMode, HRTIM_CommonODISRBase> ;
    using FieldValues = HRTIM_Common_ODISR_TA1ODIS_Values<HRTIM_Common::ODISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODISRPack  = Register<0x40016B98, 32, WriteMode, HRTIM_CommonODISRBase, T...> ;

  struct HRTIM_CommonODSRBase {} ;

  struct ODSR : public RegisterBase<0x40016B9C, 32, ReadMode>
  {
    using TF2ODS = HRTIM_Common_ODSR_TF2ODS_Values<HRTIM_Common::ODSR, 11, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using TF1ODS = HRTIM_Common_ODSR_TF1ODS_Values<HRTIM_Common::ODSR, 10, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using TE2ODS = HRTIM_Common_ODSR_TE2ODS_Values<HRTIM_Common::ODSR, 9, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using TE1ODS = HRTIM_Common_ODSR_TE1ODS_Values<HRTIM_Common::ODSR, 8, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using TD2ODS = HRTIM_Common_ODSR_TD2ODS_Values<HRTIM_Common::ODSR, 7, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using TD1ODS = HRTIM_Common_ODSR_TD1ODS_Values<HRTIM_Common::ODSR, 6, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using TC2ODS = HRTIM_Common_ODSR_TC2ODS_Values<HRTIM_Common::ODSR, 5, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using TC1ODS = HRTIM_Common_ODSR_TC1ODS_Values<HRTIM_Common::ODSR, 4, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using TB2ODS = HRTIM_Common_ODSR_TB2ODS_Values<HRTIM_Common::ODSR, 3, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using TB1ODS = HRTIM_Common_ODSR_TB1ODS_Values<HRTIM_Common::ODSR, 2, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using TA2ODS = HRTIM_Common_ODSR_TA2ODS_Values<HRTIM_Common::ODSR, 1, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using TA1ODS = HRTIM_Common_ODSR_TA1ODS_Values<HRTIM_Common::ODSR, 0, 1, ReadMode, HRTIM_CommonODSRBase> ;
    using FieldValues = HRTIM_Common_ODSR_TA1ODS_Values<HRTIM_Common::ODSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ODSRPack  = Register<0x40016B9C, 32, ReadMode, HRTIM_CommonODSRBase, T...> ;

  struct HRTIM_CommonBMCRBase {} ;

  struct BMCR : public RegisterBase<0x40016BA0, 32, ReadWriteMode>
  {
    using BMSTAT = HRTIM_Common_BMCR_BMSTAT_Values<HRTIM_Common::BMCR, 31, 1, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using TFBM = HRTIM_Common_BMCR_TFBM_Values<HRTIM_Common::BMCR, 22, 1, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using TEBM = HRTIM_Common_BMCR_TEBM_Values<HRTIM_Common::BMCR, 21, 1, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using TDBM = HRTIM_Common_BMCR_TDBM_Values<HRTIM_Common::BMCR, 20, 1, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using TCBM = HRTIM_Common_BMCR_TCBM_Values<HRTIM_Common::BMCR, 19, 1, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using TBBM = HRTIM_Common_BMCR_TBBM_Values<HRTIM_Common::BMCR, 18, 1, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using TABM = HRTIM_Common_BMCR_TABM_Values<HRTIM_Common::BMCR, 17, 1, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using MTBM = HRTIM_Common_BMCR_MTBM_Values<HRTIM_Common::BMCR, 16, 1, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using BMPREN = HRTIM_Common_BMCR_BMPREN_Values<HRTIM_Common::BMCR, 10, 1, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using BMPRSC = HRTIM_Common_BMCR_BMPRSC_Values<HRTIM_Common::BMCR, 6, 4, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using BMCLK = HRTIM_Common_BMCR_BMCLK_Values<HRTIM_Common::BMCR, 2, 4, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using BMOM = HRTIM_Common_BMCR_BMOM_Values<HRTIM_Common::BMCR, 1, 1, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using BME = HRTIM_Common_BMCR_BME_Values<HRTIM_Common::BMCR, 0, 1, ReadWriteMode, HRTIM_CommonBMCRBase> ;
    using FieldValues = HRTIM_Common_BMCR_BME_Values<HRTIM_Common::BMCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BMCRPack  = Register<0x40016BA0, 32, ReadWriteMode, HRTIM_CommonBMCRBase, T...> ;

  struct HRTIM_CommonBMTRGBase {} ;

  struct BMTRG : public RegisterBase<0x40016BA4, 32, ReadWriteMode>
  {
    using OCHPEV = HRTIM_Common_BMTRG_OCHPEV_Values<HRTIM_Common::BMTRG, 31, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using EEV8 = HRTIM_Common_BMTRG_EEV8_Values<HRTIM_Common::BMTRG, 30, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using EEV7 = HRTIM_Common_BMTRG_EEV7_Values<HRTIM_Common::BMTRG, 29, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TDEEV8 = HRTIM_Common_BMTRG_TDEEV8_Values<HRTIM_Common::BMTRG, 28, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TDEEV7 = HRTIM_Common_BMTRG_TDEEV7_Values<HRTIM_Common::BMTRG, 27, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TECMP2 = HRTIM_Common_BMTRG_TECMP2_Values<HRTIM_Common::BMTRG, 26, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TECMP1 = HRTIM_Common_BMTRG_TECMP1_Values<HRTIM_Common::BMTRG, 25, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TEREP = HRTIM_Common_BMTRG_TEREP_Values<HRTIM_Common::BMTRG, 24, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TERST = HRTIM_Common_BMTRG_TERST_Values<HRTIM_Common::BMTRG, 23, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TDCMP2 = HRTIM_Common_BMTRG_TDCMP2_Values<HRTIM_Common::BMTRG, 22, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TDCMP1 = HRTIM_Common_BMTRG_TDCMP1_Values<HRTIM_Common::BMTRG, 21, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TDREP = HRTIM_Common_BMTRG_TDREP_Values<HRTIM_Common::BMTRG, 20, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TDRST = HRTIM_Common_BMTRG_TDRST_Values<HRTIM_Common::BMTRG, 19, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TCCMP2 = HRTIM_Common_BMTRG_TCCMP2_Values<HRTIM_Common::BMTRG, 18, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TCCMP1 = HRTIM_Common_BMTRG_TCCMP1_Values<HRTIM_Common::BMTRG, 17, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TCREP = HRTIM_Common_BMTRG_TCREP_Values<HRTIM_Common::BMTRG, 16, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TCRST = HRTIM_Common_BMTRG_TCRST_Values<HRTIM_Common::BMTRG, 15, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TBCMP2 = HRTIM_Common_BMTRG_TBCMP2_Values<HRTIM_Common::BMTRG, 14, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TBCMP1 = HRTIM_Common_BMTRG_TBCMP1_Values<HRTIM_Common::BMTRG, 13, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TBREP = HRTIM_Common_BMTRG_TBREP_Values<HRTIM_Common::BMTRG, 12, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TBRST = HRTIM_Common_BMTRG_TBRST_Values<HRTIM_Common::BMTRG, 11, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TACMP2 = HRTIM_Common_BMTRG_TACMP2_Values<HRTIM_Common::BMTRG, 10, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TACMP1 = HRTIM_Common_BMTRG_TACMP1_Values<HRTIM_Common::BMTRG, 9, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TAREP = HRTIM_Common_BMTRG_TAREP_Values<HRTIM_Common::BMTRG, 8, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using TARST = HRTIM_Common_BMTRG_TARST_Values<HRTIM_Common::BMTRG, 7, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using MSTCMP4 = HRTIM_Common_BMTRG_MSTCMP4_Values<HRTIM_Common::BMTRG, 6, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using MSTCMP3 = HRTIM_Common_BMTRG_MSTCMP3_Values<HRTIM_Common::BMTRG, 5, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using MSTCMP2 = HRTIM_Common_BMTRG_MSTCMP2_Values<HRTIM_Common::BMTRG, 4, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using MSTCMP1 = HRTIM_Common_BMTRG_MSTCMP1_Values<HRTIM_Common::BMTRG, 3, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using MSTREP = HRTIM_Common_BMTRG_MSTREP_Values<HRTIM_Common::BMTRG, 2, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using MSTRST = HRTIM_Common_BMTRG_MSTRST_Values<HRTIM_Common::BMTRG, 1, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using SW = HRTIM_Common_BMTRG_SW_Values<HRTIM_Common::BMTRG, 0, 1, ReadWriteMode, HRTIM_CommonBMTRGBase> ;
    using FieldValues = HRTIM_Common_BMTRG_SW_Values<HRTIM_Common::BMTRG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BMTRGPack  = Register<0x40016BA4, 32, ReadWriteMode, HRTIM_CommonBMTRGBase, T...> ;

  struct HRTIM_CommonBMCMPRBase {} ;

  struct BMCMPR : public RegisterBase<0x40016BA8, 32, ReadWriteMode>
  {
    using BMCMP = HRTIM_Common_BMCMPR_BMCMP_Values<HRTIM_Common::BMCMPR, 0, 16, ReadWriteMode, HRTIM_CommonBMCMPRBase> ;
    using FieldValues = HRTIM_Common_BMCMPR_BMCMP_Values<HRTIM_Common::BMCMPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BMCMPRPack  = Register<0x40016BA8, 32, ReadWriteMode, HRTIM_CommonBMCMPRBase, T...> ;

  struct HRTIM_CommonBMPERBase {} ;

  struct BMPER : public RegisterBase<0x40016BAC, 32, ReadWriteMode>
  {
    using BMPERField = HRTIM_Common_BMPER_BMPER_Values<HRTIM_Common::BMPER, 0, 16, ReadWriteMode, HRTIM_CommonBMPERBase> ;
    using FieldValues = HRTIM_Common_BMPER_BMPER_Values<HRTIM_Common::BMPER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BMPERPack  = Register<0x40016BAC, 32, ReadWriteMode, HRTIM_CommonBMPERBase, T...> ;

  struct HRTIM_CommonEECR1Base {} ;

  struct EECR1 : public RegisterBase<0x40016BB0, 32, ReadWriteMode>
  {
    using EE5FAST = HRTIM_Common_EECR1_EE5FAST_Values<HRTIM_Common::EECR1, 29, 1, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE5SNS = HRTIM_Common_EECR1_EE5SNS_Values<HRTIM_Common::EECR1, 27, 2, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE5POL = HRTIM_Common_EECR1_EE5POL_Values<HRTIM_Common::EECR1, 26, 1, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE5SRC = HRTIM_Common_EECR1_EE5SRC_Values<HRTIM_Common::EECR1, 24, 2, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE4FAST = HRTIM_Common_EECR1_EE4FAST_Values<HRTIM_Common::EECR1, 23, 1, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE4SNS = HRTIM_Common_EECR1_EE4SNS_Values<HRTIM_Common::EECR1, 21, 2, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE4POL = HRTIM_Common_EECR1_EE4POL_Values<HRTIM_Common::EECR1, 20, 1, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE4SRC = HRTIM_Common_EECR1_EE4SRC_Values<HRTIM_Common::EECR1, 18, 2, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE3FAST = HRTIM_Common_EECR1_EE3FAST_Values<HRTIM_Common::EECR1, 17, 1, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE3SNS = HRTIM_Common_EECR1_EE3SNS_Values<HRTIM_Common::EECR1, 15, 2, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE3POL = HRTIM_Common_EECR1_EE3POL_Values<HRTIM_Common::EECR1, 14, 1, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE3SRC = HRTIM_Common_EECR1_EE3SRC_Values<HRTIM_Common::EECR1, 12, 2, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE2FAST = HRTIM_Common_EECR1_EE2FAST_Values<HRTIM_Common::EECR1, 11, 1, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE2SNS = HRTIM_Common_EECR1_EE2SNS_Values<HRTIM_Common::EECR1, 9, 2, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE2POL = HRTIM_Common_EECR1_EE2POL_Values<HRTIM_Common::EECR1, 8, 1, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE2SRC = HRTIM_Common_EECR1_EE2SRC_Values<HRTIM_Common::EECR1, 6, 2, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE1FAST = HRTIM_Common_EECR1_EE1FAST_Values<HRTIM_Common::EECR1, 5, 1, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE1SNS = HRTIM_Common_EECR1_EE1SNS_Values<HRTIM_Common::EECR1, 3, 2, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE1POL = HRTIM_Common_EECR1_EE1POL_Values<HRTIM_Common::EECR1, 2, 1, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using EE1SRC = HRTIM_Common_EECR1_EE1SRC_Values<HRTIM_Common::EECR1, 0, 2, ReadWriteMode, HRTIM_CommonEECR1Base> ;
    using FieldValues = HRTIM_Common_EECR1_EE1SRC_Values<HRTIM_Common::EECR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EECR1Pack  = Register<0x40016BB0, 32, ReadWriteMode, HRTIM_CommonEECR1Base, T...> ;

  struct HRTIM_CommonEECR2Base {} ;

  struct EECR2 : public RegisterBase<0x40016BB4, 32, ReadWriteMode>
  {
    using EE6SRC = HRTIM_Common_EECR2_EE6SRC_Values<HRTIM_Common::EECR2, 0, 2, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE6POL = HRTIM_Common_EECR2_EE6POL_Values<HRTIM_Common::EECR2, 2, 1, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE6SNS = HRTIM_Common_EECR2_EE6SNS_Values<HRTIM_Common::EECR2, 3, 2, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE7SRC = HRTIM_Common_EECR2_EE7SRC_Values<HRTIM_Common::EECR2, 6, 2, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE7POL = HRTIM_Common_EECR2_EE7POL_Values<HRTIM_Common::EECR2, 8, 1, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE7SNS = HRTIM_Common_EECR2_EE7SNS_Values<HRTIM_Common::EECR2, 9, 2, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE8SRC = HRTIM_Common_EECR2_EE8SRC_Values<HRTIM_Common::EECR2, 12, 2, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE8POL = HRTIM_Common_EECR2_EE8POL_Values<HRTIM_Common::EECR2, 14, 1, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE8SNS = HRTIM_Common_EECR2_EE8SNS_Values<HRTIM_Common::EECR2, 15, 2, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE9SRC = HRTIM_Common_EECR2_EE9SRC_Values<HRTIM_Common::EECR2, 18, 2, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE9POL = HRTIM_Common_EECR2_EE9POL_Values<HRTIM_Common::EECR2, 20, 1, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE9SNS = HRTIM_Common_EECR2_EE9SNS_Values<HRTIM_Common::EECR2, 21, 2, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE10SRC = HRTIM_Common_EECR2_EE10SRC_Values<HRTIM_Common::EECR2, 24, 2, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE10POL = HRTIM_Common_EECR2_EE10POL_Values<HRTIM_Common::EECR2, 26, 1, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using EE10SNS = HRTIM_Common_EECR2_EE10SNS_Values<HRTIM_Common::EECR2, 27, 2, ReadWriteMode, HRTIM_CommonEECR2Base> ;
    using FieldValues = HRTIM_Common_EECR2_EE10SNS_Values<HRTIM_Common::EECR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EECR2Pack  = Register<0x40016BB4, 32, ReadWriteMode, HRTIM_CommonEECR2Base, T...> ;

  struct HRTIM_CommonEECR3Base {} ;

  struct EECR3 : public RegisterBase<0x40016BB8, 32, ReadWriteMode>
  {
    using EE6F = HRTIM_Common_EECR3_EE6F_Values<HRTIM_Common::EECR3, 0, 4, ReadWriteMode, HRTIM_CommonEECR3Base> ;
    using EE7F = HRTIM_Common_EECR3_EE7F_Values<HRTIM_Common::EECR3, 6, 4, ReadWriteMode, HRTIM_CommonEECR3Base> ;
    using EE8F = HRTIM_Common_EECR3_EE8F_Values<HRTIM_Common::EECR3, 12, 4, ReadWriteMode, HRTIM_CommonEECR3Base> ;
    using EE9F = HRTIM_Common_EECR3_EE9F_Values<HRTIM_Common::EECR3, 18, 4, ReadWriteMode, HRTIM_CommonEECR3Base> ;
    using EE10F = HRTIM_Common_EECR3_EE10F_Values<HRTIM_Common::EECR3, 24, 4, ReadWriteMode, HRTIM_CommonEECR3Base> ;
    using EEVSD = HRTIM_Common_EECR3_EEVSD_Values<HRTIM_Common::EECR3, 30, 2, ReadWriteMode, HRTIM_CommonEECR3Base> ;
    using FieldValues = HRTIM_Common_EECR3_EEVSD_Values<HRTIM_Common::EECR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EECR3Pack  = Register<0x40016BB8, 32, ReadWriteMode, HRTIM_CommonEECR3Base, T...> ;

  struct HRTIM_CommonADC1RBase {} ;

  struct ADC1R : public RegisterBase<0x40016BBC, 32, ReadWriteMode>
  {
    using AD1TEPER = HRTIM_Common_ADC1R_AD1TEPER_Values<HRTIM_Common::ADC1R, 31, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TEC4 = HRTIM_Common_ADC1R_AD1TEC4_Values<HRTIM_Common::ADC1R, 30, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TEC3 = HRTIM_Common_ADC1R_AD1TEC3_Values<HRTIM_Common::ADC1R, 29, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TEC2 = HRTIM_Common_ADC1R_AD1TEC2_Values<HRTIM_Common::ADC1R, 28, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TDPER = HRTIM_Common_ADC1R_AD1TDPER_Values<HRTIM_Common::ADC1R, 27, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TDC4 = HRTIM_Common_ADC1R_AD1TDC4_Values<HRTIM_Common::ADC1R, 26, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TDC3 = HRTIM_Common_ADC1R_AD1TDC3_Values<HRTIM_Common::ADC1R, 25, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TDC2 = HRTIM_Common_ADC1R_AD1TDC2_Values<HRTIM_Common::ADC1R, 24, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TCPER = HRTIM_Common_ADC1R_AD1TCPER_Values<HRTIM_Common::ADC1R, 23, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TCC4 = HRTIM_Common_ADC1R_AD1TCC4_Values<HRTIM_Common::ADC1R, 22, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TCC3 = HRTIM_Common_ADC1R_AD1TCC3_Values<HRTIM_Common::ADC1R, 21, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TCC2 = HRTIM_Common_ADC1R_AD1TCC2_Values<HRTIM_Common::ADC1R, 20, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TBRST = HRTIM_Common_ADC1R_AD1TBRST_Values<HRTIM_Common::ADC1R, 19, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TBPER = HRTIM_Common_ADC1R_AD1TBPER_Values<HRTIM_Common::ADC1R, 18, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TBC4 = HRTIM_Common_ADC1R_AD1TBC4_Values<HRTIM_Common::ADC1R, 17, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TBC3 = HRTIM_Common_ADC1R_AD1TBC3_Values<HRTIM_Common::ADC1R, 16, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TBC2 = HRTIM_Common_ADC1R_AD1TBC2_Values<HRTIM_Common::ADC1R, 15, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TARST = HRTIM_Common_ADC1R_AD1TARST_Values<HRTIM_Common::ADC1R, 14, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TAPER = HRTIM_Common_ADC1R_AD1TAPER_Values<HRTIM_Common::ADC1R, 13, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TAC4 = HRTIM_Common_ADC1R_AD1TAC4_Values<HRTIM_Common::ADC1R, 12, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TAC3 = HRTIM_Common_ADC1R_AD1TAC3_Values<HRTIM_Common::ADC1R, 11, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1TAC2 = HRTIM_Common_ADC1R_AD1TAC2_Values<HRTIM_Common::ADC1R, 10, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1EEV5 = HRTIM_Common_ADC1R_AD1EEV5_Values<HRTIM_Common::ADC1R, 9, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1EEV4 = HRTIM_Common_ADC1R_AD1EEV4_Values<HRTIM_Common::ADC1R, 8, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1EEV3 = HRTIM_Common_ADC1R_AD1EEV3_Values<HRTIM_Common::ADC1R, 7, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1EEV2 = HRTIM_Common_ADC1R_AD1EEV2_Values<HRTIM_Common::ADC1R, 6, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1EEV1 = HRTIM_Common_ADC1R_AD1EEV1_Values<HRTIM_Common::ADC1R, 5, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1MPER = HRTIM_Common_ADC1R_AD1MPER_Values<HRTIM_Common::ADC1R, 4, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1MC4 = HRTIM_Common_ADC1R_AD1MC4_Values<HRTIM_Common::ADC1R, 3, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1MC3 = HRTIM_Common_ADC1R_AD1MC3_Values<HRTIM_Common::ADC1R, 2, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1MC2 = HRTIM_Common_ADC1R_AD1MC2_Values<HRTIM_Common::ADC1R, 1, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using AD1MC1 = HRTIM_Common_ADC1R_AD1MC1_Values<HRTIM_Common::ADC1R, 0, 1, ReadWriteMode, HRTIM_CommonADC1RBase> ;
    using FieldValues = HRTIM_Common_ADC1R_AD1MC1_Values<HRTIM_Common::ADC1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC1RPack  = Register<0x40016BBC, 32, ReadWriteMode, HRTIM_CommonADC1RBase, T...> ;

  struct HRTIM_CommonADC2RBase {} ;

  struct ADC2R : public RegisterBase<0x40016BC0, 32, ReadWriteMode>
  {
    using AD2TERST = HRTIM_Common_ADC2R_AD2TERST_Values<HRTIM_Common::ADC2R, 31, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TEC4 = HRTIM_Common_ADC2R_AD2TEC4_Values<HRTIM_Common::ADC2R, 30, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TEC3 = HRTIM_Common_ADC2R_AD2TEC3_Values<HRTIM_Common::ADC2R, 29, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TEC2 = HRTIM_Common_ADC2R_AD2TEC2_Values<HRTIM_Common::ADC2R, 28, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TDRST = HRTIM_Common_ADC2R_AD2TDRST_Values<HRTIM_Common::ADC2R, 27, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TDPER = HRTIM_Common_ADC2R_AD2TDPER_Values<HRTIM_Common::ADC2R, 26, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TDC4 = HRTIM_Common_ADC2R_AD2TDC4_Values<HRTIM_Common::ADC2R, 25, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TDC3 = HRTIM_Common_ADC2R_AD2TDC3_Values<HRTIM_Common::ADC2R, 24, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TDC2 = HRTIM_Common_ADC2R_AD2TDC2_Values<HRTIM_Common::ADC2R, 23, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TCRST = HRTIM_Common_ADC2R_AD2TCRST_Values<HRTIM_Common::ADC2R, 22, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TCPER = HRTIM_Common_ADC2R_AD2TCPER_Values<HRTIM_Common::ADC2R, 21, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TCC4 = HRTIM_Common_ADC2R_AD2TCC4_Values<HRTIM_Common::ADC2R, 20, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TCC3 = HRTIM_Common_ADC2R_AD2TCC3_Values<HRTIM_Common::ADC2R, 19, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TCC2 = HRTIM_Common_ADC2R_AD2TCC2_Values<HRTIM_Common::ADC2R, 18, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TBPER = HRTIM_Common_ADC2R_AD2TBPER_Values<HRTIM_Common::ADC2R, 17, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TBC4 = HRTIM_Common_ADC2R_AD2TBC4_Values<HRTIM_Common::ADC2R, 16, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TBC3 = HRTIM_Common_ADC2R_AD2TBC3_Values<HRTIM_Common::ADC2R, 15, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TBC2 = HRTIM_Common_ADC2R_AD2TBC2_Values<HRTIM_Common::ADC2R, 14, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TAPER = HRTIM_Common_ADC2R_AD2TAPER_Values<HRTIM_Common::ADC2R, 13, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TAC4 = HRTIM_Common_ADC2R_AD2TAC4_Values<HRTIM_Common::ADC2R, 12, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TAC3 = HRTIM_Common_ADC2R_AD2TAC3_Values<HRTIM_Common::ADC2R, 11, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2TAC2 = HRTIM_Common_ADC2R_AD2TAC2_Values<HRTIM_Common::ADC2R, 10, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2EEV10 = HRTIM_Common_ADC2R_AD2EEV10_Values<HRTIM_Common::ADC2R, 9, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2EEV9 = HRTIM_Common_ADC2R_AD2EEV9_Values<HRTIM_Common::ADC2R, 8, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2EEV8 = HRTIM_Common_ADC2R_AD2EEV8_Values<HRTIM_Common::ADC2R, 7, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2EEV7 = HRTIM_Common_ADC2R_AD2EEV7_Values<HRTIM_Common::ADC2R, 6, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2EEV6 = HRTIM_Common_ADC2R_AD2EEV6_Values<HRTIM_Common::ADC2R, 5, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2MPER = HRTIM_Common_ADC2R_AD2MPER_Values<HRTIM_Common::ADC2R, 4, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2MC4 = HRTIM_Common_ADC2R_AD2MC4_Values<HRTIM_Common::ADC2R, 3, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2MC3 = HRTIM_Common_ADC2R_AD2MC3_Values<HRTIM_Common::ADC2R, 2, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2MC2 = HRTIM_Common_ADC2R_AD2MC2_Values<HRTIM_Common::ADC2R, 1, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using AD2MC1 = HRTIM_Common_ADC2R_AD2MC1_Values<HRTIM_Common::ADC2R, 0, 1, ReadWriteMode, HRTIM_CommonADC2RBase> ;
    using FieldValues = HRTIM_Common_ADC2R_AD2MC1_Values<HRTIM_Common::ADC2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC2RPack  = Register<0x40016BC0, 32, ReadWriteMode, HRTIM_CommonADC2RBase, T...> ;

  struct HRTIM_CommonADC3RBase {} ;

  struct ADC3R : public RegisterBase<0x40016BC4, 32, ReadWriteMode>
  {
    using AD1TEPER = HRTIM_Common_ADC3R_AD1TEPER_Values<HRTIM_Common::ADC3R, 31, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TEC4 = HRTIM_Common_ADC3R_AD1TEC4_Values<HRTIM_Common::ADC3R, 30, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TEC3 = HRTIM_Common_ADC3R_AD1TEC3_Values<HRTIM_Common::ADC3R, 29, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TEC2 = HRTIM_Common_ADC3R_AD1TEC2_Values<HRTIM_Common::ADC3R, 28, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TDPER = HRTIM_Common_ADC3R_AD1TDPER_Values<HRTIM_Common::ADC3R, 27, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TDC4 = HRTIM_Common_ADC3R_AD1TDC4_Values<HRTIM_Common::ADC3R, 26, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TDC3 = HRTIM_Common_ADC3R_AD1TDC3_Values<HRTIM_Common::ADC3R, 25, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TDC2 = HRTIM_Common_ADC3R_AD1TDC2_Values<HRTIM_Common::ADC3R, 24, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TCPER = HRTIM_Common_ADC3R_AD1TCPER_Values<HRTIM_Common::ADC3R, 23, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TCC4 = HRTIM_Common_ADC3R_AD1TCC4_Values<HRTIM_Common::ADC3R, 22, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TCC3 = HRTIM_Common_ADC3R_AD1TCC3_Values<HRTIM_Common::ADC3R, 21, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TCC2 = HRTIM_Common_ADC3R_AD1TCC2_Values<HRTIM_Common::ADC3R, 20, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TBRST = HRTIM_Common_ADC3R_AD1TBRST_Values<HRTIM_Common::ADC3R, 19, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TBPER = HRTIM_Common_ADC3R_AD1TBPER_Values<HRTIM_Common::ADC3R, 18, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TBC4 = HRTIM_Common_ADC3R_AD1TBC4_Values<HRTIM_Common::ADC3R, 17, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TBC3 = HRTIM_Common_ADC3R_AD1TBC3_Values<HRTIM_Common::ADC3R, 16, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TBC2 = HRTIM_Common_ADC3R_AD1TBC2_Values<HRTIM_Common::ADC3R, 15, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TARST = HRTIM_Common_ADC3R_AD1TARST_Values<HRTIM_Common::ADC3R, 14, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TAPER = HRTIM_Common_ADC3R_AD1TAPER_Values<HRTIM_Common::ADC3R, 13, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TAC4 = HRTIM_Common_ADC3R_AD1TAC4_Values<HRTIM_Common::ADC3R, 12, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TAC3 = HRTIM_Common_ADC3R_AD1TAC3_Values<HRTIM_Common::ADC3R, 11, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1TAC2 = HRTIM_Common_ADC3R_AD1TAC2_Values<HRTIM_Common::ADC3R, 10, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1EEV5 = HRTIM_Common_ADC3R_AD1EEV5_Values<HRTIM_Common::ADC3R, 9, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1EEV4 = HRTIM_Common_ADC3R_AD1EEV4_Values<HRTIM_Common::ADC3R, 8, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1EEV3 = HRTIM_Common_ADC3R_AD1EEV3_Values<HRTIM_Common::ADC3R, 7, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1EEV2 = HRTIM_Common_ADC3R_AD1EEV2_Values<HRTIM_Common::ADC3R, 6, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1EEV1 = HRTIM_Common_ADC3R_AD1EEV1_Values<HRTIM_Common::ADC3R, 5, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1MPER = HRTIM_Common_ADC3R_AD1MPER_Values<HRTIM_Common::ADC3R, 4, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1MC4 = HRTIM_Common_ADC3R_AD1MC4_Values<HRTIM_Common::ADC3R, 3, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1MC3 = HRTIM_Common_ADC3R_AD1MC3_Values<HRTIM_Common::ADC3R, 2, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1MC2 = HRTIM_Common_ADC3R_AD1MC2_Values<HRTIM_Common::ADC3R, 1, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using AD1MC1 = HRTIM_Common_ADC3R_AD1MC1_Values<HRTIM_Common::ADC3R, 0, 1, ReadWriteMode, HRTIM_CommonADC3RBase> ;
    using FieldValues = HRTIM_Common_ADC3R_AD1MC1_Values<HRTIM_Common::ADC3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC3RPack  = Register<0x40016BC4, 32, ReadWriteMode, HRTIM_CommonADC3RBase, T...> ;

  struct HRTIM_CommonADC4RBase {} ;

  struct ADC4R : public RegisterBase<0x40016BC8, 32, ReadWriteMode>
  {
    using AD2TERST = HRTIM_Common_ADC4R_AD2TERST_Values<HRTIM_Common::ADC4R, 31, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TEC4 = HRTIM_Common_ADC4R_AD2TEC4_Values<HRTIM_Common::ADC4R, 30, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TEC3 = HRTIM_Common_ADC4R_AD2TEC3_Values<HRTIM_Common::ADC4R, 29, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TEC2 = HRTIM_Common_ADC4R_AD2TEC2_Values<HRTIM_Common::ADC4R, 28, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TDRST = HRTIM_Common_ADC4R_AD2TDRST_Values<HRTIM_Common::ADC4R, 27, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TDPER = HRTIM_Common_ADC4R_AD2TDPER_Values<HRTIM_Common::ADC4R, 26, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TDC4 = HRTIM_Common_ADC4R_AD2TDC4_Values<HRTIM_Common::ADC4R, 25, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TDC3 = HRTIM_Common_ADC4R_AD2TDC3_Values<HRTIM_Common::ADC4R, 24, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TDC2 = HRTIM_Common_ADC4R_AD2TDC2_Values<HRTIM_Common::ADC4R, 23, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TCRST = HRTIM_Common_ADC4R_AD2TCRST_Values<HRTIM_Common::ADC4R, 22, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TCPER = HRTIM_Common_ADC4R_AD2TCPER_Values<HRTIM_Common::ADC4R, 21, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TCC4 = HRTIM_Common_ADC4R_AD2TCC4_Values<HRTIM_Common::ADC4R, 20, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TCC3 = HRTIM_Common_ADC4R_AD2TCC3_Values<HRTIM_Common::ADC4R, 19, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TCC2 = HRTIM_Common_ADC4R_AD2TCC2_Values<HRTIM_Common::ADC4R, 18, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TBPER = HRTIM_Common_ADC4R_AD2TBPER_Values<HRTIM_Common::ADC4R, 17, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TBC4 = HRTIM_Common_ADC4R_AD2TBC4_Values<HRTIM_Common::ADC4R, 16, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TBC3 = HRTIM_Common_ADC4R_AD2TBC3_Values<HRTIM_Common::ADC4R, 15, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TBC2 = HRTIM_Common_ADC4R_AD2TBC2_Values<HRTIM_Common::ADC4R, 14, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TAPER = HRTIM_Common_ADC4R_AD2TAPER_Values<HRTIM_Common::ADC4R, 13, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TAC4 = HRTIM_Common_ADC4R_AD2TAC4_Values<HRTIM_Common::ADC4R, 12, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TAC3 = HRTIM_Common_ADC4R_AD2TAC3_Values<HRTIM_Common::ADC4R, 11, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2TAC2 = HRTIM_Common_ADC4R_AD2TAC2_Values<HRTIM_Common::ADC4R, 10, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2EEV10 = HRTIM_Common_ADC4R_AD2EEV10_Values<HRTIM_Common::ADC4R, 9, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2EEV9 = HRTIM_Common_ADC4R_AD2EEV9_Values<HRTIM_Common::ADC4R, 8, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2EEV8 = HRTIM_Common_ADC4R_AD2EEV8_Values<HRTIM_Common::ADC4R, 7, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2EEV7 = HRTIM_Common_ADC4R_AD2EEV7_Values<HRTIM_Common::ADC4R, 6, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2EEV6 = HRTIM_Common_ADC4R_AD2EEV6_Values<HRTIM_Common::ADC4R, 5, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2MPER = HRTIM_Common_ADC4R_AD2MPER_Values<HRTIM_Common::ADC4R, 4, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2MC4 = HRTIM_Common_ADC4R_AD2MC4_Values<HRTIM_Common::ADC4R, 3, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2MC3 = HRTIM_Common_ADC4R_AD2MC3_Values<HRTIM_Common::ADC4R, 2, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2MC2 = HRTIM_Common_ADC4R_AD2MC2_Values<HRTIM_Common::ADC4R, 1, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using AD2MC1 = HRTIM_Common_ADC4R_AD2MC1_Values<HRTIM_Common::ADC4R, 0, 1, ReadWriteMode, HRTIM_CommonADC4RBase> ;
    using FieldValues = HRTIM_Common_ADC4R_AD2MC1_Values<HRTIM_Common::ADC4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADC4RPack  = Register<0x40016BC8, 32, ReadWriteMode, HRTIM_CommonADC4RBase, T...> ;

  struct HRTIM_CommonDLLCRBase {} ;

  struct DLLCR : public RegisterBase<0x40016BCC, 32, ReadWriteMode>
  {
    using CALRTE = HRTIM_Common_DLLCR_CALRTE_Values<HRTIM_Common::DLLCR, 2, 2, ReadWriteMode, HRTIM_CommonDLLCRBase> ;
    using CALEN = HRTIM_Common_DLLCR_CALEN_Values<HRTIM_Common::DLLCR, 1, 1, ReadWriteMode, HRTIM_CommonDLLCRBase> ;
    using CAL = HRTIM_Common_DLLCR_CAL_Values<HRTIM_Common::DLLCR, 0, 1, ReadWriteMode, HRTIM_CommonDLLCRBase> ;
    using FieldValues = HRTIM_Common_DLLCR_CAL_Values<HRTIM_Common::DLLCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DLLCRPack  = Register<0x40016BCC, 32, ReadWriteMode, HRTIM_CommonDLLCRBase, T...> ;

  struct HRTIM_CommonFLTINR1Base {} ;

  struct FLTINR1 : public RegisterBase<0x40016BD0, 32, ReadWriteMode>
  {
    using FLT4LCK = HRTIM_Common_FLTINR1_FLT4LCK_Values<HRTIM_Common::FLTINR1, 31, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT4F = HRTIM_Common_FLTINR1_FLT4F_Values<HRTIM_Common::FLTINR1, 27, 4, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT4SRC = HRTIM_Common_FLTINR1_FLT4SRC_Values<HRTIM_Common::FLTINR1, 26, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT4P = HRTIM_Common_FLTINR1_FLT4P_Values<HRTIM_Common::FLTINR1, 25, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT4E = HRTIM_Common_FLTINR1_FLT4E_Values<HRTIM_Common::FLTINR1, 24, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT3LCK = HRTIM_Common_FLTINR1_FLT3LCK_Values<HRTIM_Common::FLTINR1, 23, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT3F = HRTIM_Common_FLTINR1_FLT3F_Values<HRTIM_Common::FLTINR1, 19, 4, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT3SRC = HRTIM_Common_FLTINR1_FLT3SRC_Values<HRTIM_Common::FLTINR1, 18, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT3P = HRTIM_Common_FLTINR1_FLT3P_Values<HRTIM_Common::FLTINR1, 17, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT3E = HRTIM_Common_FLTINR1_FLT3E_Values<HRTIM_Common::FLTINR1, 16, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT2LCK = HRTIM_Common_FLTINR1_FLT2LCK_Values<HRTIM_Common::FLTINR1, 15, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT2F = HRTIM_Common_FLTINR1_FLT2F_Values<HRTIM_Common::FLTINR1, 11, 4, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT2SRC = HRTIM_Common_FLTINR1_FLT2SRC_Values<HRTIM_Common::FLTINR1, 10, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT2P = HRTIM_Common_FLTINR1_FLT2P_Values<HRTIM_Common::FLTINR1, 9, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT2E = HRTIM_Common_FLTINR1_FLT2E_Values<HRTIM_Common::FLTINR1, 8, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT1LCK = HRTIM_Common_FLTINR1_FLT1LCK_Values<HRTIM_Common::FLTINR1, 7, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT1F = HRTIM_Common_FLTINR1_FLT1F_Values<HRTIM_Common::FLTINR1, 3, 4, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT1SRC = HRTIM_Common_FLTINR1_FLT1SRC_Values<HRTIM_Common::FLTINR1, 2, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT1P = HRTIM_Common_FLTINR1_FLT1P_Values<HRTIM_Common::FLTINR1, 1, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FLT1E = HRTIM_Common_FLTINR1_FLT1E_Values<HRTIM_Common::FLTINR1, 0, 1, ReadWriteMode, HRTIM_CommonFLTINR1Base> ;
    using FieldValues = HRTIM_Common_FLTINR1_FLT1E_Values<HRTIM_Common::FLTINR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLTINR1Pack  = Register<0x40016BD0, 32, ReadWriteMode, HRTIM_CommonFLTINR1Base, T...> ;

  struct HRTIM_CommonFLTINR2Base {} ;

  struct FLTINR2 : public RegisterBase<0x40016BD4, 32, ReadWriteMode>
  {
    using FLTSD = HRTIM_Common_FLTINR2_FLTSD_Values<HRTIM_Common::FLTINR2, 24, 2, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT6SRC_1 = HRTIM_Common_FLTINR2_FLT6SRC_1_Values<HRTIM_Common::FLTINR2, 21, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT5SRC_1 = HRTIM_Common_FLTINR2_FLT5SRC_1_Values<HRTIM_Common::FLTINR2, 20, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT4SRC_1 = HRTIM_Common_FLTINR2_FLT4SRC_1_Values<HRTIM_Common::FLTINR2, 19, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT3SRC_1 = HRTIM_Common_FLTINR2_FLT3SRC_1_Values<HRTIM_Common::FLTINR2, 18, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT2SRC_1 = HRTIM_Common_FLTINR2_FLT2SRC_1_Values<HRTIM_Common::FLTINR2, 17, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT1SRC_1 = HRTIM_Common_FLTINR2_FLT1SRC_1_Values<HRTIM_Common::FLTINR2, 16, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT6LCK = HRTIM_Common_FLTINR2_FLT6LCK_Values<HRTIM_Common::FLTINR2, 15, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT6F = HRTIM_Common_FLTINR2_FLT6F_Values<HRTIM_Common::FLTINR2, 11, 4, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT6SRC_0 = HRTIM_Common_FLTINR2_FLT6SRC_0_Values<HRTIM_Common::FLTINR2, 10, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT6P = HRTIM_Common_FLTINR2_FLT6P_Values<HRTIM_Common::FLTINR2, 9, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT6E = HRTIM_Common_FLTINR2_FLT6E_Values<HRTIM_Common::FLTINR2, 8, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT5LCK = HRTIM_Common_FLTINR2_FLT5LCK_Values<HRTIM_Common::FLTINR2, 7, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT5F = HRTIM_Common_FLTINR2_FLT5F_Values<HRTIM_Common::FLTINR2, 3, 4, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT5SRC = HRTIM_Common_FLTINR2_FLT5SRC_Values<HRTIM_Common::FLTINR2, 2, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT5P = HRTIM_Common_FLTINR2_FLT5P_Values<HRTIM_Common::FLTINR2, 1, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FLT5E = HRTIM_Common_FLTINR2_FLT5E_Values<HRTIM_Common::FLTINR2, 0, 1, ReadWriteMode, HRTIM_CommonFLTINR2Base> ;
    using FieldValues = HRTIM_Common_FLTINR2_FLT5E_Values<HRTIM_Common::FLTINR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLTINR2Pack  = Register<0x40016BD4, 32, ReadWriteMode, HRTIM_CommonFLTINR2Base, T...> ;

  struct HRTIM_CommonBDMUPDRBase {} ;

  struct BDMUPDR : public RegisterBase<0x40016BD8, 32, ReadWriteMode>
  {
    using MCMP4 = HRTIM_Common_BDMUPDR_MCMP4_Values<HRTIM_Common::BDMUPDR, 9, 1, ReadWriteMode, HRTIM_CommonBDMUPDRBase> ;
    using MCMP3 = HRTIM_Common_BDMUPDR_MCMP3_Values<HRTIM_Common::BDMUPDR, 8, 1, ReadWriteMode, HRTIM_CommonBDMUPDRBase> ;
    using MCMP2 = HRTIM_Common_BDMUPDR_MCMP2_Values<HRTIM_Common::BDMUPDR, 7, 1, ReadWriteMode, HRTIM_CommonBDMUPDRBase> ;
    using MCMP1 = HRTIM_Common_BDMUPDR_MCMP1_Values<HRTIM_Common::BDMUPDR, 6, 1, ReadWriteMode, HRTIM_CommonBDMUPDRBase> ;
    using MREP = HRTIM_Common_BDMUPDR_MREP_Values<HRTIM_Common::BDMUPDR, 5, 1, ReadWriteMode, HRTIM_CommonBDMUPDRBase> ;
    using MPER = HRTIM_Common_BDMUPDR_MPER_Values<HRTIM_Common::BDMUPDR, 4, 1, ReadWriteMode, HRTIM_CommonBDMUPDRBase> ;
    using MCNT = HRTIM_Common_BDMUPDR_MCNT_Values<HRTIM_Common::BDMUPDR, 3, 1, ReadWriteMode, HRTIM_CommonBDMUPDRBase> ;
    using MDIER = HRTIM_Common_BDMUPDR_MDIER_Values<HRTIM_Common::BDMUPDR, 2, 1, ReadWriteMode, HRTIM_CommonBDMUPDRBase> ;
    using MICR = HRTIM_Common_BDMUPDR_MICR_Values<HRTIM_Common::BDMUPDR, 1, 1, ReadWriteMode, HRTIM_CommonBDMUPDRBase> ;
    using MCR = HRTIM_Common_BDMUPDR_MCR_Values<HRTIM_Common::BDMUPDR, 0, 1, ReadWriteMode, HRTIM_CommonBDMUPDRBase> ;
    using FieldValues = HRTIM_Common_BDMUPDR_MCR_Values<HRTIM_Common::BDMUPDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDMUPDRPack  = Register<0x40016BD8, 32, ReadWriteMode, HRTIM_CommonBDMUPDRBase, T...> ;

  struct HRTIM_CommonBDTAUPRBase {} ;

  struct BDTAUPR : public RegisterBase<0x40016BDC, 32, ReadWriteMode>
  {
    using TIMxEEFR3 = HRTIM_Common_BDTAUPR_TIMxEEFR3_Values<HRTIM_Common::BDTAUPR, 22, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxCR2 = HRTIM_Common_BDTAUPR_TIMxCR2_Values<HRTIM_Common::BDTAUPR, 21, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxFLTR = HRTIM_Common_BDTAUPR_TIMxFLTR_Values<HRTIM_Common::BDTAUPR, 20, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxOUTR = HRTIM_Common_BDTAUPR_TIMxOUTR_Values<HRTIM_Common::BDTAUPR, 19, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxCHPR = HRTIM_Common_BDTAUPR_TIMxCHPR_Values<HRTIM_Common::BDTAUPR, 18, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxRSTR = HRTIM_Common_BDTAUPR_TIMxRSTR_Values<HRTIM_Common::BDTAUPR, 17, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxEEFR2 = HRTIM_Common_BDTAUPR_TIMxEEFR2_Values<HRTIM_Common::BDTAUPR, 16, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxEEFR1 = HRTIM_Common_BDTAUPR_TIMxEEFR1_Values<HRTIM_Common::BDTAUPR, 15, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxRST2R = HRTIM_Common_BDTAUPR_TIMxRST2R_Values<HRTIM_Common::BDTAUPR, 14, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxSET2R = HRTIM_Common_BDTAUPR_TIMxSET2R_Values<HRTIM_Common::BDTAUPR, 13, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxRST1R = HRTIM_Common_BDTAUPR_TIMxRST1R_Values<HRTIM_Common::BDTAUPR, 12, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxSET1R = HRTIM_Common_BDTAUPR_TIMxSET1R_Values<HRTIM_Common::BDTAUPR, 11, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMx_DTxR = HRTIM_Common_BDTAUPR_TIMx_DTxR_Values<HRTIM_Common::BDTAUPR, 10, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxCMP4 = HRTIM_Common_BDTAUPR_TIMxCMP4_Values<HRTIM_Common::BDTAUPR, 9, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxCMP3 = HRTIM_Common_BDTAUPR_TIMxCMP3_Values<HRTIM_Common::BDTAUPR, 8, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxCMP2 = HRTIM_Common_BDTAUPR_TIMxCMP2_Values<HRTIM_Common::BDTAUPR, 7, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxCMP1 = HRTIM_Common_BDTAUPR_TIMxCMP1_Values<HRTIM_Common::BDTAUPR, 6, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxREP = HRTIM_Common_BDTAUPR_TIMxREP_Values<HRTIM_Common::BDTAUPR, 5, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxPER = HRTIM_Common_BDTAUPR_TIMxPER_Values<HRTIM_Common::BDTAUPR, 4, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxCNT = HRTIM_Common_BDTAUPR_TIMxCNT_Values<HRTIM_Common::BDTAUPR, 3, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxDIER = HRTIM_Common_BDTAUPR_TIMxDIER_Values<HRTIM_Common::BDTAUPR, 2, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxICR = HRTIM_Common_BDTAUPR_TIMxICR_Values<HRTIM_Common::BDTAUPR, 1, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using TIMxCR = HRTIM_Common_BDTAUPR_TIMxCR_Values<HRTIM_Common::BDTAUPR, 0, 1, ReadWriteMode, HRTIM_CommonBDTAUPRBase> ;
    using FieldValues = HRTIM_Common_BDTAUPR_TIMxCR_Values<HRTIM_Common::BDTAUPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTAUPRPack  = Register<0x40016BDC, 32, ReadWriteMode, HRTIM_CommonBDTAUPRBase, T...> ;

  struct HRTIM_CommonBDTBUPRBase {} ;

  struct BDTBUPR : public RegisterBase<0x40016BE0, 32, ReadWriteMode>
  {
    using TIMxEEFR3 = HRTIM_Common_BDTBUPR_TIMxEEFR3_Values<HRTIM_Common::BDTBUPR, 22, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxCR2 = HRTIM_Common_BDTBUPR_TIMxCR2_Values<HRTIM_Common::BDTBUPR, 21, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxFLTR = HRTIM_Common_BDTBUPR_TIMxFLTR_Values<HRTIM_Common::BDTBUPR, 20, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxOUTR = HRTIM_Common_BDTBUPR_TIMxOUTR_Values<HRTIM_Common::BDTBUPR, 19, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxCHPR = HRTIM_Common_BDTBUPR_TIMxCHPR_Values<HRTIM_Common::BDTBUPR, 18, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxRSTR = HRTIM_Common_BDTBUPR_TIMxRSTR_Values<HRTIM_Common::BDTBUPR, 17, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxEEFR2 = HRTIM_Common_BDTBUPR_TIMxEEFR2_Values<HRTIM_Common::BDTBUPR, 16, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxEEFR1 = HRTIM_Common_BDTBUPR_TIMxEEFR1_Values<HRTIM_Common::BDTBUPR, 15, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxRST2R = HRTIM_Common_BDTBUPR_TIMxRST2R_Values<HRTIM_Common::BDTBUPR, 14, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxSET2R = HRTIM_Common_BDTBUPR_TIMxSET2R_Values<HRTIM_Common::BDTBUPR, 13, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxRST1R = HRTIM_Common_BDTBUPR_TIMxRST1R_Values<HRTIM_Common::BDTBUPR, 12, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxSET1R = HRTIM_Common_BDTBUPR_TIMxSET1R_Values<HRTIM_Common::BDTBUPR, 11, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMx_DTxR = HRTIM_Common_BDTBUPR_TIMx_DTxR_Values<HRTIM_Common::BDTBUPR, 10, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxCMP4 = HRTIM_Common_BDTBUPR_TIMxCMP4_Values<HRTIM_Common::BDTBUPR, 9, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxCMP3 = HRTIM_Common_BDTBUPR_TIMxCMP3_Values<HRTIM_Common::BDTBUPR, 8, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxCMP2 = HRTIM_Common_BDTBUPR_TIMxCMP2_Values<HRTIM_Common::BDTBUPR, 7, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxCMP1 = HRTIM_Common_BDTBUPR_TIMxCMP1_Values<HRTIM_Common::BDTBUPR, 6, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxREP = HRTIM_Common_BDTBUPR_TIMxREP_Values<HRTIM_Common::BDTBUPR, 5, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxPER = HRTIM_Common_BDTBUPR_TIMxPER_Values<HRTIM_Common::BDTBUPR, 4, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxCNT = HRTIM_Common_BDTBUPR_TIMxCNT_Values<HRTIM_Common::BDTBUPR, 3, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxDIER = HRTIM_Common_BDTBUPR_TIMxDIER_Values<HRTIM_Common::BDTBUPR, 2, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxICR = HRTIM_Common_BDTBUPR_TIMxICR_Values<HRTIM_Common::BDTBUPR, 1, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using TIMxCR = HRTIM_Common_BDTBUPR_TIMxCR_Values<HRTIM_Common::BDTBUPR, 0, 1, ReadWriteMode, HRTIM_CommonBDTBUPRBase> ;
    using FieldValues = HRTIM_Common_BDTBUPR_TIMxCR_Values<HRTIM_Common::BDTBUPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTBUPRPack  = Register<0x40016BE0, 32, ReadWriteMode, HRTIM_CommonBDTBUPRBase, T...> ;

  struct HRTIM_CommonBDTCUPRBase {} ;

  struct BDTCUPR : public RegisterBase<0x40016BE4, 32, ReadWriteMode>
  {
    using TIMxEEFR3 = HRTIM_Common_BDTCUPR_TIMxEEFR3_Values<HRTIM_Common::BDTCUPR, 22, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxCR2 = HRTIM_Common_BDTCUPR_TIMxCR2_Values<HRTIM_Common::BDTCUPR, 21, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxFLTR = HRTIM_Common_BDTCUPR_TIMxFLTR_Values<HRTIM_Common::BDTCUPR, 20, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxOUTR = HRTIM_Common_BDTCUPR_TIMxOUTR_Values<HRTIM_Common::BDTCUPR, 19, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxCHPR = HRTIM_Common_BDTCUPR_TIMxCHPR_Values<HRTIM_Common::BDTCUPR, 18, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxRSTR = HRTIM_Common_BDTCUPR_TIMxRSTR_Values<HRTIM_Common::BDTCUPR, 17, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxEEFR2 = HRTIM_Common_BDTCUPR_TIMxEEFR2_Values<HRTIM_Common::BDTCUPR, 16, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxEEFR1 = HRTIM_Common_BDTCUPR_TIMxEEFR1_Values<HRTIM_Common::BDTCUPR, 15, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxRST2R = HRTIM_Common_BDTCUPR_TIMxRST2R_Values<HRTIM_Common::BDTCUPR, 14, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxSET2R = HRTIM_Common_BDTCUPR_TIMxSET2R_Values<HRTIM_Common::BDTCUPR, 13, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxRST1R = HRTIM_Common_BDTCUPR_TIMxRST1R_Values<HRTIM_Common::BDTCUPR, 12, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxSET1R = HRTIM_Common_BDTCUPR_TIMxSET1R_Values<HRTIM_Common::BDTCUPR, 11, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMx_DTxR = HRTIM_Common_BDTCUPR_TIMx_DTxR_Values<HRTIM_Common::BDTCUPR, 10, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxCMP4 = HRTIM_Common_BDTCUPR_TIMxCMP4_Values<HRTIM_Common::BDTCUPR, 9, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxCMP3 = HRTIM_Common_BDTCUPR_TIMxCMP3_Values<HRTIM_Common::BDTCUPR, 8, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxCMP2 = HRTIM_Common_BDTCUPR_TIMxCMP2_Values<HRTIM_Common::BDTCUPR, 7, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxCMP1 = HRTIM_Common_BDTCUPR_TIMxCMP1_Values<HRTIM_Common::BDTCUPR, 6, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxREP = HRTIM_Common_BDTCUPR_TIMxREP_Values<HRTIM_Common::BDTCUPR, 5, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxPER = HRTIM_Common_BDTCUPR_TIMxPER_Values<HRTIM_Common::BDTCUPR, 4, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxCNT = HRTIM_Common_BDTCUPR_TIMxCNT_Values<HRTIM_Common::BDTCUPR, 3, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxDIER = HRTIM_Common_BDTCUPR_TIMxDIER_Values<HRTIM_Common::BDTCUPR, 2, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxICR = HRTIM_Common_BDTCUPR_TIMxICR_Values<HRTIM_Common::BDTCUPR, 1, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using TIMxCR = HRTIM_Common_BDTCUPR_TIMxCR_Values<HRTIM_Common::BDTCUPR, 0, 1, ReadWriteMode, HRTIM_CommonBDTCUPRBase> ;
    using FieldValues = HRTIM_Common_BDTCUPR_TIMxCR_Values<HRTIM_Common::BDTCUPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTCUPRPack  = Register<0x40016BE4, 32, ReadWriteMode, HRTIM_CommonBDTCUPRBase, T...> ;

  struct HRTIM_CommonBDTDUPRBase {} ;

  struct BDTDUPR : public RegisterBase<0x40016BE8, 32, ReadWriteMode>
  {
    using TIMxEEFR3 = HRTIM_Common_BDTDUPR_TIMxEEFR3_Values<HRTIM_Common::BDTDUPR, 22, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxCR2 = HRTIM_Common_BDTDUPR_TIMxCR2_Values<HRTIM_Common::BDTDUPR, 21, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxFLTR = HRTIM_Common_BDTDUPR_TIMxFLTR_Values<HRTIM_Common::BDTDUPR, 20, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxOUTR = HRTIM_Common_BDTDUPR_TIMxOUTR_Values<HRTIM_Common::BDTDUPR, 19, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxCHPR = HRTIM_Common_BDTDUPR_TIMxCHPR_Values<HRTIM_Common::BDTDUPR, 18, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxRSTR = HRTIM_Common_BDTDUPR_TIMxRSTR_Values<HRTIM_Common::BDTDUPR, 17, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxEEFR2 = HRTIM_Common_BDTDUPR_TIMxEEFR2_Values<HRTIM_Common::BDTDUPR, 16, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxEEFR1 = HRTIM_Common_BDTDUPR_TIMxEEFR1_Values<HRTIM_Common::BDTDUPR, 15, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxRST2R = HRTIM_Common_BDTDUPR_TIMxRST2R_Values<HRTIM_Common::BDTDUPR, 14, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxSET2R = HRTIM_Common_BDTDUPR_TIMxSET2R_Values<HRTIM_Common::BDTDUPR, 13, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxRST1R = HRTIM_Common_BDTDUPR_TIMxRST1R_Values<HRTIM_Common::BDTDUPR, 12, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxSET1R = HRTIM_Common_BDTDUPR_TIMxSET1R_Values<HRTIM_Common::BDTDUPR, 11, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMx_DTxR = HRTIM_Common_BDTDUPR_TIMx_DTxR_Values<HRTIM_Common::BDTDUPR, 10, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxCMP4 = HRTIM_Common_BDTDUPR_TIMxCMP4_Values<HRTIM_Common::BDTDUPR, 9, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxCMP3 = HRTIM_Common_BDTDUPR_TIMxCMP3_Values<HRTIM_Common::BDTDUPR, 8, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxCMP2 = HRTIM_Common_BDTDUPR_TIMxCMP2_Values<HRTIM_Common::BDTDUPR, 7, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxCMP1 = HRTIM_Common_BDTDUPR_TIMxCMP1_Values<HRTIM_Common::BDTDUPR, 6, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxREP = HRTIM_Common_BDTDUPR_TIMxREP_Values<HRTIM_Common::BDTDUPR, 5, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxPER = HRTIM_Common_BDTDUPR_TIMxPER_Values<HRTIM_Common::BDTDUPR, 4, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxCNT = HRTIM_Common_BDTDUPR_TIMxCNT_Values<HRTIM_Common::BDTDUPR, 3, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxDIER = HRTIM_Common_BDTDUPR_TIMxDIER_Values<HRTIM_Common::BDTDUPR, 2, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxICR = HRTIM_Common_BDTDUPR_TIMxICR_Values<HRTIM_Common::BDTDUPR, 1, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using TIMxCR = HRTIM_Common_BDTDUPR_TIMxCR_Values<HRTIM_Common::BDTDUPR, 0, 1, ReadWriteMode, HRTIM_CommonBDTDUPRBase> ;
    using FieldValues = HRTIM_Common_BDTDUPR_TIMxCR_Values<HRTIM_Common::BDTDUPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTDUPRPack  = Register<0x40016BE8, 32, ReadWriteMode, HRTIM_CommonBDTDUPRBase, T...> ;

  struct HRTIM_CommonBDTEUPRBase {} ;

  struct BDTEUPR : public RegisterBase<0x40016BEC, 32, ReadWriteMode>
  {
    using TIMxEEFR3 = HRTIM_Common_BDTEUPR_TIMxEEFR3_Values<HRTIM_Common::BDTEUPR, 22, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxCR2 = HRTIM_Common_BDTEUPR_TIMxCR2_Values<HRTIM_Common::BDTEUPR, 21, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxFLTR = HRTIM_Common_BDTEUPR_TIMxFLTR_Values<HRTIM_Common::BDTEUPR, 20, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxOUTR = HRTIM_Common_BDTEUPR_TIMxOUTR_Values<HRTIM_Common::BDTEUPR, 19, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxCHPR = HRTIM_Common_BDTEUPR_TIMxCHPR_Values<HRTIM_Common::BDTEUPR, 18, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxRSTR = HRTIM_Common_BDTEUPR_TIMxRSTR_Values<HRTIM_Common::BDTEUPR, 17, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxEEFR2 = HRTIM_Common_BDTEUPR_TIMxEEFR2_Values<HRTIM_Common::BDTEUPR, 16, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxEEFR1 = HRTIM_Common_BDTEUPR_TIMxEEFR1_Values<HRTIM_Common::BDTEUPR, 15, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxRST2R = HRTIM_Common_BDTEUPR_TIMxRST2R_Values<HRTIM_Common::BDTEUPR, 14, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxSET2R = HRTIM_Common_BDTEUPR_TIMxSET2R_Values<HRTIM_Common::BDTEUPR, 13, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxRST1R = HRTIM_Common_BDTEUPR_TIMxRST1R_Values<HRTIM_Common::BDTEUPR, 12, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxSET1R = HRTIM_Common_BDTEUPR_TIMxSET1R_Values<HRTIM_Common::BDTEUPR, 11, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMx_DTxR = HRTIM_Common_BDTEUPR_TIMx_DTxR_Values<HRTIM_Common::BDTEUPR, 10, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxCMP4 = HRTIM_Common_BDTEUPR_TIMxCMP4_Values<HRTIM_Common::BDTEUPR, 9, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxCMP3 = HRTIM_Common_BDTEUPR_TIMxCMP3_Values<HRTIM_Common::BDTEUPR, 8, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxCMP2 = HRTIM_Common_BDTEUPR_TIMxCMP2_Values<HRTIM_Common::BDTEUPR, 7, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxCMP1 = HRTIM_Common_BDTEUPR_TIMxCMP1_Values<HRTIM_Common::BDTEUPR, 6, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxREP = HRTIM_Common_BDTEUPR_TIMxREP_Values<HRTIM_Common::BDTEUPR, 5, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxPER = HRTIM_Common_BDTEUPR_TIMxPER_Values<HRTIM_Common::BDTEUPR, 4, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxCNT = HRTIM_Common_BDTEUPR_TIMxCNT_Values<HRTIM_Common::BDTEUPR, 3, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxDIER = HRTIM_Common_BDTEUPR_TIMxDIER_Values<HRTIM_Common::BDTEUPR, 2, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxICR = HRTIM_Common_BDTEUPR_TIMxICR_Values<HRTIM_Common::BDTEUPR, 1, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using TIMxCR = HRTIM_Common_BDTEUPR_TIMxCR_Values<HRTIM_Common::BDTEUPR, 0, 1, ReadWriteMode, HRTIM_CommonBDTEUPRBase> ;
    using FieldValues = HRTIM_Common_BDTEUPR_TIMxCR_Values<HRTIM_Common::BDTEUPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTEUPRPack  = Register<0x40016BEC, 32, ReadWriteMode, HRTIM_CommonBDTEUPRBase, T...> ;

  struct HRTIM_CommonBDTFUPRBase {} ;

  struct BDTFUPR : public RegisterBase<0x40016BF4, 32, ReadWriteMode>
  {
    using TIMxEEFR3 = HRTIM_Common_BDTFUPR_TIMxEEFR3_Values<HRTIM_Common::BDTFUPR, 22, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxCR2 = HRTIM_Common_BDTFUPR_TIMxCR2_Values<HRTIM_Common::BDTFUPR, 21, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxFLTR = HRTIM_Common_BDTFUPR_TIMxFLTR_Values<HRTIM_Common::BDTFUPR, 20, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxOUTR = HRTIM_Common_BDTFUPR_TIMxOUTR_Values<HRTIM_Common::BDTFUPR, 19, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxCHPR = HRTIM_Common_BDTFUPR_TIMxCHPR_Values<HRTIM_Common::BDTFUPR, 18, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxRSTR = HRTIM_Common_BDTFUPR_TIMxRSTR_Values<HRTIM_Common::BDTFUPR, 17, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxEEFR2 = HRTIM_Common_BDTFUPR_TIMxEEFR2_Values<HRTIM_Common::BDTFUPR, 16, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxEEFR1 = HRTIM_Common_BDTFUPR_TIMxEEFR1_Values<HRTIM_Common::BDTFUPR, 15, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxRST2R = HRTIM_Common_BDTFUPR_TIMxRST2R_Values<HRTIM_Common::BDTFUPR, 14, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxSET2R = HRTIM_Common_BDTFUPR_TIMxSET2R_Values<HRTIM_Common::BDTFUPR, 13, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxRST1R = HRTIM_Common_BDTFUPR_TIMxRST1R_Values<HRTIM_Common::BDTFUPR, 12, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxSET1R = HRTIM_Common_BDTFUPR_TIMxSET1R_Values<HRTIM_Common::BDTFUPR, 11, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMx_DTxR = HRTIM_Common_BDTFUPR_TIMx_DTxR_Values<HRTIM_Common::BDTFUPR, 10, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxCMP4 = HRTIM_Common_BDTFUPR_TIMxCMP4_Values<HRTIM_Common::BDTFUPR, 9, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxCMP3 = HRTIM_Common_BDTFUPR_TIMxCMP3_Values<HRTIM_Common::BDTFUPR, 8, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxCMP2 = HRTIM_Common_BDTFUPR_TIMxCMP2_Values<HRTIM_Common::BDTFUPR, 7, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxCMP1 = HRTIM_Common_BDTFUPR_TIMxCMP1_Values<HRTIM_Common::BDTFUPR, 6, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxREP = HRTIM_Common_BDTFUPR_TIMxREP_Values<HRTIM_Common::BDTFUPR, 5, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxPER = HRTIM_Common_BDTFUPR_TIMxPER_Values<HRTIM_Common::BDTFUPR, 4, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxCNT = HRTIM_Common_BDTFUPR_TIMxCNT_Values<HRTIM_Common::BDTFUPR, 3, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxDIER = HRTIM_Common_BDTFUPR_TIMxDIER_Values<HRTIM_Common::BDTFUPR, 2, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxICR = HRTIM_Common_BDTFUPR_TIMxICR_Values<HRTIM_Common::BDTFUPR, 1, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using TIMxCR = HRTIM_Common_BDTFUPR_TIMxCR_Values<HRTIM_Common::BDTFUPR, 0, 1, ReadWriteMode, HRTIM_CommonBDTFUPRBase> ;
    using FieldValues = HRTIM_Common_BDTFUPR_TIMxCR_Values<HRTIM_Common::BDTFUPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDTFUPRPack  = Register<0x40016BF4, 32, ReadWriteMode, HRTIM_CommonBDTFUPRBase, T...> ;

  struct HRTIM_CommonBDMADRBase {} ;

  struct BDMADR : public RegisterBase<0x40016BF0, 32, WriteMode>
  {
    using BDMADRField = HRTIM_Common_BDMADR_BDMADR_Values<HRTIM_Common::BDMADR, 0, 32, WriteMode, HRTIM_CommonBDMADRBase> ;
    using FieldValues = HRTIM_Common_BDMADR_BDMADR_Values<HRTIM_Common::BDMADR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BDMADRPack  = Register<0x40016BF0, 32, WriteMode, HRTIM_CommonBDMADRBase, T...> ;

  struct HRTIM_CommonADCERBase {} ;

  struct ADCER : public RegisterBase<0x40016BF8, 32, ReadWriteMode>
  {
    using ADC10TRG = HRTIM_Common_ADCER_ADC10TRG_Values<HRTIM_Common::ADCER, 26, 5, ReadWriteMode, HRTIM_CommonADCERBase> ;
    using ADC9TRG = HRTIM_Common_ADCER_ADC9TRG_Values<HRTIM_Common::ADCER, 21, 5, ReadWriteMode, HRTIM_CommonADCERBase> ;
    using ADC8TRG = HRTIM_Common_ADCER_ADC8TRG_Values<HRTIM_Common::ADCER, 16, 5, ReadWriteMode, HRTIM_CommonADCERBase> ;
    using ADC7TRG = HRTIM_Common_ADCER_ADC7TRG_Values<HRTIM_Common::ADCER, 10, 5, ReadWriteMode, HRTIM_CommonADCERBase> ;
    using ADC6TRG = HRTIM_Common_ADCER_ADC6TRG_Values<HRTIM_Common::ADCER, 5, 5, ReadWriteMode, HRTIM_CommonADCERBase> ;
    using ADC5TRG = HRTIM_Common_ADCER_ADC5TRG_Values<HRTIM_Common::ADCER, 0, 5, ReadWriteMode, HRTIM_CommonADCERBase> ;
    using FieldValues = HRTIM_Common_ADCER_ADC5TRG_Values<HRTIM_Common::ADCER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADCERPack  = Register<0x40016BF8, 32, ReadWriteMode, HRTIM_CommonADCERBase, T...> ;

  struct HRTIM_CommonADCURBase {} ;

  struct ADCUR : public RegisterBase<0x40016BFC, 32, ReadWriteMode>
  {
    using AD10USRC = HRTIM_Common_ADCUR_AD10USRC_Values<HRTIM_Common::ADCUR, 20, 3, ReadWriteMode, HRTIM_CommonADCURBase> ;
    using AD9USRC = HRTIM_Common_ADCUR_AD9USRC_Values<HRTIM_Common::ADCUR, 16, 3, ReadWriteMode, HRTIM_CommonADCURBase> ;
    using AD8USRC = HRTIM_Common_ADCUR_AD8USRC_Values<HRTIM_Common::ADCUR, 12, 3, ReadWriteMode, HRTIM_CommonADCURBase> ;
    using AD7USRC = HRTIM_Common_ADCUR_AD7USRC_Values<HRTIM_Common::ADCUR, 8, 3, ReadWriteMode, HRTIM_CommonADCURBase> ;
    using AD6USRC = HRTIM_Common_ADCUR_AD6USRC_Values<HRTIM_Common::ADCUR, 4, 3, ReadWriteMode, HRTIM_CommonADCURBase> ;
    using AD5USRC = HRTIM_Common_ADCUR_AD5USRC_Values<HRTIM_Common::ADCUR, 0, 3, ReadWriteMode, HRTIM_CommonADCURBase> ;
    using FieldValues = HRTIM_Common_ADCUR_AD5USRC_Values<HRTIM_Common::ADCUR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADCURPack  = Register<0x40016BFC, 32, ReadWriteMode, HRTIM_CommonADCURBase, T...> ;

  struct HRTIM_CommonADCPS1Base {} ;

  struct ADCPS1 : public RegisterBase<0x40016C00, 32, ReadWriteMode>
  {
    using ADC5PSC = HRTIM_Common_ADCPS1_ADC5PSC_Values<HRTIM_Common::ADCPS1, 24, 5, ReadWriteMode, HRTIM_CommonADCPS1Base> ;
    using ADC4PSC = HRTIM_Common_ADCPS1_ADC4PSC_Values<HRTIM_Common::ADCPS1, 18, 5, ReadWriteMode, HRTIM_CommonADCPS1Base> ;
    using ADC3PSC = HRTIM_Common_ADCPS1_ADC3PSC_Values<HRTIM_Common::ADCPS1, 12, 5, ReadWriteMode, HRTIM_CommonADCPS1Base> ;
    using ADC2PSC = HRTIM_Common_ADCPS1_ADC2PSC_Values<HRTIM_Common::ADCPS1, 6, 5, ReadWriteMode, HRTIM_CommonADCPS1Base> ;
    using ADC1PSC = HRTIM_Common_ADCPS1_ADC1PSC_Values<HRTIM_Common::ADCPS1, 0, 5, ReadWriteMode, HRTIM_CommonADCPS1Base> ;
    using FieldValues = HRTIM_Common_ADCPS1_ADC1PSC_Values<HRTIM_Common::ADCPS1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADCPS1Pack  = Register<0x40016C00, 32, ReadWriteMode, HRTIM_CommonADCPS1Base, T...> ;

  struct HRTIM_CommonADCPS2Base {} ;

  struct ADCPS2 : public RegisterBase<0x40016C04, 32, ReadWriteMode>
  {
    using ADC10PSC = HRTIM_Common_ADCPS2_ADC10PSC_Values<HRTIM_Common::ADCPS2, 24, 5, ReadWriteMode, HRTIM_CommonADCPS2Base> ;
    using ADC9PSC = HRTIM_Common_ADCPS2_ADC9PSC_Values<HRTIM_Common::ADCPS2, 18, 5, ReadWriteMode, HRTIM_CommonADCPS2Base> ;
    using ADC8PSC = HRTIM_Common_ADCPS2_ADC8PSC_Values<HRTIM_Common::ADCPS2, 12, 5, ReadWriteMode, HRTIM_CommonADCPS2Base> ;
    using ADC7PSC = HRTIM_Common_ADCPS2_ADC7PSC_Values<HRTIM_Common::ADCPS2, 6, 5, ReadWriteMode, HRTIM_CommonADCPS2Base> ;
    using ADC6PSC = HRTIM_Common_ADCPS2_ADC6PSC_Values<HRTIM_Common::ADCPS2, 0, 5, ReadWriteMode, HRTIM_CommonADCPS2Base> ;
    using FieldValues = HRTIM_Common_ADCPS2_ADC6PSC_Values<HRTIM_Common::ADCPS2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADCPS2Pack  = Register<0x40016C04, 32, ReadWriteMode, HRTIM_CommonADCPS2Base, T...> ;

  struct HRTIM_CommonFLTINR3Base {} ;

  struct FLTINR3 : public RegisterBase<0x40016C08, 32, ReadWriteMode>
  {
    using FLT4RSTM = HRTIM_Common_FLTINR3_FLT4RSTM_Values<HRTIM_Common::FLTINR3, 31, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT4CRES = HRTIM_Common_FLTINR3_FLT4CRES_Values<HRTIM_Common::FLTINR3, 30, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT4CNT = HRTIM_Common_FLTINR3_FLT4CNT_Values<HRTIM_Common::FLTINR3, 26, 4, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT4BLKS = HRTIM_Common_FLTINR3_FLT4BLKS_Values<HRTIM_Common::FLTINR3, 25, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT4BLKE = HRTIM_Common_FLTINR3_FLT4BLKE_Values<HRTIM_Common::FLTINR3, 24, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT3RSTM = HRTIM_Common_FLTINR3_FLT3RSTM_Values<HRTIM_Common::FLTINR3, 23, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT3CRES = HRTIM_Common_FLTINR3_FLT3CRES_Values<HRTIM_Common::FLTINR3, 22, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT3CNT = HRTIM_Common_FLTINR3_FLT3CNT_Values<HRTIM_Common::FLTINR3, 18, 4, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT3BLKS = HRTIM_Common_FLTINR3_FLT3BLKS_Values<HRTIM_Common::FLTINR3, 17, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT3BLKE = HRTIM_Common_FLTINR3_FLT3BLKE_Values<HRTIM_Common::FLTINR3, 16, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT2RSTM = HRTIM_Common_FLTINR3_FLT2RSTM_Values<HRTIM_Common::FLTINR3, 15, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT2CRES = HRTIM_Common_FLTINR3_FLT2CRES_Values<HRTIM_Common::FLTINR3, 14, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT2CNT = HRTIM_Common_FLTINR3_FLT2CNT_Values<HRTIM_Common::FLTINR3, 10, 4, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT2BLKS = HRTIM_Common_FLTINR3_FLT2BLKS_Values<HRTIM_Common::FLTINR3, 9, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT2BLKE = HRTIM_Common_FLTINR3_FLT2BLKE_Values<HRTIM_Common::FLTINR3, 8, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT1RSTM = HRTIM_Common_FLTINR3_FLT1RSTM_Values<HRTIM_Common::FLTINR3, 7, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT1CRES = HRTIM_Common_FLTINR3_FLT1CRES_Values<HRTIM_Common::FLTINR3, 6, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT1CNT = HRTIM_Common_FLTINR3_FLT1CNT_Values<HRTIM_Common::FLTINR3, 2, 4, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT1BLKS = HRTIM_Common_FLTINR3_FLT1BLKS_Values<HRTIM_Common::FLTINR3, 1, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FLT1BLKE = HRTIM_Common_FLTINR3_FLT1BLKE_Values<HRTIM_Common::FLTINR3, 0, 1, ReadWriteMode, HRTIM_CommonFLTINR3Base> ;
    using FieldValues = HRTIM_Common_FLTINR3_FLT1BLKE_Values<HRTIM_Common::FLTINR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLTINR3Pack  = Register<0x40016C08, 32, ReadWriteMode, HRTIM_CommonFLTINR3Base, T...> ;

  struct HRTIM_CommonFLTINR4Base {} ;

  struct FLTINR4 : public RegisterBase<0x40016C0C, 32, ReadWriteMode>
  {
    using FLT6RSTM = HRTIM_Common_FLTINR4_FLT6RSTM_Values<HRTIM_Common::FLTINR4, 15, 1, ReadWriteMode, HRTIM_CommonFLTINR4Base> ;
    using FLT6CRES = HRTIM_Common_FLTINR4_FLT6CRES_Values<HRTIM_Common::FLTINR4, 14, 1, ReadWriteMode, HRTIM_CommonFLTINR4Base> ;
    using FLT6CNT = HRTIM_Common_FLTINR4_FLT6CNT_Values<HRTIM_Common::FLTINR4, 10, 4, ReadWriteMode, HRTIM_CommonFLTINR4Base> ;
    using FLT6BLKS = HRTIM_Common_FLTINR4_FLT6BLKS_Values<HRTIM_Common::FLTINR4, 9, 1, ReadWriteMode, HRTIM_CommonFLTINR4Base> ;
    using FLT6BLKE = HRTIM_Common_FLTINR4_FLT6BLKE_Values<HRTIM_Common::FLTINR4, 8, 1, ReadWriteMode, HRTIM_CommonFLTINR4Base> ;
    using FLT5RSTM = HRTIM_Common_FLTINR4_FLT5RSTM_Values<HRTIM_Common::FLTINR4, 7, 1, ReadWriteMode, HRTIM_CommonFLTINR4Base> ;
    using FLT5CRES = HRTIM_Common_FLTINR4_FLT5CRES_Values<HRTIM_Common::FLTINR4, 6, 1, ReadWriteMode, HRTIM_CommonFLTINR4Base> ;
    using FLT5CNT = HRTIM_Common_FLTINR4_FLT5CNT_Values<HRTIM_Common::FLTINR4, 2, 4, ReadWriteMode, HRTIM_CommonFLTINR4Base> ;
    using FLT5BLKS = HRTIM_Common_FLTINR4_FLT5BLKS_Values<HRTIM_Common::FLTINR4, 1, 1, ReadWriteMode, HRTIM_CommonFLTINR4Base> ;
    using FLT5BLKE = HRTIM_Common_FLTINR4_FLT5BLKE_Values<HRTIM_Common::FLTINR4, 0, 1, ReadWriteMode, HRTIM_CommonFLTINR4Base> ;
    using FieldValues = HRTIM_Common_FLTINR4_FLT5BLKE_Values<HRTIM_Common::FLTINR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLTINR4Pack  = Register<0x40016C0C, 32, ReadWriteMode, HRTIM_CommonFLTINR4Base, T...> ;

} ;

