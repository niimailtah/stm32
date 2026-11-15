/*******************************************************************************
* Filename      : usbfsdeviceregisters.hpp
*
* Details       : USB_FS_device. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "usbfsdevicefieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USB_FS_device
{
  struct USB_FS_deviceEP0RBase {} ;

  struct EP0R : public RegisterBase<0x40005C00, 32, ReadWriteMode>
  {
    using EA = USB_FS_device_EP0R_EA_Values<USB_FS_device::EP0R, 0, 4, ReadWriteMode, USB_FS_deviceEP0RBase> ;
    using STAT_TX = USB_FS_device_EP0R_STAT_TX_Values<USB_FS_device::EP0R, 4, 2, ReadWriteMode, USB_FS_deviceEP0RBase> ;
    using DTOG_TX = USB_FS_device_EP0R_DTOG_TX_Values<USB_FS_device::EP0R, 6, 1, ReadWriteMode, USB_FS_deviceEP0RBase> ;
    using CTR_TX = USB_FS_device_EP0R_CTR_TX_Values<USB_FS_device::EP0R, 7, 1, ReadWriteMode, USB_FS_deviceEP0RBase> ;
    using EP_KIND = USB_FS_device_EP0R_EP_KIND_Values<USB_FS_device::EP0R, 8, 1, ReadWriteMode, USB_FS_deviceEP0RBase> ;
    using EP_TYPE = USB_FS_device_EP0R_EP_TYPE_Values<USB_FS_device::EP0R, 9, 2, ReadWriteMode, USB_FS_deviceEP0RBase> ;
    using SETUP = USB_FS_device_EP0R_SETUP_Values<USB_FS_device::EP0R, 11, 1, ReadWriteMode, USB_FS_deviceEP0RBase> ;
    using STAT_RX = USB_FS_device_EP0R_STAT_RX_Values<USB_FS_device::EP0R, 12, 2, ReadWriteMode, USB_FS_deviceEP0RBase> ;
    using DTOG_RX = USB_FS_device_EP0R_DTOG_RX_Values<USB_FS_device::EP0R, 14, 1, ReadWriteMode, USB_FS_deviceEP0RBase> ;
    using CTR_RX = USB_FS_device_EP0R_CTR_RX_Values<USB_FS_device::EP0R, 15, 1, ReadWriteMode, USB_FS_deviceEP0RBase> ;
    using FieldValues = USB_FS_device_EP0R_CTR_RX_Values<USB_FS_device::EP0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP0RPack  = Register<0x40005C00, 32, ReadWriteMode, USB_FS_deviceEP0RBase, T...> ;

  struct USB_FS_deviceEP1RBase {} ;

  struct EP1R : public RegisterBase<0x40005C04, 32, ReadWriteMode>
  {
    using EA = USB_FS_device_EP1R_EA_Values<USB_FS_device::EP1R, 0, 4, ReadWriteMode, USB_FS_deviceEP1RBase> ;
    using STAT_TX = USB_FS_device_EP1R_STAT_TX_Values<USB_FS_device::EP1R, 4, 2, ReadWriteMode, USB_FS_deviceEP1RBase> ;
    using DTOG_TX = USB_FS_device_EP1R_DTOG_TX_Values<USB_FS_device::EP1R, 6, 1, ReadWriteMode, USB_FS_deviceEP1RBase> ;
    using CTR_TX = USB_FS_device_EP1R_CTR_TX_Values<USB_FS_device::EP1R, 7, 1, ReadWriteMode, USB_FS_deviceEP1RBase> ;
    using EP_KIND = USB_FS_device_EP1R_EP_KIND_Values<USB_FS_device::EP1R, 8, 1, ReadWriteMode, USB_FS_deviceEP1RBase> ;
    using EP_TYPE = USB_FS_device_EP1R_EP_TYPE_Values<USB_FS_device::EP1R, 9, 2, ReadWriteMode, USB_FS_deviceEP1RBase> ;
    using SETUP = USB_FS_device_EP1R_SETUP_Values<USB_FS_device::EP1R, 11, 1, ReadWriteMode, USB_FS_deviceEP1RBase> ;
    using STAT_RX = USB_FS_device_EP1R_STAT_RX_Values<USB_FS_device::EP1R, 12, 2, ReadWriteMode, USB_FS_deviceEP1RBase> ;
    using DTOG_RX = USB_FS_device_EP1R_DTOG_RX_Values<USB_FS_device::EP1R, 14, 1, ReadWriteMode, USB_FS_deviceEP1RBase> ;
    using CTR_RX = USB_FS_device_EP1R_CTR_RX_Values<USB_FS_device::EP1R, 15, 1, ReadWriteMode, USB_FS_deviceEP1RBase> ;
    using FieldValues = USB_FS_device_EP1R_CTR_RX_Values<USB_FS_device::EP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP1RPack  = Register<0x40005C04, 32, ReadWriteMode, USB_FS_deviceEP1RBase, T...> ;

  struct USB_FS_deviceEP2RBase {} ;

  struct EP2R : public RegisterBase<0x40005C08, 32, ReadWriteMode>
  {
    using EA = USB_FS_device_EP2R_EA_Values<USB_FS_device::EP2R, 0, 4, ReadWriteMode, USB_FS_deviceEP2RBase> ;
    using STAT_TX = USB_FS_device_EP2R_STAT_TX_Values<USB_FS_device::EP2R, 4, 2, ReadWriteMode, USB_FS_deviceEP2RBase> ;
    using DTOG_TX = USB_FS_device_EP2R_DTOG_TX_Values<USB_FS_device::EP2R, 6, 1, ReadWriteMode, USB_FS_deviceEP2RBase> ;
    using CTR_TX = USB_FS_device_EP2R_CTR_TX_Values<USB_FS_device::EP2R, 7, 1, ReadWriteMode, USB_FS_deviceEP2RBase> ;
    using EP_KIND = USB_FS_device_EP2R_EP_KIND_Values<USB_FS_device::EP2R, 8, 1, ReadWriteMode, USB_FS_deviceEP2RBase> ;
    using EP_TYPE = USB_FS_device_EP2R_EP_TYPE_Values<USB_FS_device::EP2R, 9, 2, ReadWriteMode, USB_FS_deviceEP2RBase> ;
    using SETUP = USB_FS_device_EP2R_SETUP_Values<USB_FS_device::EP2R, 11, 1, ReadWriteMode, USB_FS_deviceEP2RBase> ;
    using STAT_RX = USB_FS_device_EP2R_STAT_RX_Values<USB_FS_device::EP2R, 12, 2, ReadWriteMode, USB_FS_deviceEP2RBase> ;
    using DTOG_RX = USB_FS_device_EP2R_DTOG_RX_Values<USB_FS_device::EP2R, 14, 1, ReadWriteMode, USB_FS_deviceEP2RBase> ;
    using CTR_RX = USB_FS_device_EP2R_CTR_RX_Values<USB_FS_device::EP2R, 15, 1, ReadWriteMode, USB_FS_deviceEP2RBase> ;
    using FieldValues = USB_FS_device_EP2R_CTR_RX_Values<USB_FS_device::EP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP2RPack  = Register<0x40005C08, 32, ReadWriteMode, USB_FS_deviceEP2RBase, T...> ;

  struct USB_FS_deviceEP3RBase {} ;

  struct EP3R : public RegisterBase<0x40005C0C, 32, ReadWriteMode>
  {
    using EA = USB_FS_device_EP3R_EA_Values<USB_FS_device::EP3R, 0, 4, ReadWriteMode, USB_FS_deviceEP3RBase> ;
    using STAT_TX = USB_FS_device_EP3R_STAT_TX_Values<USB_FS_device::EP3R, 4, 2, ReadWriteMode, USB_FS_deviceEP3RBase> ;
    using DTOG_TX = USB_FS_device_EP3R_DTOG_TX_Values<USB_FS_device::EP3R, 6, 1, ReadWriteMode, USB_FS_deviceEP3RBase> ;
    using CTR_TX = USB_FS_device_EP3R_CTR_TX_Values<USB_FS_device::EP3R, 7, 1, ReadWriteMode, USB_FS_deviceEP3RBase> ;
    using EP_KIND = USB_FS_device_EP3R_EP_KIND_Values<USB_FS_device::EP3R, 8, 1, ReadWriteMode, USB_FS_deviceEP3RBase> ;
    using EP_TYPE = USB_FS_device_EP3R_EP_TYPE_Values<USB_FS_device::EP3R, 9, 2, ReadWriteMode, USB_FS_deviceEP3RBase> ;
    using SETUP = USB_FS_device_EP3R_SETUP_Values<USB_FS_device::EP3R, 11, 1, ReadWriteMode, USB_FS_deviceEP3RBase> ;
    using STAT_RX = USB_FS_device_EP3R_STAT_RX_Values<USB_FS_device::EP3R, 12, 2, ReadWriteMode, USB_FS_deviceEP3RBase> ;
    using DTOG_RX = USB_FS_device_EP3R_DTOG_RX_Values<USB_FS_device::EP3R, 14, 1, ReadWriteMode, USB_FS_deviceEP3RBase> ;
    using CTR_RX = USB_FS_device_EP3R_CTR_RX_Values<USB_FS_device::EP3R, 15, 1, ReadWriteMode, USB_FS_deviceEP3RBase> ;
    using FieldValues = USB_FS_device_EP3R_CTR_RX_Values<USB_FS_device::EP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP3RPack  = Register<0x40005C0C, 32, ReadWriteMode, USB_FS_deviceEP3RBase, T...> ;

  struct USB_FS_deviceEP4RBase {} ;

  struct EP4R : public RegisterBase<0x40005C10, 32, ReadWriteMode>
  {
    using EA = USB_FS_device_EP4R_EA_Values<USB_FS_device::EP4R, 0, 4, ReadWriteMode, USB_FS_deviceEP4RBase> ;
    using STAT_TX = USB_FS_device_EP4R_STAT_TX_Values<USB_FS_device::EP4R, 4, 2, ReadWriteMode, USB_FS_deviceEP4RBase> ;
    using DTOG_TX = USB_FS_device_EP4R_DTOG_TX_Values<USB_FS_device::EP4R, 6, 1, ReadWriteMode, USB_FS_deviceEP4RBase> ;
    using CTR_TX = USB_FS_device_EP4R_CTR_TX_Values<USB_FS_device::EP4R, 7, 1, ReadWriteMode, USB_FS_deviceEP4RBase> ;
    using EP_KIND = USB_FS_device_EP4R_EP_KIND_Values<USB_FS_device::EP4R, 8, 1, ReadWriteMode, USB_FS_deviceEP4RBase> ;
    using EP_TYPE = USB_FS_device_EP4R_EP_TYPE_Values<USB_FS_device::EP4R, 9, 2, ReadWriteMode, USB_FS_deviceEP4RBase> ;
    using SETUP = USB_FS_device_EP4R_SETUP_Values<USB_FS_device::EP4R, 11, 1, ReadWriteMode, USB_FS_deviceEP4RBase> ;
    using STAT_RX = USB_FS_device_EP4R_STAT_RX_Values<USB_FS_device::EP4R, 12, 2, ReadWriteMode, USB_FS_deviceEP4RBase> ;
    using DTOG_RX = USB_FS_device_EP4R_DTOG_RX_Values<USB_FS_device::EP4R, 14, 1, ReadWriteMode, USB_FS_deviceEP4RBase> ;
    using CTR_RX = USB_FS_device_EP4R_CTR_RX_Values<USB_FS_device::EP4R, 15, 1, ReadWriteMode, USB_FS_deviceEP4RBase> ;
    using FieldValues = USB_FS_device_EP4R_CTR_RX_Values<USB_FS_device::EP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP4RPack  = Register<0x40005C10, 32, ReadWriteMode, USB_FS_deviceEP4RBase, T...> ;

  struct USB_FS_deviceEP5RBase {} ;

  struct EP5R : public RegisterBase<0x40005C14, 32, ReadWriteMode>
  {
    using EA = USB_FS_device_EP5R_EA_Values<USB_FS_device::EP5R, 0, 4, ReadWriteMode, USB_FS_deviceEP5RBase> ;
    using STAT_TX = USB_FS_device_EP5R_STAT_TX_Values<USB_FS_device::EP5R, 4, 2, ReadWriteMode, USB_FS_deviceEP5RBase> ;
    using DTOG_TX = USB_FS_device_EP5R_DTOG_TX_Values<USB_FS_device::EP5R, 6, 1, ReadWriteMode, USB_FS_deviceEP5RBase> ;
    using CTR_TX = USB_FS_device_EP5R_CTR_TX_Values<USB_FS_device::EP5R, 7, 1, ReadWriteMode, USB_FS_deviceEP5RBase> ;
    using EP_KIND = USB_FS_device_EP5R_EP_KIND_Values<USB_FS_device::EP5R, 8, 1, ReadWriteMode, USB_FS_deviceEP5RBase> ;
    using EP_TYPE = USB_FS_device_EP5R_EP_TYPE_Values<USB_FS_device::EP5R, 9, 2, ReadWriteMode, USB_FS_deviceEP5RBase> ;
    using SETUP = USB_FS_device_EP5R_SETUP_Values<USB_FS_device::EP5R, 11, 1, ReadWriteMode, USB_FS_deviceEP5RBase> ;
    using STAT_RX = USB_FS_device_EP5R_STAT_RX_Values<USB_FS_device::EP5R, 12, 2, ReadWriteMode, USB_FS_deviceEP5RBase> ;
    using DTOG_RX = USB_FS_device_EP5R_DTOG_RX_Values<USB_FS_device::EP5R, 14, 1, ReadWriteMode, USB_FS_deviceEP5RBase> ;
    using CTR_RX = USB_FS_device_EP5R_CTR_RX_Values<USB_FS_device::EP5R, 15, 1, ReadWriteMode, USB_FS_deviceEP5RBase> ;
    using FieldValues = USB_FS_device_EP5R_CTR_RX_Values<USB_FS_device::EP5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP5RPack  = Register<0x40005C14, 32, ReadWriteMode, USB_FS_deviceEP5RBase, T...> ;

  struct USB_FS_deviceEP6RBase {} ;

  struct EP6R : public RegisterBase<0x40005C18, 32, ReadWriteMode>
  {
    using EA = USB_FS_device_EP6R_EA_Values<USB_FS_device::EP6R, 0, 4, ReadWriteMode, USB_FS_deviceEP6RBase> ;
    using STAT_TX = USB_FS_device_EP6R_STAT_TX_Values<USB_FS_device::EP6R, 4, 2, ReadWriteMode, USB_FS_deviceEP6RBase> ;
    using DTOG_TX = USB_FS_device_EP6R_DTOG_TX_Values<USB_FS_device::EP6R, 6, 1, ReadWriteMode, USB_FS_deviceEP6RBase> ;
    using CTR_TX = USB_FS_device_EP6R_CTR_TX_Values<USB_FS_device::EP6R, 7, 1, ReadWriteMode, USB_FS_deviceEP6RBase> ;
    using EP_KIND = USB_FS_device_EP6R_EP_KIND_Values<USB_FS_device::EP6R, 8, 1, ReadWriteMode, USB_FS_deviceEP6RBase> ;
    using EP_TYPE = USB_FS_device_EP6R_EP_TYPE_Values<USB_FS_device::EP6R, 9, 2, ReadWriteMode, USB_FS_deviceEP6RBase> ;
    using SETUP = USB_FS_device_EP6R_SETUP_Values<USB_FS_device::EP6R, 11, 1, ReadWriteMode, USB_FS_deviceEP6RBase> ;
    using STAT_RX = USB_FS_device_EP6R_STAT_RX_Values<USB_FS_device::EP6R, 12, 2, ReadWriteMode, USB_FS_deviceEP6RBase> ;
    using DTOG_RX = USB_FS_device_EP6R_DTOG_RX_Values<USB_FS_device::EP6R, 14, 1, ReadWriteMode, USB_FS_deviceEP6RBase> ;
    using CTR_RX = USB_FS_device_EP6R_CTR_RX_Values<USB_FS_device::EP6R, 15, 1, ReadWriteMode, USB_FS_deviceEP6RBase> ;
    using FieldValues = USB_FS_device_EP6R_CTR_RX_Values<USB_FS_device::EP6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP6RPack  = Register<0x40005C18, 32, ReadWriteMode, USB_FS_deviceEP6RBase, T...> ;

  struct USB_FS_deviceEP7RBase {} ;

  struct EP7R : public RegisterBase<0x40005C1C, 32, ReadWriteMode>
  {
    using EA = USB_FS_device_EP7R_EA_Values<USB_FS_device::EP7R, 0, 4, ReadWriteMode, USB_FS_deviceEP7RBase> ;
    using STAT_TX = USB_FS_device_EP7R_STAT_TX_Values<USB_FS_device::EP7R, 4, 2, ReadWriteMode, USB_FS_deviceEP7RBase> ;
    using DTOG_TX = USB_FS_device_EP7R_DTOG_TX_Values<USB_FS_device::EP7R, 6, 1, ReadWriteMode, USB_FS_deviceEP7RBase> ;
    using CTR_TX = USB_FS_device_EP7R_CTR_TX_Values<USB_FS_device::EP7R, 7, 1, ReadWriteMode, USB_FS_deviceEP7RBase> ;
    using EP_KIND = USB_FS_device_EP7R_EP_KIND_Values<USB_FS_device::EP7R, 8, 1, ReadWriteMode, USB_FS_deviceEP7RBase> ;
    using EP_TYPE = USB_FS_device_EP7R_EP_TYPE_Values<USB_FS_device::EP7R, 9, 2, ReadWriteMode, USB_FS_deviceEP7RBase> ;
    using SETUP = USB_FS_device_EP7R_SETUP_Values<USB_FS_device::EP7R, 11, 1, ReadWriteMode, USB_FS_deviceEP7RBase> ;
    using STAT_RX = USB_FS_device_EP7R_STAT_RX_Values<USB_FS_device::EP7R, 12, 2, ReadWriteMode, USB_FS_deviceEP7RBase> ;
    using DTOG_RX = USB_FS_device_EP7R_DTOG_RX_Values<USB_FS_device::EP7R, 14, 1, ReadWriteMode, USB_FS_deviceEP7RBase> ;
    using CTR_RX = USB_FS_device_EP7R_CTR_RX_Values<USB_FS_device::EP7R, 15, 1, ReadWriteMode, USB_FS_deviceEP7RBase> ;
    using FieldValues = USB_FS_device_EP7R_CTR_RX_Values<USB_FS_device::EP7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EP7RPack  = Register<0x40005C1C, 32, ReadWriteMode, USB_FS_deviceEP7RBase, T...> ;

  struct USB_FS_deviceCNTRBase {} ;

  struct CNTR : public RegisterBase<0x40005C40, 32, ReadWriteMode>
  {
    using FRES = USB_FS_device_CNTR_FRES_Values<USB_FS_device::CNTR, 0, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using PDWN = USB_FS_device_CNTR_PDWN_Values<USB_FS_device::CNTR, 1, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using LP_MODE = USB_FS_device_CNTR_LP_MODE_Values<USB_FS_device::CNTR, 2, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using FSUSP = USB_FS_device_CNTR_FSUSP_Values<USB_FS_device::CNTR, 3, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using RESUME = USB_FS_device_CNTR_RESUME_Values<USB_FS_device::CNTR, 4, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using L1RESUME = USB_FS_device_CNTR_L1RESUME_Values<USB_FS_device::CNTR, 5, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using L1REQM = USB_FS_device_CNTR_L1REQM_Values<USB_FS_device::CNTR, 7, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using ESOFM = USB_FS_device_CNTR_ESOFM_Values<USB_FS_device::CNTR, 8, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using SOFM = USB_FS_device_CNTR_SOFM_Values<USB_FS_device::CNTR, 9, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using RESETM = USB_FS_device_CNTR_RESETM_Values<USB_FS_device::CNTR, 10, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using SUSPM = USB_FS_device_CNTR_SUSPM_Values<USB_FS_device::CNTR, 11, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using WKUPM = USB_FS_device_CNTR_WKUPM_Values<USB_FS_device::CNTR, 12, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using ERRM = USB_FS_device_CNTR_ERRM_Values<USB_FS_device::CNTR, 13, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using PMAOVRM = USB_FS_device_CNTR_PMAOVRM_Values<USB_FS_device::CNTR, 14, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using CTRM = USB_FS_device_CNTR_CTRM_Values<USB_FS_device::CNTR, 15, 1, ReadWriteMode, USB_FS_deviceCNTRBase> ;
    using FieldValues = USB_FS_device_CNTR_CTRM_Values<USB_FS_device::CNTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CNTRPack  = Register<0x40005C40, 32, ReadWriteMode, USB_FS_deviceCNTRBase, T...> ;

  struct USB_FS_deviceISTRBase {} ;

  struct ISTR : public RegisterBase<0x40005C44, 32, ReadWriteMode>
  {
    using EP_ID = USB_FS_device_ISTR_EP_ID_Values<USB_FS_device::ISTR, 0, 4, ReadWriteMode, USB_FS_deviceISTRBase> ;
    using DIR = USB_FS_device_ISTR_DIR_Values<USB_FS_device::ISTR, 4, 1, ReadWriteMode, USB_FS_deviceISTRBase> ;
    using L1REQ = USB_FS_device_ISTR_L1REQ_Values<USB_FS_device::ISTR, 7, 1, ReadWriteMode, USB_FS_deviceISTRBase> ;
    using ESOF = USB_FS_device_ISTR_ESOF_Values<USB_FS_device::ISTR, 8, 1, ReadWriteMode, USB_FS_deviceISTRBase> ;
    using SOF = USB_FS_device_ISTR_SOF_Values<USB_FS_device::ISTR, 9, 1, ReadWriteMode, USB_FS_deviceISTRBase> ;
    using RESET = USB_FS_device_ISTR_RESET_Values<USB_FS_device::ISTR, 10, 1, ReadWriteMode, USB_FS_deviceISTRBase> ;
    using SUSP = USB_FS_device_ISTR_SUSP_Values<USB_FS_device::ISTR, 11, 1, ReadWriteMode, USB_FS_deviceISTRBase> ;
    using WKUP = USB_FS_device_ISTR_WKUP_Values<USB_FS_device::ISTR, 12, 1, ReadWriteMode, USB_FS_deviceISTRBase> ;
    using ERR = USB_FS_device_ISTR_ERR_Values<USB_FS_device::ISTR, 13, 1, ReadWriteMode, USB_FS_deviceISTRBase> ;
    using PMAOVR = USB_FS_device_ISTR_PMAOVR_Values<USB_FS_device::ISTR, 14, 1, ReadWriteMode, USB_FS_deviceISTRBase> ;
    using CTR = USB_FS_device_ISTR_CTR_Values<USB_FS_device::ISTR, 15, 1, ReadWriteMode, USB_FS_deviceISTRBase> ;
    using FieldValues = USB_FS_device_ISTR_CTR_Values<USB_FS_device::ISTR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ISTRPack  = Register<0x40005C44, 32, ReadWriteMode, USB_FS_deviceISTRBase, T...> ;

  struct USB_FS_deviceFNRBase {} ;

  struct FNR : public RegisterBase<0x40005C48, 32, ReadMode>
  {
    using FN = USB_FS_device_FNR_FN_Values<USB_FS_device::FNR, 0, 11, ReadMode, USB_FS_deviceFNRBase> ;
    using LSOF = USB_FS_device_FNR_LSOF_Values<USB_FS_device::FNR, 11, 2, ReadMode, USB_FS_deviceFNRBase> ;
    using LCK = USB_FS_device_FNR_LCK_Values<USB_FS_device::FNR, 13, 1, ReadMode, USB_FS_deviceFNRBase> ;
    using RXDM = USB_FS_device_FNR_RXDM_Values<USB_FS_device::FNR, 14, 1, ReadMode, USB_FS_deviceFNRBase> ;
    using RXDP = USB_FS_device_FNR_RXDP_Values<USB_FS_device::FNR, 15, 1, ReadMode, USB_FS_deviceFNRBase> ;
    using FieldValues = USB_FS_device_FNR_RXDP_Values<USB_FS_device::FNR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FNRPack  = Register<0x40005C48, 32, ReadMode, USB_FS_deviceFNRBase, T...> ;

  struct USB_FS_deviceDADDRBase {} ;

  struct DADDR : public RegisterBase<0x40005C4C, 32, ReadWriteMode>
  {
    using ADD = USB_FS_device_DADDR_ADD_Values<USB_FS_device::DADDR, 0, 7, ReadWriteMode, USB_FS_deviceDADDRBase> ;
    using EF = USB_FS_device_DADDR_EF_Values<USB_FS_device::DADDR, 7, 1, ReadWriteMode, USB_FS_deviceDADDRBase> ;
    using FieldValues = USB_FS_device_DADDR_EF_Values<USB_FS_device::DADDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DADDRPack  = Register<0x40005C4C, 32, ReadWriteMode, USB_FS_deviceDADDRBase, T...> ;

  struct USB_FS_deviceBTABLEBase {} ;

  struct BTABLE : public RegisterBase<0x40005C50, 32, ReadWriteMode>
  {
    using BTABLEField = USB_FS_device_BTABLE_BTABLE_Values<USB_FS_device::BTABLE, 3, 13, ReadWriteMode, USB_FS_deviceBTABLEBase> ;
    using FieldValues = USB_FS_device_BTABLE_BTABLE_Values<USB_FS_device::BTABLE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BTABLEPack  = Register<0x40005C50, 32, ReadWriteMode, USB_FS_deviceBTABLEBase, T...> ;

} ;

