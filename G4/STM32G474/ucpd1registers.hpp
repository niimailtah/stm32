/*******************************************************************************
* Filename      : ucpd1registers.hpp
*
* Details       : UCPD1. This header file is auto-generated for STM32G474
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "ucpd1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct UCPD1
{
  struct UCPD1CFG1Base {} ;

  struct CFG1 : public RegisterBase<0x4000A000, 32, ReadWriteMode>
  {
    using HBITCLKDIV = UCPD1_CFG1_HBITCLKDIV_Values<UCPD1::CFG1, 0, 6, ReadWriteMode, UCPD1CFG1Base> ;
    using IFRGAP = UCPD1_CFG1_IFRGAP_Values<UCPD1::CFG1, 6, 5, ReadWriteMode, UCPD1CFG1Base> ;
    using TRANSWIN = UCPD1_CFG1_TRANSWIN_Values<UCPD1::CFG1, 11, 5, ReadWriteMode, UCPD1CFG1Base> ;
    using PSC_USBPDCLK = UCPD1_CFG1_PSC_USBPDCLK_Values<UCPD1::CFG1, 17, 3, ReadWriteMode, UCPD1CFG1Base> ;
    using RXORDSETEN = UCPD1_CFG1_RXORDSETEN_Values<UCPD1::CFG1, 20, 9, ReadWriteMode, UCPD1CFG1Base> ;
    using TXDMAEN = UCPD1_CFG1_TXDMAEN_Values<UCPD1::CFG1, 29, 1, ReadWriteMode, UCPD1CFG1Base> ;
    using RXDMAEN = UCPD1_CFG1_RXDMAEN_Values<UCPD1::CFG1, 30, 1, ReadWriteMode, UCPD1CFG1Base> ;
    using UCPDEN = UCPD1_CFG1_UCPDEN_Values<UCPD1::CFG1, 31, 1, ReadWriteMode, UCPD1CFG1Base> ;
    using FieldValues = UCPD1_CFG1_UCPDEN_Values<UCPD1::CFG1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG1Pack  = Register<0x4000A000, 32, ReadWriteMode, UCPD1CFG1Base, T...> ;

  struct UCPD1CFG2Base {} ;

  struct CFG2 : public RegisterBase<0x4000A004, 32, ReadWriteMode>
  {
    using RXFILTDIS = UCPD1_CFG2_RXFILTDIS_Values<UCPD1::CFG2, 0, 1, ReadWriteMode, UCPD1CFG2Base> ;
    using RXFILT2N3 = UCPD1_CFG2_RXFILT2N3_Values<UCPD1::CFG2, 1, 1, ReadWriteMode, UCPD1CFG2Base> ;
    using FORCECLK = UCPD1_CFG2_FORCECLK_Values<UCPD1::CFG2, 2, 1, ReadWriteMode, UCPD1CFG2Base> ;
    using WUPEN = UCPD1_CFG2_WUPEN_Values<UCPD1::CFG2, 3, 1, ReadWriteMode, UCPD1CFG2Base> ;
    using FieldValues = UCPD1_CFG2_WUPEN_Values<UCPD1::CFG2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFG2Pack  = Register<0x4000A004, 32, ReadWriteMode, UCPD1CFG2Base, T...> ;

  struct UCPD1CRBase {} ;

  struct CR : public RegisterBase<0x4000A00C, 32, ReadWriteMode>
  {
    using TXMODE = UCPD1_CR_TXMODE_Values<UCPD1::CR, 0, 2, ReadWriteMode, UCPD1CRBase> ;
    using TXSEND = UCPD1_CR_TXSEND_Values<UCPD1::CR, 2, 1, ReadWriteMode, UCPD1CRBase> ;
    using TXHRST = UCPD1_CR_TXHRST_Values<UCPD1::CR, 3, 1, ReadWriteMode, UCPD1CRBase> ;
    using RXMODE = UCPD1_CR_RXMODE_Values<UCPD1::CR, 4, 1, ReadWriteMode, UCPD1CRBase> ;
    using PHYRXEN = UCPD1_CR_PHYRXEN_Values<UCPD1::CR, 5, 1, ReadWriteMode, UCPD1CRBase> ;
    using PHYCCSEL = UCPD1_CR_PHYCCSEL_Values<UCPD1::CR, 6, 1, ReadWriteMode, UCPD1CRBase> ;
    using ANASUBMODE = UCPD1_CR_ANASUBMODE_Values<UCPD1::CR, 7, 2, ReadWriteMode, UCPD1CRBase> ;
    using ANAMODE = UCPD1_CR_ANAMODE_Values<UCPD1::CR, 9, 1, ReadWriteMode, UCPD1CRBase> ;
    using CCENABLE = UCPD1_CR_CCENABLE_Values<UCPD1::CR, 10, 2, ReadWriteMode, UCPD1CRBase> ;
    using FRSRXEN = UCPD1_CR_FRSRXEN_Values<UCPD1::CR, 16, 1, ReadWriteMode, UCPD1CRBase> ;
    using FRSTX = UCPD1_CR_FRSTX_Values<UCPD1::CR, 17, 1, ReadWriteMode, UCPD1CRBase> ;
    using RDCH = UCPD1_CR_RDCH_Values<UCPD1::CR, 18, 1, ReadWriteMode, UCPD1CRBase> ;
    using CC1TCDIS = UCPD1_CR_CC1TCDIS_Values<UCPD1::CR, 20, 1, ReadWriteMode, UCPD1CRBase> ;
    using CC2TCDIS = UCPD1_CR_CC2TCDIS_Values<UCPD1::CR, 21, 1, ReadWriteMode, UCPD1CRBase> ;
    using FieldValues = UCPD1_CR_CC2TCDIS_Values<UCPD1::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x4000A00C, 32, ReadWriteMode, UCPD1CRBase, T...> ;

  struct UCPD1IMRBase {} ;

  struct IMR : public RegisterBase<0x4000A010, 32, ReadWriteMode>
  {
    using TXISIE = UCPD1_IMR_TXISIE_Values<UCPD1::IMR, 0, 1, ReadWriteMode, UCPD1IMRBase> ;
    using TXMSGDISCIE = UCPD1_IMR_TXMSGDISCIE_Values<UCPD1::IMR, 1, 1, ReadWriteMode, UCPD1IMRBase> ;
    using TXMSGSENTIE = UCPD1_IMR_TXMSGSENTIE_Values<UCPD1::IMR, 2, 1, ReadWriteMode, UCPD1IMRBase> ;
    using TXMSGABTIE = UCPD1_IMR_TXMSGABTIE_Values<UCPD1::IMR, 3, 1, ReadWriteMode, UCPD1IMRBase> ;
    using HRSTDISCIE = UCPD1_IMR_HRSTDISCIE_Values<UCPD1::IMR, 4, 1, ReadWriteMode, UCPD1IMRBase> ;
    using HRSTSENTIE = UCPD1_IMR_HRSTSENTIE_Values<UCPD1::IMR, 5, 1, ReadWriteMode, UCPD1IMRBase> ;
    using TXUNDIE = UCPD1_IMR_TXUNDIE_Values<UCPD1::IMR, 6, 1, ReadWriteMode, UCPD1IMRBase> ;
    using RXNEIE = UCPD1_IMR_RXNEIE_Values<UCPD1::IMR, 8, 1, ReadWriteMode, UCPD1IMRBase> ;
    using RXORDDETIE = UCPD1_IMR_RXORDDETIE_Values<UCPD1::IMR, 9, 1, ReadWriteMode, UCPD1IMRBase> ;
    using RXHRSTDETIE = UCPD1_IMR_RXHRSTDETIE_Values<UCPD1::IMR, 10, 1, ReadWriteMode, UCPD1IMRBase> ;
    using RXOVRIE = UCPD1_IMR_RXOVRIE_Values<UCPD1::IMR, 11, 1, ReadWriteMode, UCPD1IMRBase> ;
    using RXMSGENDIE = UCPD1_IMR_RXMSGENDIE_Values<UCPD1::IMR, 12, 1, ReadWriteMode, UCPD1IMRBase> ;
    using TYPECEVT1IE = UCPD1_IMR_TYPECEVT1IE_Values<UCPD1::IMR, 14, 1, ReadWriteMode, UCPD1IMRBase> ;
    using TYPECEVT2IE = UCPD1_IMR_TYPECEVT2IE_Values<UCPD1::IMR, 15, 1, ReadWriteMode, UCPD1IMRBase> ;
    using FRSEVTIE = UCPD1_IMR_FRSEVTIE_Values<UCPD1::IMR, 20, 1, ReadWriteMode, UCPD1IMRBase> ;
    using FieldValues = UCPD1_IMR_FRSEVTIE_Values<UCPD1::IMR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMRPack  = Register<0x4000A010, 32, ReadWriteMode, UCPD1IMRBase, T...> ;

  struct UCPD1SRBase {} ;

  struct SR : public RegisterBase<0x4000A014, 32, ReadWriteMode>
  {
    using TXIS = UCPD1_SR_TXIS_Values<UCPD1::SR, 0, 1, ReadWriteMode, UCPD1SRBase> ;
    using TXMSGDISC = UCPD1_SR_TXMSGDISC_Values<UCPD1::SR, 1, 1, ReadWriteMode, UCPD1SRBase> ;
    using TXMSGSENT = UCPD1_SR_TXMSGSENT_Values<UCPD1::SR, 2, 1, ReadWriteMode, UCPD1SRBase> ;
    using TXMSGABT = UCPD1_SR_TXMSGABT_Values<UCPD1::SR, 3, 1, ReadWriteMode, UCPD1SRBase> ;
    using HRSTDISC = UCPD1_SR_HRSTDISC_Values<UCPD1::SR, 4, 1, ReadWriteMode, UCPD1SRBase> ;
    using HRSTSENT = UCPD1_SR_HRSTSENT_Values<UCPD1::SR, 5, 1, ReadWriteMode, UCPD1SRBase> ;
    using TXUND = UCPD1_SR_TXUND_Values<UCPD1::SR, 6, 1, ReadWriteMode, UCPD1SRBase> ;
    using RXNE = UCPD1_SR_RXNE_Values<UCPD1::SR, 8, 1, ReadWriteMode, UCPD1SRBase> ;
    using RXORDDET = UCPD1_SR_RXORDDET_Values<UCPD1::SR, 9, 1, ReadWriteMode, UCPD1SRBase> ;
    using RXHRSTDET = UCPD1_SR_RXHRSTDET_Values<UCPD1::SR, 10, 1, ReadWriteMode, UCPD1SRBase> ;
    using RXOVR = UCPD1_SR_RXOVR_Values<UCPD1::SR, 11, 1, ReadWriteMode, UCPD1SRBase> ;
    using RXMSGEND = UCPD1_SR_RXMSGEND_Values<UCPD1::SR, 12, 1, ReadWriteMode, UCPD1SRBase> ;
    using RXERR = UCPD1_SR_RXERR_Values<UCPD1::SR, 13, 1, ReadWriteMode, UCPD1SRBase> ;
    using TYPECEVT1 = UCPD1_SR_TYPECEVT1_Values<UCPD1::SR, 14, 1, ReadWriteMode, UCPD1SRBase> ;
    using TYPECEVT2 = UCPD1_SR_TYPECEVT2_Values<UCPD1::SR, 15, 1, ReadWriteMode, UCPD1SRBase> ;
    using TYPEC_VSTATE_CC1 = UCPD1_SR_TYPEC_VSTATE_CC1_Values<UCPD1::SR, 16, 2, ReadWriteMode, UCPD1SRBase> ;
    using TYPEC_VSTATE_CC2 = UCPD1_SR_TYPEC_VSTATE_CC2_Values<UCPD1::SR, 18, 2, ReadWriteMode, UCPD1SRBase> ;
    using FRSEVT = UCPD1_SR_FRSEVT_Values<UCPD1::SR, 20, 1, ReadWriteMode, UCPD1SRBase> ;
    using FieldValues = UCPD1_SR_FRSEVT_Values<UCPD1::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x4000A014, 32, ReadWriteMode, UCPD1SRBase, T...> ;

  struct UCPD1ICRBase {} ;

  struct ICR : public RegisterBase<0x4000A018, 32, ReadWriteMode>
  {
    using TXMSGDISCCF = UCPD1_ICR_TXMSGDISCCF_Values<UCPD1::ICR, 1, 1, ReadWriteMode, UCPD1ICRBase> ;
    using TXMSGSENTCF = UCPD1_ICR_TXMSGSENTCF_Values<UCPD1::ICR, 2, 1, ReadWriteMode, UCPD1ICRBase> ;
    using TXMSGABTCF = UCPD1_ICR_TXMSGABTCF_Values<UCPD1::ICR, 3, 1, ReadWriteMode, UCPD1ICRBase> ;
    using HRSTDISCCF = UCPD1_ICR_HRSTDISCCF_Values<UCPD1::ICR, 4, 1, ReadWriteMode, UCPD1ICRBase> ;
    using HRSTSENTCF = UCPD1_ICR_HRSTSENTCF_Values<UCPD1::ICR, 5, 1, ReadWriteMode, UCPD1ICRBase> ;
    using TXUNDCF = UCPD1_ICR_TXUNDCF_Values<UCPD1::ICR, 6, 1, ReadWriteMode, UCPD1ICRBase> ;
    using RXORDDETCF = UCPD1_ICR_RXORDDETCF_Values<UCPD1::ICR, 9, 1, ReadWriteMode, UCPD1ICRBase> ;
    using RXHRSTDETCF = UCPD1_ICR_RXHRSTDETCF_Values<UCPD1::ICR, 10, 1, ReadWriteMode, UCPD1ICRBase> ;
    using RXOVRCF = UCPD1_ICR_RXOVRCF_Values<UCPD1::ICR, 11, 1, ReadWriteMode, UCPD1ICRBase> ;
    using RXMSGENDCF = UCPD1_ICR_RXMSGENDCF_Values<UCPD1::ICR, 12, 1, ReadWriteMode, UCPD1ICRBase> ;
    using TYPECEVT1CF = UCPD1_ICR_TYPECEVT1CF_Values<UCPD1::ICR, 14, 1, ReadWriteMode, UCPD1ICRBase> ;
    using TYPECEVT2CF = UCPD1_ICR_TYPECEVT2CF_Values<UCPD1::ICR, 15, 1, ReadWriteMode, UCPD1ICRBase> ;
    using FRSEVTCF = UCPD1_ICR_FRSEVTCF_Values<UCPD1::ICR, 20, 1, ReadWriteMode, UCPD1ICRBase> ;
    using FieldValues = UCPD1_ICR_FRSEVTCF_Values<UCPD1::ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using ICRPack  = Register<0x4000A018, 32, ReadWriteMode, UCPD1ICRBase, T...> ;

  struct UCPD1TX_ORDSETBase {} ;

  struct TX_ORDSET : public RegisterBase<0x4000A01C, 32, ReadWriteMode>
  {
    using TXORDSET = UCPD1_TX_ORDSET_TXORDSET_Values<UCPD1::TX_ORDSET, 0, 20, ReadWriteMode, UCPD1TX_ORDSETBase> ;
    using FieldValues = UCPD1_TX_ORDSET_TXORDSET_Values<UCPD1::TX_ORDSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TX_ORDSETPack  = Register<0x4000A01C, 32, ReadWriteMode, UCPD1TX_ORDSETBase, T...> ;

  struct UCPD1TX_PAYSZBase {} ;

  struct TX_PAYSZ : public RegisterBase<0x4000A020, 32, ReadWriteMode>
  {
    using TXPAYSZ = UCPD1_TX_PAYSZ_TXPAYSZ_Values<UCPD1::TX_PAYSZ, 0, 10, ReadWriteMode, UCPD1TX_PAYSZBase> ;
    using FieldValues = UCPD1_TX_PAYSZ_TXPAYSZ_Values<UCPD1::TX_PAYSZ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TX_PAYSZPack  = Register<0x4000A020, 32, ReadWriteMode, UCPD1TX_PAYSZBase, T...> ;

  struct UCPD1TXDRBase {} ;

  struct TXDR : public RegisterBase<0x4000A024, 32, ReadWriteMode>
  {
    using TXDATA = UCPD1_TXDR_TXDATA_Values<UCPD1::TXDR, 0, 8, ReadWriteMode, UCPD1TXDRBase> ;
    using FieldValues = UCPD1_TXDR_TXDATA_Values<UCPD1::TXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using TXDRPack  = Register<0x4000A024, 32, ReadWriteMode, UCPD1TXDRBase, T...> ;

  struct UCPD1RX_ORDSETBase {} ;

  struct RX_ORDSET : public RegisterBase<0x4000A028, 32, ReadMode>
  {
    using RXORDSET = UCPD1_RX_ORDSET_RXORDSET_Values<UCPD1::RX_ORDSET, 0, 3, ReadMode, UCPD1RX_ORDSETBase> ;
    using RXSOP3OF4 = UCPD1_RX_ORDSET_RXSOP3OF4_Values<UCPD1::RX_ORDSET, 3, 1, ReadMode, UCPD1RX_ORDSETBase> ;
    using RXSOPKINVALID = UCPD1_RX_ORDSET_RXSOPKINVALID_Values<UCPD1::RX_ORDSET, 4, 3, ReadMode, UCPD1RX_ORDSETBase> ;
    using FieldValues = UCPD1_RX_ORDSET_RXSOPKINVALID_Values<UCPD1::RX_ORDSET, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RX_ORDSETPack  = Register<0x4000A028, 32, ReadMode, UCPD1RX_ORDSETBase, T...> ;

  struct UCPD1RX_PAYSZBase {} ;

  struct RX_PAYSZ : public RegisterBase<0x4000A02C, 32, ReadMode>
  {
    using RXPAYSZ = UCPD1_RX_PAYSZ_RXPAYSZ_Values<UCPD1::RX_PAYSZ, 0, 10, ReadMode, UCPD1RX_PAYSZBase> ;
    using FieldValues = UCPD1_RX_PAYSZ_RXPAYSZ_Values<UCPD1::RX_PAYSZ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RX_PAYSZPack  = Register<0x4000A02C, 32, ReadMode, UCPD1RX_PAYSZBase, T...> ;

  struct UCPD1RXDRBase {} ;

  struct RXDR : public RegisterBase<0x4000A030, 32, ReadMode>
  {
    using RXDATA = UCPD1_RXDR_RXDATA_Values<UCPD1::RXDR, 0, 8, ReadMode, UCPD1RXDRBase> ;
    using FieldValues = UCPD1_RXDR_RXDATA_Values<UCPD1::RXDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RXDRPack  = Register<0x4000A030, 32, ReadMode, UCPD1RXDRBase, T...> ;

  struct UCPD1RX_ORDEXT1Base {} ;

  struct RX_ORDEXT1 : public RegisterBase<0x4000A034, 32, ReadWriteMode>
  {
    using RXSOPX1 = UCPD1_RX_ORDEXT1_RXSOPX1_Values<UCPD1::RX_ORDEXT1, 0, 20, ReadWriteMode, UCPD1RX_ORDEXT1Base> ;
    using FieldValues = UCPD1_RX_ORDEXT1_RXSOPX1_Values<UCPD1::RX_ORDEXT1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RX_ORDEXT1Pack  = Register<0x4000A034, 32, ReadWriteMode, UCPD1RX_ORDEXT1Base, T...> ;

  struct UCPD1RX_ORDEXT2Base {} ;

  struct RX_ORDEXT2 : public RegisterBase<0x4000A038, 32, ReadWriteMode>
  {
    using RXSOPX2 = UCPD1_RX_ORDEXT2_RXSOPX2_Values<UCPD1::RX_ORDEXT2, 0, 20, ReadWriteMode, UCPD1RX_ORDEXT2Base> ;
    using FieldValues = UCPD1_RX_ORDEXT2_RXSOPX2_Values<UCPD1::RX_ORDEXT2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RX_ORDEXT2Pack  = Register<0x4000A038, 32, ReadWriteMode, UCPD1RX_ORDEXT2Base, T...> ;

} ;

