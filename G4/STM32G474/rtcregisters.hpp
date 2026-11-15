/*******************************************************************************
* Filename      : rtcregisters.hpp
*
* Details       : Real-time clock. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "rtcfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct RTC
{
  struct RTCTRBase {} ;

  struct TR : public RegisterBase<0x40002800, 32, ReadWriteMode>
  {
    using PM = RTC_TR_PM_Values<RTC::TR, 22, 1, ReadWriteMode, RTCTRBase> ;
    using HT = RTC_TR_HT_Values<RTC::TR, 20, 2, ReadWriteMode, RTCTRBase> ;
    using HU = RTC_TR_HU_Values<RTC::TR, 16, 4, ReadWriteMode, RTCTRBase> ;
    using MNT = RTC_TR_MNT_Values<RTC::TR, 12, 3, ReadWriteMode, RTCTRBase> ;
    using MNU = RTC_TR_MNU_Values<RTC::TR, 8, 4, ReadWriteMode, RTCTRBase> ;
    using ST = RTC_TR_ST_Values<RTC::TR, 4, 3, ReadWriteMode, RTCTRBase> ;
    using SU = RTC_TR_SU_Values<RTC::TR, 0, 4, ReadWriteMode, RTCTRBase> ;
    using FieldValues = RTC_TR_SU_Values<RTC::TR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TRPack  = Register<0x40002800, 32, ReadWriteMode, RTCTRBase, T...> ;

  struct RTCDRBase {} ;

  struct DR : public RegisterBase<0x40002804, 32, ReadWriteMode>
  {
    using YT = RTC_DR_YT_Values<RTC::DR, 20, 4, ReadWriteMode, RTCDRBase> ;
    using YU = RTC_DR_YU_Values<RTC::DR, 16, 4, ReadWriteMode, RTCDRBase> ;
    using WDU = RTC_DR_WDU_Values<RTC::DR, 13, 3, ReadWriteMode, RTCDRBase> ;
    using MT = RTC_DR_MT_Values<RTC::DR, 12, 1, ReadWriteMode, RTCDRBase> ;
    using MU = RTC_DR_MU_Values<RTC::DR, 8, 4, ReadWriteMode, RTCDRBase> ;
    using DT = RTC_DR_DT_Values<RTC::DR, 4, 2, ReadWriteMode, RTCDRBase> ;
    using DU = RTC_DR_DU_Values<RTC::DR, 0, 4, ReadWriteMode, RTCDRBase> ;
    using FieldValues = RTC_DR_DU_Values<RTC::DR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40002804, 32, ReadWriteMode, RTCDRBase, T...> ;

  struct RTCSSRBase {} ;

  struct SSR : public RegisterBase<0x40002808, 32, ReadMode>
  {
    using SS = RTC_SSR_SS_Values<RTC::SSR, 0, 16, ReadMode, RTCSSRBase> ;
    using FieldValues = RTC_SSR_SS_Values<RTC::SSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SSRPack  = Register<0x40002808, 32, ReadMode, RTCSSRBase, T...> ;

  struct RTCICSRBase {} ;

  struct ICSR : public RegisterBase<0x4000280C, 32, ReadWriteMode>
  {
    using ALRAWF = RTC_ICSR_ALRAWF_Values<RTC::ICSR, 0, 1, ReadMode, RTCICSRBase> ;
    using ALRBWF = RTC_ICSR_ALRBWF_Values<RTC::ICSR, 1, 1, ReadMode, RTCICSRBase> ;
    using WUTWF = RTC_ICSR_WUTWF_Values<RTC::ICSR, 2, 1, ReadMode, RTCICSRBase> ;
    using SHPF = RTC_ICSR_SHPF_Values<RTC::ICSR, 3, 1, ReadWriteMode, RTCICSRBase> ;
    using INITS = RTC_ICSR_INITS_Values<RTC::ICSR, 4, 1, ReadMode, RTCICSRBase> ;
    using RSF = RTC_ICSR_RSF_Values<RTC::ICSR, 5, 1, ReadWriteMode, RTCICSRBase> ;
    using INITF = RTC_ICSR_INITF_Values<RTC::ICSR, 6, 1, ReadMode, RTCICSRBase> ;
    using INIT = RTC_ICSR_INIT_Values<RTC::ICSR, 7, 1, ReadWriteMode, RTCICSRBase> ;
    using RECALPF = RTC_ICSR_RECALPF_Values<RTC::ICSR, 16, 1, ReadMode, RTCICSRBase> ;
    using FieldValues = RTC_ICSR_RECALPF_Values<RTC::ICSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICSRPack  = Register<0x4000280C, 32, ReadWriteMode, RTCICSRBase, T...> ;

  struct RTCPRERBase {} ;

  struct PRER : public RegisterBase<0x40002810, 32, ReadWriteMode>
  {
    using PREDIV_A = RTC_PRER_PREDIV_A_Values<RTC::PRER, 16, 7, ReadWriteMode, RTCPRERBase> ;
    using PREDIV_S = RTC_PRER_PREDIV_S_Values<RTC::PRER, 0, 15, ReadWriteMode, RTCPRERBase> ;
    using FieldValues = RTC_PRER_PREDIV_S_Values<RTC::PRER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PRERPack  = Register<0x40002810, 32, ReadWriteMode, RTCPRERBase, T...> ;

  struct RTCWUTRBase {} ;

  struct WUTR : public RegisterBase<0x40002814, 32, ReadWriteMode>
  {
    using WUT = RTC_WUTR_WUT_Values<RTC::WUTR, 0, 16, ReadWriteMode, RTCWUTRBase> ;
    using FieldValues = RTC_WUTR_WUT_Values<RTC::WUTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WUTRPack  = Register<0x40002814, 32, ReadWriteMode, RTCWUTRBase, T...> ;

  struct RTCCRBase {} ;

  struct CR : public RegisterBase<0x40002818, 32, ReadWriteMode>
  {
    using WCKSEL = RTC_CR_WCKSEL_Values<RTC::CR, 0, 3, ReadWriteMode, RTCCRBase> ;
    using TSEDGE = RTC_CR_TSEDGE_Values<RTC::CR, 3, 1, ReadWriteMode, RTCCRBase> ;
    using REFCKON = RTC_CR_REFCKON_Values<RTC::CR, 4, 1, ReadWriteMode, RTCCRBase> ;
    using BYPSHAD = RTC_CR_BYPSHAD_Values<RTC::CR, 5, 1, ReadWriteMode, RTCCRBase> ;
    using FMT = RTC_CR_FMT_Values<RTC::CR, 6, 1, ReadWriteMode, RTCCRBase> ;
    using ALRAE = RTC_CR_ALRAE_Values<RTC::CR, 8, 1, ReadWriteMode, RTCCRBase> ;
    using ALRBE = RTC_CR_ALRBE_Values<RTC::CR, 9, 1, ReadWriteMode, RTCCRBase> ;
    using WUTE = RTC_CR_WUTE_Values<RTC::CR, 10, 1, ReadWriteMode, RTCCRBase> ;
    using TSE = RTC_CR_TSE_Values<RTC::CR, 11, 1, ReadWriteMode, RTCCRBase> ;
    using ALRAIE = RTC_CR_ALRAIE_Values<RTC::CR, 12, 1, ReadWriteMode, RTCCRBase> ;
    using ALRBIE = RTC_CR_ALRBIE_Values<RTC::CR, 13, 1, ReadWriteMode, RTCCRBase> ;
    using WUTIE = RTC_CR_WUTIE_Values<RTC::CR, 14, 1, ReadWriteMode, RTCCRBase> ;
    using TSIE = RTC_CR_TSIE_Values<RTC::CR, 15, 1, ReadWriteMode, RTCCRBase> ;
    using ADD1H = RTC_CR_ADD1H_Values<RTC::CR, 16, 1, ReadWriteMode, RTCCRBase> ;
    using SUB1H = RTC_CR_SUB1H_Values<RTC::CR, 17, 1, ReadWriteMode, RTCCRBase> ;
    using BKP = RTC_CR_BKP_Values<RTC::CR, 18, 1, ReadWriteMode, RTCCRBase> ;
    using COSEL = RTC_CR_COSEL_Values<RTC::CR, 19, 1, ReadWriteMode, RTCCRBase> ;
    using POL = RTC_CR_POL_Values<RTC::CR, 20, 1, ReadWriteMode, RTCCRBase> ;
    using OSEL = RTC_CR_OSEL_Values<RTC::CR, 21, 2, ReadWriteMode, RTCCRBase> ;
    using COE = RTC_CR_COE_Values<RTC::CR, 23, 1, ReadWriteMode, RTCCRBase> ;
    using ITSE = RTC_CR_ITSE_Values<RTC::CR, 24, 1, ReadWriteMode, RTCCRBase> ;
    using TAMPTS = RTC_CR_TAMPTS_Values<RTC::CR, 25, 1, ReadWriteMode, RTCCRBase> ;
    using TAMPOE = RTC_CR_TAMPOE_Values<RTC::CR, 26, 1, ReadWriteMode, RTCCRBase> ;
    using TAMPALRM_PU = RTC_CR_TAMPALRM_PU_Values<RTC::CR, 29, 1, ReadWriteMode, RTCCRBase> ;
    using TAMPALRM_TYPE = RTC_CR_TAMPALRM_TYPE_Values<RTC::CR, 30, 1, ReadWriteMode, RTCCRBase> ;
    using OUT2EN = RTC_CR_OUT2EN_Values<RTC::CR, 31, 1, ReadWriteMode, RTCCRBase> ;
    using FieldValues = RTC_CR_OUT2EN_Values<RTC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40002818, 32, ReadWriteMode, RTCCRBase, T...> ;

  struct RTCWPRBase {} ;

  struct WPR : public RegisterBase<0x40002824, 32, WriteMode>
  {
    using KEY = RTC_WPR_KEY_Values<RTC::WPR, 0, 8, WriteMode, RTCWPRBase> ;
    using FieldValues = RTC_WPR_KEY_Values<RTC::WPR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WPRPack  = Register<0x40002824, 32, WriteMode, RTCWPRBase, T...> ;

  struct RTCCALRBase {} ;

  struct CALR : public RegisterBase<0x40002828, 32, ReadWriteMode>
  {
    using CALP = RTC_CALR_CALP_Values<RTC::CALR, 15, 1, ReadWriteMode, RTCCALRBase> ;
    using CALW8 = RTC_CALR_CALW8_Values<RTC::CALR, 14, 1, ReadWriteMode, RTCCALRBase> ;
    using CALW16 = RTC_CALR_CALW16_Values<RTC::CALR, 13, 1, ReadWriteMode, RTCCALRBase> ;
    using CALM = RTC_CALR_CALM_Values<RTC::CALR, 0, 9, ReadWriteMode, RTCCALRBase> ;
    using FieldValues = RTC_CALR_CALM_Values<RTC::CALR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CALRPack  = Register<0x40002828, 32, ReadWriteMode, RTCCALRBase, T...> ;

  struct RTCSHIFTRBase {} ;

  struct SHIFTR : public RegisterBase<0x4000282C, 32, WriteMode>
  {
    using ADD1S = RTC_SHIFTR_ADD1S_Values<RTC::SHIFTR, 31, 1, WriteMode, RTCSHIFTRBase> ;
    using SUBFS = RTC_SHIFTR_SUBFS_Values<RTC::SHIFTR, 0, 15, WriteMode, RTCSHIFTRBase> ;
    using FieldValues = RTC_SHIFTR_SUBFS_Values<RTC::SHIFTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SHIFTRPack  = Register<0x4000282C, 32, WriteMode, RTCSHIFTRBase, T...> ;

  struct RTCTSTRBase {} ;

  struct TSTR : public RegisterBase<0x40002830, 32, ReadMode>
  {
    using SU = RTC_TSTR_SU_Values<RTC::TSTR, 0, 4, ReadMode, RTCTSTRBase> ;
    using ST = RTC_TSTR_ST_Values<RTC::TSTR, 4, 3, ReadMode, RTCTSTRBase> ;
    using MNU = RTC_TSTR_MNU_Values<RTC::TSTR, 8, 4, ReadMode, RTCTSTRBase> ;
    using MNT = RTC_TSTR_MNT_Values<RTC::TSTR, 12, 3, ReadMode, RTCTSTRBase> ;
    using HU = RTC_TSTR_HU_Values<RTC::TSTR, 16, 4, ReadMode, RTCTSTRBase> ;
    using HT = RTC_TSTR_HT_Values<RTC::TSTR, 20, 2, ReadMode, RTCTSTRBase> ;
    using PM = RTC_TSTR_PM_Values<RTC::TSTR, 22, 1, ReadMode, RTCTSTRBase> ;
    using FieldValues = RTC_TSTR_PM_Values<RTC::TSTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSTRPack  = Register<0x40002830, 32, ReadMode, RTCTSTRBase, T...> ;

  struct RTCTSDRBase {} ;

  struct TSDR : public RegisterBase<0x40002834, 32, ReadMode>
  {
    using WDU = RTC_TSDR_WDU_Values<RTC::TSDR, 13, 3, ReadMode, RTCTSDRBase> ;
    using MT = RTC_TSDR_MT_Values<RTC::TSDR, 12, 1, ReadMode, RTCTSDRBase> ;
    using MU = RTC_TSDR_MU_Values<RTC::TSDR, 8, 4, ReadMode, RTCTSDRBase> ;
    using DT = RTC_TSDR_DT_Values<RTC::TSDR, 4, 2, ReadMode, RTCTSDRBase> ;
    using DU = RTC_TSDR_DU_Values<RTC::TSDR, 0, 4, ReadMode, RTCTSDRBase> ;
    using FieldValues = RTC_TSDR_DU_Values<RTC::TSDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSDRPack  = Register<0x40002834, 32, ReadMode, RTCTSDRBase, T...> ;

  struct RTCTSSSRBase {} ;

  struct TSSSR : public RegisterBase<0x40002838, 32, ReadMode>
  {
    using SS = RTC_TSSSR_SS_Values<RTC::TSSSR, 0, 16, ReadMode, RTCTSSSRBase> ;
    using FieldValues = RTC_TSSSR_SS_Values<RTC::TSSSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TSSSRPack  = Register<0x40002838, 32, ReadMode, RTCTSSSRBase, T...> ;

  struct RTCALRMARBase {} ;

  struct ALRMAR : public RegisterBase<0x40002840, 32, ReadWriteMode>
  {
    using MSK4 = RTC_ALRMAR_MSK4_Values<RTC::ALRMAR, 31, 1, ReadWriteMode, RTCALRMARBase> ;
    using WDSEL = RTC_ALRMAR_WDSEL_Values<RTC::ALRMAR, 30, 1, ReadWriteMode, RTCALRMARBase> ;
    using DT = RTC_ALRMAR_DT_Values<RTC::ALRMAR, 28, 2, ReadWriteMode, RTCALRMARBase> ;
    using DU = RTC_ALRMAR_DU_Values<RTC::ALRMAR, 24, 4, ReadWriteMode, RTCALRMARBase> ;
    using MSK3 = RTC_ALRMAR_MSK3_Values<RTC::ALRMAR, 23, 1, ReadWriteMode, RTCALRMARBase> ;
    using PM = RTC_ALRMAR_PM_Values<RTC::ALRMAR, 22, 1, ReadWriteMode, RTCALRMARBase> ;
    using HT = RTC_ALRMAR_HT_Values<RTC::ALRMAR, 20, 2, ReadWriteMode, RTCALRMARBase> ;
    using HU = RTC_ALRMAR_HU_Values<RTC::ALRMAR, 16, 4, ReadWriteMode, RTCALRMARBase> ;
    using MSK2 = RTC_ALRMAR_MSK2_Values<RTC::ALRMAR, 15, 1, ReadWriteMode, RTCALRMARBase> ;
    using MNT = RTC_ALRMAR_MNT_Values<RTC::ALRMAR, 12, 3, ReadWriteMode, RTCALRMARBase> ;
    using MNU = RTC_ALRMAR_MNU_Values<RTC::ALRMAR, 8, 4, ReadWriteMode, RTCALRMARBase> ;
    using MSK1 = RTC_ALRMAR_MSK1_Values<RTC::ALRMAR, 7, 1, ReadWriteMode, RTCALRMARBase> ;
    using ST = RTC_ALRMAR_ST_Values<RTC::ALRMAR, 4, 3, ReadWriteMode, RTCALRMARBase> ;
    using SU = RTC_ALRMAR_SU_Values<RTC::ALRMAR, 0, 4, ReadWriteMode, RTCALRMARBase> ;
    using FieldValues = RTC_ALRMAR_SU_Values<RTC::ALRMAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRMARPack  = Register<0x40002840, 32, ReadWriteMode, RTCALRMARBase, T...> ;

  struct RTCALRMASSRBase {} ;

  struct ALRMASSR : public RegisterBase<0x40002844, 32, ReadWriteMode>
  {
    using MASKSS = RTC_ALRMASSR_MASKSS_Values<RTC::ALRMASSR, 24, 4, ReadWriteMode, RTCALRMASSRBase> ;
    using SS = RTC_ALRMASSR_SS_Values<RTC::ALRMASSR, 0, 15, ReadWriteMode, RTCALRMASSRBase> ;
    using FieldValues = RTC_ALRMASSR_SS_Values<RTC::ALRMASSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRMASSRPack  = Register<0x40002844, 32, ReadWriteMode, RTCALRMASSRBase, T...> ;

  struct RTCALRMBRBase {} ;

  struct ALRMBR : public RegisterBase<0x40002848, 32, ReadWriteMode>
  {
    using MSK4 = RTC_ALRMBR_MSK4_Values<RTC::ALRMBR, 31, 1, ReadWriteMode, RTCALRMBRBase> ;
    using WDSEL = RTC_ALRMBR_WDSEL_Values<RTC::ALRMBR, 30, 1, ReadWriteMode, RTCALRMBRBase> ;
    using DT = RTC_ALRMBR_DT_Values<RTC::ALRMBR, 28, 2, ReadWriteMode, RTCALRMBRBase> ;
    using DU = RTC_ALRMBR_DU_Values<RTC::ALRMBR, 24, 4, ReadWriteMode, RTCALRMBRBase> ;
    using MSK3 = RTC_ALRMBR_MSK3_Values<RTC::ALRMBR, 23, 1, ReadWriteMode, RTCALRMBRBase> ;
    using PM = RTC_ALRMBR_PM_Values<RTC::ALRMBR, 22, 1, ReadWriteMode, RTCALRMBRBase> ;
    using HT = RTC_ALRMBR_HT_Values<RTC::ALRMBR, 20, 2, ReadWriteMode, RTCALRMBRBase> ;
    using HU = RTC_ALRMBR_HU_Values<RTC::ALRMBR, 16, 4, ReadWriteMode, RTCALRMBRBase> ;
    using MSK2 = RTC_ALRMBR_MSK2_Values<RTC::ALRMBR, 15, 1, ReadWriteMode, RTCALRMBRBase> ;
    using MNT = RTC_ALRMBR_MNT_Values<RTC::ALRMBR, 12, 3, ReadWriteMode, RTCALRMBRBase> ;
    using MNU = RTC_ALRMBR_MNU_Values<RTC::ALRMBR, 8, 4, ReadWriteMode, RTCALRMBRBase> ;
    using MSK1 = RTC_ALRMBR_MSK1_Values<RTC::ALRMBR, 7, 1, ReadWriteMode, RTCALRMBRBase> ;
    using ST = RTC_ALRMBR_ST_Values<RTC::ALRMBR, 4, 3, ReadWriteMode, RTCALRMBRBase> ;
    using SU = RTC_ALRMBR_SU_Values<RTC::ALRMBR, 0, 4, ReadWriteMode, RTCALRMBRBase> ;
    using FieldValues = RTC_ALRMBR_SU_Values<RTC::ALRMBR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRMBRPack  = Register<0x40002848, 32, ReadWriteMode, RTCALRMBRBase, T...> ;

  struct RTCALRMBSSRBase {} ;

  struct ALRMBSSR : public RegisterBase<0x4000284C, 32, ReadWriteMode>
  {
    using MASKSS = RTC_ALRMBSSR_MASKSS_Values<RTC::ALRMBSSR, 24, 4, ReadWriteMode, RTCALRMBSSRBase> ;
    using SS = RTC_ALRMBSSR_SS_Values<RTC::ALRMBSSR, 0, 15, ReadWriteMode, RTCALRMBSSRBase> ;
    using FieldValues = RTC_ALRMBSSR_SS_Values<RTC::ALRMBSSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ALRMBSSRPack  = Register<0x4000284C, 32, ReadWriteMode, RTCALRMBSSRBase, T...> ;

  struct RTCSRBase {} ;

  struct SR : public RegisterBase<0x40002850, 32, ReadMode>
  {
    using ALRAF = RTC_SR_ALRAF_Values<RTC::SR, 0, 1, ReadMode, RTCSRBase> ;
    using ALRBF = RTC_SR_ALRBF_Values<RTC::SR, 1, 1, ReadMode, RTCSRBase> ;
    using WUTF = RTC_SR_WUTF_Values<RTC::SR, 2, 1, ReadMode, RTCSRBase> ;
    using TSF = RTC_SR_TSF_Values<RTC::SR, 3, 1, ReadMode, RTCSRBase> ;
    using TSOVF = RTC_SR_TSOVF_Values<RTC::SR, 4, 1, ReadMode, RTCSRBase> ;
    using ITSF = RTC_SR_ITSF_Values<RTC::SR, 5, 1, ReadMode, RTCSRBase> ;
    using FieldValues = RTC_SR_ITSF_Values<RTC::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40002850, 32, ReadMode, RTCSRBase, T...> ;

  struct RTCMISRBase {} ;

  struct MISR : public RegisterBase<0x40002854, 32, ReadMode>
  {
    using ALRAMF = RTC_MISR_ALRAMF_Values<RTC::MISR, 0, 1, ReadMode, RTCMISRBase> ;
    using ALRBMF = RTC_MISR_ALRBMF_Values<RTC::MISR, 1, 1, ReadMode, RTCMISRBase> ;
    using WUTMF = RTC_MISR_WUTMF_Values<RTC::MISR, 2, 1, ReadMode, RTCMISRBase> ;
    using TSMF = RTC_MISR_TSMF_Values<RTC::MISR, 3, 1, ReadMode, RTCMISRBase> ;
    using TSOVMF = RTC_MISR_TSOVMF_Values<RTC::MISR, 4, 1, ReadMode, RTCMISRBase> ;
    using ITSMF = RTC_MISR_ITSMF_Values<RTC::MISR, 5, 1, ReadMode, RTCMISRBase> ;
    using FieldValues = RTC_MISR_ITSMF_Values<RTC::MISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISRPack  = Register<0x40002854, 32, ReadMode, RTCMISRBase, T...> ;

  struct RTCSCRBase {} ;

  struct SCR : public RegisterBase<0x4000285C, 32, WriteMode>
  {
    using CALRAF = RTC_SCR_CALRAF_Values<RTC::SCR, 0, 1, WriteMode, RTCSCRBase> ;
    using CALRBF = RTC_SCR_CALRBF_Values<RTC::SCR, 1, 1, WriteMode, RTCSCRBase> ;
    using CWUTF = RTC_SCR_CWUTF_Values<RTC::SCR, 2, 1, WriteMode, RTCSCRBase> ;
    using CTSF = RTC_SCR_CTSF_Values<RTC::SCR, 3, 1, WriteMode, RTCSCRBase> ;
    using CTSOVF = RTC_SCR_CTSOVF_Values<RTC::SCR, 4, 1, WriteMode, RTCSCRBase> ;
    using CITSF = RTC_SCR_CITSF_Values<RTC::SCR, 5, 1, WriteMode, RTCSCRBase> ;
    using FieldValues = RTC_SCR_CITSF_Values<RTC::SCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SCRPack  = Register<0x4000285C, 32, WriteMode, RTCSCRBase, T...> ;

} ;

