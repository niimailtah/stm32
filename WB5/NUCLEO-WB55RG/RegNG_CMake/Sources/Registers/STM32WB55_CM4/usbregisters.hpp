/*******************************************************************************
* Filename      : usbregisters.hpp
*
* Details       : Universal serial bus full-speed device interface. This header
*                 file is auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "usbfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USB
{
  struct USBEP0RBase {} ;

  struct EP0R : public RegisterBase<0x40006800, 16, ReadWriteMode>
  {
    using EA = USB_EP0R_EA_Values<USB::EP0R, 0, 4, ReadWriteMode, USBEP0RBase> ;
    using STAT_TX = USB_EP0R_STAT_TX_Values<USB::EP0R, 4, 2, ReadWriteMode, USBEP0RBase> ;
    using DTOG_TX = USB_EP0R_DTOG_TX_Values<USB::EP0R, 6, 1, ReadWriteMode, USBEP0RBase> ;
    using CTR_TX = USB_EP0R_CTR_TX_Values<USB::EP0R, 7, 1, ReadWriteMode, USBEP0RBase> ;
    using EP_KIND = USB_EP0R_EP_KIND_Values<USB::EP0R, 8, 1, ReadWriteMode, USBEP0RBase> ;
    using EP_TYPE = USB_EP0R_EP_TYPE_Values<USB::EP0R, 9, 2, ReadWriteMode, USBEP0RBase> ;
    using SETUP = USB_EP0R_SETUP_Values<USB::EP0R, 11, 1, ReadWriteMode, USBEP0RBase> ;
    using STAT_RX = USB_EP0R_STAT_RX_Values<USB::EP0R, 12, 2, ReadWriteMode, USBEP0RBase> ;
    using DTOG_RX = USB_EP0R_DTOG_RX_Values<USB::EP0R, 14, 1, ReadWriteMode, USBEP0RBase> ;
    using CTR_RX = USB_EP0R_CTR_RX_Values<USB::EP0R, 15, 1, ReadWriteMode, USBEP0RBase> ;
    using FieldValues = USB_EP0R_CTR_RX_Values<USB::EP0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP0RPack  = Register<0x40006800, 16, ReadWriteMode, USBEP0RBase, T...> ;

  struct USBEP1RBase {} ;

  struct EP1R : public RegisterBase<0x40006804, 16, ReadWriteMode>
  {
    using EA = USB_EP1R_EA_Values<USB::EP1R, 0, 4, ReadWriteMode, USBEP1RBase> ;
    using STAT_TX = USB_EP1R_STAT_TX_Values<USB::EP1R, 4, 2, ReadWriteMode, USBEP1RBase> ;
    using DTOG_TX = USB_EP1R_DTOG_TX_Values<USB::EP1R, 6, 1, ReadWriteMode, USBEP1RBase> ;
    using CTR_TX = USB_EP1R_CTR_TX_Values<USB::EP1R, 7, 1, ReadWriteMode, USBEP1RBase> ;
    using EP_KIND = USB_EP1R_EP_KIND_Values<USB::EP1R, 8, 1, ReadWriteMode, USBEP1RBase> ;
    using EP_TYPE = USB_EP1R_EP_TYPE_Values<USB::EP1R, 9, 2, ReadWriteMode, USBEP1RBase> ;
    using SETUP = USB_EP1R_SETUP_Values<USB::EP1R, 11, 1, ReadWriteMode, USBEP1RBase> ;
    using STAT_RX = USB_EP1R_STAT_RX_Values<USB::EP1R, 12, 2, ReadWriteMode, USBEP1RBase> ;
    using DTOG_RX = USB_EP1R_DTOG_RX_Values<USB::EP1R, 14, 1, ReadWriteMode, USBEP1RBase> ;
    using CTR_RX = USB_EP1R_CTR_RX_Values<USB::EP1R, 15, 1, ReadWriteMode, USBEP1RBase> ;
    using FieldValues = USB_EP1R_CTR_RX_Values<USB::EP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP1RPack  = Register<0x40006804, 16, ReadWriteMode, USBEP1RBase, T...> ;

  struct USBEP2RBase {} ;

  struct EP2R : public RegisterBase<0x40006808, 16, ReadWriteMode>
  {
    using EA = USB_EP2R_EA_Values<USB::EP2R, 0, 4, ReadWriteMode, USBEP2RBase> ;
    using STAT_TX = USB_EP2R_STAT_TX_Values<USB::EP2R, 4, 2, ReadWriteMode, USBEP2RBase> ;
    using DTOG_TX = USB_EP2R_DTOG_TX_Values<USB::EP2R, 6, 1, ReadWriteMode, USBEP2RBase> ;
    using CTR_TX = USB_EP2R_CTR_TX_Values<USB::EP2R, 7, 1, ReadWriteMode, USBEP2RBase> ;
    using EP_KIND = USB_EP2R_EP_KIND_Values<USB::EP2R, 8, 1, ReadWriteMode, USBEP2RBase> ;
    using EP_TYPE = USB_EP2R_EP_TYPE_Values<USB::EP2R, 9, 2, ReadWriteMode, USBEP2RBase> ;
    using SETUP = USB_EP2R_SETUP_Values<USB::EP2R, 11, 1, ReadWriteMode, USBEP2RBase> ;
    using STAT_RX = USB_EP2R_STAT_RX_Values<USB::EP2R, 12, 2, ReadWriteMode, USBEP2RBase> ;
    using DTOG_RX = USB_EP2R_DTOG_RX_Values<USB::EP2R, 14, 1, ReadWriteMode, USBEP2RBase> ;
    using CTR_RX = USB_EP2R_CTR_RX_Values<USB::EP2R, 15, 1, ReadWriteMode, USBEP2RBase> ;
    using FieldValues = USB_EP2R_CTR_RX_Values<USB::EP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP2RPack  = Register<0x40006808, 16, ReadWriteMode, USBEP2RBase, T...> ;

  struct USBEP3RBase {} ;

  struct EP3R : public RegisterBase<0x4000680C, 16, ReadWriteMode>
  {
    using EA = USB_EP3R_EA_Values<USB::EP3R, 0, 4, ReadWriteMode, USBEP3RBase> ;
    using STAT_TX = USB_EP3R_STAT_TX_Values<USB::EP3R, 4, 2, ReadWriteMode, USBEP3RBase> ;
    using DTOG_TX = USB_EP3R_DTOG_TX_Values<USB::EP3R, 6, 1, ReadWriteMode, USBEP3RBase> ;
    using CTR_TX = USB_EP3R_CTR_TX_Values<USB::EP3R, 7, 1, ReadWriteMode, USBEP3RBase> ;
    using EP_KIND = USB_EP3R_EP_KIND_Values<USB::EP3R, 8, 1, ReadWriteMode, USBEP3RBase> ;
    using EP_TYPE = USB_EP3R_EP_TYPE_Values<USB::EP3R, 9, 2, ReadWriteMode, USBEP3RBase> ;
    using SETUP = USB_EP3R_SETUP_Values<USB::EP3R, 11, 1, ReadWriteMode, USBEP3RBase> ;
    using STAT_RX = USB_EP3R_STAT_RX_Values<USB::EP3R, 12, 2, ReadWriteMode, USBEP3RBase> ;
    using DTOG_RX = USB_EP3R_DTOG_RX_Values<USB::EP3R, 14, 1, ReadWriteMode, USBEP3RBase> ;
    using CTR_RX = USB_EP3R_CTR_RX_Values<USB::EP3R, 15, 1, ReadWriteMode, USBEP3RBase> ;
    using FieldValues = USB_EP3R_CTR_RX_Values<USB::EP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP3RPack  = Register<0x4000680C, 16, ReadWriteMode, USBEP3RBase, T...> ;

  struct USBEP4RBase {} ;

  struct EP4R : public RegisterBase<0x40006810, 16, ReadWriteMode>
  {
    using EA = USB_EP4R_EA_Values<USB::EP4R, 0, 4, ReadWriteMode, USBEP4RBase> ;
    using STAT_TX = USB_EP4R_STAT_TX_Values<USB::EP4R, 4, 2, ReadWriteMode, USBEP4RBase> ;
    using DTOG_TX = USB_EP4R_DTOG_TX_Values<USB::EP4R, 6, 1, ReadWriteMode, USBEP4RBase> ;
    using CTR_TX = USB_EP4R_CTR_TX_Values<USB::EP4R, 7, 1, ReadWriteMode, USBEP4RBase> ;
    using EP_KIND = USB_EP4R_EP_KIND_Values<USB::EP4R, 8, 1, ReadWriteMode, USBEP4RBase> ;
    using EP_TYPE = USB_EP4R_EP_TYPE_Values<USB::EP4R, 9, 2, ReadWriteMode, USBEP4RBase> ;
    using SETUP = USB_EP4R_SETUP_Values<USB::EP4R, 11, 1, ReadWriteMode, USBEP4RBase> ;
    using STAT_RX = USB_EP4R_STAT_RX_Values<USB::EP4R, 12, 2, ReadWriteMode, USBEP4RBase> ;
    using DTOG_RX = USB_EP4R_DTOG_RX_Values<USB::EP4R, 14, 1, ReadWriteMode, USBEP4RBase> ;
    using CTR_RX = USB_EP4R_CTR_RX_Values<USB::EP4R, 15, 1, ReadWriteMode, USBEP4RBase> ;
    using FieldValues = USB_EP4R_CTR_RX_Values<USB::EP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP4RPack  = Register<0x40006810, 16, ReadWriteMode, USBEP4RBase, T...> ;

  struct USBEP5RBase {} ;

  struct EP5R : public RegisterBase<0x40006814, 16, ReadWriteMode>
  {
    using EA = USB_EP5R_EA_Values<USB::EP5R, 0, 4, ReadWriteMode, USBEP5RBase> ;
    using STAT_TX = USB_EP5R_STAT_TX_Values<USB::EP5R, 4, 2, ReadWriteMode, USBEP5RBase> ;
    using DTOG_TX = USB_EP5R_DTOG_TX_Values<USB::EP5R, 6, 1, ReadWriteMode, USBEP5RBase> ;
    using CTR_TX = USB_EP5R_CTR_TX_Values<USB::EP5R, 7, 1, ReadWriteMode, USBEP5RBase> ;
    using EP_KIND = USB_EP5R_EP_KIND_Values<USB::EP5R, 8, 1, ReadWriteMode, USBEP5RBase> ;
    using EP_TYPE = USB_EP5R_EP_TYPE_Values<USB::EP5R, 9, 2, ReadWriteMode, USBEP5RBase> ;
    using SETUP = USB_EP5R_SETUP_Values<USB::EP5R, 11, 1, ReadWriteMode, USBEP5RBase> ;
    using STAT_RX = USB_EP5R_STAT_RX_Values<USB::EP5R, 12, 2, ReadWriteMode, USBEP5RBase> ;
    using DTOG_RX = USB_EP5R_DTOG_RX_Values<USB::EP5R, 14, 1, ReadWriteMode, USBEP5RBase> ;
    using CTR_RX = USB_EP5R_CTR_RX_Values<USB::EP5R, 15, 1, ReadWriteMode, USBEP5RBase> ;
    using FieldValues = USB_EP5R_CTR_RX_Values<USB::EP5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP5RPack  = Register<0x40006814, 16, ReadWriteMode, USBEP5RBase, T...> ;

  struct USBEP6RBase {} ;

  struct EP6R : public RegisterBase<0x40006818, 16, ReadWriteMode>
  {
    using EA = USB_EP6R_EA_Values<USB::EP6R, 0, 4, ReadWriteMode, USBEP6RBase> ;
    using STAT_TX = USB_EP6R_STAT_TX_Values<USB::EP6R, 4, 2, ReadWriteMode, USBEP6RBase> ;
    using DTOG_TX = USB_EP6R_DTOG_TX_Values<USB::EP6R, 6, 1, ReadWriteMode, USBEP6RBase> ;
    using CTR_TX = USB_EP6R_CTR_TX_Values<USB::EP6R, 7, 1, ReadWriteMode, USBEP6RBase> ;
    using EP_KIND = USB_EP6R_EP_KIND_Values<USB::EP6R, 8, 1, ReadWriteMode, USBEP6RBase> ;
    using EP_TYPE = USB_EP6R_EP_TYPE_Values<USB::EP6R, 9, 2, ReadWriteMode, USBEP6RBase> ;
    using SETUP = USB_EP6R_SETUP_Values<USB::EP6R, 11, 1, ReadWriteMode, USBEP6RBase> ;
    using STAT_RX = USB_EP6R_STAT_RX_Values<USB::EP6R, 12, 2, ReadWriteMode, USBEP6RBase> ;
    using DTOG_RX = USB_EP6R_DTOG_RX_Values<USB::EP6R, 14, 1, ReadWriteMode, USBEP6RBase> ;
    using CTR_RX = USB_EP6R_CTR_RX_Values<USB::EP6R, 15, 1, ReadWriteMode, USBEP6RBase> ;
    using FieldValues = USB_EP6R_CTR_RX_Values<USB::EP6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP6RPack  = Register<0x40006818, 16, ReadWriteMode, USBEP6RBase, T...> ;

  struct USBEP7RBase {} ;

  struct EP7R : public RegisterBase<0x4000681C, 16, ReadWriteMode>
  {
    using EA = USB_EP7R_EA_Values<USB::EP7R, 0, 4, ReadWriteMode, USBEP7RBase> ;
    using STAT_TX = USB_EP7R_STAT_TX_Values<USB::EP7R, 4, 2, ReadWriteMode, USBEP7RBase> ;
    using DTOG_TX = USB_EP7R_DTOG_TX_Values<USB::EP7R, 6, 1, ReadWriteMode, USBEP7RBase> ;
    using CTR_TX = USB_EP7R_CTR_TX_Values<USB::EP7R, 7, 1, ReadWriteMode, USBEP7RBase> ;
    using EP_KIND = USB_EP7R_EP_KIND_Values<USB::EP7R, 8, 1, ReadWriteMode, USBEP7RBase> ;
    using EP_TYPE = USB_EP7R_EP_TYPE_Values<USB::EP7R, 9, 2, ReadWriteMode, USBEP7RBase> ;
    using SETUP = USB_EP7R_SETUP_Values<USB::EP7R, 11, 1, ReadWriteMode, USBEP7RBase> ;
    using STAT_RX = USB_EP7R_STAT_RX_Values<USB::EP7R, 12, 2, ReadWriteMode, USBEP7RBase> ;
    using DTOG_RX = USB_EP7R_DTOG_RX_Values<USB::EP7R, 14, 1, ReadWriteMode, USBEP7RBase> ;
    using CTR_RX = USB_EP7R_CTR_RX_Values<USB::EP7R, 15, 1, ReadWriteMode, USBEP7RBase> ;
    using FieldValues = USB_EP7R_CTR_RX_Values<USB::EP7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP7RPack  = Register<0x4000681C, 16, ReadWriteMode, USBEP7RBase, T...> ;

  struct USBCNTRBase {} ;

  struct CNTR : public RegisterBase<0x40006840, 16, ReadWriteMode>
  {
    using FRES = USB_CNTR_FRES_Values<USB::CNTR, 0, 1, ReadWriteMode, USBCNTRBase> ;
    using PDWN = USB_CNTR_PDWN_Values<USB::CNTR, 1, 1, ReadWriteMode, USBCNTRBase> ;
    using LPMODE = USB_CNTR_LPMODE_Values<USB::CNTR, 2, 1, ReadWriteMode, USBCNTRBase> ;
    using FSUSP = USB_CNTR_FSUSP_Values<USB::CNTR, 3, 1, ReadWriteMode, USBCNTRBase> ;
    using RESUME = USB_CNTR_RESUME_Values<USB::CNTR, 4, 1, ReadWriteMode, USBCNTRBase> ;
    using L1RESUME = USB_CNTR_L1RESUME_Values<USB::CNTR, 5, 1, ReadWriteMode, USBCNTRBase> ;
    using L1REQM = USB_CNTR_L1REQM_Values<USB::CNTR, 7, 1, ReadWriteMode, USBCNTRBase> ;
    using ESOFM = USB_CNTR_ESOFM_Values<USB::CNTR, 8, 1, ReadWriteMode, USBCNTRBase> ;
    using SOFM = USB_CNTR_SOFM_Values<USB::CNTR, 9, 1, ReadWriteMode, USBCNTRBase> ;
    using RESETM = USB_CNTR_RESETM_Values<USB::CNTR, 10, 1, ReadWriteMode, USBCNTRBase> ;
    using SUSPM = USB_CNTR_SUSPM_Values<USB::CNTR, 11, 1, ReadWriteMode, USBCNTRBase> ;
    using WKUPM = USB_CNTR_WKUPM_Values<USB::CNTR, 12, 1, ReadWriteMode, USBCNTRBase> ;
    using ERRM = USB_CNTR_ERRM_Values<USB::CNTR, 13, 1, ReadWriteMode, USBCNTRBase> ;
    using PMAOVRM = USB_CNTR_PMAOVRM_Values<USB::CNTR, 14, 1, ReadWriteMode, USBCNTRBase> ;
    using CTRM = USB_CNTR_CTRM_Values<USB::CNTR, 15, 1, ReadWriteMode, USBCNTRBase> ;
    using FieldValues = USB_CNTR_CTRM_Values<USB::CNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTRPack  = Register<0x40006840, 16, ReadWriteMode, USBCNTRBase, T...> ;

  struct USBISTRBase {} ;

  struct ISTR : public RegisterBase<0x40006844, 16, ReadWriteMode>
  {
    using EP_ID = USB_ISTR_EP_ID_Values<USB::ISTR, 0, 4, ReadMode, USBISTRBase> ;
    using DIR = USB_ISTR_DIR_Values<USB::ISTR, 4, 1, ReadMode, USBISTRBase> ;
    using L1REQ = USB_ISTR_L1REQ_Values<USB::ISTR, 7, 1, ReadWriteMode, USBISTRBase> ;
    using ESOF = USB_ISTR_ESOF_Values<USB::ISTR, 8, 1, ReadWriteMode, USBISTRBase> ;
    using SOF = USB_ISTR_SOF_Values<USB::ISTR, 9, 1, ReadWriteMode, USBISTRBase> ;
    using RESET = USB_ISTR_RESET_Values<USB::ISTR, 10, 1, ReadWriteMode, USBISTRBase> ;
    using SUSP = USB_ISTR_SUSP_Values<USB::ISTR, 11, 1, ReadWriteMode, USBISTRBase> ;
    using WKUP = USB_ISTR_WKUP_Values<USB::ISTR, 12, 1, ReadWriteMode, USBISTRBase> ;
    using ERR = USB_ISTR_ERR_Values<USB::ISTR, 13, 1, ReadWriteMode, USBISTRBase> ;
    using PMAOVR = USB_ISTR_PMAOVR_Values<USB::ISTR, 14, 1, ReadWriteMode, USBISTRBase> ;
    using CTR = USB_ISTR_CTR_Values<USB::ISTR, 15, 1, ReadMode, USBISTRBase> ;
    using FieldValues = USB_ISTR_CTR_Values<USB::ISTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISTRPack  = Register<0x40006844, 16, ReadWriteMode, USBISTRBase, T...> ;

  struct USBFNRBase {} ;

  struct FNR : public RegisterBase<0x40006848, 16, ReadMode>
  {
    using FN = USB_FNR_FN_Values<USB::FNR, 0, 11, ReadMode, USBFNRBase> ;
    using LSOF = USB_FNR_LSOF_Values<USB::FNR, 11, 2, ReadMode, USBFNRBase> ;
    using LCK = USB_FNR_LCK_Values<USB::FNR, 13, 1, ReadMode, USBFNRBase> ;
    using RXDM = USB_FNR_RXDM_Values<USB::FNR, 14, 1, ReadMode, USBFNRBase> ;
    using RXDP = USB_FNR_RXDP_Values<USB::FNR, 15, 1, ReadMode, USBFNRBase> ;
    using FieldValues = USB_FNR_RXDP_Values<USB::FNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FNRPack  = Register<0x40006848, 16, ReadMode, USBFNRBase, T...> ;

  struct USBDADDRBase {} ;

  struct DADDR : public RegisterBase<0x4000684C, 16, ReadWriteMode>
  {
    using ADD = USB_DADDR_ADD_Values<USB::DADDR, 0, 7, ReadWriteMode, USBDADDRBase> ;
    using EF = USB_DADDR_EF_Values<USB::DADDR, 7, 1, ReadWriteMode, USBDADDRBase> ;
    using FieldValues = USB_DADDR_EF_Values<USB::DADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DADDRPack  = Register<0x4000684C, 16, ReadWriteMode, USBDADDRBase, T...> ;

  struct USBBTABLEBase {} ;

  struct BTABLE : public RegisterBase<0x40006850, 16, ReadWriteMode>
  {
    using BTABLEField = USB_BTABLE_BTABLE_Values<USB::BTABLE, 3, 13, ReadWriteMode, USBBTABLEBase> ;
    using FieldValues = USB_BTABLE_BTABLE_Values<USB::BTABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTABLEPack  = Register<0x40006850, 16, ReadWriteMode, USBBTABLEBase, T...> ;

  struct USBCOUNT0_TXBase {} ;

  struct COUNT0_TX : public RegisterBase<0x40006852, 16, ReadWriteMode>
  {
    using COUNT0_TXField = USB_COUNT0_TX_COUNT0_TX_Values<USB::COUNT0_TX, 0, 10, ReadWriteMode, USBCOUNT0_TXBase> ;
    using FieldValues = USB_COUNT0_TX_COUNT0_TX_Values<USB::COUNT0_TX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT0_TXPack  = Register<0x40006852, 16, ReadWriteMode, USBCOUNT0_TXBase, T...> ;

  struct USBCOUNT1_TXBase {} ;

  struct COUNT1_TX : public RegisterBase<0x4000685A, 16, ReadWriteMode>
  {
    using COUNT1_TXField = USB_COUNT1_TX_COUNT1_TX_Values<USB::COUNT1_TX, 0, 10, ReadWriteMode, USBCOUNT1_TXBase> ;
    using FieldValues = USB_COUNT1_TX_COUNT1_TX_Values<USB::COUNT1_TX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT1_TXPack  = Register<0x4000685A, 16, ReadWriteMode, USBCOUNT1_TXBase, T...> ;

  struct USBCOUNT2_TXBase {} ;

  struct COUNT2_TX : public RegisterBase<0x40006862, 16, ReadWriteMode>
  {
    using COUNT2_TXField = USB_COUNT2_TX_COUNT2_TX_Values<USB::COUNT2_TX, 0, 10, ReadWriteMode, USBCOUNT2_TXBase> ;
    using FieldValues = USB_COUNT2_TX_COUNT2_TX_Values<USB::COUNT2_TX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT2_TXPack  = Register<0x40006862, 16, ReadWriteMode, USBCOUNT2_TXBase, T...> ;

  struct USBCOUNT3_TXBase {} ;

  struct COUNT3_TX : public RegisterBase<0x4000686A, 16, ReadWriteMode>
  {
    using COUNT3_TXField = USB_COUNT3_TX_COUNT3_TX_Values<USB::COUNT3_TX, 0, 10, ReadWriteMode, USBCOUNT3_TXBase> ;
    using FieldValues = USB_COUNT3_TX_COUNT3_TX_Values<USB::COUNT3_TX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT3_TXPack  = Register<0x4000686A, 16, ReadWriteMode, USBCOUNT3_TXBase, T...> ;

  struct USBCOUNT4_TXBase {} ;

  struct COUNT4_TX : public RegisterBase<0x40006872, 16, ReadWriteMode>
  {
    using COUNT4_TXField = USB_COUNT4_TX_COUNT4_TX_Values<USB::COUNT4_TX, 0, 10, ReadWriteMode, USBCOUNT4_TXBase> ;
    using FieldValues = USB_COUNT4_TX_COUNT4_TX_Values<USB::COUNT4_TX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT4_TXPack  = Register<0x40006872, 16, ReadWriteMode, USBCOUNT4_TXBase, T...> ;

  struct USBCOUNT5_TXBase {} ;

  struct COUNT5_TX : public RegisterBase<0x4000687A, 16, ReadWriteMode>
  {
    using COUNT5_TXField = USB_COUNT5_TX_COUNT5_TX_Values<USB::COUNT5_TX, 0, 10, ReadWriteMode, USBCOUNT5_TXBase> ;
    using FieldValues = USB_COUNT5_TX_COUNT5_TX_Values<USB::COUNT5_TX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT5_TXPack  = Register<0x4000687A, 16, ReadWriteMode, USBCOUNT5_TXBase, T...> ;

  struct USBCOUNT6_TXBase {} ;

  struct COUNT6_TX : public RegisterBase<0x40006882, 16, ReadWriteMode>
  {
    using COUNT6_TXField = USB_COUNT6_TX_COUNT6_TX_Values<USB::COUNT6_TX, 0, 10, ReadWriteMode, USBCOUNT6_TXBase> ;
    using FieldValues = USB_COUNT6_TX_COUNT6_TX_Values<USB::COUNT6_TX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT6_TXPack  = Register<0x40006882, 16, ReadWriteMode, USBCOUNT6_TXBase, T...> ;

  struct USBCOUNT7_TXBase {} ;

  struct COUNT7_TX : public RegisterBase<0x4000688A, 16, ReadWriteMode>
  {
    using COUNT7_TXField = USB_COUNT7_TX_COUNT7_TX_Values<USB::COUNT7_TX, 0, 10, ReadWriteMode, USBCOUNT7_TXBase> ;
    using FieldValues = USB_COUNT7_TX_COUNT7_TX_Values<USB::COUNT7_TX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT7_TXPack  = Register<0x4000688A, 16, ReadWriteMode, USBCOUNT7_TXBase, T...> ;

  struct USBADDR0_RXBase {} ;

  struct ADDR0_RX : public RegisterBase<0x40006854, 16, ReadWriteMode>
  {
    using ADDR0_RXField = USB_ADDR0_RX_ADDR0_RX_Values<USB::ADDR0_RX, 1, 15, ReadWriteMode, USBADDR0_RXBase> ;
    using FieldValues = USB_ADDR0_RX_ADDR0_RX_Values<USB::ADDR0_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDR0_RXPack  = Register<0x40006854, 16, ReadWriteMode, USBADDR0_RXBase, T...> ;

  struct USBADDR1_RXBase {} ;

  struct ADDR1_RX : public RegisterBase<0x4000685C, 16, ReadWriteMode>
  {
    using ADDR1_RXField = USB_ADDR1_RX_ADDR1_RX_Values<USB::ADDR1_RX, 1, 15, ReadWriteMode, USBADDR1_RXBase> ;
    using FieldValues = USB_ADDR1_RX_ADDR1_RX_Values<USB::ADDR1_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDR1_RXPack  = Register<0x4000685C, 16, ReadWriteMode, USBADDR1_RXBase, T...> ;

  struct USBADDR2_RXBase {} ;

  struct ADDR2_RX : public RegisterBase<0x40006864, 16, ReadWriteMode>
  {
    using ADDR2_RXField = USB_ADDR2_RX_ADDR2_RX_Values<USB::ADDR2_RX, 1, 15, ReadWriteMode, USBADDR2_RXBase> ;
    using FieldValues = USB_ADDR2_RX_ADDR2_RX_Values<USB::ADDR2_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDR2_RXPack  = Register<0x40006864, 16, ReadWriteMode, USBADDR2_RXBase, T...> ;

  struct USBADDR3_RXBase {} ;

  struct ADDR3_RX : public RegisterBase<0x4000686C, 16, ReadWriteMode>
  {
    using ADDR3_RXField = USB_ADDR3_RX_ADDR3_RX_Values<USB::ADDR3_RX, 1, 15, ReadWriteMode, USBADDR3_RXBase> ;
    using FieldValues = USB_ADDR3_RX_ADDR3_RX_Values<USB::ADDR3_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDR3_RXPack  = Register<0x4000686C, 16, ReadWriteMode, USBADDR3_RXBase, T...> ;

  struct USBADDR4_RXBase {} ;

  struct ADDR4_RX : public RegisterBase<0x40006874, 16, ReadWriteMode>
  {
    using ADDR4_RXField = USB_ADDR4_RX_ADDR4_RX_Values<USB::ADDR4_RX, 1, 15, ReadWriteMode, USBADDR4_RXBase> ;
    using FieldValues = USB_ADDR4_RX_ADDR4_RX_Values<USB::ADDR4_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDR4_RXPack  = Register<0x40006874, 16, ReadWriteMode, USBADDR4_RXBase, T...> ;

  struct USBADDR5_RXBase {} ;

  struct ADDR5_RX : public RegisterBase<0x4000687C, 16, ReadWriteMode>
  {
    using ADDR5_RXField = USB_ADDR5_RX_ADDR5_RX_Values<USB::ADDR5_RX, 1, 15, ReadWriteMode, USBADDR5_RXBase> ;
    using FieldValues = USB_ADDR5_RX_ADDR5_RX_Values<USB::ADDR5_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDR5_RXPack  = Register<0x4000687C, 16, ReadWriteMode, USBADDR5_RXBase, T...> ;

  struct USBADDR6_RXBase {} ;

  struct ADDR6_RX : public RegisterBase<0x40006884, 16, ReadWriteMode>
  {
    using ADDR6_RXField = USB_ADDR6_RX_ADDR6_RX_Values<USB::ADDR6_RX, 1, 15, ReadWriteMode, USBADDR6_RXBase> ;
    using FieldValues = USB_ADDR6_RX_ADDR6_RX_Values<USB::ADDR6_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDR6_RXPack  = Register<0x40006884, 16, ReadWriteMode, USBADDR6_RXBase, T...> ;

  struct USBADDR7_RXBase {} ;

  struct ADDR7_RX : public RegisterBase<0x4000688C, 16, ReadWriteMode>
  {
    using ADDR7_RXField = USB_ADDR7_RX_ADDR7_RX_Values<USB::ADDR7_RX, 1, 15, ReadWriteMode, USBADDR7_RXBase> ;
    using FieldValues = USB_ADDR7_RX_ADDR7_RX_Values<USB::ADDR7_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ADDR7_RXPack  = Register<0x4000688C, 16, ReadWriteMode, USBADDR7_RXBase, T...> ;

  struct USBCOUNT0_RXBase {} ;

  struct COUNT0_RX : public RegisterBase<0x40006856, 16, ReadWriteMode>
  {
    using COUNT0_RXField = USB_COUNT0_RX_COUNT0_RX_Values<USB::COUNT0_RX, 0, 10, ReadMode, USBCOUNT0_RXBase> ;
    using NUM_BLOCK = USB_COUNT0_RX_NUM_BLOCK_Values<USB::COUNT0_RX, 10, 5, ReadWriteMode, USBCOUNT0_RXBase> ;
    using BL_SIZE = USB_COUNT0_RX_BL_SIZE_Values<USB::COUNT0_RX, 15, 1, ReadWriteMode, USBCOUNT0_RXBase> ;
    using FieldValues = USB_COUNT0_RX_BL_SIZE_Values<USB::COUNT0_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT0_RXPack  = Register<0x40006856, 16, ReadWriteMode, USBCOUNT0_RXBase, T...> ;

  struct USBCOUNT1_RXBase {} ;

  struct COUNT1_RX : public RegisterBase<0x4000685E, 16, ReadWriteMode>
  {
    using COUNT1_RXField = USB_COUNT1_RX_COUNT1_RX_Values<USB::COUNT1_RX, 0, 10, ReadMode, USBCOUNT1_RXBase> ;
    using NUM_BLOCK = USB_COUNT1_RX_NUM_BLOCK_Values<USB::COUNT1_RX, 10, 5, ReadWriteMode, USBCOUNT1_RXBase> ;
    using BL_SIZE = USB_COUNT1_RX_BL_SIZE_Values<USB::COUNT1_RX, 15, 1, ReadWriteMode, USBCOUNT1_RXBase> ;
    using FieldValues = USB_COUNT1_RX_BL_SIZE_Values<USB::COUNT1_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT1_RXPack  = Register<0x4000685E, 16, ReadWriteMode, USBCOUNT1_RXBase, T...> ;

  struct USBCOUNT2_RXBase {} ;

  struct COUNT2_RX : public RegisterBase<0x40006866, 16, ReadWriteMode>
  {
    using COUNT2_RXField = USB_COUNT2_RX_COUNT2_RX_Values<USB::COUNT2_RX, 0, 10, ReadMode, USBCOUNT2_RXBase> ;
    using NUM_BLOCK = USB_COUNT2_RX_NUM_BLOCK_Values<USB::COUNT2_RX, 10, 5, ReadWriteMode, USBCOUNT2_RXBase> ;
    using BL_SIZE = USB_COUNT2_RX_BL_SIZE_Values<USB::COUNT2_RX, 15, 1, ReadWriteMode, USBCOUNT2_RXBase> ;
    using FieldValues = USB_COUNT2_RX_BL_SIZE_Values<USB::COUNT2_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT2_RXPack  = Register<0x40006866, 16, ReadWriteMode, USBCOUNT2_RXBase, T...> ;

  struct USBCOUNT3_RXBase {} ;

  struct COUNT3_RX : public RegisterBase<0x4000686E, 16, ReadWriteMode>
  {
    using COUNT3_RXField = USB_COUNT3_RX_COUNT3_RX_Values<USB::COUNT3_RX, 0, 10, ReadMode, USBCOUNT3_RXBase> ;
    using NUM_BLOCK = USB_COUNT3_RX_NUM_BLOCK_Values<USB::COUNT3_RX, 10, 5, ReadWriteMode, USBCOUNT3_RXBase> ;
    using BL_SIZE = USB_COUNT3_RX_BL_SIZE_Values<USB::COUNT3_RX, 15, 1, ReadWriteMode, USBCOUNT3_RXBase> ;
    using FieldValues = USB_COUNT3_RX_BL_SIZE_Values<USB::COUNT3_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT3_RXPack  = Register<0x4000686E, 16, ReadWriteMode, USBCOUNT3_RXBase, T...> ;

  struct USBCOUNT4_RXBase {} ;

  struct COUNT4_RX : public RegisterBase<0x40006876, 16, ReadWriteMode>
  {
    using COUNT4_RXField = USB_COUNT4_RX_COUNT4_RX_Values<USB::COUNT4_RX, 0, 10, ReadMode, USBCOUNT4_RXBase> ;
    using NUM_BLOCK = USB_COUNT4_RX_NUM_BLOCK_Values<USB::COUNT4_RX, 10, 5, ReadWriteMode, USBCOUNT4_RXBase> ;
    using BL_SIZE = USB_COUNT4_RX_BL_SIZE_Values<USB::COUNT4_RX, 15, 1, ReadWriteMode, USBCOUNT4_RXBase> ;
    using FieldValues = USB_COUNT4_RX_BL_SIZE_Values<USB::COUNT4_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT4_RXPack  = Register<0x40006876, 16, ReadWriteMode, USBCOUNT4_RXBase, T...> ;

  struct USBCOUNT5_RXBase {} ;

  struct COUNT5_RX : public RegisterBase<0x4000687E, 16, ReadWriteMode>
  {
    using COUNT5_RXField = USB_COUNT5_RX_COUNT5_RX_Values<USB::COUNT5_RX, 0, 10, ReadMode, USBCOUNT5_RXBase> ;
    using NUM_BLOCK = USB_COUNT5_RX_NUM_BLOCK_Values<USB::COUNT5_RX, 10, 5, ReadWriteMode, USBCOUNT5_RXBase> ;
    using BL_SIZE = USB_COUNT5_RX_BL_SIZE_Values<USB::COUNT5_RX, 15, 1, ReadWriteMode, USBCOUNT5_RXBase> ;
    using FieldValues = USB_COUNT5_RX_BL_SIZE_Values<USB::COUNT5_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT5_RXPack  = Register<0x4000687E, 16, ReadWriteMode, USBCOUNT5_RXBase, T...> ;

  struct USBCOUNT6_RXBase {} ;

  struct COUNT6_RX : public RegisterBase<0x40006886, 16, ReadWriteMode>
  {
    using COUNT6_RXField = USB_COUNT6_RX_COUNT6_RX_Values<USB::COUNT6_RX, 0, 10, ReadMode, USBCOUNT6_RXBase> ;
    using NUM_BLOCK = USB_COUNT6_RX_NUM_BLOCK_Values<USB::COUNT6_RX, 10, 5, ReadWriteMode, USBCOUNT6_RXBase> ;
    using BL_SIZE = USB_COUNT6_RX_BL_SIZE_Values<USB::COUNT6_RX, 15, 1, ReadWriteMode, USBCOUNT6_RXBase> ;
    using FieldValues = USB_COUNT6_RX_BL_SIZE_Values<USB::COUNT6_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT6_RXPack  = Register<0x40006886, 16, ReadWriteMode, USBCOUNT6_RXBase, T...> ;

  struct USBCOUNT7_RXBase {} ;

  struct COUNT7_RX : public RegisterBase<0x4000688E, 16, ReadWriteMode>
  {
    using COUNT7_RXField = USB_COUNT7_RX_COUNT7_RX_Values<USB::COUNT7_RX, 0, 10, ReadMode, USBCOUNT7_RXBase> ;
    using NUM_BLOCK = USB_COUNT7_RX_NUM_BLOCK_Values<USB::COUNT7_RX, 10, 5, ReadWriteMode, USBCOUNT7_RXBase> ;
    using BL_SIZE = USB_COUNT7_RX_BL_SIZE_Values<USB::COUNT7_RX, 15, 1, ReadWriteMode, USBCOUNT7_RXBase> ;
    using FieldValues = USB_COUNT7_RX_BL_SIZE_Values<USB::COUNT7_RX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COUNT7_RXPack  = Register<0x4000688E, 16, ReadWriteMode, USBCOUNT7_RXBase, T...> ;

  struct USBLPMCSRBase {} ;

  struct LPMCSR : public RegisterBase<0x40006854, 16, ReadWriteMode>
  {
    using LPMEN = USB_LPMCSR_LPMEN_Values<USB::LPMCSR, 0, 1, ReadWriteMode, USBLPMCSRBase> ;
    using LPMACK = USB_LPMCSR_LPMACK_Values<USB::LPMCSR, 1, 1, ReadWriteMode, USBLPMCSRBase> ;
    using REMWAKE = USB_LPMCSR_REMWAKE_Values<USB::LPMCSR, 3, 1, ReadWriteMode, USBLPMCSRBase> ;
    using BESL = USB_LPMCSR_BESL_Values<USB::LPMCSR, 4, 4, ReadMode, USBLPMCSRBase> ;
    using FieldValues = USB_LPMCSR_BESL_Values<USB::LPMCSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using LPMCSRPack  = Register<0x40006854, 16, ReadWriteMode, USBLPMCSRBase, T...> ;

  struct USBBCDRBase {} ;

  struct BCDR : public RegisterBase<0x40006858, 16, ReadWriteMode>
  {
    using BCDEN = USB_BCDR_BCDEN_Values<USB::BCDR, 0, 1, ReadWriteMode, USBBCDRBase> ;
    using DCDEN = USB_BCDR_DCDEN_Values<USB::BCDR, 1, 1, ReadWriteMode, USBBCDRBase> ;
    using PDEN = USB_BCDR_PDEN_Values<USB::BCDR, 2, 1, ReadWriteMode, USBBCDRBase> ;
    using SDEN = USB_BCDR_SDEN_Values<USB::BCDR, 3, 1, ReadWriteMode, USBBCDRBase> ;
    using DCDET = USB_BCDR_DCDET_Values<USB::BCDR, 4, 1, ReadMode, USBBCDRBase> ;
    using PDET = USB_BCDR_PDET_Values<USB::BCDR, 5, 1, ReadMode, USBBCDRBase> ;
    using SDET = USB_BCDR_SDET_Values<USB::BCDR, 6, 1, ReadMode, USBBCDRBase> ;
    using PS2DET = USB_BCDR_PS2DET_Values<USB::BCDR, 7, 1, ReadMode, USBBCDRBase> ;
    using DPPU = USB_BCDR_DPPU_Values<USB::BCDR, 15, 1, ReadWriteMode, USBBCDRBase> ;
    using FieldValues = USB_BCDR_DPPU_Values<USB::BCDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BCDRPack  = Register<0x40006858, 16, ReadWriteMode, USBBCDRBase, T...> ;

} ;

