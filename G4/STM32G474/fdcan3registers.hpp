/*******************************************************************************
* Filename      : fdcan3registers.hpp
*
* Details       : FDCAN. This header file is auto-generated for STM32G474
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "fdcan3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FDCAN3
{
  struct FDCAN3FDCAN_CRELBase {} ;

  struct FDCAN_CREL : public RegisterBase<0x40006C00, 32, ReadWriteMode>
  {
    using DAY = FDCAN3_FDCAN_CREL_DAY_Values<FDCAN3::FDCAN_CREL, 0, 8, ReadMode, FDCAN3FDCAN_CRELBase> ;
    using MON = FDCAN3_FDCAN_CREL_MON_Values<FDCAN3::FDCAN_CREL, 8, 8, ReadMode, FDCAN3FDCAN_CRELBase> ;
    using YEAR = FDCAN3_FDCAN_CREL_YEAR_Values<FDCAN3::FDCAN_CREL, 16, 4, ReadMode, FDCAN3FDCAN_CRELBase> ;
    using SUBSTEP = FDCAN3_FDCAN_CREL_SUBSTEP_Values<FDCAN3::FDCAN_CREL, 20, 4, ReadMode, FDCAN3FDCAN_CRELBase> ;
    using STEP = FDCAN3_FDCAN_CREL_STEP_Values<FDCAN3::FDCAN_CREL, 24, 4, ReadMode, FDCAN3FDCAN_CRELBase> ;
    using REL = FDCAN3_FDCAN_CREL_REL_Values<FDCAN3::FDCAN_CREL, 28, 4, ReadMode, FDCAN3FDCAN_CRELBase> ;
    using FieldValues = FDCAN3_FDCAN_CREL_REL_Values<FDCAN3::FDCAN_CREL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_CRELPack  = Register<0x40006C00, 32, ReadWriteMode, FDCAN3FDCAN_CRELBase, T...> ;

  struct FDCAN3FDCAN_ENDNBase {} ;

  struct FDCAN_ENDN : public RegisterBase<0x40006C04, 32, ReadWriteMode>
  {
    using ETV = FDCAN3_FDCAN_ENDN_ETV_Values<FDCAN3::FDCAN_ENDN, 0, 32, ReadMode, FDCAN3FDCAN_ENDNBase> ;
    using FieldValues = FDCAN3_FDCAN_ENDN_ETV_Values<FDCAN3::FDCAN_ENDN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ENDNPack  = Register<0x40006C04, 32, ReadWriteMode, FDCAN3FDCAN_ENDNBase, T...> ;

  struct FDCAN3FDCAN_DBTPBase {} ;

  struct FDCAN_DBTP : public RegisterBase<0x40006C0C, 32, ReadWriteMode>
  {
    using DSJW = FDCAN3_FDCAN_DBTP_DSJW_Values<FDCAN3::FDCAN_DBTP, 0, 4, ReadWriteMode, FDCAN3FDCAN_DBTPBase> ;
    using DTSEG2 = FDCAN3_FDCAN_DBTP_DTSEG2_Values<FDCAN3::FDCAN_DBTP, 4, 4, ReadWriteMode, FDCAN3FDCAN_DBTPBase> ;
    using DTSEG1 = FDCAN3_FDCAN_DBTP_DTSEG1_Values<FDCAN3::FDCAN_DBTP, 8, 5, ReadWriteMode, FDCAN3FDCAN_DBTPBase> ;
    using DBRP = FDCAN3_FDCAN_DBTP_DBRP_Values<FDCAN3::FDCAN_DBTP, 16, 5, ReadWriteMode, FDCAN3FDCAN_DBTPBase> ;
    using TDC = FDCAN3_FDCAN_DBTP_TDC_Values<FDCAN3::FDCAN_DBTP, 23, 1, ReadWriteMode, FDCAN3FDCAN_DBTPBase> ;
    using FieldValues = FDCAN3_FDCAN_DBTP_TDC_Values<FDCAN3::FDCAN_DBTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_DBTPPack  = Register<0x40006C0C, 32, ReadWriteMode, FDCAN3FDCAN_DBTPBase, T...> ;

  struct FDCAN3FDCAN_TESTBase {} ;

  struct FDCAN_TEST : public RegisterBase<0x40006C10, 32, ReadWriteMode>
  {
    using LBCK = FDCAN3_FDCAN_TEST_LBCK_Values<FDCAN3::FDCAN_TEST, 4, 1, ReadWriteMode, FDCAN3FDCAN_TESTBase> ;
    using TX = FDCAN3_FDCAN_TEST_TX_Values<FDCAN3::FDCAN_TEST, 5, 2, ReadWriteMode, FDCAN3FDCAN_TESTBase> ;
    using RX = FDCAN3_FDCAN_TEST_RX_Values<FDCAN3::FDCAN_TEST, 7, 1, ReadMode, FDCAN3FDCAN_TESTBase> ;
    using FieldValues = FDCAN3_FDCAN_TEST_RX_Values<FDCAN3::FDCAN_TEST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TESTPack  = Register<0x40006C10, 32, ReadWriteMode, FDCAN3FDCAN_TESTBase, T...> ;

  struct FDCAN3FDCAN_RWDBase {} ;

  struct FDCAN_RWD : public RegisterBase<0x40006C14, 32, ReadWriteMode>
  {
    using WDC = FDCAN3_FDCAN_RWD_WDC_Values<FDCAN3::FDCAN_RWD, 0, 8, ReadWriteMode, FDCAN3FDCAN_RWDBase> ;
    using WDV = FDCAN3_FDCAN_RWD_WDV_Values<FDCAN3::FDCAN_RWD, 8, 8, ReadMode, FDCAN3FDCAN_RWDBase> ;
    using FieldValues = FDCAN3_FDCAN_RWD_WDV_Values<FDCAN3::FDCAN_RWD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RWDPack  = Register<0x40006C14, 32, ReadWriteMode, FDCAN3FDCAN_RWDBase, T...> ;

  struct FDCAN3FDCAN_CCCRBase {} ;

  struct FDCAN_CCCR : public RegisterBase<0x40006C18, 32, ReadWriteMode>
  {
    using INIT = FDCAN3_FDCAN_CCCR_INIT_Values<FDCAN3::FDCAN_CCCR, 0, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using CCE = FDCAN3_FDCAN_CCCR_CCE_Values<FDCAN3::FDCAN_CCCR, 1, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using ASM = FDCAN3_FDCAN_CCCR_ASM_Values<FDCAN3::FDCAN_CCCR, 2, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using CSA = FDCAN3_FDCAN_CCCR_CSA_Values<FDCAN3::FDCAN_CCCR, 3, 1, ReadMode, FDCAN3FDCAN_CCCRBase> ;
    using CSR = FDCAN3_FDCAN_CCCR_CSR_Values<FDCAN3::FDCAN_CCCR, 4, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using MON = FDCAN3_FDCAN_CCCR_MON_Values<FDCAN3::FDCAN_CCCR, 5, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using DAR = FDCAN3_FDCAN_CCCR_DAR_Values<FDCAN3::FDCAN_CCCR, 6, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using TEST = FDCAN3_FDCAN_CCCR_TEST_Values<FDCAN3::FDCAN_CCCR, 7, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using FDOE = FDCAN3_FDCAN_CCCR_FDOE_Values<FDCAN3::FDCAN_CCCR, 8, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using BRSE = FDCAN3_FDCAN_CCCR_BRSE_Values<FDCAN3::FDCAN_CCCR, 9, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using PXHD = FDCAN3_FDCAN_CCCR_PXHD_Values<FDCAN3::FDCAN_CCCR, 12, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using EFBI = FDCAN3_FDCAN_CCCR_EFBI_Values<FDCAN3::FDCAN_CCCR, 13, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using TXP = FDCAN3_FDCAN_CCCR_TXP_Values<FDCAN3::FDCAN_CCCR, 14, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using NISO = FDCAN3_FDCAN_CCCR_NISO_Values<FDCAN3::FDCAN_CCCR, 15, 1, ReadWriteMode, FDCAN3FDCAN_CCCRBase> ;
    using FieldValues = FDCAN3_FDCAN_CCCR_NISO_Values<FDCAN3::FDCAN_CCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_CCCRPack  = Register<0x40006C18, 32, ReadWriteMode, FDCAN3FDCAN_CCCRBase, T...> ;

  struct FDCAN3FDCAN_NBTPBase {} ;

  struct FDCAN_NBTP : public RegisterBase<0x40006C1C, 32, ReadWriteMode>
  {
    using NTSEG2 = FDCAN3_FDCAN_NBTP_NTSEG2_Values<FDCAN3::FDCAN_NBTP, 0, 7, ReadWriteMode, FDCAN3FDCAN_NBTPBase> ;
    using NTSEG1 = FDCAN3_FDCAN_NBTP_NTSEG1_Values<FDCAN3::FDCAN_NBTP, 8, 8, ReadWriteMode, FDCAN3FDCAN_NBTPBase> ;
    using NBRP = FDCAN3_FDCAN_NBTP_NBRP_Values<FDCAN3::FDCAN_NBTP, 16, 9, ReadWriteMode, FDCAN3FDCAN_NBTPBase> ;
    using NSJW = FDCAN3_FDCAN_NBTP_NSJW_Values<FDCAN3::FDCAN_NBTP, 25, 7, ReadWriteMode, FDCAN3FDCAN_NBTPBase> ;
    using FieldValues = FDCAN3_FDCAN_NBTP_NSJW_Values<FDCAN3::FDCAN_NBTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_NBTPPack  = Register<0x40006C1C, 32, ReadWriteMode, FDCAN3FDCAN_NBTPBase, T...> ;

  struct FDCAN3FDCAN_TSCCBase {} ;

  struct FDCAN_TSCC : public RegisterBase<0x40006C20, 32, ReadWriteMode>
  {
    using TSS = FDCAN3_FDCAN_TSCC_TSS_Values<FDCAN3::FDCAN_TSCC, 0, 2, ReadWriteMode, FDCAN3FDCAN_TSCCBase> ;
    using TCP = FDCAN3_FDCAN_TSCC_TCP_Values<FDCAN3::FDCAN_TSCC, 16, 4, ReadWriteMode, FDCAN3FDCAN_TSCCBase> ;
    using FieldValues = FDCAN3_FDCAN_TSCC_TCP_Values<FDCAN3::FDCAN_TSCC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TSCCPack  = Register<0x40006C20, 32, ReadWriteMode, FDCAN3FDCAN_TSCCBase, T...> ;

  struct FDCAN3FDCAN_TSCVBase {} ;

  struct FDCAN_TSCV : public RegisterBase<0x40006C24, 32, ReadWriteMode>
  {
    using TSC = FDCAN3_FDCAN_TSCV_TSC_Values<FDCAN3::FDCAN_TSCV, 0, 16, ReadWriteMode, FDCAN3FDCAN_TSCVBase> ;
    using FieldValues = FDCAN3_FDCAN_TSCV_TSC_Values<FDCAN3::FDCAN_TSCV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TSCVPack  = Register<0x40006C24, 32, ReadWriteMode, FDCAN3FDCAN_TSCVBase, T...> ;

  struct FDCAN3FDCAN_TOCCBase {} ;

  struct FDCAN_TOCC : public RegisterBase<0x40006C28, 32, ReadWriteMode>
  {
    using ETOC = FDCAN3_FDCAN_TOCC_ETOC_Values<FDCAN3::FDCAN_TOCC, 0, 1, ReadWriteMode, FDCAN3FDCAN_TOCCBase> ;
    using TOS = FDCAN3_FDCAN_TOCC_TOS_Values<FDCAN3::FDCAN_TOCC, 1, 2, ReadWriteMode, FDCAN3FDCAN_TOCCBase> ;
    using TOP = FDCAN3_FDCAN_TOCC_TOP_Values<FDCAN3::FDCAN_TOCC, 16, 16, ReadWriteMode, FDCAN3FDCAN_TOCCBase> ;
    using FieldValues = FDCAN3_FDCAN_TOCC_TOP_Values<FDCAN3::FDCAN_TOCC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TOCCPack  = Register<0x40006C28, 32, ReadWriteMode, FDCAN3FDCAN_TOCCBase, T...> ;

  struct FDCAN3FDCAN_TOCVBase {} ;

  struct FDCAN_TOCV : public RegisterBase<0x40006C2C, 32, ReadWriteMode>
  {
    using TOC = FDCAN3_FDCAN_TOCV_TOC_Values<FDCAN3::FDCAN_TOCV, 0, 16, ReadWriteMode, FDCAN3FDCAN_TOCVBase> ;
    using FieldValues = FDCAN3_FDCAN_TOCV_TOC_Values<FDCAN3::FDCAN_TOCV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TOCVPack  = Register<0x40006C2C, 32, ReadWriteMode, FDCAN3FDCAN_TOCVBase, T...> ;

  struct FDCAN3FDCAN_ECRBase {} ;

  struct FDCAN_ECR : public RegisterBase<0x40006C40, 32, ReadWriteMode>
  {
    using TEC = FDCAN3_FDCAN_ECR_TEC_Values<FDCAN3::FDCAN_ECR, 0, 8, ReadMode, FDCAN3FDCAN_ECRBase> ;
    using REC = FDCAN3_FDCAN_ECR_REC_Values<FDCAN3::FDCAN_ECR, 8, 7, ReadMode, FDCAN3FDCAN_ECRBase> ;
    using RP = FDCAN3_FDCAN_ECR_RP_Values<FDCAN3::FDCAN_ECR, 15, 1, ReadMode, FDCAN3FDCAN_ECRBase> ;
    using CEL = FDCAN3_FDCAN_ECR_CEL_Values<FDCAN3::FDCAN_ECR, 16, 8, ReadWriteMode, FDCAN3FDCAN_ECRBase> ;
    using FieldValues = FDCAN3_FDCAN_ECR_CEL_Values<FDCAN3::FDCAN_ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ECRPack  = Register<0x40006C40, 32, ReadWriteMode, FDCAN3FDCAN_ECRBase, T...> ;

  struct FDCAN3FDCAN_PSRBase {} ;

  struct FDCAN_PSR : public RegisterBase<0x40006C44, 32, ReadWriteMode>
  {
    using LEC = FDCAN3_FDCAN_PSR_LEC_Values<FDCAN3::FDCAN_PSR, 0, 3, ReadWriteMode, FDCAN3FDCAN_PSRBase> ;
    using ACT = FDCAN3_FDCAN_PSR_ACT_Values<FDCAN3::FDCAN_PSR, 3, 2, ReadMode, FDCAN3FDCAN_PSRBase> ;
    using EP = FDCAN3_FDCAN_PSR_EP_Values<FDCAN3::FDCAN_PSR, 5, 1, ReadMode, FDCAN3FDCAN_PSRBase> ;
    using EW = FDCAN3_FDCAN_PSR_EW_Values<FDCAN3::FDCAN_PSR, 6, 1, ReadMode, FDCAN3FDCAN_PSRBase> ;
    using BO = FDCAN3_FDCAN_PSR_BO_Values<FDCAN3::FDCAN_PSR, 7, 1, ReadMode, FDCAN3FDCAN_PSRBase> ;
    using DLEC = FDCAN3_FDCAN_PSR_DLEC_Values<FDCAN3::FDCAN_PSR, 8, 3, ReadWriteMode, FDCAN3FDCAN_PSRBase> ;
    using RESI = FDCAN3_FDCAN_PSR_RESI_Values<FDCAN3::FDCAN_PSR, 11, 1, ReadWriteMode, FDCAN3FDCAN_PSRBase> ;
    using RBRS = FDCAN3_FDCAN_PSR_RBRS_Values<FDCAN3::FDCAN_PSR, 12, 1, ReadWriteMode, FDCAN3FDCAN_PSRBase> ;
    using REDL = FDCAN3_FDCAN_PSR_REDL_Values<FDCAN3::FDCAN_PSR, 13, 1, ReadWriteMode, FDCAN3FDCAN_PSRBase> ;
    using PXE = FDCAN3_FDCAN_PSR_PXE_Values<FDCAN3::FDCAN_PSR, 14, 1, ReadWriteMode, FDCAN3FDCAN_PSRBase> ;
    using TDCV = FDCAN3_FDCAN_PSR_TDCV_Values<FDCAN3::FDCAN_PSR, 16, 7, ReadMode, FDCAN3FDCAN_PSRBase> ;
    using FieldValues = FDCAN3_FDCAN_PSR_TDCV_Values<FDCAN3::FDCAN_PSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_PSRPack  = Register<0x40006C44, 32, ReadWriteMode, FDCAN3FDCAN_PSRBase, T...> ;

  struct FDCAN3FDCAN_TDCRBase {} ;

  struct FDCAN_TDCR : public RegisterBase<0x40006C48, 32, ReadWriteMode>
  {
    using TDCF = FDCAN3_FDCAN_TDCR_TDCF_Values<FDCAN3::FDCAN_TDCR, 0, 7, ReadWriteMode, FDCAN3FDCAN_TDCRBase> ;
    using TDCO = FDCAN3_FDCAN_TDCR_TDCO_Values<FDCAN3::FDCAN_TDCR, 8, 7, ReadWriteMode, FDCAN3FDCAN_TDCRBase> ;
    using FieldValues = FDCAN3_FDCAN_TDCR_TDCO_Values<FDCAN3::FDCAN_TDCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TDCRPack  = Register<0x40006C48, 32, ReadWriteMode, FDCAN3FDCAN_TDCRBase, T...> ;

  struct FDCAN3FDCAN_IRBase {} ;

  struct FDCAN_IR : public RegisterBase<0x40006C50, 32, ReadWriteMode>
  {
    using RF0N = FDCAN3_FDCAN_IR_RF0N_Values<FDCAN3::FDCAN_IR, 0, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using RF0F = FDCAN3_FDCAN_IR_RF0F_Values<FDCAN3::FDCAN_IR, 1, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using RF0L = FDCAN3_FDCAN_IR_RF0L_Values<FDCAN3::FDCAN_IR, 2, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using RF1N = FDCAN3_FDCAN_IR_RF1N_Values<FDCAN3::FDCAN_IR, 3, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using RF1F = FDCAN3_FDCAN_IR_RF1F_Values<FDCAN3::FDCAN_IR, 4, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using RF1L = FDCAN3_FDCAN_IR_RF1L_Values<FDCAN3::FDCAN_IR, 5, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using HPM = FDCAN3_FDCAN_IR_HPM_Values<FDCAN3::FDCAN_IR, 6, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using TC = FDCAN3_FDCAN_IR_TC_Values<FDCAN3::FDCAN_IR, 7, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using TCF = FDCAN3_FDCAN_IR_TCF_Values<FDCAN3::FDCAN_IR, 8, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using TFE = FDCAN3_FDCAN_IR_TFE_Values<FDCAN3::FDCAN_IR, 9, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using TEFN = FDCAN3_FDCAN_IR_TEFN_Values<FDCAN3::FDCAN_IR, 10, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using TEFF = FDCAN3_FDCAN_IR_TEFF_Values<FDCAN3::FDCAN_IR, 11, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using TEFL = FDCAN3_FDCAN_IR_TEFL_Values<FDCAN3::FDCAN_IR, 12, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using TSW = FDCAN3_FDCAN_IR_TSW_Values<FDCAN3::FDCAN_IR, 13, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using MRAF = FDCAN3_FDCAN_IR_MRAF_Values<FDCAN3::FDCAN_IR, 14, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using TOO = FDCAN3_FDCAN_IR_TOO_Values<FDCAN3::FDCAN_IR, 15, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using ELO = FDCAN3_FDCAN_IR_ELO_Values<FDCAN3::FDCAN_IR, 16, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using EP = FDCAN3_FDCAN_IR_EP_Values<FDCAN3::FDCAN_IR, 17, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using EW = FDCAN3_FDCAN_IR_EW_Values<FDCAN3::FDCAN_IR, 18, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using BO = FDCAN3_FDCAN_IR_BO_Values<FDCAN3::FDCAN_IR, 19, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using WDI = FDCAN3_FDCAN_IR_WDI_Values<FDCAN3::FDCAN_IR, 20, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using PEA = FDCAN3_FDCAN_IR_PEA_Values<FDCAN3::FDCAN_IR, 21, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using PED = FDCAN3_FDCAN_IR_PED_Values<FDCAN3::FDCAN_IR, 22, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using ARA = FDCAN3_FDCAN_IR_ARA_Values<FDCAN3::FDCAN_IR, 23, 1, ReadWriteMode, FDCAN3FDCAN_IRBase> ;
    using FieldValues = FDCAN3_FDCAN_IR_ARA_Values<FDCAN3::FDCAN_IR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_IRPack  = Register<0x40006C50, 32, ReadWriteMode, FDCAN3FDCAN_IRBase, T...> ;

  struct FDCAN3FDCAN_IEBase {} ;

  struct FDCAN_IE : public RegisterBase<0x40006C54, 32, ReadWriteMode>
  {
    using RF0NE = FDCAN3_FDCAN_IE_RF0NE_Values<FDCAN3::FDCAN_IE, 0, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using RF0FE = FDCAN3_FDCAN_IE_RF0FE_Values<FDCAN3::FDCAN_IE, 1, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using RF0LE = FDCAN3_FDCAN_IE_RF0LE_Values<FDCAN3::FDCAN_IE, 2, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using RF1NE = FDCAN3_FDCAN_IE_RF1NE_Values<FDCAN3::FDCAN_IE, 3, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using RF1FE = FDCAN3_FDCAN_IE_RF1FE_Values<FDCAN3::FDCAN_IE, 4, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using RF1LE = FDCAN3_FDCAN_IE_RF1LE_Values<FDCAN3::FDCAN_IE, 5, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using HPME = FDCAN3_FDCAN_IE_HPME_Values<FDCAN3::FDCAN_IE, 6, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using TCE = FDCAN3_FDCAN_IE_TCE_Values<FDCAN3::FDCAN_IE, 7, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using TCFE = FDCAN3_FDCAN_IE_TCFE_Values<FDCAN3::FDCAN_IE, 8, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using TFEE = FDCAN3_FDCAN_IE_TFEE_Values<FDCAN3::FDCAN_IE, 9, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using TEFNE = FDCAN3_FDCAN_IE_TEFNE_Values<FDCAN3::FDCAN_IE, 10, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using TEFFE = FDCAN3_FDCAN_IE_TEFFE_Values<FDCAN3::FDCAN_IE, 11, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using TEFLE = FDCAN3_FDCAN_IE_TEFLE_Values<FDCAN3::FDCAN_IE, 12, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using TSWE = FDCAN3_FDCAN_IE_TSWE_Values<FDCAN3::FDCAN_IE, 13, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using MRAFE = FDCAN3_FDCAN_IE_MRAFE_Values<FDCAN3::FDCAN_IE, 14, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using TOOE = FDCAN3_FDCAN_IE_TOOE_Values<FDCAN3::FDCAN_IE, 15, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using ELOE = FDCAN3_FDCAN_IE_ELOE_Values<FDCAN3::FDCAN_IE, 16, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using EPE = FDCAN3_FDCAN_IE_EPE_Values<FDCAN3::FDCAN_IE, 17, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using EWE = FDCAN3_FDCAN_IE_EWE_Values<FDCAN3::FDCAN_IE, 18, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using BOE = FDCAN3_FDCAN_IE_BOE_Values<FDCAN3::FDCAN_IE, 19, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using WDIE = FDCAN3_FDCAN_IE_WDIE_Values<FDCAN3::FDCAN_IE, 20, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using PEAE = FDCAN3_FDCAN_IE_PEAE_Values<FDCAN3::FDCAN_IE, 21, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using PEDE = FDCAN3_FDCAN_IE_PEDE_Values<FDCAN3::FDCAN_IE, 22, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using ARAE = FDCAN3_FDCAN_IE_ARAE_Values<FDCAN3::FDCAN_IE, 23, 1, ReadWriteMode, FDCAN3FDCAN_IEBase> ;
    using FieldValues = FDCAN3_FDCAN_IE_ARAE_Values<FDCAN3::FDCAN_IE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_IEPack  = Register<0x40006C54, 32, ReadWriteMode, FDCAN3FDCAN_IEBase, T...> ;

  struct FDCAN3FDCAN_ILSBase {} ;

  struct FDCAN_ILS : public RegisterBase<0x40006C58, 32, ReadWriteMode>
  {
    using RXFIFO0 = FDCAN3_FDCAN_ILS_RXFIFO0_Values<FDCAN3::FDCAN_ILS, 0, 1, ReadWriteMode, FDCAN3FDCAN_ILSBase> ;
    using RXFIFO1 = FDCAN3_FDCAN_ILS_RXFIFO1_Values<FDCAN3::FDCAN_ILS, 1, 1, ReadWriteMode, FDCAN3FDCAN_ILSBase> ;
    using SMSG = FDCAN3_FDCAN_ILS_SMSG_Values<FDCAN3::FDCAN_ILS, 2, 1, ReadWriteMode, FDCAN3FDCAN_ILSBase> ;
    using TFERR = FDCAN3_FDCAN_ILS_TFERR_Values<FDCAN3::FDCAN_ILS, 3, 1, ReadWriteMode, FDCAN3FDCAN_ILSBase> ;
    using MISC = FDCAN3_FDCAN_ILS_MISC_Values<FDCAN3::FDCAN_ILS, 4, 1, ReadWriteMode, FDCAN3FDCAN_ILSBase> ;
    using BERR = FDCAN3_FDCAN_ILS_BERR_Values<FDCAN3::FDCAN_ILS, 5, 1, ReadWriteMode, FDCAN3FDCAN_ILSBase> ;
    using PERR = FDCAN3_FDCAN_ILS_PERR_Values<FDCAN3::FDCAN_ILS, 6, 1, ReadWriteMode, FDCAN3FDCAN_ILSBase> ;
    using FieldValues = FDCAN3_FDCAN_ILS_PERR_Values<FDCAN3::FDCAN_ILS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ILSPack  = Register<0x40006C58, 32, ReadWriteMode, FDCAN3FDCAN_ILSBase, T...> ;

  struct FDCAN3FDCAN_ILEBase {} ;

  struct FDCAN_ILE : public RegisterBase<0x40006C5C, 32, ReadWriteMode>
  {
    using EINT0 = FDCAN3_FDCAN_ILE_EINT0_Values<FDCAN3::FDCAN_ILE, 0, 1, ReadWriteMode, FDCAN3FDCAN_ILEBase> ;
    using EINT1 = FDCAN3_FDCAN_ILE_EINT1_Values<FDCAN3::FDCAN_ILE, 1, 1, ReadWriteMode, FDCAN3FDCAN_ILEBase> ;
    using FieldValues = FDCAN3_FDCAN_ILE_EINT1_Values<FDCAN3::FDCAN_ILE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ILEPack  = Register<0x40006C5C, 32, ReadWriteMode, FDCAN3FDCAN_ILEBase, T...> ;

  struct FDCAN3FDCAN_RXGFCBase {} ;

  struct FDCAN_RXGFC : public RegisterBase<0x40006C80, 32, ReadWriteMode>
  {
    using RRFE = FDCAN3_FDCAN_RXGFC_RRFE_Values<FDCAN3::FDCAN_RXGFC, 0, 1, ReadWriteMode, FDCAN3FDCAN_RXGFCBase> ;
    using RRFS = FDCAN3_FDCAN_RXGFC_RRFS_Values<FDCAN3::FDCAN_RXGFC, 1, 1, ReadWriteMode, FDCAN3FDCAN_RXGFCBase> ;
    using ANFE = FDCAN3_FDCAN_RXGFC_ANFE_Values<FDCAN3::FDCAN_RXGFC, 2, 2, ReadWriteMode, FDCAN3FDCAN_RXGFCBase> ;
    using ANFS = FDCAN3_FDCAN_RXGFC_ANFS_Values<FDCAN3::FDCAN_RXGFC, 4, 2, ReadWriteMode, FDCAN3FDCAN_RXGFCBase> ;
    using F1OM = FDCAN3_FDCAN_RXGFC_F1OM_Values<FDCAN3::FDCAN_RXGFC, 8, 1, ReadWriteMode, FDCAN3FDCAN_RXGFCBase> ;
    using F0OM = FDCAN3_FDCAN_RXGFC_F0OM_Values<FDCAN3::FDCAN_RXGFC, 9, 1, ReadWriteMode, FDCAN3FDCAN_RXGFCBase> ;
    using LSS = FDCAN3_FDCAN_RXGFC_LSS_Values<FDCAN3::FDCAN_RXGFC, 16, 5, ReadWriteMode, FDCAN3FDCAN_RXGFCBase> ;
    using LSE = FDCAN3_FDCAN_RXGFC_LSE_Values<FDCAN3::FDCAN_RXGFC, 24, 4, ReadWriteMode, FDCAN3FDCAN_RXGFCBase> ;
    using FieldValues = FDCAN3_FDCAN_RXGFC_LSE_Values<FDCAN3::FDCAN_RXGFC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXGFCPack  = Register<0x40006C80, 32, ReadWriteMode, FDCAN3FDCAN_RXGFCBase, T...> ;

  struct FDCAN3FDCAN_XIDAMBase {} ;

  struct FDCAN_XIDAM : public RegisterBase<0x40006C84, 32, ReadWriteMode>
  {
    using EIDM = FDCAN3_FDCAN_XIDAM_EIDM_Values<FDCAN3::FDCAN_XIDAM, 0, 29, ReadWriteMode, FDCAN3FDCAN_XIDAMBase> ;
    using FieldValues = FDCAN3_FDCAN_XIDAM_EIDM_Values<FDCAN3::FDCAN_XIDAM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_XIDAMPack  = Register<0x40006C84, 32, ReadWriteMode, FDCAN3FDCAN_XIDAMBase, T...> ;

  struct FDCAN3FDCAN_HPMSBase {} ;

  struct FDCAN_HPMS : public RegisterBase<0x40006C88, 32, ReadWriteMode>
  {
    using BIDX = FDCAN3_FDCAN_HPMS_BIDX_Values<FDCAN3::FDCAN_HPMS, 0, 3, ReadMode, FDCAN3FDCAN_HPMSBase> ;
    using MSI = FDCAN3_FDCAN_HPMS_MSI_Values<FDCAN3::FDCAN_HPMS, 6, 2, ReadMode, FDCAN3FDCAN_HPMSBase> ;
    using FIDX = FDCAN3_FDCAN_HPMS_FIDX_Values<FDCAN3::FDCAN_HPMS, 8, 5, ReadMode, FDCAN3FDCAN_HPMSBase> ;
    using FLST = FDCAN3_FDCAN_HPMS_FLST_Values<FDCAN3::FDCAN_HPMS, 15, 1, ReadMode, FDCAN3FDCAN_HPMSBase> ;
    using FieldValues = FDCAN3_FDCAN_HPMS_FLST_Values<FDCAN3::FDCAN_HPMS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_HPMSPack  = Register<0x40006C88, 32, ReadWriteMode, FDCAN3FDCAN_HPMSBase, T...> ;

  struct FDCAN3FDCAN_RXF0SBase {} ;

  struct FDCAN_RXF0S : public RegisterBase<0x40006C90, 32, ReadWriteMode>
  {
    using F0FL = FDCAN3_FDCAN_RXF0S_F0FL_Values<FDCAN3::FDCAN_RXF0S, 0, 4, ReadMode, FDCAN3FDCAN_RXF0SBase> ;
    using F0GI = FDCAN3_FDCAN_RXF0S_F0GI_Values<FDCAN3::FDCAN_RXF0S, 8, 2, ReadMode, FDCAN3FDCAN_RXF0SBase> ;
    using F0PI = FDCAN3_FDCAN_RXF0S_F0PI_Values<FDCAN3::FDCAN_RXF0S, 16, 2, ReadMode, FDCAN3FDCAN_RXF0SBase> ;
    using F0F = FDCAN3_FDCAN_RXF0S_F0F_Values<FDCAN3::FDCAN_RXF0S, 24, 1, ReadMode, FDCAN3FDCAN_RXF0SBase> ;
    using RF0L = FDCAN3_FDCAN_RXF0S_RF0L_Values<FDCAN3::FDCAN_RXF0S, 25, 1, ReadMode, FDCAN3FDCAN_RXF0SBase> ;
    using FieldValues = FDCAN3_FDCAN_RXF0S_RF0L_Values<FDCAN3::FDCAN_RXF0S, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF0SPack  = Register<0x40006C90, 32, ReadWriteMode, FDCAN3FDCAN_RXF0SBase, T...> ;

  struct FDCAN3FDCAN_RXF0ABase {} ;

  struct FDCAN_RXF0A : public RegisterBase<0x40006C94, 32, ReadWriteMode>
  {
    using F0AI = FDCAN3_FDCAN_RXF0A_F0AI_Values<FDCAN3::FDCAN_RXF0A, 0, 3, ReadWriteMode, FDCAN3FDCAN_RXF0ABase> ;
    using FieldValues = FDCAN3_FDCAN_RXF0A_F0AI_Values<FDCAN3::FDCAN_RXF0A, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF0APack  = Register<0x40006C94, 32, ReadWriteMode, FDCAN3FDCAN_RXF0ABase, T...> ;

  struct FDCAN3FDCAN_RXF1SBase {} ;

  struct FDCAN_RXF1S : public RegisterBase<0x40006C98, 32, ReadWriteMode>
  {
    using F1FL = FDCAN3_FDCAN_RXF1S_F1FL_Values<FDCAN3::FDCAN_RXF1S, 0, 4, ReadMode, FDCAN3FDCAN_RXF1SBase> ;
    using F1GI = FDCAN3_FDCAN_RXF1S_F1GI_Values<FDCAN3::FDCAN_RXF1S, 8, 2, ReadMode, FDCAN3FDCAN_RXF1SBase> ;
    using F1PI = FDCAN3_FDCAN_RXF1S_F1PI_Values<FDCAN3::FDCAN_RXF1S, 16, 2, ReadMode, FDCAN3FDCAN_RXF1SBase> ;
    using F1F = FDCAN3_FDCAN_RXF1S_F1F_Values<FDCAN3::FDCAN_RXF1S, 24, 1, ReadMode, FDCAN3FDCAN_RXF1SBase> ;
    using RF1L = FDCAN3_FDCAN_RXF1S_RF1L_Values<FDCAN3::FDCAN_RXF1S, 25, 1, ReadMode, FDCAN3FDCAN_RXF1SBase> ;
    using FieldValues = FDCAN3_FDCAN_RXF1S_RF1L_Values<FDCAN3::FDCAN_RXF1S, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF1SPack  = Register<0x40006C98, 32, ReadWriteMode, FDCAN3FDCAN_RXF1SBase, T...> ;

  struct FDCAN3FDCAN_RXF1ABase {} ;

  struct FDCAN_RXF1A : public RegisterBase<0x40006C9C, 32, ReadWriteMode>
  {
    using F1AI = FDCAN3_FDCAN_RXF1A_F1AI_Values<FDCAN3::FDCAN_RXF1A, 0, 3, ReadWriteMode, FDCAN3FDCAN_RXF1ABase> ;
    using FieldValues = FDCAN3_FDCAN_RXF1A_F1AI_Values<FDCAN3::FDCAN_RXF1A, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF1APack  = Register<0x40006C9C, 32, ReadWriteMode, FDCAN3FDCAN_RXF1ABase, T...> ;

  struct FDCAN3FDCAN_TXBCBase {} ;

  struct FDCAN_TXBC : public RegisterBase<0x40006CC0, 32, ReadWriteMode>
  {
    using TFQM = FDCAN3_FDCAN_TXBC_TFQM_Values<FDCAN3::FDCAN_TXBC, 24, 1, ReadWriteMode, FDCAN3FDCAN_TXBCBase> ;
    using FieldValues = FDCAN3_FDCAN_TXBC_TFQM_Values<FDCAN3::FDCAN_TXBC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCPack  = Register<0x40006CC0, 32, ReadWriteMode, FDCAN3FDCAN_TXBCBase, T...> ;

  struct FDCAN3FDCAN_TXFQSBase {} ;

  struct FDCAN_TXFQS : public RegisterBase<0x40006CC4, 32, ReadWriteMode>
  {
    using TFFL = FDCAN3_FDCAN_TXFQS_TFFL_Values<FDCAN3::FDCAN_TXFQS, 0, 3, ReadMode, FDCAN3FDCAN_TXFQSBase> ;
    using TFGI = FDCAN3_FDCAN_TXFQS_TFGI_Values<FDCAN3::FDCAN_TXFQS, 8, 2, ReadMode, FDCAN3FDCAN_TXFQSBase> ;
    using TFQPI = FDCAN3_FDCAN_TXFQS_TFQPI_Values<FDCAN3::FDCAN_TXFQS, 16, 2, ReadMode, FDCAN3FDCAN_TXFQSBase> ;
    using TFQF = FDCAN3_FDCAN_TXFQS_TFQF_Values<FDCAN3::FDCAN_TXFQS, 21, 1, ReadMode, FDCAN3FDCAN_TXFQSBase> ;
    using FieldValues = FDCAN3_FDCAN_TXFQS_TFQF_Values<FDCAN3::FDCAN_TXFQS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXFQSPack  = Register<0x40006CC4, 32, ReadWriteMode, FDCAN3FDCAN_TXFQSBase, T...> ;

  struct FDCAN3FDCAN_TXBRPBase {} ;

  struct FDCAN_TXBRP : public RegisterBase<0x40006CC8, 32, ReadWriteMode>
  {
    using TRP = FDCAN3_FDCAN_TXBRP_TRP_Values<FDCAN3::FDCAN_TXBRP, 0, 3, ReadMode, FDCAN3FDCAN_TXBRPBase> ;
    using FieldValues = FDCAN3_FDCAN_TXBRP_TRP_Values<FDCAN3::FDCAN_TXBRP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBRPPack  = Register<0x40006CC8, 32, ReadWriteMode, FDCAN3FDCAN_TXBRPBase, T...> ;

  struct FDCAN3FDCAN_TXBARBase {} ;

  struct FDCAN_TXBAR : public RegisterBase<0x40006CCC, 32, ReadWriteMode>
  {
    using AR = FDCAN3_FDCAN_TXBAR_AR_Values<FDCAN3::FDCAN_TXBAR, 0, 3, ReadWriteMode, FDCAN3FDCAN_TXBARBase> ;
    using FieldValues = FDCAN3_FDCAN_TXBAR_AR_Values<FDCAN3::FDCAN_TXBAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBARPack  = Register<0x40006CCC, 32, ReadWriteMode, FDCAN3FDCAN_TXBARBase, T...> ;

  struct FDCAN3FDCAN_TXBCRBase {} ;

  struct FDCAN_TXBCR : public RegisterBase<0x40006CD0, 32, ReadWriteMode>
  {
    using CR = FDCAN3_FDCAN_TXBCR_CR_Values<FDCAN3::FDCAN_TXBCR, 0, 3, ReadWriteMode, FDCAN3FDCAN_TXBCRBase> ;
    using FieldValues = FDCAN3_FDCAN_TXBCR_CR_Values<FDCAN3::FDCAN_TXBCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCRPack  = Register<0x40006CD0, 32, ReadWriteMode, FDCAN3FDCAN_TXBCRBase, T...> ;

  struct FDCAN3FDCAN_TXBTOBase {} ;

  struct FDCAN_TXBTO : public RegisterBase<0x40006CD4, 32, ReadWriteMode>
  {
    using TO = FDCAN3_FDCAN_TXBTO_TO_Values<FDCAN3::FDCAN_TXBTO, 0, 3, ReadMode, FDCAN3FDCAN_TXBTOBase> ;
    using FieldValues = FDCAN3_FDCAN_TXBTO_TO_Values<FDCAN3::FDCAN_TXBTO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBTOPack  = Register<0x40006CD4, 32, ReadWriteMode, FDCAN3FDCAN_TXBTOBase, T...> ;

  struct FDCAN3FDCAN_TXBCFBase {} ;

  struct FDCAN_TXBCF : public RegisterBase<0x40006CD8, 32, ReadWriteMode>
  {
    using CF = FDCAN3_FDCAN_TXBCF_CF_Values<FDCAN3::FDCAN_TXBCF, 0, 3, ReadMode, FDCAN3FDCAN_TXBCFBase> ;
    using FieldValues = FDCAN3_FDCAN_TXBCF_CF_Values<FDCAN3::FDCAN_TXBCF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCFPack  = Register<0x40006CD8, 32, ReadWriteMode, FDCAN3FDCAN_TXBCFBase, T...> ;

  struct FDCAN3FDCAN_TXBTIEBase {} ;

  struct FDCAN_TXBTIE : public RegisterBase<0x40006CDC, 32, ReadWriteMode>
  {
    using TIE = FDCAN3_FDCAN_TXBTIE_TIE_Values<FDCAN3::FDCAN_TXBTIE, 0, 3, ReadWriteMode, FDCAN3FDCAN_TXBTIEBase> ;
    using FieldValues = FDCAN3_FDCAN_TXBTIE_TIE_Values<FDCAN3::FDCAN_TXBTIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBTIEPack  = Register<0x40006CDC, 32, ReadWriteMode, FDCAN3FDCAN_TXBTIEBase, T...> ;

  struct FDCAN3FDCAN_TXBCIEBase {} ;

  struct FDCAN_TXBCIE : public RegisterBase<0x40006CE0, 32, ReadWriteMode>
  {
    using CFIE = FDCAN3_FDCAN_TXBCIE_CFIE_Values<FDCAN3::FDCAN_TXBCIE, 0, 3, ReadWriteMode, FDCAN3FDCAN_TXBCIEBase> ;
    using FieldValues = FDCAN3_FDCAN_TXBCIE_CFIE_Values<FDCAN3::FDCAN_TXBCIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCIEPack  = Register<0x40006CE0, 32, ReadWriteMode, FDCAN3FDCAN_TXBCIEBase, T...> ;

  struct FDCAN3FDCAN_TXEFSBase {} ;

  struct FDCAN_TXEFS : public RegisterBase<0x40006CE4, 32, ReadWriteMode>
  {
    using EFFL = FDCAN3_FDCAN_TXEFS_EFFL_Values<FDCAN3::FDCAN_TXEFS, 0, 3, ReadMode, FDCAN3FDCAN_TXEFSBase> ;
    using EFGI = FDCAN3_FDCAN_TXEFS_EFGI_Values<FDCAN3::FDCAN_TXEFS, 8, 2, ReadMode, FDCAN3FDCAN_TXEFSBase> ;
    using EFPI = FDCAN3_FDCAN_TXEFS_EFPI_Values<FDCAN3::FDCAN_TXEFS, 16, 2, ReadMode, FDCAN3FDCAN_TXEFSBase> ;
    using EFF = FDCAN3_FDCAN_TXEFS_EFF_Values<FDCAN3::FDCAN_TXEFS, 24, 1, ReadMode, FDCAN3FDCAN_TXEFSBase> ;
    using TEFL = FDCAN3_FDCAN_TXEFS_TEFL_Values<FDCAN3::FDCAN_TXEFS, 25, 1, ReadMode, FDCAN3FDCAN_TXEFSBase> ;
    using FieldValues = FDCAN3_FDCAN_TXEFS_TEFL_Values<FDCAN3::FDCAN_TXEFS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXEFSPack  = Register<0x40006CE4, 32, ReadWriteMode, FDCAN3FDCAN_TXEFSBase, T...> ;

  struct FDCAN3FDCAN_TXEFABase {} ;

  struct FDCAN_TXEFA : public RegisterBase<0x40006CE8, 32, ReadWriteMode>
  {
    using EFAI = FDCAN3_FDCAN_TXEFA_EFAI_Values<FDCAN3::FDCAN_TXEFA, 0, 2, ReadWriteMode, FDCAN3FDCAN_TXEFABase> ;
    using FieldValues = FDCAN3_FDCAN_TXEFA_EFAI_Values<FDCAN3::FDCAN_TXEFA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXEFAPack  = Register<0x40006CE8, 32, ReadWriteMode, FDCAN3FDCAN_TXEFABase, T...> ;

  struct FDCAN3FDCAN_CKDIVBase {} ;

  struct FDCAN_CKDIV : public RegisterBase<0x40006D00, 32, ReadWriteMode>
  {
    using PDIV = FDCAN3_FDCAN_CKDIV_PDIV_Values<FDCAN3::FDCAN_CKDIV, 0, 4, ReadWriteMode, FDCAN3FDCAN_CKDIVBase> ;
    using FieldValues = FDCAN3_FDCAN_CKDIV_PDIV_Values<FDCAN3::FDCAN_CKDIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_CKDIVPack  = Register<0x40006D00, 32, ReadWriteMode, FDCAN3FDCAN_CKDIVBase, T...> ;

} ;

