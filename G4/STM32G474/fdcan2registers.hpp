/*******************************************************************************
* Filename      : fdcan2registers.hpp
*
* Details       : FDCAN. This header file is auto-generated for STM32G474
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "fdcan2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FDCAN2
{
  struct FDCAN2FDCAN_CRELBase {} ;

  struct FDCAN_CREL : public RegisterBase<0x40006800, 32, ReadWriteMode>
  {
    using DAY = FDCAN2_FDCAN_CREL_DAY_Values<FDCAN2::FDCAN_CREL, 0, 8, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using MON = FDCAN2_FDCAN_CREL_MON_Values<FDCAN2::FDCAN_CREL, 8, 8, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using YEAR = FDCAN2_FDCAN_CREL_YEAR_Values<FDCAN2::FDCAN_CREL, 16, 4, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using SUBSTEP = FDCAN2_FDCAN_CREL_SUBSTEP_Values<FDCAN2::FDCAN_CREL, 20, 4, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using STEP = FDCAN2_FDCAN_CREL_STEP_Values<FDCAN2::FDCAN_CREL, 24, 4, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using REL = FDCAN2_FDCAN_CREL_REL_Values<FDCAN2::FDCAN_CREL, 28, 4, ReadMode, FDCAN2FDCAN_CRELBase> ;
    using FieldValues = FDCAN2_FDCAN_CREL_REL_Values<FDCAN2::FDCAN_CREL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_CRELPack  = Register<0x40006800, 32, ReadWriteMode, FDCAN2FDCAN_CRELBase, T...> ;

  struct FDCAN2FDCAN_ENDNBase {} ;

  struct FDCAN_ENDN : public RegisterBase<0x40006804, 32, ReadWriteMode>
  {
    using ETV = FDCAN2_FDCAN_ENDN_ETV_Values<FDCAN2::FDCAN_ENDN, 0, 32, ReadMode, FDCAN2FDCAN_ENDNBase> ;
    using FieldValues = FDCAN2_FDCAN_ENDN_ETV_Values<FDCAN2::FDCAN_ENDN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ENDNPack  = Register<0x40006804, 32, ReadWriteMode, FDCAN2FDCAN_ENDNBase, T...> ;

  struct FDCAN2FDCAN_DBTPBase {} ;

  struct FDCAN_DBTP : public RegisterBase<0x4000680C, 32, ReadWriteMode>
  {
    using DSJW = FDCAN2_FDCAN_DBTP_DSJW_Values<FDCAN2::FDCAN_DBTP, 0, 4, ReadWriteMode, FDCAN2FDCAN_DBTPBase> ;
    using DTSEG2 = FDCAN2_FDCAN_DBTP_DTSEG2_Values<FDCAN2::FDCAN_DBTP, 4, 4, ReadWriteMode, FDCAN2FDCAN_DBTPBase> ;
    using DTSEG1 = FDCAN2_FDCAN_DBTP_DTSEG1_Values<FDCAN2::FDCAN_DBTP, 8, 5, ReadWriteMode, FDCAN2FDCAN_DBTPBase> ;
    using DBRP = FDCAN2_FDCAN_DBTP_DBRP_Values<FDCAN2::FDCAN_DBTP, 16, 5, ReadWriteMode, FDCAN2FDCAN_DBTPBase> ;
    using TDC = FDCAN2_FDCAN_DBTP_TDC_Values<FDCAN2::FDCAN_DBTP, 23, 1, ReadWriteMode, FDCAN2FDCAN_DBTPBase> ;
    using FieldValues = FDCAN2_FDCAN_DBTP_TDC_Values<FDCAN2::FDCAN_DBTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_DBTPPack  = Register<0x4000680C, 32, ReadWriteMode, FDCAN2FDCAN_DBTPBase, T...> ;

  struct FDCAN2FDCAN_TESTBase {} ;

  struct FDCAN_TEST : public RegisterBase<0x40006810, 32, ReadWriteMode>
  {
    using LBCK = FDCAN2_FDCAN_TEST_LBCK_Values<FDCAN2::FDCAN_TEST, 4, 1, ReadWriteMode, FDCAN2FDCAN_TESTBase> ;
    using TX = FDCAN2_FDCAN_TEST_TX_Values<FDCAN2::FDCAN_TEST, 5, 2, ReadWriteMode, FDCAN2FDCAN_TESTBase> ;
    using RX = FDCAN2_FDCAN_TEST_RX_Values<FDCAN2::FDCAN_TEST, 7, 1, ReadMode, FDCAN2FDCAN_TESTBase> ;
    using FieldValues = FDCAN2_FDCAN_TEST_RX_Values<FDCAN2::FDCAN_TEST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TESTPack  = Register<0x40006810, 32, ReadWriteMode, FDCAN2FDCAN_TESTBase, T...> ;

  struct FDCAN2FDCAN_RWDBase {} ;

  struct FDCAN_RWD : public RegisterBase<0x40006814, 32, ReadWriteMode>
  {
    using WDC = FDCAN2_FDCAN_RWD_WDC_Values<FDCAN2::FDCAN_RWD, 0, 8, ReadWriteMode, FDCAN2FDCAN_RWDBase> ;
    using WDV = FDCAN2_FDCAN_RWD_WDV_Values<FDCAN2::FDCAN_RWD, 8, 8, ReadMode, FDCAN2FDCAN_RWDBase> ;
    using FieldValues = FDCAN2_FDCAN_RWD_WDV_Values<FDCAN2::FDCAN_RWD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RWDPack  = Register<0x40006814, 32, ReadWriteMode, FDCAN2FDCAN_RWDBase, T...> ;

  struct FDCAN2FDCAN_CCCRBase {} ;

  struct FDCAN_CCCR : public RegisterBase<0x40006818, 32, ReadWriteMode>
  {
    using INIT = FDCAN2_FDCAN_CCCR_INIT_Values<FDCAN2::FDCAN_CCCR, 0, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using CCE = FDCAN2_FDCAN_CCCR_CCE_Values<FDCAN2::FDCAN_CCCR, 1, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using ASM = FDCAN2_FDCAN_CCCR_ASM_Values<FDCAN2::FDCAN_CCCR, 2, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using CSA = FDCAN2_FDCAN_CCCR_CSA_Values<FDCAN2::FDCAN_CCCR, 3, 1, ReadMode, FDCAN2FDCAN_CCCRBase> ;
    using CSR = FDCAN2_FDCAN_CCCR_CSR_Values<FDCAN2::FDCAN_CCCR, 4, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using MON = FDCAN2_FDCAN_CCCR_MON_Values<FDCAN2::FDCAN_CCCR, 5, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using DAR = FDCAN2_FDCAN_CCCR_DAR_Values<FDCAN2::FDCAN_CCCR, 6, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using TEST = FDCAN2_FDCAN_CCCR_TEST_Values<FDCAN2::FDCAN_CCCR, 7, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using FDOE = FDCAN2_FDCAN_CCCR_FDOE_Values<FDCAN2::FDCAN_CCCR, 8, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using BRSE = FDCAN2_FDCAN_CCCR_BRSE_Values<FDCAN2::FDCAN_CCCR, 9, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using PXHD = FDCAN2_FDCAN_CCCR_PXHD_Values<FDCAN2::FDCAN_CCCR, 12, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using EFBI = FDCAN2_FDCAN_CCCR_EFBI_Values<FDCAN2::FDCAN_CCCR, 13, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using TXP = FDCAN2_FDCAN_CCCR_TXP_Values<FDCAN2::FDCAN_CCCR, 14, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using NISO = FDCAN2_FDCAN_CCCR_NISO_Values<FDCAN2::FDCAN_CCCR, 15, 1, ReadWriteMode, FDCAN2FDCAN_CCCRBase> ;
    using FieldValues = FDCAN2_FDCAN_CCCR_NISO_Values<FDCAN2::FDCAN_CCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_CCCRPack  = Register<0x40006818, 32, ReadWriteMode, FDCAN2FDCAN_CCCRBase, T...> ;

  struct FDCAN2FDCAN_NBTPBase {} ;

  struct FDCAN_NBTP : public RegisterBase<0x4000681C, 32, ReadWriteMode>
  {
    using NTSEG2 = FDCAN2_FDCAN_NBTP_NTSEG2_Values<FDCAN2::FDCAN_NBTP, 0, 7, ReadWriteMode, FDCAN2FDCAN_NBTPBase> ;
    using NTSEG1 = FDCAN2_FDCAN_NBTP_NTSEG1_Values<FDCAN2::FDCAN_NBTP, 8, 8, ReadWriteMode, FDCAN2FDCAN_NBTPBase> ;
    using NBRP = FDCAN2_FDCAN_NBTP_NBRP_Values<FDCAN2::FDCAN_NBTP, 16, 9, ReadWriteMode, FDCAN2FDCAN_NBTPBase> ;
    using NSJW = FDCAN2_FDCAN_NBTP_NSJW_Values<FDCAN2::FDCAN_NBTP, 25, 7, ReadWriteMode, FDCAN2FDCAN_NBTPBase> ;
    using FieldValues = FDCAN2_FDCAN_NBTP_NSJW_Values<FDCAN2::FDCAN_NBTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_NBTPPack  = Register<0x4000681C, 32, ReadWriteMode, FDCAN2FDCAN_NBTPBase, T...> ;

  struct FDCAN2FDCAN_TSCCBase {} ;

  struct FDCAN_TSCC : public RegisterBase<0x40006820, 32, ReadWriteMode>
  {
    using TSS = FDCAN2_FDCAN_TSCC_TSS_Values<FDCAN2::FDCAN_TSCC, 0, 2, ReadWriteMode, FDCAN2FDCAN_TSCCBase> ;
    using TCP = FDCAN2_FDCAN_TSCC_TCP_Values<FDCAN2::FDCAN_TSCC, 16, 4, ReadWriteMode, FDCAN2FDCAN_TSCCBase> ;
    using FieldValues = FDCAN2_FDCAN_TSCC_TCP_Values<FDCAN2::FDCAN_TSCC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TSCCPack  = Register<0x40006820, 32, ReadWriteMode, FDCAN2FDCAN_TSCCBase, T...> ;

  struct FDCAN2FDCAN_TSCVBase {} ;

  struct FDCAN_TSCV : public RegisterBase<0x40006824, 32, ReadWriteMode>
  {
    using TSC = FDCAN2_FDCAN_TSCV_TSC_Values<FDCAN2::FDCAN_TSCV, 0, 16, ReadWriteMode, FDCAN2FDCAN_TSCVBase> ;
    using FieldValues = FDCAN2_FDCAN_TSCV_TSC_Values<FDCAN2::FDCAN_TSCV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TSCVPack  = Register<0x40006824, 32, ReadWriteMode, FDCAN2FDCAN_TSCVBase, T...> ;

  struct FDCAN2FDCAN_TOCCBase {} ;

  struct FDCAN_TOCC : public RegisterBase<0x40006828, 32, ReadWriteMode>
  {
    using ETOC = FDCAN2_FDCAN_TOCC_ETOC_Values<FDCAN2::FDCAN_TOCC, 0, 1, ReadWriteMode, FDCAN2FDCAN_TOCCBase> ;
    using TOS = FDCAN2_FDCAN_TOCC_TOS_Values<FDCAN2::FDCAN_TOCC, 1, 2, ReadWriteMode, FDCAN2FDCAN_TOCCBase> ;
    using TOP = FDCAN2_FDCAN_TOCC_TOP_Values<FDCAN2::FDCAN_TOCC, 16, 16, ReadWriteMode, FDCAN2FDCAN_TOCCBase> ;
    using FieldValues = FDCAN2_FDCAN_TOCC_TOP_Values<FDCAN2::FDCAN_TOCC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TOCCPack  = Register<0x40006828, 32, ReadWriteMode, FDCAN2FDCAN_TOCCBase, T...> ;

  struct FDCAN2FDCAN_TOCVBase {} ;

  struct FDCAN_TOCV : public RegisterBase<0x4000682C, 32, ReadWriteMode>
  {
    using TOC = FDCAN2_FDCAN_TOCV_TOC_Values<FDCAN2::FDCAN_TOCV, 0, 16, ReadWriteMode, FDCAN2FDCAN_TOCVBase> ;
    using FieldValues = FDCAN2_FDCAN_TOCV_TOC_Values<FDCAN2::FDCAN_TOCV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TOCVPack  = Register<0x4000682C, 32, ReadWriteMode, FDCAN2FDCAN_TOCVBase, T...> ;

  struct FDCAN2FDCAN_ECRBase {} ;

  struct FDCAN_ECR : public RegisterBase<0x40006840, 32, ReadWriteMode>
  {
    using TEC = FDCAN2_FDCAN_ECR_TEC_Values<FDCAN2::FDCAN_ECR, 0, 8, ReadMode, FDCAN2FDCAN_ECRBase> ;
    using REC = FDCAN2_FDCAN_ECR_REC_Values<FDCAN2::FDCAN_ECR, 8, 7, ReadMode, FDCAN2FDCAN_ECRBase> ;
    using RP = FDCAN2_FDCAN_ECR_RP_Values<FDCAN2::FDCAN_ECR, 15, 1, ReadMode, FDCAN2FDCAN_ECRBase> ;
    using CEL = FDCAN2_FDCAN_ECR_CEL_Values<FDCAN2::FDCAN_ECR, 16, 8, ReadWriteMode, FDCAN2FDCAN_ECRBase> ;
    using FieldValues = FDCAN2_FDCAN_ECR_CEL_Values<FDCAN2::FDCAN_ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ECRPack  = Register<0x40006840, 32, ReadWriteMode, FDCAN2FDCAN_ECRBase, T...> ;

  struct FDCAN2FDCAN_PSRBase {} ;

  struct FDCAN_PSR : public RegisterBase<0x40006844, 32, ReadWriteMode>
  {
    using LEC = FDCAN2_FDCAN_PSR_LEC_Values<FDCAN2::FDCAN_PSR, 0, 3, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using ACT = FDCAN2_FDCAN_PSR_ACT_Values<FDCAN2::FDCAN_PSR, 3, 2, ReadMode, FDCAN2FDCAN_PSRBase> ;
    using EP = FDCAN2_FDCAN_PSR_EP_Values<FDCAN2::FDCAN_PSR, 5, 1, ReadMode, FDCAN2FDCAN_PSRBase> ;
    using EW = FDCAN2_FDCAN_PSR_EW_Values<FDCAN2::FDCAN_PSR, 6, 1, ReadMode, FDCAN2FDCAN_PSRBase> ;
    using BO = FDCAN2_FDCAN_PSR_BO_Values<FDCAN2::FDCAN_PSR, 7, 1, ReadMode, FDCAN2FDCAN_PSRBase> ;
    using DLEC = FDCAN2_FDCAN_PSR_DLEC_Values<FDCAN2::FDCAN_PSR, 8, 3, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using RESI = FDCAN2_FDCAN_PSR_RESI_Values<FDCAN2::FDCAN_PSR, 11, 1, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using RBRS = FDCAN2_FDCAN_PSR_RBRS_Values<FDCAN2::FDCAN_PSR, 12, 1, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using REDL = FDCAN2_FDCAN_PSR_REDL_Values<FDCAN2::FDCAN_PSR, 13, 1, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using PXE = FDCAN2_FDCAN_PSR_PXE_Values<FDCAN2::FDCAN_PSR, 14, 1, ReadWriteMode, FDCAN2FDCAN_PSRBase> ;
    using TDCV = FDCAN2_FDCAN_PSR_TDCV_Values<FDCAN2::FDCAN_PSR, 16, 7, ReadMode, FDCAN2FDCAN_PSRBase> ;
    using FieldValues = FDCAN2_FDCAN_PSR_TDCV_Values<FDCAN2::FDCAN_PSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_PSRPack  = Register<0x40006844, 32, ReadWriteMode, FDCAN2FDCAN_PSRBase, T...> ;

  struct FDCAN2FDCAN_TDCRBase {} ;

  struct FDCAN_TDCR : public RegisterBase<0x40006848, 32, ReadWriteMode>
  {
    using TDCF = FDCAN2_FDCAN_TDCR_TDCF_Values<FDCAN2::FDCAN_TDCR, 0, 7, ReadWriteMode, FDCAN2FDCAN_TDCRBase> ;
    using TDCO = FDCAN2_FDCAN_TDCR_TDCO_Values<FDCAN2::FDCAN_TDCR, 8, 7, ReadWriteMode, FDCAN2FDCAN_TDCRBase> ;
    using FieldValues = FDCAN2_FDCAN_TDCR_TDCO_Values<FDCAN2::FDCAN_TDCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TDCRPack  = Register<0x40006848, 32, ReadWriteMode, FDCAN2FDCAN_TDCRBase, T...> ;

  struct FDCAN2FDCAN_IRBase {} ;

  struct FDCAN_IR : public RegisterBase<0x40006850, 32, ReadWriteMode>
  {
    using RF0N = FDCAN2_FDCAN_IR_RF0N_Values<FDCAN2::FDCAN_IR, 0, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using RF0F = FDCAN2_FDCAN_IR_RF0F_Values<FDCAN2::FDCAN_IR, 1, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using RF0L = FDCAN2_FDCAN_IR_RF0L_Values<FDCAN2::FDCAN_IR, 2, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using RF1N = FDCAN2_FDCAN_IR_RF1N_Values<FDCAN2::FDCAN_IR, 3, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using RF1F = FDCAN2_FDCAN_IR_RF1F_Values<FDCAN2::FDCAN_IR, 4, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using RF1L = FDCAN2_FDCAN_IR_RF1L_Values<FDCAN2::FDCAN_IR, 5, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using HPM = FDCAN2_FDCAN_IR_HPM_Values<FDCAN2::FDCAN_IR, 6, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using TC = FDCAN2_FDCAN_IR_TC_Values<FDCAN2::FDCAN_IR, 7, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using TCF = FDCAN2_FDCAN_IR_TCF_Values<FDCAN2::FDCAN_IR, 8, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using TFE = FDCAN2_FDCAN_IR_TFE_Values<FDCAN2::FDCAN_IR, 9, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using TEFN = FDCAN2_FDCAN_IR_TEFN_Values<FDCAN2::FDCAN_IR, 10, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using TEFF = FDCAN2_FDCAN_IR_TEFF_Values<FDCAN2::FDCAN_IR, 11, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using TEFL = FDCAN2_FDCAN_IR_TEFL_Values<FDCAN2::FDCAN_IR, 12, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using TSW = FDCAN2_FDCAN_IR_TSW_Values<FDCAN2::FDCAN_IR, 13, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using MRAF = FDCAN2_FDCAN_IR_MRAF_Values<FDCAN2::FDCAN_IR, 14, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using TOO = FDCAN2_FDCAN_IR_TOO_Values<FDCAN2::FDCAN_IR, 15, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using ELO = FDCAN2_FDCAN_IR_ELO_Values<FDCAN2::FDCAN_IR, 16, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using EP = FDCAN2_FDCAN_IR_EP_Values<FDCAN2::FDCAN_IR, 17, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using EW = FDCAN2_FDCAN_IR_EW_Values<FDCAN2::FDCAN_IR, 18, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using BO = FDCAN2_FDCAN_IR_BO_Values<FDCAN2::FDCAN_IR, 19, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using WDI = FDCAN2_FDCAN_IR_WDI_Values<FDCAN2::FDCAN_IR, 20, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using PEA = FDCAN2_FDCAN_IR_PEA_Values<FDCAN2::FDCAN_IR, 21, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using PED = FDCAN2_FDCAN_IR_PED_Values<FDCAN2::FDCAN_IR, 22, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using ARA = FDCAN2_FDCAN_IR_ARA_Values<FDCAN2::FDCAN_IR, 23, 1, ReadWriteMode, FDCAN2FDCAN_IRBase> ;
    using FieldValues = FDCAN2_FDCAN_IR_ARA_Values<FDCAN2::FDCAN_IR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_IRPack  = Register<0x40006850, 32, ReadWriteMode, FDCAN2FDCAN_IRBase, T...> ;

  struct FDCAN2FDCAN_IEBase {} ;

  struct FDCAN_IE : public RegisterBase<0x40006854, 32, ReadWriteMode>
  {
    using RF0NE = FDCAN2_FDCAN_IE_RF0NE_Values<FDCAN2::FDCAN_IE, 0, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using RF0FE = FDCAN2_FDCAN_IE_RF0FE_Values<FDCAN2::FDCAN_IE, 1, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using RF0LE = FDCAN2_FDCAN_IE_RF0LE_Values<FDCAN2::FDCAN_IE, 2, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using RF1NE = FDCAN2_FDCAN_IE_RF1NE_Values<FDCAN2::FDCAN_IE, 3, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using RF1FE = FDCAN2_FDCAN_IE_RF1FE_Values<FDCAN2::FDCAN_IE, 4, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using RF1LE = FDCAN2_FDCAN_IE_RF1LE_Values<FDCAN2::FDCAN_IE, 5, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using HPME = FDCAN2_FDCAN_IE_HPME_Values<FDCAN2::FDCAN_IE, 6, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using TCE = FDCAN2_FDCAN_IE_TCE_Values<FDCAN2::FDCAN_IE, 7, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using TCFE = FDCAN2_FDCAN_IE_TCFE_Values<FDCAN2::FDCAN_IE, 8, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using TFEE = FDCAN2_FDCAN_IE_TFEE_Values<FDCAN2::FDCAN_IE, 9, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using TEFNE = FDCAN2_FDCAN_IE_TEFNE_Values<FDCAN2::FDCAN_IE, 10, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using TEFFE = FDCAN2_FDCAN_IE_TEFFE_Values<FDCAN2::FDCAN_IE, 11, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using TEFLE = FDCAN2_FDCAN_IE_TEFLE_Values<FDCAN2::FDCAN_IE, 12, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using TSWE = FDCAN2_FDCAN_IE_TSWE_Values<FDCAN2::FDCAN_IE, 13, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using MRAFE = FDCAN2_FDCAN_IE_MRAFE_Values<FDCAN2::FDCAN_IE, 14, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using TOOE = FDCAN2_FDCAN_IE_TOOE_Values<FDCAN2::FDCAN_IE, 15, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using ELOE = FDCAN2_FDCAN_IE_ELOE_Values<FDCAN2::FDCAN_IE, 16, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using EPE = FDCAN2_FDCAN_IE_EPE_Values<FDCAN2::FDCAN_IE, 17, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using EWE = FDCAN2_FDCAN_IE_EWE_Values<FDCAN2::FDCAN_IE, 18, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using BOE = FDCAN2_FDCAN_IE_BOE_Values<FDCAN2::FDCAN_IE, 19, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using WDIE = FDCAN2_FDCAN_IE_WDIE_Values<FDCAN2::FDCAN_IE, 20, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using PEAE = FDCAN2_FDCAN_IE_PEAE_Values<FDCAN2::FDCAN_IE, 21, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using PEDE = FDCAN2_FDCAN_IE_PEDE_Values<FDCAN2::FDCAN_IE, 22, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using ARAE = FDCAN2_FDCAN_IE_ARAE_Values<FDCAN2::FDCAN_IE, 23, 1, ReadWriteMode, FDCAN2FDCAN_IEBase> ;
    using FieldValues = FDCAN2_FDCAN_IE_ARAE_Values<FDCAN2::FDCAN_IE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_IEPack  = Register<0x40006854, 32, ReadWriteMode, FDCAN2FDCAN_IEBase, T...> ;

  struct FDCAN2FDCAN_ILSBase {} ;

  struct FDCAN_ILS : public RegisterBase<0x40006858, 32, ReadWriteMode>
  {
    using RXFIFO0 = FDCAN2_FDCAN_ILS_RXFIFO0_Values<FDCAN2::FDCAN_ILS, 0, 1, ReadWriteMode, FDCAN2FDCAN_ILSBase> ;
    using RXFIFO1 = FDCAN2_FDCAN_ILS_RXFIFO1_Values<FDCAN2::FDCAN_ILS, 1, 1, ReadWriteMode, FDCAN2FDCAN_ILSBase> ;
    using SMSG = FDCAN2_FDCAN_ILS_SMSG_Values<FDCAN2::FDCAN_ILS, 2, 1, ReadWriteMode, FDCAN2FDCAN_ILSBase> ;
    using TFERR = FDCAN2_FDCAN_ILS_TFERR_Values<FDCAN2::FDCAN_ILS, 3, 1, ReadWriteMode, FDCAN2FDCAN_ILSBase> ;
    using MISC = FDCAN2_FDCAN_ILS_MISC_Values<FDCAN2::FDCAN_ILS, 4, 1, ReadWriteMode, FDCAN2FDCAN_ILSBase> ;
    using BERR = FDCAN2_FDCAN_ILS_BERR_Values<FDCAN2::FDCAN_ILS, 5, 1, ReadWriteMode, FDCAN2FDCAN_ILSBase> ;
    using PERR = FDCAN2_FDCAN_ILS_PERR_Values<FDCAN2::FDCAN_ILS, 6, 1, ReadWriteMode, FDCAN2FDCAN_ILSBase> ;
    using FieldValues = FDCAN2_FDCAN_ILS_PERR_Values<FDCAN2::FDCAN_ILS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ILSPack  = Register<0x40006858, 32, ReadWriteMode, FDCAN2FDCAN_ILSBase, T...> ;

  struct FDCAN2FDCAN_ILEBase {} ;

  struct FDCAN_ILE : public RegisterBase<0x4000685C, 32, ReadWriteMode>
  {
    using EINT0 = FDCAN2_FDCAN_ILE_EINT0_Values<FDCAN2::FDCAN_ILE, 0, 1, ReadWriteMode, FDCAN2FDCAN_ILEBase> ;
    using EINT1 = FDCAN2_FDCAN_ILE_EINT1_Values<FDCAN2::FDCAN_ILE, 1, 1, ReadWriteMode, FDCAN2FDCAN_ILEBase> ;
    using FieldValues = FDCAN2_FDCAN_ILE_EINT1_Values<FDCAN2::FDCAN_ILE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ILEPack  = Register<0x4000685C, 32, ReadWriteMode, FDCAN2FDCAN_ILEBase, T...> ;

  struct FDCAN2FDCAN_RXGFCBase {} ;

  struct FDCAN_RXGFC : public RegisterBase<0x40006880, 32, ReadWriteMode>
  {
    using RRFE = FDCAN2_FDCAN_RXGFC_RRFE_Values<FDCAN2::FDCAN_RXGFC, 0, 1, ReadWriteMode, FDCAN2FDCAN_RXGFCBase> ;
    using RRFS = FDCAN2_FDCAN_RXGFC_RRFS_Values<FDCAN2::FDCAN_RXGFC, 1, 1, ReadWriteMode, FDCAN2FDCAN_RXGFCBase> ;
    using ANFE = FDCAN2_FDCAN_RXGFC_ANFE_Values<FDCAN2::FDCAN_RXGFC, 2, 2, ReadWriteMode, FDCAN2FDCAN_RXGFCBase> ;
    using ANFS = FDCAN2_FDCAN_RXGFC_ANFS_Values<FDCAN2::FDCAN_RXGFC, 4, 2, ReadWriteMode, FDCAN2FDCAN_RXGFCBase> ;
    using F1OM = FDCAN2_FDCAN_RXGFC_F1OM_Values<FDCAN2::FDCAN_RXGFC, 8, 1, ReadWriteMode, FDCAN2FDCAN_RXGFCBase> ;
    using F0OM = FDCAN2_FDCAN_RXGFC_F0OM_Values<FDCAN2::FDCAN_RXGFC, 9, 1, ReadWriteMode, FDCAN2FDCAN_RXGFCBase> ;
    using LSS = FDCAN2_FDCAN_RXGFC_LSS_Values<FDCAN2::FDCAN_RXGFC, 16, 5, ReadWriteMode, FDCAN2FDCAN_RXGFCBase> ;
    using LSE = FDCAN2_FDCAN_RXGFC_LSE_Values<FDCAN2::FDCAN_RXGFC, 24, 4, ReadWriteMode, FDCAN2FDCAN_RXGFCBase> ;
    using FieldValues = FDCAN2_FDCAN_RXGFC_LSE_Values<FDCAN2::FDCAN_RXGFC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXGFCPack  = Register<0x40006880, 32, ReadWriteMode, FDCAN2FDCAN_RXGFCBase, T...> ;

  struct FDCAN2FDCAN_XIDAMBase {} ;

  struct FDCAN_XIDAM : public RegisterBase<0x40006884, 32, ReadWriteMode>
  {
    using EIDM = FDCAN2_FDCAN_XIDAM_EIDM_Values<FDCAN2::FDCAN_XIDAM, 0, 29, ReadWriteMode, FDCAN2FDCAN_XIDAMBase> ;
    using FieldValues = FDCAN2_FDCAN_XIDAM_EIDM_Values<FDCAN2::FDCAN_XIDAM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_XIDAMPack  = Register<0x40006884, 32, ReadWriteMode, FDCAN2FDCAN_XIDAMBase, T...> ;

  struct FDCAN2FDCAN_HPMSBase {} ;

  struct FDCAN_HPMS : public RegisterBase<0x40006888, 32, ReadWriteMode>
  {
    using BIDX = FDCAN2_FDCAN_HPMS_BIDX_Values<FDCAN2::FDCAN_HPMS, 0, 3, ReadMode, FDCAN2FDCAN_HPMSBase> ;
    using MSI = FDCAN2_FDCAN_HPMS_MSI_Values<FDCAN2::FDCAN_HPMS, 6, 2, ReadMode, FDCAN2FDCAN_HPMSBase> ;
    using FIDX = FDCAN2_FDCAN_HPMS_FIDX_Values<FDCAN2::FDCAN_HPMS, 8, 5, ReadMode, FDCAN2FDCAN_HPMSBase> ;
    using FLST = FDCAN2_FDCAN_HPMS_FLST_Values<FDCAN2::FDCAN_HPMS, 15, 1, ReadMode, FDCAN2FDCAN_HPMSBase> ;
    using FieldValues = FDCAN2_FDCAN_HPMS_FLST_Values<FDCAN2::FDCAN_HPMS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_HPMSPack  = Register<0x40006888, 32, ReadWriteMode, FDCAN2FDCAN_HPMSBase, T...> ;

  struct FDCAN2FDCAN_RXF0SBase {} ;

  struct FDCAN_RXF0S : public RegisterBase<0x40006890, 32, ReadWriteMode>
  {
    using F0FL = FDCAN2_FDCAN_RXF0S_F0FL_Values<FDCAN2::FDCAN_RXF0S, 0, 4, ReadMode, FDCAN2FDCAN_RXF0SBase> ;
    using F0GI = FDCAN2_FDCAN_RXF0S_F0GI_Values<FDCAN2::FDCAN_RXF0S, 8, 2, ReadMode, FDCAN2FDCAN_RXF0SBase> ;
    using F0PI = FDCAN2_FDCAN_RXF0S_F0PI_Values<FDCAN2::FDCAN_RXF0S, 16, 2, ReadMode, FDCAN2FDCAN_RXF0SBase> ;
    using F0F = FDCAN2_FDCAN_RXF0S_F0F_Values<FDCAN2::FDCAN_RXF0S, 24, 1, ReadMode, FDCAN2FDCAN_RXF0SBase> ;
    using RF0L = FDCAN2_FDCAN_RXF0S_RF0L_Values<FDCAN2::FDCAN_RXF0S, 25, 1, ReadMode, FDCAN2FDCAN_RXF0SBase> ;
    using FieldValues = FDCAN2_FDCAN_RXF0S_RF0L_Values<FDCAN2::FDCAN_RXF0S, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF0SPack  = Register<0x40006890, 32, ReadWriteMode, FDCAN2FDCAN_RXF0SBase, T...> ;

  struct FDCAN2FDCAN_RXF0ABase {} ;

  struct FDCAN_RXF0A : public RegisterBase<0x40006894, 32, ReadWriteMode>
  {
    using F0AI = FDCAN2_FDCAN_RXF0A_F0AI_Values<FDCAN2::FDCAN_RXF0A, 0, 3, ReadWriteMode, FDCAN2FDCAN_RXF0ABase> ;
    using FieldValues = FDCAN2_FDCAN_RXF0A_F0AI_Values<FDCAN2::FDCAN_RXF0A, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF0APack  = Register<0x40006894, 32, ReadWriteMode, FDCAN2FDCAN_RXF0ABase, T...> ;

  struct FDCAN2FDCAN_RXF1SBase {} ;

  struct FDCAN_RXF1S : public RegisterBase<0x40006898, 32, ReadWriteMode>
  {
    using F1FL = FDCAN2_FDCAN_RXF1S_F1FL_Values<FDCAN2::FDCAN_RXF1S, 0, 4, ReadMode, FDCAN2FDCAN_RXF1SBase> ;
    using F1GI = FDCAN2_FDCAN_RXF1S_F1GI_Values<FDCAN2::FDCAN_RXF1S, 8, 2, ReadMode, FDCAN2FDCAN_RXF1SBase> ;
    using F1PI = FDCAN2_FDCAN_RXF1S_F1PI_Values<FDCAN2::FDCAN_RXF1S, 16, 2, ReadMode, FDCAN2FDCAN_RXF1SBase> ;
    using F1F = FDCAN2_FDCAN_RXF1S_F1F_Values<FDCAN2::FDCAN_RXF1S, 24, 1, ReadMode, FDCAN2FDCAN_RXF1SBase> ;
    using RF1L = FDCAN2_FDCAN_RXF1S_RF1L_Values<FDCAN2::FDCAN_RXF1S, 25, 1, ReadMode, FDCAN2FDCAN_RXF1SBase> ;
    using FieldValues = FDCAN2_FDCAN_RXF1S_RF1L_Values<FDCAN2::FDCAN_RXF1S, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF1SPack  = Register<0x40006898, 32, ReadWriteMode, FDCAN2FDCAN_RXF1SBase, T...> ;

  struct FDCAN2FDCAN_RXF1ABase {} ;

  struct FDCAN_RXF1A : public RegisterBase<0x4000689C, 32, ReadWriteMode>
  {
    using F1AI = FDCAN2_FDCAN_RXF1A_F1AI_Values<FDCAN2::FDCAN_RXF1A, 0, 3, ReadWriteMode, FDCAN2FDCAN_RXF1ABase> ;
    using FieldValues = FDCAN2_FDCAN_RXF1A_F1AI_Values<FDCAN2::FDCAN_RXF1A, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF1APack  = Register<0x4000689C, 32, ReadWriteMode, FDCAN2FDCAN_RXF1ABase, T...> ;

  struct FDCAN2FDCAN_TXBCBase {} ;

  struct FDCAN_TXBC : public RegisterBase<0x400068C0, 32, ReadWriteMode>
  {
    using TFQM = FDCAN2_FDCAN_TXBC_TFQM_Values<FDCAN2::FDCAN_TXBC, 24, 1, ReadWriteMode, FDCAN2FDCAN_TXBCBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBC_TFQM_Values<FDCAN2::FDCAN_TXBC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCPack  = Register<0x400068C0, 32, ReadWriteMode, FDCAN2FDCAN_TXBCBase, T...> ;

  struct FDCAN2FDCAN_TXFQSBase {} ;

  struct FDCAN_TXFQS : public RegisterBase<0x400068C4, 32, ReadWriteMode>
  {
    using TFFL = FDCAN2_FDCAN_TXFQS_TFFL_Values<FDCAN2::FDCAN_TXFQS, 0, 3, ReadMode, FDCAN2FDCAN_TXFQSBase> ;
    using TFGI = FDCAN2_FDCAN_TXFQS_TFGI_Values<FDCAN2::FDCAN_TXFQS, 8, 2, ReadMode, FDCAN2FDCAN_TXFQSBase> ;
    using TFQPI = FDCAN2_FDCAN_TXFQS_TFQPI_Values<FDCAN2::FDCAN_TXFQS, 16, 2, ReadMode, FDCAN2FDCAN_TXFQSBase> ;
    using TFQF = FDCAN2_FDCAN_TXFQS_TFQF_Values<FDCAN2::FDCAN_TXFQS, 21, 1, ReadMode, FDCAN2FDCAN_TXFQSBase> ;
    using FieldValues = FDCAN2_FDCAN_TXFQS_TFQF_Values<FDCAN2::FDCAN_TXFQS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXFQSPack  = Register<0x400068C4, 32, ReadWriteMode, FDCAN2FDCAN_TXFQSBase, T...> ;

  struct FDCAN2FDCAN_TXBRPBase {} ;

  struct FDCAN_TXBRP : public RegisterBase<0x400068C8, 32, ReadWriteMode>
  {
    using TRP = FDCAN2_FDCAN_TXBRP_TRP_Values<FDCAN2::FDCAN_TXBRP, 0, 3, ReadMode, FDCAN2FDCAN_TXBRPBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBRP_TRP_Values<FDCAN2::FDCAN_TXBRP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBRPPack  = Register<0x400068C8, 32, ReadWriteMode, FDCAN2FDCAN_TXBRPBase, T...> ;

  struct FDCAN2FDCAN_TXBARBase {} ;

  struct FDCAN_TXBAR : public RegisterBase<0x400068CC, 32, ReadWriteMode>
  {
    using AR = FDCAN2_FDCAN_TXBAR_AR_Values<FDCAN2::FDCAN_TXBAR, 0, 3, ReadWriteMode, FDCAN2FDCAN_TXBARBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBAR_AR_Values<FDCAN2::FDCAN_TXBAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBARPack  = Register<0x400068CC, 32, ReadWriteMode, FDCAN2FDCAN_TXBARBase, T...> ;

  struct FDCAN2FDCAN_TXBCRBase {} ;

  struct FDCAN_TXBCR : public RegisterBase<0x400068D0, 32, ReadWriteMode>
  {
    using CR = FDCAN2_FDCAN_TXBCR_CR_Values<FDCAN2::FDCAN_TXBCR, 0, 3, ReadWriteMode, FDCAN2FDCAN_TXBCRBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBCR_CR_Values<FDCAN2::FDCAN_TXBCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCRPack  = Register<0x400068D0, 32, ReadWriteMode, FDCAN2FDCAN_TXBCRBase, T...> ;

  struct FDCAN2FDCAN_TXBTOBase {} ;

  struct FDCAN_TXBTO : public RegisterBase<0x400068D4, 32, ReadWriteMode>
  {
    using TO = FDCAN2_FDCAN_TXBTO_TO_Values<FDCAN2::FDCAN_TXBTO, 0, 3, ReadMode, FDCAN2FDCAN_TXBTOBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBTO_TO_Values<FDCAN2::FDCAN_TXBTO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBTOPack  = Register<0x400068D4, 32, ReadWriteMode, FDCAN2FDCAN_TXBTOBase, T...> ;

  struct FDCAN2FDCAN_TXBCFBase {} ;

  struct FDCAN_TXBCF : public RegisterBase<0x400068D8, 32, ReadWriteMode>
  {
    using CF = FDCAN2_FDCAN_TXBCF_CF_Values<FDCAN2::FDCAN_TXBCF, 0, 3, ReadMode, FDCAN2FDCAN_TXBCFBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBCF_CF_Values<FDCAN2::FDCAN_TXBCF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCFPack  = Register<0x400068D8, 32, ReadWriteMode, FDCAN2FDCAN_TXBCFBase, T...> ;

  struct FDCAN2FDCAN_TXBTIEBase {} ;

  struct FDCAN_TXBTIE : public RegisterBase<0x400068DC, 32, ReadWriteMode>
  {
    using TIE = FDCAN2_FDCAN_TXBTIE_TIE_Values<FDCAN2::FDCAN_TXBTIE, 0, 3, ReadWriteMode, FDCAN2FDCAN_TXBTIEBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBTIE_TIE_Values<FDCAN2::FDCAN_TXBTIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBTIEPack  = Register<0x400068DC, 32, ReadWriteMode, FDCAN2FDCAN_TXBTIEBase, T...> ;

  struct FDCAN2FDCAN_TXBCIEBase {} ;

  struct FDCAN_TXBCIE : public RegisterBase<0x400068E0, 32, ReadWriteMode>
  {
    using CFIE = FDCAN2_FDCAN_TXBCIE_CFIE_Values<FDCAN2::FDCAN_TXBCIE, 0, 3, ReadWriteMode, FDCAN2FDCAN_TXBCIEBase> ;
    using FieldValues = FDCAN2_FDCAN_TXBCIE_CFIE_Values<FDCAN2::FDCAN_TXBCIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCIEPack  = Register<0x400068E0, 32, ReadWriteMode, FDCAN2FDCAN_TXBCIEBase, T...> ;

  struct FDCAN2FDCAN_TXEFSBase {} ;

  struct FDCAN_TXEFS : public RegisterBase<0x400068E4, 32, ReadWriteMode>
  {
    using EFFL = FDCAN2_FDCAN_TXEFS_EFFL_Values<FDCAN2::FDCAN_TXEFS, 0, 3, ReadMode, FDCAN2FDCAN_TXEFSBase> ;
    using EFGI = FDCAN2_FDCAN_TXEFS_EFGI_Values<FDCAN2::FDCAN_TXEFS, 8, 2, ReadMode, FDCAN2FDCAN_TXEFSBase> ;
    using EFPI = FDCAN2_FDCAN_TXEFS_EFPI_Values<FDCAN2::FDCAN_TXEFS, 16, 2, ReadMode, FDCAN2FDCAN_TXEFSBase> ;
    using EFF = FDCAN2_FDCAN_TXEFS_EFF_Values<FDCAN2::FDCAN_TXEFS, 24, 1, ReadMode, FDCAN2FDCAN_TXEFSBase> ;
    using TEFL = FDCAN2_FDCAN_TXEFS_TEFL_Values<FDCAN2::FDCAN_TXEFS, 25, 1, ReadMode, FDCAN2FDCAN_TXEFSBase> ;
    using FieldValues = FDCAN2_FDCAN_TXEFS_TEFL_Values<FDCAN2::FDCAN_TXEFS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXEFSPack  = Register<0x400068E4, 32, ReadWriteMode, FDCAN2FDCAN_TXEFSBase, T...> ;

  struct FDCAN2FDCAN_TXEFABase {} ;

  struct FDCAN_TXEFA : public RegisterBase<0x400068E8, 32, ReadWriteMode>
  {
    using EFAI = FDCAN2_FDCAN_TXEFA_EFAI_Values<FDCAN2::FDCAN_TXEFA, 0, 2, ReadWriteMode, FDCAN2FDCAN_TXEFABase> ;
    using FieldValues = FDCAN2_FDCAN_TXEFA_EFAI_Values<FDCAN2::FDCAN_TXEFA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXEFAPack  = Register<0x400068E8, 32, ReadWriteMode, FDCAN2FDCAN_TXEFABase, T...> ;

  struct FDCAN2FDCAN_CKDIVBase {} ;

  struct FDCAN_CKDIV : public RegisterBase<0x40006900, 32, ReadWriteMode>
  {
    using PDIV = FDCAN2_FDCAN_CKDIV_PDIV_Values<FDCAN2::FDCAN_CKDIV, 0, 4, ReadWriteMode, FDCAN2FDCAN_CKDIVBase> ;
    using FieldValues = FDCAN2_FDCAN_CKDIV_PDIV_Values<FDCAN2::FDCAN_CKDIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_CKDIVPack  = Register<0x40006900, 32, ReadWriteMode, FDCAN2FDCAN_CKDIVBase, T...> ;

} ;

