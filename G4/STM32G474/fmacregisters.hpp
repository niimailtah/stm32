/*******************************************************************************
* Filename      : fmacregisters.hpp
*
* Details       : Filter Math Accelerator. This header file is auto-generated
*                 for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "fmacfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct FMAC
{
  struct FMACX1BUFCFGBase {} ;

  struct X1BUFCFG : public RegisterBase<0x40021400, 32, ReadWriteMode>
  {
    using X1_BASE = FMAC_X1BUFCFG_X1_BASE_Values<FMAC::X1BUFCFG, 0, 8, ReadWriteMode, FMACX1BUFCFGBase> ;
    using X1_BUF_SIZE = FMAC_X1BUFCFG_X1_BUF_SIZE_Values<FMAC::X1BUFCFG, 8, 8, ReadWriteMode, FMACX1BUFCFGBase> ;
    using FULL_WM = FMAC_X1BUFCFG_FULL_WM_Values<FMAC::X1BUFCFG, 24, 2, ReadWriteMode, FMACX1BUFCFGBase> ;
    using FieldValues = FMAC_X1BUFCFG_FULL_WM_Values<FMAC::X1BUFCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using X1BUFCFGPack  = Register<0x40021400, 32, ReadWriteMode, FMACX1BUFCFGBase, T...> ;

  struct FMACX2BUFCFGBase {} ;

  struct X2BUFCFG : public RegisterBase<0x40021404, 32, ReadWriteMode>
  {
    using X2_BASE = FMAC_X2BUFCFG_X2_BASE_Values<FMAC::X2BUFCFG, 0, 8, ReadWriteMode, FMACX2BUFCFGBase> ;
    using X2_BUF_SIZE = FMAC_X2BUFCFG_X2_BUF_SIZE_Values<FMAC::X2BUFCFG, 8, 8, ReadWriteMode, FMACX2BUFCFGBase> ;
    using FieldValues = FMAC_X2BUFCFG_X2_BUF_SIZE_Values<FMAC::X2BUFCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using X2BUFCFGPack  = Register<0x40021404, 32, ReadWriteMode, FMACX2BUFCFGBase, T...> ;

  struct FMACYBUFCFGBase {} ;

  struct YBUFCFG : public RegisterBase<0x40021408, 32, ReadWriteMode>
  {
    using Y_BASE = FMAC_YBUFCFG_Y_BASE_Values<FMAC::YBUFCFG, 0, 8, ReadWriteMode, FMACYBUFCFGBase> ;
    using Y_BUF_SIZE = FMAC_YBUFCFG_Y_BUF_SIZE_Values<FMAC::YBUFCFG, 8, 8, ReadWriteMode, FMACYBUFCFGBase> ;
    using EMPTY_WM = FMAC_YBUFCFG_EMPTY_WM_Values<FMAC::YBUFCFG, 24, 2, ReadWriteMode, FMACYBUFCFGBase> ;
    using FieldValues = FMAC_YBUFCFG_EMPTY_WM_Values<FMAC::YBUFCFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using YBUFCFGPack  = Register<0x40021408, 32, ReadWriteMode, FMACYBUFCFGBase, T...> ;

  struct FMACPARAMBase {} ;

  struct PARAM : public RegisterBase<0x4002140C, 32, ReadWriteMode>
  {
    using START = FMAC_PARAM_START_Values<FMAC::PARAM, 31, 1, ReadWriteMode, FMACPARAMBase> ;
    using FUNC = FMAC_PARAM_FUNC_Values<FMAC::PARAM, 24, 7, ReadWriteMode, FMACPARAMBase> ;
    using R = FMAC_PARAM_R_Values<FMAC::PARAM, 16, 8, ReadWriteMode, FMACPARAMBase> ;
    using Q = FMAC_PARAM_Q_Values<FMAC::PARAM, 8, 8, ReadWriteMode, FMACPARAMBase> ;
    using P = FMAC_PARAM_P_Values<FMAC::PARAM, 0, 8, ReadWriteMode, FMACPARAMBase> ;
    using FieldValues = FMAC_PARAM_P_Values<FMAC::PARAM, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PARAMPack  = Register<0x4002140C, 32, ReadWriteMode, FMACPARAMBase, T...> ;

  struct FMACCRBase {} ;

  struct CR : public RegisterBase<0x40021410, 32, ReadWriteMode>
  {
    using RESET = FMAC_CR_RESET_Values<FMAC::CR, 16, 1, ReadWriteMode, FMACCRBase> ;
    using CLIPEN = FMAC_CR_CLIPEN_Values<FMAC::CR, 15, 1, ReadWriteMode, FMACCRBase> ;
    using DMAWEN = FMAC_CR_DMAWEN_Values<FMAC::CR, 9, 1, ReadWriteMode, FMACCRBase> ;
    using DMAREN = FMAC_CR_DMAREN_Values<FMAC::CR, 8, 1, ReadWriteMode, FMACCRBase> ;
    using SATIEN = FMAC_CR_SATIEN_Values<FMAC::CR, 4, 1, ReadWriteMode, FMACCRBase> ;
    using UNFLIEN = FMAC_CR_UNFLIEN_Values<FMAC::CR, 3, 1, ReadWriteMode, FMACCRBase> ;
    using OVFLIEN = FMAC_CR_OVFLIEN_Values<FMAC::CR, 2, 1, ReadWriteMode, FMACCRBase> ;
    using WIEN = FMAC_CR_WIEN_Values<FMAC::CR, 1, 1, ReadWriteMode, FMACCRBase> ;
    using RIEN = FMAC_CR_RIEN_Values<FMAC::CR, 0, 1, ReadWriteMode, FMACCRBase> ;
    using FieldValues = FMAC_CR_RIEN_Values<FMAC::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x40021410, 32, ReadWriteMode, FMACCRBase, T...> ;

  struct FMACSRBase {} ;

  struct SR : public RegisterBase<0x40021414, 32, ReadMode>
  {
    using YEMPTY = FMAC_SR_YEMPTY_Values<FMAC::SR, 0, 1, ReadMode, FMACSRBase> ;
    using X1FULL = FMAC_SR_X1FULL_Values<FMAC::SR, 1, 1, ReadMode, FMACSRBase> ;
    using OVFL = FMAC_SR_OVFL_Values<FMAC::SR, 8, 1, ReadMode, FMACSRBase> ;
    using UNFL = FMAC_SR_UNFL_Values<FMAC::SR, 9, 1, ReadMode, FMACSRBase> ;
    using SAT = FMAC_SR_SAT_Values<FMAC::SR, 10, 1, ReadMode, FMACSRBase> ;
    using FieldValues = FMAC_SR_SAT_Values<FMAC::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40021414, 32, ReadMode, FMACSRBase, T...> ;

  struct FMACWDATABase {} ;

  struct WDATA : public RegisterBase<0x40021418, 32, WriteMode>
  {
    using WDATAField = FMAC_WDATA_WDATA_Values<FMAC::WDATA, 0, 16, WriteMode, FMACWDATABase> ;
    using FieldValues = FMAC_WDATA_WDATA_Values<FMAC::WDATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WDATAPack  = Register<0x40021418, 32, WriteMode, FMACWDATABase, T...> ;

  struct FMACRDATABase {} ;

  struct RDATA : public RegisterBase<0x4002141C, 32, ReadMode>
  {
    using RDATAField = FMAC_RDATA_RDATA_Values<FMAC::RDATA, 0, 16, ReadMode, FMACRDATABase> ;
    using FieldValues = FMAC_RDATA_RDATA_Values<FMAC::RDATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDATAPack  = Register<0x4002141C, 32, ReadMode, FMACRDATABase, T...> ;

} ;

