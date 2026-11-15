/*******************************************************************************
* Filename      : fdcanregisters.hpp
*
* Details       : FDCAN. This header file is auto-generated for STM32G474
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "fdcanfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FDCAN
{
  struct FDCANFDCAN_CRELBase {} ;

  struct FDCAN_CREL : public RegisterBase<0x4000A400, 32, ReadWriteMode>
  {
    using DAY = FDCAN_FDCAN_CREL_DAY_Values<FDCAN::FDCAN_CREL, 0, 8, ReadMode, FDCANFDCAN_CRELBase> ;
    using MON = FDCAN_FDCAN_CREL_MON_Values<FDCAN::FDCAN_CREL, 8, 8, ReadMode, FDCANFDCAN_CRELBase> ;
    using YEAR = FDCAN_FDCAN_CREL_YEAR_Values<FDCAN::FDCAN_CREL, 16, 4, ReadMode, FDCANFDCAN_CRELBase> ;
    using SUBSTEP = FDCAN_FDCAN_CREL_SUBSTEP_Values<FDCAN::FDCAN_CREL, 20, 4, ReadMode, FDCANFDCAN_CRELBase> ;
    using STEP = FDCAN_FDCAN_CREL_STEP_Values<FDCAN::FDCAN_CREL, 24, 4, ReadMode, FDCANFDCAN_CRELBase> ;
    using REL = FDCAN_FDCAN_CREL_REL_Values<FDCAN::FDCAN_CREL, 28, 4, ReadMode, FDCANFDCAN_CRELBase> ;
    using FieldValues = FDCAN_FDCAN_CREL_REL_Values<FDCAN::FDCAN_CREL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_CRELPack  = Register<0x4000A400, 32, ReadWriteMode, FDCANFDCAN_CRELBase, T...> ;

  struct FDCANFDCAN_ENDNBase {} ;

  struct FDCAN_ENDN : public RegisterBase<0x4000A404, 32, ReadWriteMode>
  {
    using ETV = FDCAN_FDCAN_ENDN_ETV_Values<FDCAN::FDCAN_ENDN, 0, 32, ReadMode, FDCANFDCAN_ENDNBase> ;
    using FieldValues = FDCAN_FDCAN_ENDN_ETV_Values<FDCAN::FDCAN_ENDN, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ENDNPack  = Register<0x4000A404, 32, ReadWriteMode, FDCANFDCAN_ENDNBase, T...> ;

  struct FDCANFDCAN_DBTPBase {} ;

  struct FDCAN_DBTP : public RegisterBase<0x4000A40C, 32, ReadWriteMode>
  {
    using DSJW = FDCAN_FDCAN_DBTP_DSJW_Values<FDCAN::FDCAN_DBTP, 0, 4, ReadWriteMode, FDCANFDCAN_DBTPBase> ;
    using DTSEG2 = FDCAN_FDCAN_DBTP_DTSEG2_Values<FDCAN::FDCAN_DBTP, 4, 4, ReadWriteMode, FDCANFDCAN_DBTPBase> ;
    using DTSEG1 = FDCAN_FDCAN_DBTP_DTSEG1_Values<FDCAN::FDCAN_DBTP, 8, 5, ReadWriteMode, FDCANFDCAN_DBTPBase> ;
    using DBRP = FDCAN_FDCAN_DBTP_DBRP_Values<FDCAN::FDCAN_DBTP, 16, 5, ReadWriteMode, FDCANFDCAN_DBTPBase> ;
    using TDC = FDCAN_FDCAN_DBTP_TDC_Values<FDCAN::FDCAN_DBTP, 23, 1, ReadWriteMode, FDCANFDCAN_DBTPBase> ;
    using FieldValues = FDCAN_FDCAN_DBTP_TDC_Values<FDCAN::FDCAN_DBTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_DBTPPack  = Register<0x4000A40C, 32, ReadWriteMode, FDCANFDCAN_DBTPBase, T...> ;

  struct FDCANFDCAN_TESTBase {} ;

  struct FDCAN_TEST : public RegisterBase<0x4000A410, 32, ReadWriteMode>
  {
    using LBCK = FDCAN_FDCAN_TEST_LBCK_Values<FDCAN::FDCAN_TEST, 4, 1, ReadWriteMode, FDCANFDCAN_TESTBase> ;
    using TX = FDCAN_FDCAN_TEST_TX_Values<FDCAN::FDCAN_TEST, 5, 2, ReadWriteMode, FDCANFDCAN_TESTBase> ;
    using RX = FDCAN_FDCAN_TEST_RX_Values<FDCAN::FDCAN_TEST, 7, 1, ReadMode, FDCANFDCAN_TESTBase> ;
    using FieldValues = FDCAN_FDCAN_TEST_RX_Values<FDCAN::FDCAN_TEST, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TESTPack  = Register<0x4000A410, 32, ReadWriteMode, FDCANFDCAN_TESTBase, T...> ;

  struct FDCANFDCAN_RWDBase {} ;

  struct FDCAN_RWD : public RegisterBase<0x4000A414, 32, ReadWriteMode>
  {
    using WDC = FDCAN_FDCAN_RWD_WDC_Values<FDCAN::FDCAN_RWD, 0, 8, ReadWriteMode, FDCANFDCAN_RWDBase> ;
    using WDV = FDCAN_FDCAN_RWD_WDV_Values<FDCAN::FDCAN_RWD, 8, 8, ReadMode, FDCANFDCAN_RWDBase> ;
    using FieldValues = FDCAN_FDCAN_RWD_WDV_Values<FDCAN::FDCAN_RWD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RWDPack  = Register<0x4000A414, 32, ReadWriteMode, FDCANFDCAN_RWDBase, T...> ;

  struct FDCANFDCAN_CCCRBase {} ;

  struct FDCAN_CCCR : public RegisterBase<0x4000A418, 32, ReadWriteMode>
  {
    using INIT = FDCAN_FDCAN_CCCR_INIT_Values<FDCAN::FDCAN_CCCR, 0, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using CCE = FDCAN_FDCAN_CCCR_CCE_Values<FDCAN::FDCAN_CCCR, 1, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using ASM = FDCAN_FDCAN_CCCR_ASM_Values<FDCAN::FDCAN_CCCR, 2, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using CSA = FDCAN_FDCAN_CCCR_CSA_Values<FDCAN::FDCAN_CCCR, 3, 1, ReadMode, FDCANFDCAN_CCCRBase> ;
    using CSR = FDCAN_FDCAN_CCCR_CSR_Values<FDCAN::FDCAN_CCCR, 4, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using MON = FDCAN_FDCAN_CCCR_MON_Values<FDCAN::FDCAN_CCCR, 5, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using DAR = FDCAN_FDCAN_CCCR_DAR_Values<FDCAN::FDCAN_CCCR, 6, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using TEST = FDCAN_FDCAN_CCCR_TEST_Values<FDCAN::FDCAN_CCCR, 7, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using FDOE = FDCAN_FDCAN_CCCR_FDOE_Values<FDCAN::FDCAN_CCCR, 8, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using BRSE = FDCAN_FDCAN_CCCR_BRSE_Values<FDCAN::FDCAN_CCCR, 9, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using PXHD = FDCAN_FDCAN_CCCR_PXHD_Values<FDCAN::FDCAN_CCCR, 12, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using EFBI = FDCAN_FDCAN_CCCR_EFBI_Values<FDCAN::FDCAN_CCCR, 13, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using TXP = FDCAN_FDCAN_CCCR_TXP_Values<FDCAN::FDCAN_CCCR, 14, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using NISO = FDCAN_FDCAN_CCCR_NISO_Values<FDCAN::FDCAN_CCCR, 15, 1, ReadWriteMode, FDCANFDCAN_CCCRBase> ;
    using FieldValues = FDCAN_FDCAN_CCCR_NISO_Values<FDCAN::FDCAN_CCCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_CCCRPack  = Register<0x4000A418, 32, ReadWriteMode, FDCANFDCAN_CCCRBase, T...> ;

  struct FDCANFDCAN_NBTPBase {} ;

  struct FDCAN_NBTP : public RegisterBase<0x4000A41C, 32, ReadWriteMode>
  {
    using NTSEG2 = FDCAN_FDCAN_NBTP_NTSEG2_Values<FDCAN::FDCAN_NBTP, 0, 7, ReadWriteMode, FDCANFDCAN_NBTPBase> ;
    using NTSEG1 = FDCAN_FDCAN_NBTP_NTSEG1_Values<FDCAN::FDCAN_NBTP, 8, 8, ReadWriteMode, FDCANFDCAN_NBTPBase> ;
    using NBRP = FDCAN_FDCAN_NBTP_NBRP_Values<FDCAN::FDCAN_NBTP, 16, 9, ReadWriteMode, FDCANFDCAN_NBTPBase> ;
    using NSJW = FDCAN_FDCAN_NBTP_NSJW_Values<FDCAN::FDCAN_NBTP, 25, 7, ReadWriteMode, FDCANFDCAN_NBTPBase> ;
    using FieldValues = FDCAN_FDCAN_NBTP_NSJW_Values<FDCAN::FDCAN_NBTP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_NBTPPack  = Register<0x4000A41C, 32, ReadWriteMode, FDCANFDCAN_NBTPBase, T...> ;

  struct FDCANFDCAN_TSCCBase {} ;

  struct FDCAN_TSCC : public RegisterBase<0x4000A420, 32, ReadWriteMode>
  {
    using TSS = FDCAN_FDCAN_TSCC_TSS_Values<FDCAN::FDCAN_TSCC, 0, 2, ReadWriteMode, FDCANFDCAN_TSCCBase> ;
    using TCP = FDCAN_FDCAN_TSCC_TCP_Values<FDCAN::FDCAN_TSCC, 16, 4, ReadWriteMode, FDCANFDCAN_TSCCBase> ;
    using FieldValues = FDCAN_FDCAN_TSCC_TCP_Values<FDCAN::FDCAN_TSCC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TSCCPack  = Register<0x4000A420, 32, ReadWriteMode, FDCANFDCAN_TSCCBase, T...> ;

  struct FDCANFDCAN_TSCVBase {} ;

  struct FDCAN_TSCV : public RegisterBase<0x4000A424, 32, ReadWriteMode>
  {
    using TSC = FDCAN_FDCAN_TSCV_TSC_Values<FDCAN::FDCAN_TSCV, 0, 16, ReadWriteMode, FDCANFDCAN_TSCVBase> ;
    using FieldValues = FDCAN_FDCAN_TSCV_TSC_Values<FDCAN::FDCAN_TSCV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TSCVPack  = Register<0x4000A424, 32, ReadWriteMode, FDCANFDCAN_TSCVBase, T...> ;

  struct FDCANFDCAN_TOCCBase {} ;

  struct FDCAN_TOCC : public RegisterBase<0x4000A428, 32, ReadWriteMode>
  {
    using ETOC = FDCAN_FDCAN_TOCC_ETOC_Values<FDCAN::FDCAN_TOCC, 0, 1, ReadWriteMode, FDCANFDCAN_TOCCBase> ;
    using TOS = FDCAN_FDCAN_TOCC_TOS_Values<FDCAN::FDCAN_TOCC, 1, 2, ReadWriteMode, FDCANFDCAN_TOCCBase> ;
    using TOP = FDCAN_FDCAN_TOCC_TOP_Values<FDCAN::FDCAN_TOCC, 16, 16, ReadWriteMode, FDCANFDCAN_TOCCBase> ;
    using FieldValues = FDCAN_FDCAN_TOCC_TOP_Values<FDCAN::FDCAN_TOCC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TOCCPack  = Register<0x4000A428, 32, ReadWriteMode, FDCANFDCAN_TOCCBase, T...> ;

  struct FDCANFDCAN_TOCVBase {} ;

  struct FDCAN_TOCV : public RegisterBase<0x4000A42C, 32, ReadWriteMode>
  {
    using TOC = FDCAN_FDCAN_TOCV_TOC_Values<FDCAN::FDCAN_TOCV, 0, 16, ReadWriteMode, FDCANFDCAN_TOCVBase> ;
    using FieldValues = FDCAN_FDCAN_TOCV_TOC_Values<FDCAN::FDCAN_TOCV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TOCVPack  = Register<0x4000A42C, 32, ReadWriteMode, FDCANFDCAN_TOCVBase, T...> ;

  struct FDCANFDCAN_ECRBase {} ;

  struct FDCAN_ECR : public RegisterBase<0x4000A440, 32, ReadWriteMode>
  {
    using TEC = FDCAN_FDCAN_ECR_TEC_Values<FDCAN::FDCAN_ECR, 0, 8, ReadMode, FDCANFDCAN_ECRBase> ;
    using REC = FDCAN_FDCAN_ECR_REC_Values<FDCAN::FDCAN_ECR, 8, 7, ReadMode, FDCANFDCAN_ECRBase> ;
    using RP = FDCAN_FDCAN_ECR_RP_Values<FDCAN::FDCAN_ECR, 15, 1, ReadMode, FDCANFDCAN_ECRBase> ;
    using CEL = FDCAN_FDCAN_ECR_CEL_Values<FDCAN::FDCAN_ECR, 16, 8, ReadWriteMode, FDCANFDCAN_ECRBase> ;
    using FieldValues = FDCAN_FDCAN_ECR_CEL_Values<FDCAN::FDCAN_ECR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ECRPack  = Register<0x4000A440, 32, ReadWriteMode, FDCANFDCAN_ECRBase, T...> ;

  struct FDCANFDCAN_PSRBase {} ;

  struct FDCAN_PSR : public RegisterBase<0x4000A444, 32, ReadWriteMode>
  {
    using LEC = FDCAN_FDCAN_PSR_LEC_Values<FDCAN::FDCAN_PSR, 0, 3, ReadWriteMode, FDCANFDCAN_PSRBase> ;
    using ACT = FDCAN_FDCAN_PSR_ACT_Values<FDCAN::FDCAN_PSR, 3, 2, ReadMode, FDCANFDCAN_PSRBase> ;
    using EP = FDCAN_FDCAN_PSR_EP_Values<FDCAN::FDCAN_PSR, 5, 1, ReadMode, FDCANFDCAN_PSRBase> ;
    using EW = FDCAN_FDCAN_PSR_EW_Values<FDCAN::FDCAN_PSR, 6, 1, ReadMode, FDCANFDCAN_PSRBase> ;
    using BO = FDCAN_FDCAN_PSR_BO_Values<FDCAN::FDCAN_PSR, 7, 1, ReadMode, FDCANFDCAN_PSRBase> ;
    using DLEC = FDCAN_FDCAN_PSR_DLEC_Values<FDCAN::FDCAN_PSR, 8, 3, ReadWriteMode, FDCANFDCAN_PSRBase> ;
    using RESI = FDCAN_FDCAN_PSR_RESI_Values<FDCAN::FDCAN_PSR, 11, 1, ReadWriteMode, FDCANFDCAN_PSRBase> ;
    using RBRS = FDCAN_FDCAN_PSR_RBRS_Values<FDCAN::FDCAN_PSR, 12, 1, ReadWriteMode, FDCANFDCAN_PSRBase> ;
    using REDL = FDCAN_FDCAN_PSR_REDL_Values<FDCAN::FDCAN_PSR, 13, 1, ReadWriteMode, FDCANFDCAN_PSRBase> ;
    using PXE = FDCAN_FDCAN_PSR_PXE_Values<FDCAN::FDCAN_PSR, 14, 1, ReadWriteMode, FDCANFDCAN_PSRBase> ;
    using TDCV = FDCAN_FDCAN_PSR_TDCV_Values<FDCAN::FDCAN_PSR, 16, 7, ReadMode, FDCANFDCAN_PSRBase> ;
    using FieldValues = FDCAN_FDCAN_PSR_TDCV_Values<FDCAN::FDCAN_PSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_PSRPack  = Register<0x4000A444, 32, ReadWriteMode, FDCANFDCAN_PSRBase, T...> ;

  struct FDCANFDCAN_TDCRBase {} ;

  struct FDCAN_TDCR : public RegisterBase<0x4000A448, 32, ReadWriteMode>
  {
    using TDCF = FDCAN_FDCAN_TDCR_TDCF_Values<FDCAN::FDCAN_TDCR, 0, 7, ReadWriteMode, FDCANFDCAN_TDCRBase> ;
    using TDCO = FDCAN_FDCAN_TDCR_TDCO_Values<FDCAN::FDCAN_TDCR, 8, 7, ReadWriteMode, FDCANFDCAN_TDCRBase> ;
    using FieldValues = FDCAN_FDCAN_TDCR_TDCO_Values<FDCAN::FDCAN_TDCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TDCRPack  = Register<0x4000A448, 32, ReadWriteMode, FDCANFDCAN_TDCRBase, T...> ;

  struct FDCANFDCAN_IRBase {} ;

  struct FDCAN_IR : public RegisterBase<0x4000A450, 32, ReadWriteMode>
  {
    using RF0N = FDCAN_FDCAN_IR_RF0N_Values<FDCAN::FDCAN_IR, 0, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using RF0F = FDCAN_FDCAN_IR_RF0F_Values<FDCAN::FDCAN_IR, 1, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using RF0L = FDCAN_FDCAN_IR_RF0L_Values<FDCAN::FDCAN_IR, 2, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using RF1N = FDCAN_FDCAN_IR_RF1N_Values<FDCAN::FDCAN_IR, 3, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using RF1F = FDCAN_FDCAN_IR_RF1F_Values<FDCAN::FDCAN_IR, 4, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using RF1L = FDCAN_FDCAN_IR_RF1L_Values<FDCAN::FDCAN_IR, 5, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using HPM = FDCAN_FDCAN_IR_HPM_Values<FDCAN::FDCAN_IR, 6, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using TC = FDCAN_FDCAN_IR_TC_Values<FDCAN::FDCAN_IR, 7, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using TCF = FDCAN_FDCAN_IR_TCF_Values<FDCAN::FDCAN_IR, 8, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using TFE = FDCAN_FDCAN_IR_TFE_Values<FDCAN::FDCAN_IR, 9, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using TEFN = FDCAN_FDCAN_IR_TEFN_Values<FDCAN::FDCAN_IR, 10, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using TEFF = FDCAN_FDCAN_IR_TEFF_Values<FDCAN::FDCAN_IR, 11, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using TEFL = FDCAN_FDCAN_IR_TEFL_Values<FDCAN::FDCAN_IR, 12, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using TSW = FDCAN_FDCAN_IR_TSW_Values<FDCAN::FDCAN_IR, 13, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using MRAF = FDCAN_FDCAN_IR_MRAF_Values<FDCAN::FDCAN_IR, 14, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using TOO = FDCAN_FDCAN_IR_TOO_Values<FDCAN::FDCAN_IR, 15, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using ELO = FDCAN_FDCAN_IR_ELO_Values<FDCAN::FDCAN_IR, 16, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using EP = FDCAN_FDCAN_IR_EP_Values<FDCAN::FDCAN_IR, 17, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using EW = FDCAN_FDCAN_IR_EW_Values<FDCAN::FDCAN_IR, 18, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using BO = FDCAN_FDCAN_IR_BO_Values<FDCAN::FDCAN_IR, 19, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using WDI = FDCAN_FDCAN_IR_WDI_Values<FDCAN::FDCAN_IR, 20, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using PEA = FDCAN_FDCAN_IR_PEA_Values<FDCAN::FDCAN_IR, 21, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using PED = FDCAN_FDCAN_IR_PED_Values<FDCAN::FDCAN_IR, 22, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using ARA = FDCAN_FDCAN_IR_ARA_Values<FDCAN::FDCAN_IR, 23, 1, ReadWriteMode, FDCANFDCAN_IRBase> ;
    using FieldValues = FDCAN_FDCAN_IR_ARA_Values<FDCAN::FDCAN_IR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_IRPack  = Register<0x4000A450, 32, ReadWriteMode, FDCANFDCAN_IRBase, T...> ;

  struct FDCANFDCAN_IEBase {} ;

  struct FDCAN_IE : public RegisterBase<0x4000A454, 32, ReadWriteMode>
  {
    using RF0NE = FDCAN_FDCAN_IE_RF0NE_Values<FDCAN::FDCAN_IE, 0, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using RF0FE = FDCAN_FDCAN_IE_RF0FE_Values<FDCAN::FDCAN_IE, 1, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using RF0LE = FDCAN_FDCAN_IE_RF0LE_Values<FDCAN::FDCAN_IE, 2, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using RF1NE = FDCAN_FDCAN_IE_RF1NE_Values<FDCAN::FDCAN_IE, 3, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using RF1FE = FDCAN_FDCAN_IE_RF1FE_Values<FDCAN::FDCAN_IE, 4, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using RF1LE = FDCAN_FDCAN_IE_RF1LE_Values<FDCAN::FDCAN_IE, 5, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using HPME = FDCAN_FDCAN_IE_HPME_Values<FDCAN::FDCAN_IE, 6, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using TCE = FDCAN_FDCAN_IE_TCE_Values<FDCAN::FDCAN_IE, 7, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using TCFE = FDCAN_FDCAN_IE_TCFE_Values<FDCAN::FDCAN_IE, 8, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using TFEE = FDCAN_FDCAN_IE_TFEE_Values<FDCAN::FDCAN_IE, 9, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using TEFNE = FDCAN_FDCAN_IE_TEFNE_Values<FDCAN::FDCAN_IE, 10, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using TEFFE = FDCAN_FDCAN_IE_TEFFE_Values<FDCAN::FDCAN_IE, 11, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using TEFLE = FDCAN_FDCAN_IE_TEFLE_Values<FDCAN::FDCAN_IE, 12, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using TSWE = FDCAN_FDCAN_IE_TSWE_Values<FDCAN::FDCAN_IE, 13, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using MRAFE = FDCAN_FDCAN_IE_MRAFE_Values<FDCAN::FDCAN_IE, 14, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using TOOE = FDCAN_FDCAN_IE_TOOE_Values<FDCAN::FDCAN_IE, 15, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using ELOE = FDCAN_FDCAN_IE_ELOE_Values<FDCAN::FDCAN_IE, 16, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using EPE = FDCAN_FDCAN_IE_EPE_Values<FDCAN::FDCAN_IE, 17, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using EWE = FDCAN_FDCAN_IE_EWE_Values<FDCAN::FDCAN_IE, 18, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using BOE = FDCAN_FDCAN_IE_BOE_Values<FDCAN::FDCAN_IE, 19, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using WDIE = FDCAN_FDCAN_IE_WDIE_Values<FDCAN::FDCAN_IE, 20, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using PEAE = FDCAN_FDCAN_IE_PEAE_Values<FDCAN::FDCAN_IE, 21, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using PEDE = FDCAN_FDCAN_IE_PEDE_Values<FDCAN::FDCAN_IE, 22, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using ARAE = FDCAN_FDCAN_IE_ARAE_Values<FDCAN::FDCAN_IE, 23, 1, ReadWriteMode, FDCANFDCAN_IEBase> ;
    using FieldValues = FDCAN_FDCAN_IE_ARAE_Values<FDCAN::FDCAN_IE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_IEPack  = Register<0x4000A454, 32, ReadWriteMode, FDCANFDCAN_IEBase, T...> ;

  struct FDCANFDCAN_ILSBase {} ;

  struct FDCAN_ILS : public RegisterBase<0x4000A458, 32, ReadWriteMode>
  {
    using RXFIFO0 = FDCAN_FDCAN_ILS_RXFIFO0_Values<FDCAN::FDCAN_ILS, 0, 1, ReadWriteMode, FDCANFDCAN_ILSBase> ;
    using RXFIFO1 = FDCAN_FDCAN_ILS_RXFIFO1_Values<FDCAN::FDCAN_ILS, 1, 1, ReadWriteMode, FDCANFDCAN_ILSBase> ;
    using SMSG = FDCAN_FDCAN_ILS_SMSG_Values<FDCAN::FDCAN_ILS, 2, 1, ReadWriteMode, FDCANFDCAN_ILSBase> ;
    using TFERR = FDCAN_FDCAN_ILS_TFERR_Values<FDCAN::FDCAN_ILS, 3, 1, ReadWriteMode, FDCANFDCAN_ILSBase> ;
    using MISC = FDCAN_FDCAN_ILS_MISC_Values<FDCAN::FDCAN_ILS, 4, 1, ReadWriteMode, FDCANFDCAN_ILSBase> ;
    using BERR = FDCAN_FDCAN_ILS_BERR_Values<FDCAN::FDCAN_ILS, 5, 1, ReadWriteMode, FDCANFDCAN_ILSBase> ;
    using PERR = FDCAN_FDCAN_ILS_PERR_Values<FDCAN::FDCAN_ILS, 6, 1, ReadWriteMode, FDCANFDCAN_ILSBase> ;
    using FieldValues = FDCAN_FDCAN_ILS_PERR_Values<FDCAN::FDCAN_ILS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ILSPack  = Register<0x4000A458, 32, ReadWriteMode, FDCANFDCAN_ILSBase, T...> ;

  struct FDCANFDCAN_ILEBase {} ;

  struct FDCAN_ILE : public RegisterBase<0x4000A45C, 32, ReadWriteMode>
  {
    using EINT0 = FDCAN_FDCAN_ILE_EINT0_Values<FDCAN::FDCAN_ILE, 0, 1, ReadWriteMode, FDCANFDCAN_ILEBase> ;
    using EINT1 = FDCAN_FDCAN_ILE_EINT1_Values<FDCAN::FDCAN_ILE, 1, 1, ReadWriteMode, FDCANFDCAN_ILEBase> ;
    using FieldValues = FDCAN_FDCAN_ILE_EINT1_Values<FDCAN::FDCAN_ILE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_ILEPack  = Register<0x4000A45C, 32, ReadWriteMode, FDCANFDCAN_ILEBase, T...> ;

  struct FDCANFDCAN_RXGFCBase {} ;

  struct FDCAN_RXGFC : public RegisterBase<0x4000A480, 32, ReadWriteMode>
  {
    using RRFE = FDCAN_FDCAN_RXGFC_RRFE_Values<FDCAN::FDCAN_RXGFC, 0, 1, ReadWriteMode, FDCANFDCAN_RXGFCBase> ;
    using RRFS = FDCAN_FDCAN_RXGFC_RRFS_Values<FDCAN::FDCAN_RXGFC, 1, 1, ReadWriteMode, FDCANFDCAN_RXGFCBase> ;
    using ANFE = FDCAN_FDCAN_RXGFC_ANFE_Values<FDCAN::FDCAN_RXGFC, 2, 2, ReadWriteMode, FDCANFDCAN_RXGFCBase> ;
    using ANFS = FDCAN_FDCAN_RXGFC_ANFS_Values<FDCAN::FDCAN_RXGFC, 4, 2, ReadWriteMode, FDCANFDCAN_RXGFCBase> ;
    using F1OM = FDCAN_FDCAN_RXGFC_F1OM_Values<FDCAN::FDCAN_RXGFC, 8, 1, ReadWriteMode, FDCANFDCAN_RXGFCBase> ;
    using F0OM = FDCAN_FDCAN_RXGFC_F0OM_Values<FDCAN::FDCAN_RXGFC, 9, 1, ReadWriteMode, FDCANFDCAN_RXGFCBase> ;
    using LSS = FDCAN_FDCAN_RXGFC_LSS_Values<FDCAN::FDCAN_RXGFC, 16, 5, ReadWriteMode, FDCANFDCAN_RXGFCBase> ;
    using LSE = FDCAN_FDCAN_RXGFC_LSE_Values<FDCAN::FDCAN_RXGFC, 24, 4, ReadWriteMode, FDCANFDCAN_RXGFCBase> ;
    using FieldValues = FDCAN_FDCAN_RXGFC_LSE_Values<FDCAN::FDCAN_RXGFC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXGFCPack  = Register<0x4000A480, 32, ReadWriteMode, FDCANFDCAN_RXGFCBase, T...> ;

  struct FDCANFDCAN_XIDAMBase {} ;

  struct FDCAN_XIDAM : public RegisterBase<0x4000A484, 32, ReadWriteMode>
  {
    using EIDM = FDCAN_FDCAN_XIDAM_EIDM_Values<FDCAN::FDCAN_XIDAM, 0, 29, ReadWriteMode, FDCANFDCAN_XIDAMBase> ;
    using FieldValues = FDCAN_FDCAN_XIDAM_EIDM_Values<FDCAN::FDCAN_XIDAM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_XIDAMPack  = Register<0x4000A484, 32, ReadWriteMode, FDCANFDCAN_XIDAMBase, T...> ;

  struct FDCANFDCAN_HPMSBase {} ;

  struct FDCAN_HPMS : public RegisterBase<0x4000A488, 32, ReadWriteMode>
  {
    using BIDX = FDCAN_FDCAN_HPMS_BIDX_Values<FDCAN::FDCAN_HPMS, 0, 3, ReadMode, FDCANFDCAN_HPMSBase> ;
    using MSI = FDCAN_FDCAN_HPMS_MSI_Values<FDCAN::FDCAN_HPMS, 6, 2, ReadMode, FDCANFDCAN_HPMSBase> ;
    using FIDX = FDCAN_FDCAN_HPMS_FIDX_Values<FDCAN::FDCAN_HPMS, 8, 5, ReadMode, FDCANFDCAN_HPMSBase> ;
    using FLST = FDCAN_FDCAN_HPMS_FLST_Values<FDCAN::FDCAN_HPMS, 15, 1, ReadMode, FDCANFDCAN_HPMSBase> ;
    using FieldValues = FDCAN_FDCAN_HPMS_FLST_Values<FDCAN::FDCAN_HPMS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_HPMSPack  = Register<0x4000A488, 32, ReadWriteMode, FDCANFDCAN_HPMSBase, T...> ;

  struct FDCANFDCAN_RXF0SBase {} ;

  struct FDCAN_RXF0S : public RegisterBase<0x4000A490, 32, ReadWriteMode>
  {
    using F0FL = FDCAN_FDCAN_RXF0S_F0FL_Values<FDCAN::FDCAN_RXF0S, 0, 4, ReadMode, FDCANFDCAN_RXF0SBase> ;
    using F0GI = FDCAN_FDCAN_RXF0S_F0GI_Values<FDCAN::FDCAN_RXF0S, 8, 2, ReadMode, FDCANFDCAN_RXF0SBase> ;
    using F0PI = FDCAN_FDCAN_RXF0S_F0PI_Values<FDCAN::FDCAN_RXF0S, 16, 2, ReadMode, FDCANFDCAN_RXF0SBase> ;
    using F0F = FDCAN_FDCAN_RXF0S_F0F_Values<FDCAN::FDCAN_RXF0S, 24, 1, ReadMode, FDCANFDCAN_RXF0SBase> ;
    using RF0L = FDCAN_FDCAN_RXF0S_RF0L_Values<FDCAN::FDCAN_RXF0S, 25, 1, ReadMode, FDCANFDCAN_RXF0SBase> ;
    using FieldValues = FDCAN_FDCAN_RXF0S_RF0L_Values<FDCAN::FDCAN_RXF0S, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF0SPack  = Register<0x4000A490, 32, ReadWriteMode, FDCANFDCAN_RXF0SBase, T...> ;

  struct FDCANFDCAN_RXF0ABase {} ;

  struct FDCAN_RXF0A : public RegisterBase<0x4000A494, 32, ReadWriteMode>
  {
    using F0AI = FDCAN_FDCAN_RXF0A_F0AI_Values<FDCAN::FDCAN_RXF0A, 0, 3, ReadWriteMode, FDCANFDCAN_RXF0ABase> ;
    using FieldValues = FDCAN_FDCAN_RXF0A_F0AI_Values<FDCAN::FDCAN_RXF0A, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF0APack  = Register<0x4000A494, 32, ReadWriteMode, FDCANFDCAN_RXF0ABase, T...> ;

  struct FDCANFDCAN_RXF1SBase {} ;

  struct FDCAN_RXF1S : public RegisterBase<0x4000A498, 32, ReadWriteMode>
  {
    using F1FL = FDCAN_FDCAN_RXF1S_F1FL_Values<FDCAN::FDCAN_RXF1S, 0, 4, ReadMode, FDCANFDCAN_RXF1SBase> ;
    using F1GI = FDCAN_FDCAN_RXF1S_F1GI_Values<FDCAN::FDCAN_RXF1S, 8, 2, ReadMode, FDCANFDCAN_RXF1SBase> ;
    using F1PI = FDCAN_FDCAN_RXF1S_F1PI_Values<FDCAN::FDCAN_RXF1S, 16, 2, ReadMode, FDCANFDCAN_RXF1SBase> ;
    using F1F = FDCAN_FDCAN_RXF1S_F1F_Values<FDCAN::FDCAN_RXF1S, 24, 1, ReadMode, FDCANFDCAN_RXF1SBase> ;
    using RF1L = FDCAN_FDCAN_RXF1S_RF1L_Values<FDCAN::FDCAN_RXF1S, 25, 1, ReadMode, FDCANFDCAN_RXF1SBase> ;
    using FieldValues = FDCAN_FDCAN_RXF1S_RF1L_Values<FDCAN::FDCAN_RXF1S, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF1SPack  = Register<0x4000A498, 32, ReadWriteMode, FDCANFDCAN_RXF1SBase, T...> ;

  struct FDCANFDCAN_RXF1ABase {} ;

  struct FDCAN_RXF1A : public RegisterBase<0x4000A49C, 32, ReadWriteMode>
  {
    using F1AI = FDCAN_FDCAN_RXF1A_F1AI_Values<FDCAN::FDCAN_RXF1A, 0, 3, ReadWriteMode, FDCANFDCAN_RXF1ABase> ;
    using FieldValues = FDCAN_FDCAN_RXF1A_F1AI_Values<FDCAN::FDCAN_RXF1A, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_RXF1APack  = Register<0x4000A49C, 32, ReadWriteMode, FDCANFDCAN_RXF1ABase, T...> ;

  struct FDCANFDCAN_TXBCBase {} ;

  struct FDCAN_TXBC : public RegisterBase<0x4000A4C0, 32, ReadWriteMode>
  {
    using TFQM = FDCAN_FDCAN_TXBC_TFQM_Values<FDCAN::FDCAN_TXBC, 24, 1, ReadWriteMode, FDCANFDCAN_TXBCBase> ;
    using FieldValues = FDCAN_FDCAN_TXBC_TFQM_Values<FDCAN::FDCAN_TXBC, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCPack  = Register<0x4000A4C0, 32, ReadWriteMode, FDCANFDCAN_TXBCBase, T...> ;

  struct FDCANFDCAN_TXFQSBase {} ;

  struct FDCAN_TXFQS : public RegisterBase<0x4000A4C4, 32, ReadWriteMode>
  {
    using TFFL = FDCAN_FDCAN_TXFQS_TFFL_Values<FDCAN::FDCAN_TXFQS, 0, 3, ReadMode, FDCANFDCAN_TXFQSBase> ;
    using TFGI = FDCAN_FDCAN_TXFQS_TFGI_Values<FDCAN::FDCAN_TXFQS, 8, 2, ReadMode, FDCANFDCAN_TXFQSBase> ;
    using TFQPI = FDCAN_FDCAN_TXFQS_TFQPI_Values<FDCAN::FDCAN_TXFQS, 16, 2, ReadMode, FDCANFDCAN_TXFQSBase> ;
    using TFQF = FDCAN_FDCAN_TXFQS_TFQF_Values<FDCAN::FDCAN_TXFQS, 21, 1, ReadMode, FDCANFDCAN_TXFQSBase> ;
    using FieldValues = FDCAN_FDCAN_TXFQS_TFQF_Values<FDCAN::FDCAN_TXFQS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXFQSPack  = Register<0x4000A4C4, 32, ReadWriteMode, FDCANFDCAN_TXFQSBase, T...> ;

  struct FDCANFDCAN_TXBRPBase {} ;

  struct FDCAN_TXBRP : public RegisterBase<0x4000A4C8, 32, ReadWriteMode>
  {
    using TRP = FDCAN_FDCAN_TXBRP_TRP_Values<FDCAN::FDCAN_TXBRP, 0, 3, ReadMode, FDCANFDCAN_TXBRPBase> ;
    using FieldValues = FDCAN_FDCAN_TXBRP_TRP_Values<FDCAN::FDCAN_TXBRP, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBRPPack  = Register<0x4000A4C8, 32, ReadWriteMode, FDCANFDCAN_TXBRPBase, T...> ;

  struct FDCANFDCAN_TXBARBase {} ;

  struct FDCAN_TXBAR : public RegisterBase<0x4000A4CC, 32, ReadWriteMode>
  {
    using AR = FDCAN_FDCAN_TXBAR_AR_Values<FDCAN::FDCAN_TXBAR, 0, 3, ReadWriteMode, FDCANFDCAN_TXBARBase> ;
    using FieldValues = FDCAN_FDCAN_TXBAR_AR_Values<FDCAN::FDCAN_TXBAR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBARPack  = Register<0x4000A4CC, 32, ReadWriteMode, FDCANFDCAN_TXBARBase, T...> ;

  struct FDCANFDCAN_TXBCRBase {} ;

  struct FDCAN_TXBCR : public RegisterBase<0x4000A4D0, 32, ReadWriteMode>
  {
    using CR = FDCAN_FDCAN_TXBCR_CR_Values<FDCAN::FDCAN_TXBCR, 0, 3, ReadWriteMode, FDCANFDCAN_TXBCRBase> ;
    using FieldValues = FDCAN_FDCAN_TXBCR_CR_Values<FDCAN::FDCAN_TXBCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCRPack  = Register<0x4000A4D0, 32, ReadWriteMode, FDCANFDCAN_TXBCRBase, T...> ;

  struct FDCANFDCAN_TXBTOBase {} ;

  struct FDCAN_TXBTO : public RegisterBase<0x4000A4D4, 32, ReadWriteMode>
  {
    using TO = FDCAN_FDCAN_TXBTO_TO_Values<FDCAN::FDCAN_TXBTO, 0, 3, ReadMode, FDCANFDCAN_TXBTOBase> ;
    using FieldValues = FDCAN_FDCAN_TXBTO_TO_Values<FDCAN::FDCAN_TXBTO, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBTOPack  = Register<0x4000A4D4, 32, ReadWriteMode, FDCANFDCAN_TXBTOBase, T...> ;

  struct FDCANFDCAN_TXBCFBase {} ;

  struct FDCAN_TXBCF : public RegisterBase<0x4000A4D8, 32, ReadWriteMode>
  {
    using CF = FDCAN_FDCAN_TXBCF_CF_Values<FDCAN::FDCAN_TXBCF, 0, 3, ReadMode, FDCANFDCAN_TXBCFBase> ;
    using FieldValues = FDCAN_FDCAN_TXBCF_CF_Values<FDCAN::FDCAN_TXBCF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCFPack  = Register<0x4000A4D8, 32, ReadWriteMode, FDCANFDCAN_TXBCFBase, T...> ;

  struct FDCANFDCAN_TXBTIEBase {} ;

  struct FDCAN_TXBTIE : public RegisterBase<0x4000A4DC, 32, ReadWriteMode>
  {
    using TIE = FDCAN_FDCAN_TXBTIE_TIE_Values<FDCAN::FDCAN_TXBTIE, 0, 3, ReadWriteMode, FDCANFDCAN_TXBTIEBase> ;
    using FieldValues = FDCAN_FDCAN_TXBTIE_TIE_Values<FDCAN::FDCAN_TXBTIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBTIEPack  = Register<0x4000A4DC, 32, ReadWriteMode, FDCANFDCAN_TXBTIEBase, T...> ;

  struct FDCANFDCAN_TXBCIEBase {} ;

  struct FDCAN_TXBCIE : public RegisterBase<0x4000A4E0, 32, ReadWriteMode>
  {
    using CFIE = FDCAN_FDCAN_TXBCIE_CFIE_Values<FDCAN::FDCAN_TXBCIE, 0, 3, ReadWriteMode, FDCANFDCAN_TXBCIEBase> ;
    using FieldValues = FDCAN_FDCAN_TXBCIE_CFIE_Values<FDCAN::FDCAN_TXBCIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXBCIEPack  = Register<0x4000A4E0, 32, ReadWriteMode, FDCANFDCAN_TXBCIEBase, T...> ;

  struct FDCANFDCAN_TXEFSBase {} ;

  struct FDCAN_TXEFS : public RegisterBase<0x4000A4E4, 32, ReadWriteMode>
  {
    using EFFL = FDCAN_FDCAN_TXEFS_EFFL_Values<FDCAN::FDCAN_TXEFS, 0, 3, ReadMode, FDCANFDCAN_TXEFSBase> ;
    using EFGI = FDCAN_FDCAN_TXEFS_EFGI_Values<FDCAN::FDCAN_TXEFS, 8, 2, ReadMode, FDCANFDCAN_TXEFSBase> ;
    using EFPI = FDCAN_FDCAN_TXEFS_EFPI_Values<FDCAN::FDCAN_TXEFS, 16, 2, ReadMode, FDCANFDCAN_TXEFSBase> ;
    using EFF = FDCAN_FDCAN_TXEFS_EFF_Values<FDCAN::FDCAN_TXEFS, 24, 1, ReadMode, FDCANFDCAN_TXEFSBase> ;
    using TEFL = FDCAN_FDCAN_TXEFS_TEFL_Values<FDCAN::FDCAN_TXEFS, 25, 1, ReadMode, FDCANFDCAN_TXEFSBase> ;
    using FieldValues = FDCAN_FDCAN_TXEFS_TEFL_Values<FDCAN::FDCAN_TXEFS, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXEFSPack  = Register<0x4000A4E4, 32, ReadWriteMode, FDCANFDCAN_TXEFSBase, T...> ;

  struct FDCANFDCAN_TXEFABase {} ;

  struct FDCAN_TXEFA : public RegisterBase<0x4000A4E8, 32, ReadWriteMode>
  {
    using EFAI = FDCAN_FDCAN_TXEFA_EFAI_Values<FDCAN::FDCAN_TXEFA, 0, 2, ReadWriteMode, FDCANFDCAN_TXEFABase> ;
    using FieldValues = FDCAN_FDCAN_TXEFA_EFAI_Values<FDCAN::FDCAN_TXEFA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_TXEFAPack  = Register<0x4000A4E8, 32, ReadWriteMode, FDCANFDCAN_TXEFABase, T...> ;

  struct FDCANFDCAN_CKDIVBase {} ;

  struct FDCAN_CKDIV : public RegisterBase<0x4000A500, 32, ReadWriteMode>
  {
    using PDIV = FDCAN_FDCAN_CKDIV_PDIV_Values<FDCAN::FDCAN_CKDIV, 0, 4, ReadWriteMode, FDCANFDCAN_CKDIVBase> ;
    using FieldValues = FDCAN_FDCAN_CKDIV_PDIV_Values<FDCAN::FDCAN_CKDIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FDCAN_CKDIVPack  = Register<0x4000A500, 32, ReadWriteMode, FDCANFDCAN_CKDIVBase, T...> ;

} ;

