/*******************************************************************************
* Filename      : pwrregisters.hpp
*
* Details       : Power control. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "pwrfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct PWR
{
  struct PWRPWR_CR1Base {} ;

  struct PWR_CR1 : public RegisterBase<0x40007000, 32, ReadWriteMode>
  {
    using LPMS = PWR_PWR_CR1_LPMS_Values<PWR::PWR_CR1, 0, 3, ReadWriteMode, PWRPWR_CR1Base> ;
    using FPD_STOP = PWR_PWR_CR1_FPD_STOP_Values<PWR::PWR_CR1, 3, 1, ReadWriteMode, PWRPWR_CR1Base> ;
    using DBP = PWR_PWR_CR1_DBP_Values<PWR::PWR_CR1, 8, 1, ReadWriteMode, PWRPWR_CR1Base> ;
    using VOS = PWR_PWR_CR1_VOS_Values<PWR::PWR_CR1, 9, 2, ReadWriteMode, PWRPWR_CR1Base> ;
    using LPR = PWR_PWR_CR1_LPR_Values<PWR::PWR_CR1, 14, 1, ReadWriteMode, PWRPWR_CR1Base> ;
    using FieldValues = PWR_PWR_CR1_LPR_Values<PWR::PWR_CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_CR1Pack  = Register<0x40007000, 32, ReadWriteMode, PWRPWR_CR1Base, T...> ;

  struct PWRPWR_CR2Base {} ;

  struct PWR_CR2 : public RegisterBase<0x40007004, 32, ReadWriteMode>
  {
    using PVDE = PWR_PWR_CR2_PVDE_Values<PWR::PWR_CR2, 0, 1, ReadWriteMode, PWRPWR_CR2Base> ;
    using PVDLS = PWR_PWR_CR2_PVDLS_Values<PWR::PWR_CR2, 1, 3, ReadWriteMode, PWRPWR_CR2Base> ;
    using PVMEN1 = PWR_PWR_CR2_PVMEN1_Values<PWR::PWR_CR2, 6, 1, ReadWriteMode, PWRPWR_CR2Base> ;
    using PVMEN2 = PWR_PWR_CR2_PVMEN2_Values<PWR::PWR_CR2, 7, 1, ReadWriteMode, PWRPWR_CR2Base> ;
    using FieldValues = PWR_PWR_CR2_PVMEN2_Values<PWR::PWR_CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_CR2Pack  = Register<0x40007004, 32, ReadWriteMode, PWRPWR_CR2Base, T...> ;

  struct PWRPWR_CR3Base {} ;

  struct PWR_CR3 : public RegisterBase<0x40007008, 32, ReadWriteMode>
  {
    using EWUP1 = PWR_PWR_CR3_EWUP1_Values<PWR::PWR_CR3, 0, 1, ReadWriteMode, PWRPWR_CR3Base> ;
    using EWUP2 = PWR_PWR_CR3_EWUP2_Values<PWR::PWR_CR3, 1, 1, ReadWriteMode, PWRPWR_CR3Base> ;
    using EWUP3 = PWR_PWR_CR3_EWUP3_Values<PWR::PWR_CR3, 2, 1, ReadWriteMode, PWRPWR_CR3Base> ;
    using EWUP4 = PWR_PWR_CR3_EWUP4_Values<PWR::PWR_CR3, 3, 1, ReadWriteMode, PWRPWR_CR3Base> ;
    using EWUP5 = PWR_PWR_CR3_EWUP5_Values<PWR::PWR_CR3, 4, 1, ReadWriteMode, PWRPWR_CR3Base> ;
    using RRS = PWR_PWR_CR3_RRS_Values<PWR::PWR_CR3, 8, 1, ReadWriteMode, PWRPWR_CR3Base> ;
    using APC = PWR_PWR_CR3_APC_Values<PWR::PWR_CR3, 10, 1, ReadWriteMode, PWRPWR_CR3Base> ;
    using UCPD1_STDBY = PWR_PWR_CR3_UCPD1_STDBY_Values<PWR::PWR_CR3, 13, 1, ReadWriteMode, PWRPWR_CR3Base> ;
    using UCPD1_DBDIS = PWR_PWR_CR3_UCPD1_DBDIS_Values<PWR::PWR_CR3, 14, 1, ReadWriteMode, PWRPWR_CR3Base> ;
    using EIWUL = PWR_PWR_CR3_EIWUL_Values<PWR::PWR_CR3, 15, 1, ReadWriteMode, PWRPWR_CR3Base> ;
    using FieldValues = PWR_PWR_CR3_EIWUL_Values<PWR::PWR_CR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_CR3Pack  = Register<0x40007008, 32, ReadWriteMode, PWRPWR_CR3Base, T...> ;

  struct PWRPWR_CR4Base {} ;

  struct PWR_CR4 : public RegisterBase<0x4000700C, 32, ReadWriteMode>
  {
    using WP1 = PWR_PWR_CR4_WP1_Values<PWR::PWR_CR4, 0, 1, ReadWriteMode, PWRPWR_CR4Base> ;
    using WP2 = PWR_PWR_CR4_WP2_Values<PWR::PWR_CR4, 1, 1, ReadWriteMode, PWRPWR_CR4Base> ;
    using WP3 = PWR_PWR_CR4_WP3_Values<PWR::PWR_CR4, 2, 1, ReadWriteMode, PWRPWR_CR4Base> ;
    using WP4 = PWR_PWR_CR4_WP4_Values<PWR::PWR_CR4, 3, 1, ReadWriteMode, PWRPWR_CR4Base> ;
    using WP5 = PWR_PWR_CR4_WP5_Values<PWR::PWR_CR4, 4, 1, ReadWriteMode, PWRPWR_CR4Base> ;
    using VBE = PWR_PWR_CR4_VBE_Values<PWR::PWR_CR4, 8, 1, ReadWriteMode, PWRPWR_CR4Base> ;
    using VBRS = PWR_PWR_CR4_VBRS_Values<PWR::PWR_CR4, 9, 1, ReadWriteMode, PWRPWR_CR4Base> ;
    using FieldValues = PWR_PWR_CR4_VBRS_Values<PWR::PWR_CR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_CR4Pack  = Register<0x4000700C, 32, ReadWriteMode, PWRPWR_CR4Base, T...> ;

  struct PWRPWR_SR1Base {} ;

  struct PWR_SR1 : public RegisterBase<0x40007010, 32, ReadWriteMode>
  {
    using WUF1 = PWR_PWR_SR1_WUF1_Values<PWR::PWR_SR1, 0, 1, ReadMode, PWRPWR_SR1Base> ;
    using WUF2 = PWR_PWR_SR1_WUF2_Values<PWR::PWR_SR1, 1, 1, ReadMode, PWRPWR_SR1Base> ;
    using WUF3 = PWR_PWR_SR1_WUF3_Values<PWR::PWR_SR1, 2, 1, ReadMode, PWRPWR_SR1Base> ;
    using WUF4 = PWR_PWR_SR1_WUF4_Values<PWR::PWR_SR1, 3, 1, ReadMode, PWRPWR_SR1Base> ;
    using WUF5 = PWR_PWR_SR1_WUF5_Values<PWR::PWR_SR1, 4, 1, ReadMode, PWRPWR_SR1Base> ;
    using SBF = PWR_PWR_SR1_SBF_Values<PWR::PWR_SR1, 8, 1, ReadMode, PWRPWR_SR1Base> ;
    using WUFI = PWR_PWR_SR1_WUFI_Values<PWR::PWR_SR1, 15, 1, ReadMode, PWRPWR_SR1Base> ;
    using FieldValues = PWR_PWR_SR1_WUFI_Values<PWR::PWR_SR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_SR1Pack  = Register<0x40007010, 32, ReadWriteMode, PWRPWR_SR1Base, T...> ;

  struct PWRPWR_SR2Base {} ;

  struct PWR_SR2 : public RegisterBase<0x40007014, 32, ReadWriteMode>
  {
    using REGLPS = PWR_PWR_SR2_REGLPS_Values<PWR::PWR_SR2, 8, 1, ReadMode, PWRPWR_SR2Base> ;
    using REGLPF = PWR_PWR_SR2_REGLPF_Values<PWR::PWR_SR2, 9, 1, ReadMode, PWRPWR_SR2Base> ;
    using VOSF = PWR_PWR_SR2_VOSF_Values<PWR::PWR_SR2, 10, 1, ReadMode, PWRPWR_SR2Base> ;
    using PVDO = PWR_PWR_SR2_PVDO_Values<PWR::PWR_SR2, 11, 1, ReadMode, PWRPWR_SR2Base> ;
    using PVMO1 = PWR_PWR_SR2_PVMO1_Values<PWR::PWR_SR2, 14, 1, ReadMode, PWRPWR_SR2Base> ;
    using PVMO2 = PWR_PWR_SR2_PVMO2_Values<PWR::PWR_SR2, 15, 1, ReadMode, PWRPWR_SR2Base> ;
    using FieldValues = PWR_PWR_SR2_PVMO2_Values<PWR::PWR_SR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_SR2Pack  = Register<0x40007014, 32, ReadWriteMode, PWRPWR_SR2Base, T...> ;

  struct PWRPWR_SCRBase {} ;

  struct PWR_SCR : public RegisterBase<0x40007018, 32, ReadWriteMode>
  {
    using CWUF1 = PWR_PWR_SCR_CWUF1_Values<PWR::PWR_SCR, 0, 1, WriteMode, PWRPWR_SCRBase> ;
    using CWUF2 = PWR_PWR_SCR_CWUF2_Values<PWR::PWR_SCR, 1, 1, WriteMode, PWRPWR_SCRBase> ;
    using CWUF3 = PWR_PWR_SCR_CWUF3_Values<PWR::PWR_SCR, 2, 1, WriteMode, PWRPWR_SCRBase> ;
    using CWUF4 = PWR_PWR_SCR_CWUF4_Values<PWR::PWR_SCR, 3, 1, WriteMode, PWRPWR_SCRBase> ;
    using CWUF5 = PWR_PWR_SCR_CWUF5_Values<PWR::PWR_SCR, 4, 1, WriteMode, PWRPWR_SCRBase> ;
    using CSBF = PWR_PWR_SCR_CSBF_Values<PWR::PWR_SCR, 8, 1, WriteMode, PWRPWR_SCRBase> ;
    using FieldValues = PWR_PWR_SCR_CSBF_Values<PWR::PWR_SCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_SCRPack  = Register<0x40007018, 32, ReadWriteMode, PWRPWR_SCRBase, T...> ;

  struct PWRPWR_PUCRABase {} ;

  struct PWR_PUCRA : public RegisterBase<0x40007020, 32, ReadWriteMode>
  {
    using PU0 = PWR_PWR_PUCRA_PU0_Values<PWR::PWR_PUCRA, 0, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU1 = PWR_PWR_PUCRA_PU1_Values<PWR::PWR_PUCRA, 1, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU2 = PWR_PWR_PUCRA_PU2_Values<PWR::PWR_PUCRA, 2, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU3 = PWR_PWR_PUCRA_PU3_Values<PWR::PWR_PUCRA, 3, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU4 = PWR_PWR_PUCRA_PU4_Values<PWR::PWR_PUCRA, 4, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU5 = PWR_PWR_PUCRA_PU5_Values<PWR::PWR_PUCRA, 5, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU6 = PWR_PWR_PUCRA_PU6_Values<PWR::PWR_PUCRA, 6, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU7 = PWR_PWR_PUCRA_PU7_Values<PWR::PWR_PUCRA, 7, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU8 = PWR_PWR_PUCRA_PU8_Values<PWR::PWR_PUCRA, 8, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU9 = PWR_PWR_PUCRA_PU9_Values<PWR::PWR_PUCRA, 9, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU10 = PWR_PWR_PUCRA_PU10_Values<PWR::PWR_PUCRA, 10, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU11 = PWR_PWR_PUCRA_PU11_Values<PWR::PWR_PUCRA, 11, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU12 = PWR_PWR_PUCRA_PU12_Values<PWR::PWR_PUCRA, 12, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU13 = PWR_PWR_PUCRA_PU13_Values<PWR::PWR_PUCRA, 13, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using PU15 = PWR_PWR_PUCRA_PU15_Values<PWR::PWR_PUCRA, 15, 1, ReadWriteMode, PWRPWR_PUCRABase> ;
    using FieldValues = PWR_PWR_PUCRA_PU15_Values<PWR::PWR_PUCRA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PUCRAPack  = Register<0x40007020, 32, ReadWriteMode, PWRPWR_PUCRABase, T...> ;

  struct PWRPWR_PDCRABase {} ;

  struct PWR_PDCRA : public RegisterBase<0x40007024, 32, ReadWriteMode>
  {
    using PD0 = PWR_PWR_PDCRA_PD0_Values<PWR::PWR_PDCRA, 0, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD1 = PWR_PWR_PDCRA_PD1_Values<PWR::PWR_PDCRA, 1, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD2 = PWR_PWR_PDCRA_PD2_Values<PWR::PWR_PDCRA, 2, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD3 = PWR_PWR_PDCRA_PD3_Values<PWR::PWR_PDCRA, 3, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD4 = PWR_PWR_PDCRA_PD4_Values<PWR::PWR_PDCRA, 4, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD5 = PWR_PWR_PDCRA_PD5_Values<PWR::PWR_PDCRA, 5, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD6 = PWR_PWR_PDCRA_PD6_Values<PWR::PWR_PDCRA, 6, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD7 = PWR_PWR_PDCRA_PD7_Values<PWR::PWR_PDCRA, 7, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD8 = PWR_PWR_PDCRA_PD8_Values<PWR::PWR_PDCRA, 8, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD9 = PWR_PWR_PDCRA_PD9_Values<PWR::PWR_PDCRA, 9, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD10 = PWR_PWR_PDCRA_PD10_Values<PWR::PWR_PDCRA, 10, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD11 = PWR_PWR_PDCRA_PD11_Values<PWR::PWR_PDCRA, 11, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD12 = PWR_PWR_PDCRA_PD12_Values<PWR::PWR_PDCRA, 12, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using PD14 = PWR_PWR_PDCRA_PD14_Values<PWR::PWR_PDCRA, 14, 1, ReadWriteMode, PWRPWR_PDCRABase> ;
    using FieldValues = PWR_PWR_PDCRA_PD14_Values<PWR::PWR_PDCRA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PDCRAPack  = Register<0x40007024, 32, ReadWriteMode, PWRPWR_PDCRABase, T...> ;

  struct PWRPWR_PUCRBBase {} ;

  struct PWR_PUCRB : public RegisterBase<0x40007028, 32, ReadWriteMode>
  {
    using PU0 = PWR_PWR_PUCRB_PU0_Values<PWR::PWR_PUCRB, 0, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU1 = PWR_PWR_PUCRB_PU1_Values<PWR::PWR_PUCRB, 1, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU2 = PWR_PWR_PUCRB_PU2_Values<PWR::PWR_PUCRB, 2, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU3 = PWR_PWR_PUCRB_PU3_Values<PWR::PWR_PUCRB, 3, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU4 = PWR_PWR_PUCRB_PU4_Values<PWR::PWR_PUCRB, 4, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU5 = PWR_PWR_PUCRB_PU5_Values<PWR::PWR_PUCRB, 5, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU6 = PWR_PWR_PUCRB_PU6_Values<PWR::PWR_PUCRB, 6, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU7 = PWR_PWR_PUCRB_PU7_Values<PWR::PWR_PUCRB, 7, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU8 = PWR_PWR_PUCRB_PU8_Values<PWR::PWR_PUCRB, 8, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU9 = PWR_PWR_PUCRB_PU9_Values<PWR::PWR_PUCRB, 9, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU10 = PWR_PWR_PUCRB_PU10_Values<PWR::PWR_PUCRB, 10, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU11 = PWR_PWR_PUCRB_PU11_Values<PWR::PWR_PUCRB, 11, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU12 = PWR_PWR_PUCRB_PU12_Values<PWR::PWR_PUCRB, 12, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU13 = PWR_PWR_PUCRB_PU13_Values<PWR::PWR_PUCRB, 13, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU14 = PWR_PWR_PUCRB_PU14_Values<PWR::PWR_PUCRB, 14, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using PU15 = PWR_PWR_PUCRB_PU15_Values<PWR::PWR_PUCRB, 15, 1, ReadWriteMode, PWRPWR_PUCRBBase> ;
    using FieldValues = PWR_PWR_PUCRB_PU15_Values<PWR::PWR_PUCRB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PUCRBPack  = Register<0x40007028, 32, ReadWriteMode, PWRPWR_PUCRBBase, T...> ;

  struct PWRPWR_PDCRBBase {} ;

  struct PWR_PDCRB : public RegisterBase<0x4000702C, 32, ReadWriteMode>
  {
    using PD0 = PWR_PWR_PDCRB_PD0_Values<PWR::PWR_PDCRB, 0, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD1 = PWR_PWR_PDCRB_PD1_Values<PWR::PWR_PDCRB, 1, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD2 = PWR_PWR_PDCRB_PD2_Values<PWR::PWR_PDCRB, 2, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD3 = PWR_PWR_PDCRB_PD3_Values<PWR::PWR_PDCRB, 3, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD5 = PWR_PWR_PDCRB_PD5_Values<PWR::PWR_PDCRB, 5, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD6 = PWR_PWR_PDCRB_PD6_Values<PWR::PWR_PDCRB, 6, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD7 = PWR_PWR_PDCRB_PD7_Values<PWR::PWR_PDCRB, 7, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD8 = PWR_PWR_PDCRB_PD8_Values<PWR::PWR_PDCRB, 8, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD9 = PWR_PWR_PDCRB_PD9_Values<PWR::PWR_PDCRB, 9, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD10 = PWR_PWR_PDCRB_PD10_Values<PWR::PWR_PDCRB, 10, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD11 = PWR_PWR_PDCRB_PD11_Values<PWR::PWR_PDCRB, 11, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD12 = PWR_PWR_PDCRB_PD12_Values<PWR::PWR_PDCRB, 12, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD13 = PWR_PWR_PDCRB_PD13_Values<PWR::PWR_PDCRB, 13, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD14 = PWR_PWR_PDCRB_PD14_Values<PWR::PWR_PDCRB, 14, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using PD15 = PWR_PWR_PDCRB_PD15_Values<PWR::PWR_PDCRB, 15, 1, ReadWriteMode, PWRPWR_PDCRBBase> ;
    using FieldValues = PWR_PWR_PDCRB_PD15_Values<PWR::PWR_PDCRB, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PDCRBPack  = Register<0x4000702C, 32, ReadWriteMode, PWRPWR_PDCRBBase, T...> ;

  struct PWRPWR_PUCRCBase {} ;

  struct PWR_PUCRC : public RegisterBase<0x40007030, 32, ReadWriteMode>
  {
    using PU0 = PWR_PWR_PUCRC_PU0_Values<PWR::PWR_PUCRC, 0, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU1 = PWR_PWR_PUCRC_PU1_Values<PWR::PWR_PUCRC, 1, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU2 = PWR_PWR_PUCRC_PU2_Values<PWR::PWR_PUCRC, 2, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU3 = PWR_PWR_PUCRC_PU3_Values<PWR::PWR_PUCRC, 3, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU4 = PWR_PWR_PUCRC_PU4_Values<PWR::PWR_PUCRC, 4, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU5 = PWR_PWR_PUCRC_PU5_Values<PWR::PWR_PUCRC, 5, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU6 = PWR_PWR_PUCRC_PU6_Values<PWR::PWR_PUCRC, 6, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU7 = PWR_PWR_PUCRC_PU7_Values<PWR::PWR_PUCRC, 7, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU8 = PWR_PWR_PUCRC_PU8_Values<PWR::PWR_PUCRC, 8, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU9 = PWR_PWR_PUCRC_PU9_Values<PWR::PWR_PUCRC, 9, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU10 = PWR_PWR_PUCRC_PU10_Values<PWR::PWR_PUCRC, 10, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU11 = PWR_PWR_PUCRC_PU11_Values<PWR::PWR_PUCRC, 11, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU12 = PWR_PWR_PUCRC_PU12_Values<PWR::PWR_PUCRC, 12, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU13 = PWR_PWR_PUCRC_PU13_Values<PWR::PWR_PUCRC, 13, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU14 = PWR_PWR_PUCRC_PU14_Values<PWR::PWR_PUCRC, 14, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using PU15 = PWR_PWR_PUCRC_PU15_Values<PWR::PWR_PUCRC, 15, 1, ReadWriteMode, PWRPWR_PUCRCBase> ;
    using FieldValues = PWR_PWR_PUCRC_PU15_Values<PWR::PWR_PUCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PUCRCPack  = Register<0x40007030, 32, ReadWriteMode, PWRPWR_PUCRCBase, T...> ;

  struct PWRPWR_PDCRCBase {} ;

  struct PWR_PDCRC : public RegisterBase<0x40007034, 32, ReadWriteMode>
  {
    using PD0 = PWR_PWR_PDCRC_PD0_Values<PWR::PWR_PDCRC, 0, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD1 = PWR_PWR_PDCRC_PD1_Values<PWR::PWR_PDCRC, 1, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD2 = PWR_PWR_PDCRC_PD2_Values<PWR::PWR_PDCRC, 2, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD3 = PWR_PWR_PDCRC_PD3_Values<PWR::PWR_PDCRC, 3, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD4 = PWR_PWR_PDCRC_PD4_Values<PWR::PWR_PDCRC, 4, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD5 = PWR_PWR_PDCRC_PD5_Values<PWR::PWR_PDCRC, 5, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD6 = PWR_PWR_PDCRC_PD6_Values<PWR::PWR_PDCRC, 6, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD7 = PWR_PWR_PDCRC_PD7_Values<PWR::PWR_PDCRC, 7, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD8 = PWR_PWR_PDCRC_PD8_Values<PWR::PWR_PDCRC, 8, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD9 = PWR_PWR_PDCRC_PD9_Values<PWR::PWR_PDCRC, 9, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD10 = PWR_PWR_PDCRC_PD10_Values<PWR::PWR_PDCRC, 10, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD11 = PWR_PWR_PDCRC_PD11_Values<PWR::PWR_PDCRC, 11, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD12 = PWR_PWR_PDCRC_PD12_Values<PWR::PWR_PDCRC, 12, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD13 = PWR_PWR_PDCRC_PD13_Values<PWR::PWR_PDCRC, 13, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD14 = PWR_PWR_PDCRC_PD14_Values<PWR::PWR_PDCRC, 14, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using PD15 = PWR_PWR_PDCRC_PD15_Values<PWR::PWR_PDCRC, 15, 1, ReadWriteMode, PWRPWR_PDCRCBase> ;
    using FieldValues = PWR_PWR_PDCRC_PD15_Values<PWR::PWR_PDCRC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PDCRCPack  = Register<0x40007034, 32, ReadWriteMode, PWRPWR_PDCRCBase, T...> ;

  struct PWRPWR_PUCRDBase {} ;

  struct PWR_PUCRD : public RegisterBase<0x40007038, 32, ReadWriteMode>
  {
    using PU0 = PWR_PWR_PUCRD_PU0_Values<PWR::PWR_PUCRD, 0, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU1 = PWR_PWR_PUCRD_PU1_Values<PWR::PWR_PUCRD, 1, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU2 = PWR_PWR_PUCRD_PU2_Values<PWR::PWR_PUCRD, 2, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU3 = PWR_PWR_PUCRD_PU3_Values<PWR::PWR_PUCRD, 3, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU4 = PWR_PWR_PUCRD_PU4_Values<PWR::PWR_PUCRD, 4, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU5 = PWR_PWR_PUCRD_PU5_Values<PWR::PWR_PUCRD, 5, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU6 = PWR_PWR_PUCRD_PU6_Values<PWR::PWR_PUCRD, 6, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU7 = PWR_PWR_PUCRD_PU7_Values<PWR::PWR_PUCRD, 7, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU8 = PWR_PWR_PUCRD_PU8_Values<PWR::PWR_PUCRD, 8, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU9 = PWR_PWR_PUCRD_PU9_Values<PWR::PWR_PUCRD, 9, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU10 = PWR_PWR_PUCRD_PU10_Values<PWR::PWR_PUCRD, 10, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU11 = PWR_PWR_PUCRD_PU11_Values<PWR::PWR_PUCRD, 11, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU12 = PWR_PWR_PUCRD_PU12_Values<PWR::PWR_PUCRD, 12, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU13 = PWR_PWR_PUCRD_PU13_Values<PWR::PWR_PUCRD, 13, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU14 = PWR_PWR_PUCRD_PU14_Values<PWR::PWR_PUCRD, 14, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using PU15 = PWR_PWR_PUCRD_PU15_Values<PWR::PWR_PUCRD, 15, 1, ReadWriteMode, PWRPWR_PUCRDBase> ;
    using FieldValues = PWR_PWR_PUCRD_PU15_Values<PWR::PWR_PUCRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PUCRDPack  = Register<0x40007038, 32, ReadWriteMode, PWRPWR_PUCRDBase, T...> ;

  struct PWRPWR_PDCRDBase {} ;

  struct PWR_PDCRD : public RegisterBase<0x4000703C, 32, ReadWriteMode>
  {
    using PD0 = PWR_PWR_PDCRD_PD0_Values<PWR::PWR_PDCRD, 0, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD1 = PWR_PWR_PDCRD_PD1_Values<PWR::PWR_PDCRD, 1, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD2 = PWR_PWR_PDCRD_PD2_Values<PWR::PWR_PDCRD, 2, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD3 = PWR_PWR_PDCRD_PD3_Values<PWR::PWR_PDCRD, 3, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD4 = PWR_PWR_PDCRD_PD4_Values<PWR::PWR_PDCRD, 4, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD5 = PWR_PWR_PDCRD_PD5_Values<PWR::PWR_PDCRD, 5, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD6 = PWR_PWR_PDCRD_PD6_Values<PWR::PWR_PDCRD, 6, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD7 = PWR_PWR_PDCRD_PD7_Values<PWR::PWR_PDCRD, 7, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD8 = PWR_PWR_PDCRD_PD8_Values<PWR::PWR_PDCRD, 8, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD9 = PWR_PWR_PDCRD_PD9_Values<PWR::PWR_PDCRD, 9, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD10 = PWR_PWR_PDCRD_PD10_Values<PWR::PWR_PDCRD, 10, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD11 = PWR_PWR_PDCRD_PD11_Values<PWR::PWR_PDCRD, 11, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD12 = PWR_PWR_PDCRD_PD12_Values<PWR::PWR_PDCRD, 12, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD13 = PWR_PWR_PDCRD_PD13_Values<PWR::PWR_PDCRD, 13, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD14 = PWR_PWR_PDCRD_PD14_Values<PWR::PWR_PDCRD, 14, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using PD15 = PWR_PWR_PDCRD_PD15_Values<PWR::PWR_PDCRD, 15, 1, ReadWriteMode, PWRPWR_PDCRDBase> ;
    using FieldValues = PWR_PWR_PDCRD_PD15_Values<PWR::PWR_PDCRD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PDCRDPack  = Register<0x4000703C, 32, ReadWriteMode, PWRPWR_PDCRDBase, T...> ;

  struct PWRPWR_PUCREBase {} ;

  struct PWR_PUCRE : public RegisterBase<0x40007040, 32, ReadWriteMode>
  {
    using PU0 = PWR_PWR_PUCRE_PU0_Values<PWR::PWR_PUCRE, 0, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU1 = PWR_PWR_PUCRE_PU1_Values<PWR::PWR_PUCRE, 1, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU2 = PWR_PWR_PUCRE_PU2_Values<PWR::PWR_PUCRE, 2, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU3 = PWR_PWR_PUCRE_PU3_Values<PWR::PWR_PUCRE, 3, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU4 = PWR_PWR_PUCRE_PU4_Values<PWR::PWR_PUCRE, 4, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU5 = PWR_PWR_PUCRE_PU5_Values<PWR::PWR_PUCRE, 5, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU6 = PWR_PWR_PUCRE_PU6_Values<PWR::PWR_PUCRE, 6, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU7 = PWR_PWR_PUCRE_PU7_Values<PWR::PWR_PUCRE, 7, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU8 = PWR_PWR_PUCRE_PU8_Values<PWR::PWR_PUCRE, 8, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU9 = PWR_PWR_PUCRE_PU9_Values<PWR::PWR_PUCRE, 9, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU10 = PWR_PWR_PUCRE_PU10_Values<PWR::PWR_PUCRE, 10, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU11 = PWR_PWR_PUCRE_PU11_Values<PWR::PWR_PUCRE, 11, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU12 = PWR_PWR_PUCRE_PU12_Values<PWR::PWR_PUCRE, 12, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU13 = PWR_PWR_PUCRE_PU13_Values<PWR::PWR_PUCRE, 13, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU14 = PWR_PWR_PUCRE_PU14_Values<PWR::PWR_PUCRE, 14, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using PU15 = PWR_PWR_PUCRE_PU15_Values<PWR::PWR_PUCRE, 15, 1, ReadWriteMode, PWRPWR_PUCREBase> ;
    using FieldValues = PWR_PWR_PUCRE_PU15_Values<PWR::PWR_PUCRE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PUCREPack  = Register<0x40007040, 32, ReadWriteMode, PWRPWR_PUCREBase, T...> ;

  struct PWRPWR_PDCREBase {} ;

  struct PWR_PDCRE : public RegisterBase<0x40007044, 32, ReadWriteMode>
  {
    using PD0 = PWR_PWR_PDCRE_PD0_Values<PWR::PWR_PDCRE, 0, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD1 = PWR_PWR_PDCRE_PD1_Values<PWR::PWR_PDCRE, 1, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD2 = PWR_PWR_PDCRE_PD2_Values<PWR::PWR_PDCRE, 2, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD3 = PWR_PWR_PDCRE_PD3_Values<PWR::PWR_PDCRE, 3, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD4 = PWR_PWR_PDCRE_PD4_Values<PWR::PWR_PDCRE, 4, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD5 = PWR_PWR_PDCRE_PD5_Values<PWR::PWR_PDCRE, 5, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD6 = PWR_PWR_PDCRE_PD6_Values<PWR::PWR_PDCRE, 6, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD7 = PWR_PWR_PDCRE_PD7_Values<PWR::PWR_PDCRE, 7, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD8 = PWR_PWR_PDCRE_PD8_Values<PWR::PWR_PDCRE, 8, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD9 = PWR_PWR_PDCRE_PD9_Values<PWR::PWR_PDCRE, 9, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD10 = PWR_PWR_PDCRE_PD10_Values<PWR::PWR_PDCRE, 10, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD11 = PWR_PWR_PDCRE_PD11_Values<PWR::PWR_PDCRE, 11, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD12 = PWR_PWR_PDCRE_PD12_Values<PWR::PWR_PDCRE, 12, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD13 = PWR_PWR_PDCRE_PD13_Values<PWR::PWR_PDCRE, 13, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD14 = PWR_PWR_PDCRE_PD14_Values<PWR::PWR_PDCRE, 14, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using PD15 = PWR_PWR_PDCRE_PD15_Values<PWR::PWR_PDCRE, 15, 1, ReadWriteMode, PWRPWR_PDCREBase> ;
    using FieldValues = PWR_PWR_PDCRE_PD15_Values<PWR::PWR_PDCRE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PDCREPack  = Register<0x40007044, 32, ReadWriteMode, PWRPWR_PDCREBase, T...> ;

  struct PWRPWR_PUCRFBase {} ;

  struct PWR_PUCRF : public RegisterBase<0x40007048, 32, ReadWriteMode>
  {
    using PU0 = PWR_PWR_PUCRF_PU0_Values<PWR::PWR_PUCRF, 0, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU1 = PWR_PWR_PUCRF_PU1_Values<PWR::PWR_PUCRF, 1, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU2 = PWR_PWR_PUCRF_PU2_Values<PWR::PWR_PUCRF, 2, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU3 = PWR_PWR_PUCRF_PU3_Values<PWR::PWR_PUCRF, 3, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU4 = PWR_PWR_PUCRF_PU4_Values<PWR::PWR_PUCRF, 4, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU5 = PWR_PWR_PUCRF_PU5_Values<PWR::PWR_PUCRF, 5, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU6 = PWR_PWR_PUCRF_PU6_Values<PWR::PWR_PUCRF, 6, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU7 = PWR_PWR_PUCRF_PU7_Values<PWR::PWR_PUCRF, 7, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU8 = PWR_PWR_PUCRF_PU8_Values<PWR::PWR_PUCRF, 8, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU9 = PWR_PWR_PUCRF_PU9_Values<PWR::PWR_PUCRF, 9, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU10 = PWR_PWR_PUCRF_PU10_Values<PWR::PWR_PUCRF, 10, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU11 = PWR_PWR_PUCRF_PU11_Values<PWR::PWR_PUCRF, 11, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU12 = PWR_PWR_PUCRF_PU12_Values<PWR::PWR_PUCRF, 12, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU13 = PWR_PWR_PUCRF_PU13_Values<PWR::PWR_PUCRF, 13, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU14 = PWR_PWR_PUCRF_PU14_Values<PWR::PWR_PUCRF, 14, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using PU15 = PWR_PWR_PUCRF_PU15_Values<PWR::PWR_PUCRF, 15, 1, ReadWriteMode, PWRPWR_PUCRFBase> ;
    using FieldValues = PWR_PWR_PUCRF_PU15_Values<PWR::PWR_PUCRF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PUCRFPack  = Register<0x40007048, 32, ReadWriteMode, PWRPWR_PUCRFBase, T...> ;

  struct PWRPWR_PDCRFBase {} ;

  struct PWR_PDCRF : public RegisterBase<0x4000704C, 32, ReadWriteMode>
  {
    using PD0 = PWR_PWR_PDCRF_PD0_Values<PWR::PWR_PDCRF, 0, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD1 = PWR_PWR_PDCRF_PD1_Values<PWR::PWR_PDCRF, 1, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD2 = PWR_PWR_PDCRF_PD2_Values<PWR::PWR_PDCRF, 2, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD3 = PWR_PWR_PDCRF_PD3_Values<PWR::PWR_PDCRF, 3, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD4 = PWR_PWR_PDCRF_PD4_Values<PWR::PWR_PDCRF, 4, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD5 = PWR_PWR_PDCRF_PD5_Values<PWR::PWR_PDCRF, 5, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD6 = PWR_PWR_PDCRF_PD6_Values<PWR::PWR_PDCRF, 6, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD7 = PWR_PWR_PDCRF_PD7_Values<PWR::PWR_PDCRF, 7, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD8 = PWR_PWR_PDCRF_PD8_Values<PWR::PWR_PDCRF, 8, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD9 = PWR_PWR_PDCRF_PD9_Values<PWR::PWR_PDCRF, 9, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD10 = PWR_PWR_PDCRF_PD10_Values<PWR::PWR_PDCRF, 10, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD11 = PWR_PWR_PDCRF_PD11_Values<PWR::PWR_PDCRF, 11, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD12 = PWR_PWR_PDCRF_PD12_Values<PWR::PWR_PDCRF, 12, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD13 = PWR_PWR_PDCRF_PD13_Values<PWR::PWR_PDCRF, 13, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD14 = PWR_PWR_PDCRF_PD14_Values<PWR::PWR_PDCRF, 14, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using PD15 = PWR_PWR_PDCRF_PD15_Values<PWR::PWR_PDCRF, 15, 1, ReadWriteMode, PWRPWR_PDCRFBase> ;
    using FieldValues = PWR_PWR_PDCRF_PD15_Values<PWR::PWR_PDCRF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PDCRFPack  = Register<0x4000704C, 32, ReadWriteMode, PWRPWR_PDCRFBase, T...> ;

  struct PWRPWR_PUCRGBase {} ;

  struct PWR_PUCRG : public RegisterBase<0x40007050, 32, ReadWriteMode>
  {
    using PU0 = PWR_PWR_PUCRG_PU0_Values<PWR::PWR_PUCRG, 0, 1, ReadWriteMode, PWRPWR_PUCRGBase> ;
    using PU1 = PWR_PWR_PUCRG_PU1_Values<PWR::PWR_PUCRG, 1, 1, ReadWriteMode, PWRPWR_PUCRGBase> ;
    using PU2 = PWR_PWR_PUCRG_PU2_Values<PWR::PWR_PUCRG, 2, 1, ReadWriteMode, PWRPWR_PUCRGBase> ;
    using PU3 = PWR_PWR_PUCRG_PU3_Values<PWR::PWR_PUCRG, 3, 1, ReadWriteMode, PWRPWR_PUCRGBase> ;
    using PU4 = PWR_PWR_PUCRG_PU4_Values<PWR::PWR_PUCRG, 4, 1, ReadWriteMode, PWRPWR_PUCRGBase> ;
    using PU5 = PWR_PWR_PUCRG_PU5_Values<PWR::PWR_PUCRG, 5, 1, ReadWriteMode, PWRPWR_PUCRGBase> ;
    using PU6 = PWR_PWR_PUCRG_PU6_Values<PWR::PWR_PUCRG, 6, 1, ReadWriteMode, PWRPWR_PUCRGBase> ;
    using PU7 = PWR_PWR_PUCRG_PU7_Values<PWR::PWR_PUCRG, 7, 1, ReadWriteMode, PWRPWR_PUCRGBase> ;
    using PU8 = PWR_PWR_PUCRG_PU8_Values<PWR::PWR_PUCRG, 8, 1, ReadWriteMode, PWRPWR_PUCRGBase> ;
    using PU9 = PWR_PWR_PUCRG_PU9_Values<PWR::PWR_PUCRG, 9, 1, ReadWriteMode, PWRPWR_PUCRGBase> ;
    using PU10 = PWR_PWR_PUCRG_PU10_Values<PWR::PWR_PUCRG, 10, 1, ReadWriteMode, PWRPWR_PUCRGBase> ;
    using FieldValues = PWR_PWR_PUCRG_PU10_Values<PWR::PWR_PUCRG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PUCRGPack  = Register<0x40007050, 32, ReadWriteMode, PWRPWR_PUCRGBase, T...> ;

  struct PWRPWR_PDCRGBase {} ;

  struct PWR_PDCRG : public RegisterBase<0x40007054, 32, ReadWriteMode>
  {
    using PD0 = PWR_PWR_PDCRG_PD0_Values<PWR::PWR_PDCRG, 0, 1, ReadWriteMode, PWRPWR_PDCRGBase> ;
    using PD1 = PWR_PWR_PDCRG_PD1_Values<PWR::PWR_PDCRG, 1, 1, ReadWriteMode, PWRPWR_PDCRGBase> ;
    using PD2 = PWR_PWR_PDCRG_PD2_Values<PWR::PWR_PDCRG, 2, 1, ReadWriteMode, PWRPWR_PDCRGBase> ;
    using PD3 = PWR_PWR_PDCRG_PD3_Values<PWR::PWR_PDCRG, 3, 1, ReadWriteMode, PWRPWR_PDCRGBase> ;
    using PD4 = PWR_PWR_PDCRG_PD4_Values<PWR::PWR_PDCRG, 4, 1, ReadWriteMode, PWRPWR_PDCRGBase> ;
    using PD5 = PWR_PWR_PDCRG_PD5_Values<PWR::PWR_PDCRG, 5, 1, ReadWriteMode, PWRPWR_PDCRGBase> ;
    using PD6 = PWR_PWR_PDCRG_PD6_Values<PWR::PWR_PDCRG, 6, 1, ReadWriteMode, PWRPWR_PDCRGBase> ;
    using PD7 = PWR_PWR_PDCRG_PD7_Values<PWR::PWR_PDCRG, 7, 1, ReadWriteMode, PWRPWR_PDCRGBase> ;
    using PD8 = PWR_PWR_PDCRG_PD8_Values<PWR::PWR_PDCRG, 8, 1, ReadWriteMode, PWRPWR_PDCRGBase> ;
    using PD9 = PWR_PWR_PDCRG_PD9_Values<PWR::PWR_PDCRG, 9, 1, ReadWriteMode, PWRPWR_PDCRGBase> ;
    using PD10 = PWR_PWR_PDCRG_PD10_Values<PWR::PWR_PDCRG, 10, 1, ReadWriteMode, PWRPWR_PDCRGBase> ;
    using FieldValues = PWR_PWR_PDCRG_PD10_Values<PWR::PWR_PDCRG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_PDCRGPack  = Register<0x40007054, 32, ReadWriteMode, PWRPWR_PDCRGBase, T...> ;

  struct PWRPWR_CR5Base {} ;

  struct PWR_CR5 : public RegisterBase<0x40007080, 32, ReadWriteMode>
  {
    using R1MODE = PWR_PWR_CR5_R1MODE_Values<PWR::PWR_CR5, 8, 1, ReadWriteMode, PWRPWR_CR5Base> ;
    using FieldValues = PWR_PWR_CR5_R1MODE_Values<PWR::PWR_CR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PWR_CR5Pack  = Register<0x40007080, 32, ReadWriteMode, PWRPWR_CR5Base, T...> ;

} ;

