/*******************************************************************************
* Filename      : opampregisters.hpp
*
* Details       : Operational amplifiers. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "opampfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OPAMP
{
  struct OPAMPOPAMP1_CSRBase {} ;

  struct OPAMP1_CSR : public RegisterBase<0x40010300, 32, ReadWriteMode>
  {
    using OPAEN = OPAMP_OPAMP1_CSR_OPAEN_Values<OPAMP::OPAMP1_CSR, 0, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using FORCE_VP = OPAMP_OPAMP1_CSR_FORCE_VP_Values<OPAMP::OPAMP1_CSR, 1, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using VP_SEL = OPAMP_OPAMP1_CSR_VP_SEL_Values<OPAMP::OPAMP1_CSR, 2, 2, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using USERTRIM = OPAMP_OPAMP1_CSR_USERTRIM_Values<OPAMP::OPAMP1_CSR, 4, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using VM_SEL = OPAMP_OPAMP1_CSR_VM_SEL_Values<OPAMP::OPAMP1_CSR, 5, 2, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using OPAHSM = OPAMP_OPAMP1_CSR_OPAHSM_Values<OPAMP::OPAMP1_CSR, 7, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using OPAINTOEN = OPAMP_OPAMP1_CSR_OPAINTOEN_Values<OPAMP::OPAMP1_CSR, 8, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using CALON = OPAMP_OPAMP1_CSR_CALON_Values<OPAMP::OPAMP1_CSR, 11, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using CALSEL = OPAMP_OPAMP1_CSR_CALSEL_Values<OPAMP::OPAMP1_CSR, 12, 2, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using PGA_GAIN = OPAMP_OPAMP1_CSR_PGA_GAIN_Values<OPAMP::OPAMP1_CSR, 14, 5, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using TRIMOFFSETP = OPAMP_OPAMP1_CSR_TRIMOFFSETP_Values<OPAMP::OPAMP1_CSR, 19, 5, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using TRIMOFFSETN = OPAMP_OPAMP1_CSR_TRIMOFFSETN_Values<OPAMP::OPAMP1_CSR, 24, 5, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using CALOUT = OPAMP_OPAMP1_CSR_CALOUT_Values<OPAMP::OPAMP1_CSR, 30, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using LOCK = OPAMP_OPAMP1_CSR_LOCK_Values<OPAMP::OPAMP1_CSR, 31, 1, ReadWriteMode, OPAMPOPAMP1_CSRBase> ;
    using FieldValues = OPAMP_OPAMP1_CSR_LOCK_Values<OPAMP::OPAMP1_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP1_CSRPack  = Register<0x40010300, 32, ReadWriteMode, OPAMPOPAMP1_CSRBase, T...> ;

  struct OPAMPOPAMP2_CSRBase {} ;

  struct OPAMP2_CSR : public RegisterBase<0x40010304, 32, ReadWriteMode>
  {
    using OPAEN = OPAMP_OPAMP2_CSR_OPAEN_Values<OPAMP::OPAMP2_CSR, 0, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using FORCE_VP = OPAMP_OPAMP2_CSR_FORCE_VP_Values<OPAMP::OPAMP2_CSR, 1, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using VP_SEL = OPAMP_OPAMP2_CSR_VP_SEL_Values<OPAMP::OPAMP2_CSR, 2, 2, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using USERTRIM = OPAMP_OPAMP2_CSR_USERTRIM_Values<OPAMP::OPAMP2_CSR, 4, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using VM_SEL = OPAMP_OPAMP2_CSR_VM_SEL_Values<OPAMP::OPAMP2_CSR, 5, 2, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using OPAHSM = OPAMP_OPAMP2_CSR_OPAHSM_Values<OPAMP::OPAMP2_CSR, 7, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using OPAINTOEN = OPAMP_OPAMP2_CSR_OPAINTOEN_Values<OPAMP::OPAMP2_CSR, 8, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using CALON = OPAMP_OPAMP2_CSR_CALON_Values<OPAMP::OPAMP2_CSR, 11, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using CALSEL = OPAMP_OPAMP2_CSR_CALSEL_Values<OPAMP::OPAMP2_CSR, 12, 2, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using PGA_GAIN = OPAMP_OPAMP2_CSR_PGA_GAIN_Values<OPAMP::OPAMP2_CSR, 14, 5, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using TRIMOFFSETP = OPAMP_OPAMP2_CSR_TRIMOFFSETP_Values<OPAMP::OPAMP2_CSR, 19, 5, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using TRIMOFFSETN = OPAMP_OPAMP2_CSR_TRIMOFFSETN_Values<OPAMP::OPAMP2_CSR, 24, 5, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using CALOUT = OPAMP_OPAMP2_CSR_CALOUT_Values<OPAMP::OPAMP2_CSR, 30, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using LOCK = OPAMP_OPAMP2_CSR_LOCK_Values<OPAMP::OPAMP2_CSR, 31, 1, ReadWriteMode, OPAMPOPAMP2_CSRBase> ;
    using FieldValues = OPAMP_OPAMP2_CSR_LOCK_Values<OPAMP::OPAMP2_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP2_CSRPack  = Register<0x40010304, 32, ReadWriteMode, OPAMPOPAMP2_CSRBase, T...> ;

  struct OPAMPOPAMP3_CSRBase {} ;

  struct OPAMP3_CSR : public RegisterBase<0x40010308, 32, ReadWriteMode>
  {
    using OPAEN = OPAMP_OPAMP3_CSR_OPAEN_Values<OPAMP::OPAMP3_CSR, 0, 1, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using FORCE_VP = OPAMP_OPAMP3_CSR_FORCE_VP_Values<OPAMP::OPAMP3_CSR, 1, 1, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using VP_SEL = OPAMP_OPAMP3_CSR_VP_SEL_Values<OPAMP::OPAMP3_CSR, 2, 2, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using USERTRIM = OPAMP_OPAMP3_CSR_USERTRIM_Values<OPAMP::OPAMP3_CSR, 4, 1, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using VM_SEL = OPAMP_OPAMP3_CSR_VM_SEL_Values<OPAMP::OPAMP3_CSR, 5, 2, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using OPAHSM = OPAMP_OPAMP3_CSR_OPAHSM_Values<OPAMP::OPAMP3_CSR, 7, 1, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using OPAINTOEN = OPAMP_OPAMP3_CSR_OPAINTOEN_Values<OPAMP::OPAMP3_CSR, 8, 1, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using CALON = OPAMP_OPAMP3_CSR_CALON_Values<OPAMP::OPAMP3_CSR, 11, 1, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using CALSEL = OPAMP_OPAMP3_CSR_CALSEL_Values<OPAMP::OPAMP3_CSR, 12, 2, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using PGA_GAIN = OPAMP_OPAMP3_CSR_PGA_GAIN_Values<OPAMP::OPAMP3_CSR, 14, 5, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using TRIMOFFSETP = OPAMP_OPAMP3_CSR_TRIMOFFSETP_Values<OPAMP::OPAMP3_CSR, 19, 5, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using TRIMOFFSETN = OPAMP_OPAMP3_CSR_TRIMOFFSETN_Values<OPAMP::OPAMP3_CSR, 24, 5, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using CALOUT = OPAMP_OPAMP3_CSR_CALOUT_Values<OPAMP::OPAMP3_CSR, 30, 1, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using LOCK = OPAMP_OPAMP3_CSR_LOCK_Values<OPAMP::OPAMP3_CSR, 31, 1, ReadWriteMode, OPAMPOPAMP3_CSRBase> ;
    using FieldValues = OPAMP_OPAMP3_CSR_LOCK_Values<OPAMP::OPAMP3_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP3_CSRPack  = Register<0x40010308, 32, ReadWriteMode, OPAMPOPAMP3_CSRBase, T...> ;

  struct OPAMPOPAMP4_CSRBase {} ;

  struct OPAMP4_CSR : public RegisterBase<0x4001030C, 32, ReadWriteMode>
  {
    using OPAEN = OPAMP_OPAMP4_CSR_OPAEN_Values<OPAMP::OPAMP4_CSR, 0, 1, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using FORCE_VP = OPAMP_OPAMP4_CSR_FORCE_VP_Values<OPAMP::OPAMP4_CSR, 1, 1, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using VP_SEL = OPAMP_OPAMP4_CSR_VP_SEL_Values<OPAMP::OPAMP4_CSR, 2, 2, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using USERTRIM = OPAMP_OPAMP4_CSR_USERTRIM_Values<OPAMP::OPAMP4_CSR, 4, 1, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using VM_SEL = OPAMP_OPAMP4_CSR_VM_SEL_Values<OPAMP::OPAMP4_CSR, 5, 2, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using OPAHSM = OPAMP_OPAMP4_CSR_OPAHSM_Values<OPAMP::OPAMP4_CSR, 7, 1, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using OPAINTOEN = OPAMP_OPAMP4_CSR_OPAINTOEN_Values<OPAMP::OPAMP4_CSR, 8, 1, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using CALON = OPAMP_OPAMP4_CSR_CALON_Values<OPAMP::OPAMP4_CSR, 11, 1, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using CALSEL = OPAMP_OPAMP4_CSR_CALSEL_Values<OPAMP::OPAMP4_CSR, 12, 2, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using PGA_GAIN = OPAMP_OPAMP4_CSR_PGA_GAIN_Values<OPAMP::OPAMP4_CSR, 14, 5, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using TRIMOFFSETP = OPAMP_OPAMP4_CSR_TRIMOFFSETP_Values<OPAMP::OPAMP4_CSR, 19, 5, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using TRIMOFFSETN = OPAMP_OPAMP4_CSR_TRIMOFFSETN_Values<OPAMP::OPAMP4_CSR, 24, 5, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using CALOUT = OPAMP_OPAMP4_CSR_CALOUT_Values<OPAMP::OPAMP4_CSR, 30, 1, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using LOCK = OPAMP_OPAMP4_CSR_LOCK_Values<OPAMP::OPAMP4_CSR, 31, 1, ReadWriteMode, OPAMPOPAMP4_CSRBase> ;
    using FieldValues = OPAMP_OPAMP4_CSR_LOCK_Values<OPAMP::OPAMP4_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP4_CSRPack  = Register<0x4001030C, 32, ReadWriteMode, OPAMPOPAMP4_CSRBase, T...> ;

  struct OPAMPOPAMP5_CSRBase {} ;

  struct OPAMP5_CSR : public RegisterBase<0x40010310, 32, ReadWriteMode>
  {
    using OPAEN = OPAMP_OPAMP5_CSR_OPAEN_Values<OPAMP::OPAMP5_CSR, 0, 1, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using FORCE_VP = OPAMP_OPAMP5_CSR_FORCE_VP_Values<OPAMP::OPAMP5_CSR, 1, 1, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using VP_SEL = OPAMP_OPAMP5_CSR_VP_SEL_Values<OPAMP::OPAMP5_CSR, 2, 2, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using USERTRIM = OPAMP_OPAMP5_CSR_USERTRIM_Values<OPAMP::OPAMP5_CSR, 4, 1, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using VM_SEL = OPAMP_OPAMP5_CSR_VM_SEL_Values<OPAMP::OPAMP5_CSR, 5, 2, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using OPAHSM = OPAMP_OPAMP5_CSR_OPAHSM_Values<OPAMP::OPAMP5_CSR, 7, 1, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using OPAINTOEN = OPAMP_OPAMP5_CSR_OPAINTOEN_Values<OPAMP::OPAMP5_CSR, 8, 1, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using CALON = OPAMP_OPAMP5_CSR_CALON_Values<OPAMP::OPAMP5_CSR, 11, 1, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using CALSEL = OPAMP_OPAMP5_CSR_CALSEL_Values<OPAMP::OPAMP5_CSR, 12, 2, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using PGA_GAIN = OPAMP_OPAMP5_CSR_PGA_GAIN_Values<OPAMP::OPAMP5_CSR, 14, 5, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using TRIMOFFSETP = OPAMP_OPAMP5_CSR_TRIMOFFSETP_Values<OPAMP::OPAMP5_CSR, 19, 5, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using TRIMOFFSETN = OPAMP_OPAMP5_CSR_TRIMOFFSETN_Values<OPAMP::OPAMP5_CSR, 24, 5, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using CALOUT = OPAMP_OPAMP5_CSR_CALOUT_Values<OPAMP::OPAMP5_CSR, 30, 1, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using LOCK = OPAMP_OPAMP5_CSR_LOCK_Values<OPAMP::OPAMP5_CSR, 31, 1, ReadWriteMode, OPAMPOPAMP5_CSRBase> ;
    using FieldValues = OPAMP_OPAMP5_CSR_LOCK_Values<OPAMP::OPAMP5_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP5_CSRPack  = Register<0x40010310, 32, ReadWriteMode, OPAMPOPAMP5_CSRBase, T...> ;

  struct OPAMPOPAMP6_CSRBase {} ;

  struct OPAMP6_CSR : public RegisterBase<0x40010314, 32, ReadWriteMode>
  {
    using OPAEN = OPAMP_OPAMP6_CSR_OPAEN_Values<OPAMP::OPAMP6_CSR, 0, 1, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using FORCE_VP = OPAMP_OPAMP6_CSR_FORCE_VP_Values<OPAMP::OPAMP6_CSR, 1, 1, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using VP_SEL = OPAMP_OPAMP6_CSR_VP_SEL_Values<OPAMP::OPAMP6_CSR, 2, 2, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using USERTRIM = OPAMP_OPAMP6_CSR_USERTRIM_Values<OPAMP::OPAMP6_CSR, 4, 1, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using VM_SEL = OPAMP_OPAMP6_CSR_VM_SEL_Values<OPAMP::OPAMP6_CSR, 5, 2, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using OPAHSM = OPAMP_OPAMP6_CSR_OPAHSM_Values<OPAMP::OPAMP6_CSR, 7, 1, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using OPAINTOEN = OPAMP_OPAMP6_CSR_OPAINTOEN_Values<OPAMP::OPAMP6_CSR, 8, 1, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using CALON = OPAMP_OPAMP6_CSR_CALON_Values<OPAMP::OPAMP6_CSR, 11, 1, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using CALSEL = OPAMP_OPAMP6_CSR_CALSEL_Values<OPAMP::OPAMP6_CSR, 12, 2, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using PGA_GAIN = OPAMP_OPAMP6_CSR_PGA_GAIN_Values<OPAMP::OPAMP6_CSR, 14, 5, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using TRIMOFFSETP = OPAMP_OPAMP6_CSR_TRIMOFFSETP_Values<OPAMP::OPAMP6_CSR, 19, 5, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using TRIMOFFSETN = OPAMP_OPAMP6_CSR_TRIMOFFSETN_Values<OPAMP::OPAMP6_CSR, 24, 5, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using CALOUT = OPAMP_OPAMP6_CSR_CALOUT_Values<OPAMP::OPAMP6_CSR, 30, 1, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using LOCK = OPAMP_OPAMP6_CSR_LOCK_Values<OPAMP::OPAMP6_CSR, 31, 1, ReadWriteMode, OPAMPOPAMP6_CSRBase> ;
    using FieldValues = OPAMP_OPAMP6_CSR_LOCK_Values<OPAMP::OPAMP6_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP6_CSRPack  = Register<0x40010314, 32, ReadWriteMode, OPAMPOPAMP6_CSRBase, T...> ;

  struct OPAMPOPAMP1_TCMRBase {} ;

  struct OPAMP1_TCMR : public RegisterBase<0x40010318, 32, ReadWriteMode>
  {
    using VMS_SEL = OPAMP_OPAMP1_TCMR_VMS_SEL_Values<OPAMP::OPAMP1_TCMR, 0, 1, ReadWriteMode, OPAMPOPAMP1_TCMRBase> ;
    using VPS_SEL = OPAMP_OPAMP1_TCMR_VPS_SEL_Values<OPAMP::OPAMP1_TCMR, 1, 2, ReadWriteMode, OPAMPOPAMP1_TCMRBase> ;
    using T1CM_EN = OPAMP_OPAMP1_TCMR_T1CM_EN_Values<OPAMP::OPAMP1_TCMR, 3, 1, ReadWriteMode, OPAMPOPAMP1_TCMRBase> ;
    using T8CM_EN = OPAMP_OPAMP1_TCMR_T8CM_EN_Values<OPAMP::OPAMP1_TCMR, 4, 1, ReadWriteMode, OPAMPOPAMP1_TCMRBase> ;
    using T20CM_EN = OPAMP_OPAMP1_TCMR_T20CM_EN_Values<OPAMP::OPAMP1_TCMR, 5, 1, ReadWriteMode, OPAMPOPAMP1_TCMRBase> ;
    using LOCK = OPAMP_OPAMP1_TCMR_LOCK_Values<OPAMP::OPAMP1_TCMR, 31, 1, ReadWriteMode, OPAMPOPAMP1_TCMRBase> ;
    using FieldValues = OPAMP_OPAMP1_TCMR_LOCK_Values<OPAMP::OPAMP1_TCMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP1_TCMRPack  = Register<0x40010318, 32, ReadWriteMode, OPAMPOPAMP1_TCMRBase, T...> ;

  struct OPAMPOPAMP2_TCMRBase {} ;

  struct OPAMP2_TCMR : public RegisterBase<0x4001031C, 32, ReadWriteMode>
  {
    using VMS_SEL = OPAMP_OPAMP2_TCMR_VMS_SEL_Values<OPAMP::OPAMP2_TCMR, 0, 1, ReadWriteMode, OPAMPOPAMP2_TCMRBase> ;
    using VPS_SEL = OPAMP_OPAMP2_TCMR_VPS_SEL_Values<OPAMP::OPAMP2_TCMR, 1, 2, ReadWriteMode, OPAMPOPAMP2_TCMRBase> ;
    using T1CM_EN = OPAMP_OPAMP2_TCMR_T1CM_EN_Values<OPAMP::OPAMP2_TCMR, 3, 1, ReadWriteMode, OPAMPOPAMP2_TCMRBase> ;
    using T8CM_EN = OPAMP_OPAMP2_TCMR_T8CM_EN_Values<OPAMP::OPAMP2_TCMR, 4, 1, ReadWriteMode, OPAMPOPAMP2_TCMRBase> ;
    using T20CM_EN = OPAMP_OPAMP2_TCMR_T20CM_EN_Values<OPAMP::OPAMP2_TCMR, 5, 1, ReadWriteMode, OPAMPOPAMP2_TCMRBase> ;
    using LOCK = OPAMP_OPAMP2_TCMR_LOCK_Values<OPAMP::OPAMP2_TCMR, 31, 1, ReadWriteMode, OPAMPOPAMP2_TCMRBase> ;
    using FieldValues = OPAMP_OPAMP2_TCMR_LOCK_Values<OPAMP::OPAMP2_TCMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP2_TCMRPack  = Register<0x4001031C, 32, ReadWriteMode, OPAMPOPAMP2_TCMRBase, T...> ;

  struct OPAMPOPAMP3_TCMRBase {} ;

  struct OPAMP3_TCMR : public RegisterBase<0x40010320, 32, ReadWriteMode>
  {
    using VMS_SEL = OPAMP_OPAMP3_TCMR_VMS_SEL_Values<OPAMP::OPAMP3_TCMR, 0, 1, ReadWriteMode, OPAMPOPAMP3_TCMRBase> ;
    using VPS_SEL = OPAMP_OPAMP3_TCMR_VPS_SEL_Values<OPAMP::OPAMP3_TCMR, 1, 2, ReadWriteMode, OPAMPOPAMP3_TCMRBase> ;
    using T1CM_EN = OPAMP_OPAMP3_TCMR_T1CM_EN_Values<OPAMP::OPAMP3_TCMR, 3, 1, ReadWriteMode, OPAMPOPAMP3_TCMRBase> ;
    using T8CM_EN = OPAMP_OPAMP3_TCMR_T8CM_EN_Values<OPAMP::OPAMP3_TCMR, 4, 1, ReadWriteMode, OPAMPOPAMP3_TCMRBase> ;
    using T20CM_EN = OPAMP_OPAMP3_TCMR_T20CM_EN_Values<OPAMP::OPAMP3_TCMR, 5, 1, ReadWriteMode, OPAMPOPAMP3_TCMRBase> ;
    using LOCK = OPAMP_OPAMP3_TCMR_LOCK_Values<OPAMP::OPAMP3_TCMR, 31, 1, ReadWriteMode, OPAMPOPAMP3_TCMRBase> ;
    using FieldValues = OPAMP_OPAMP3_TCMR_LOCK_Values<OPAMP::OPAMP3_TCMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP3_TCMRPack  = Register<0x40010320, 32, ReadWriteMode, OPAMPOPAMP3_TCMRBase, T...> ;

  struct OPAMPOPAMP4_TCMRBase {} ;

  struct OPAMP4_TCMR : public RegisterBase<0x40010324, 32, ReadWriteMode>
  {
    using VMS_SEL = OPAMP_OPAMP4_TCMR_VMS_SEL_Values<OPAMP::OPAMP4_TCMR, 0, 1, ReadWriteMode, OPAMPOPAMP4_TCMRBase> ;
    using VPS_SEL = OPAMP_OPAMP4_TCMR_VPS_SEL_Values<OPAMP::OPAMP4_TCMR, 1, 2, ReadWriteMode, OPAMPOPAMP4_TCMRBase> ;
    using T1CM_EN = OPAMP_OPAMP4_TCMR_T1CM_EN_Values<OPAMP::OPAMP4_TCMR, 3, 1, ReadWriteMode, OPAMPOPAMP4_TCMRBase> ;
    using T8CM_EN = OPAMP_OPAMP4_TCMR_T8CM_EN_Values<OPAMP::OPAMP4_TCMR, 4, 1, ReadWriteMode, OPAMPOPAMP4_TCMRBase> ;
    using T20CM_EN = OPAMP_OPAMP4_TCMR_T20CM_EN_Values<OPAMP::OPAMP4_TCMR, 5, 1, ReadWriteMode, OPAMPOPAMP4_TCMRBase> ;
    using LOCK = OPAMP_OPAMP4_TCMR_LOCK_Values<OPAMP::OPAMP4_TCMR, 31, 1, ReadWriteMode, OPAMPOPAMP4_TCMRBase> ;
    using FieldValues = OPAMP_OPAMP4_TCMR_LOCK_Values<OPAMP::OPAMP4_TCMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP4_TCMRPack  = Register<0x40010324, 32, ReadWriteMode, OPAMPOPAMP4_TCMRBase, T...> ;

  struct OPAMPOPAMP5_TCMRBase {} ;

  struct OPAMP5_TCMR : public RegisterBase<0x40010328, 32, ReadWriteMode>
  {
    using VMS_SEL = OPAMP_OPAMP5_TCMR_VMS_SEL_Values<OPAMP::OPAMP5_TCMR, 0, 1, ReadWriteMode, OPAMPOPAMP5_TCMRBase> ;
    using VPS_SEL = OPAMP_OPAMP5_TCMR_VPS_SEL_Values<OPAMP::OPAMP5_TCMR, 1, 2, ReadWriteMode, OPAMPOPAMP5_TCMRBase> ;
    using T1CM_EN = OPAMP_OPAMP5_TCMR_T1CM_EN_Values<OPAMP::OPAMP5_TCMR, 3, 1, ReadWriteMode, OPAMPOPAMP5_TCMRBase> ;
    using T8CM_EN = OPAMP_OPAMP5_TCMR_T8CM_EN_Values<OPAMP::OPAMP5_TCMR, 4, 1, ReadWriteMode, OPAMPOPAMP5_TCMRBase> ;
    using T20CM_EN = OPAMP_OPAMP5_TCMR_T20CM_EN_Values<OPAMP::OPAMP5_TCMR, 5, 1, ReadWriteMode, OPAMPOPAMP5_TCMRBase> ;
    using LOCK = OPAMP_OPAMP5_TCMR_LOCK_Values<OPAMP::OPAMP5_TCMR, 31, 1, ReadWriteMode, OPAMPOPAMP5_TCMRBase> ;
    using FieldValues = OPAMP_OPAMP5_TCMR_LOCK_Values<OPAMP::OPAMP5_TCMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP5_TCMRPack  = Register<0x40010328, 32, ReadWriteMode, OPAMPOPAMP5_TCMRBase, T...> ;

  struct OPAMPOPAMP6_TCMRBase {} ;

  struct OPAMP6_TCMR : public RegisterBase<0x4001032C, 32, ReadWriteMode>
  {
    using VMS_SEL = OPAMP_OPAMP6_TCMR_VMS_SEL_Values<OPAMP::OPAMP6_TCMR, 0, 1, ReadWriteMode, OPAMPOPAMP6_TCMRBase> ;
    using VPS_SEL = OPAMP_OPAMP6_TCMR_VPS_SEL_Values<OPAMP::OPAMP6_TCMR, 1, 2, ReadWriteMode, OPAMPOPAMP6_TCMRBase> ;
    using T1CM_EN = OPAMP_OPAMP6_TCMR_T1CM_EN_Values<OPAMP::OPAMP6_TCMR, 3, 1, ReadWriteMode, OPAMPOPAMP6_TCMRBase> ;
    using T8CM_EN = OPAMP_OPAMP6_TCMR_T8CM_EN_Values<OPAMP::OPAMP6_TCMR, 4, 1, ReadWriteMode, OPAMPOPAMP6_TCMRBase> ;
    using T20CM_EN = OPAMP_OPAMP6_TCMR_T20CM_EN_Values<OPAMP::OPAMP6_TCMR, 5, 1, ReadWriteMode, OPAMPOPAMP6_TCMRBase> ;
    using LOCK = OPAMP_OPAMP6_TCMR_LOCK_Values<OPAMP::OPAMP6_TCMR, 31, 1, ReadWriteMode, OPAMPOPAMP6_TCMRBase> ;
    using FieldValues = OPAMP_OPAMP6_TCMR_LOCK_Values<OPAMP::OPAMP6_TCMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using OPAMP6_TCMRPack  = Register<0x4001032C, 32, ReadWriteMode, OPAMPOPAMP6_TCMRBase, T...> ;

} ;

