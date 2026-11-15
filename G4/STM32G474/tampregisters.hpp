/*******************************************************************************
* Filename      : tampregisters.hpp
*
* Details       : Tamper and backup registers. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "tampfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TAMP
{
  struct TAMPCR1Base {} ;

  struct CR1 : public RegisterBase<0x40002400, 32, ReadWriteMode>
  {
    using TAMP1E = TAMP_CR1_TAMP1E_Values<TAMP::CR1, 0, 1, ReadWriteMode, TAMPCR1Base> ;
    using TAMP2E = TAMP_CR1_TAMP2E_Values<TAMP::CR1, 1, 1, ReadWriteMode, TAMPCR1Base> ;
    using TAMP3E = TAMP_CR1_TAMP3E_Values<TAMP::CR1, 2, 1, ReadWriteMode, TAMPCR1Base> ;
    using ITAMP3E = TAMP_CR1_ITAMP3E_Values<TAMP::CR1, 18, 1, ReadWriteMode, TAMPCR1Base> ;
    using ITAMP4E = TAMP_CR1_ITAMP4E_Values<TAMP::CR1, 19, 1, ReadWriteMode, TAMPCR1Base> ;
    using ITAMP5E = TAMP_CR1_ITAMP5E_Values<TAMP::CR1, 20, 1, ReadWriteMode, TAMPCR1Base> ;
    using ITAMP6E = TAMP_CR1_ITAMP6E_Values<TAMP::CR1, 21, 1, ReadWriteMode, TAMPCR1Base> ;
    using FieldValues = TAMP_CR1_ITAMP6E_Values<TAMP::CR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40002400, 32, ReadWriteMode, TAMPCR1Base, T...> ;

  struct TAMPCR2Base {} ;

  struct CR2 : public RegisterBase<0x40002404, 32, ReadWriteMode>
  {
    using TAMP1NOER = TAMP_CR2_TAMP1NOER_Values<TAMP::CR2, 0, 1, ReadWriteMode, TAMPCR2Base> ;
    using TAMP2NOER = TAMP_CR2_TAMP2NOER_Values<TAMP::CR2, 1, 1, ReadWriteMode, TAMPCR2Base> ;
    using TAMP3NOER = TAMP_CR2_TAMP3NOER_Values<TAMP::CR2, 2, 1, ReadWriteMode, TAMPCR2Base> ;
    using TAMP1MSK = TAMP_CR2_TAMP1MSK_Values<TAMP::CR2, 16, 1, ReadWriteMode, TAMPCR2Base> ;
    using TAMP2MSK = TAMP_CR2_TAMP2MSK_Values<TAMP::CR2, 17, 1, ReadWriteMode, TAMPCR2Base> ;
    using TAMP3MSK = TAMP_CR2_TAMP3MSK_Values<TAMP::CR2, 18, 1, ReadWriteMode, TAMPCR2Base> ;
    using TAMP1TRG = TAMP_CR2_TAMP1TRG_Values<TAMP::CR2, 24, 1, ReadWriteMode, TAMPCR2Base> ;
    using TAMP2TRG = TAMP_CR2_TAMP2TRG_Values<TAMP::CR2, 25, 1, ReadWriteMode, TAMPCR2Base> ;
    using TAMP3TRG = TAMP_CR2_TAMP3TRG_Values<TAMP::CR2, 26, 1, ReadWriteMode, TAMPCR2Base> ;
    using FieldValues = TAMP_CR2_TAMP3TRG_Values<TAMP::CR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40002404, 32, ReadWriteMode, TAMPCR2Base, T...> ;

  struct TAMPFLTCRBase {} ;

  struct FLTCR : public RegisterBase<0x4000240C, 32, ReadWriteMode>
  {
    using TAMPFREQ = TAMP_FLTCR_TAMPFREQ_Values<TAMP::FLTCR, 0, 3, ReadWriteMode, TAMPFLTCRBase> ;
    using TAMPFLT = TAMP_FLTCR_TAMPFLT_Values<TAMP::FLTCR, 3, 2, ReadWriteMode, TAMPFLTCRBase> ;
    using TAMPPRCH = TAMP_FLTCR_TAMPPRCH_Values<TAMP::FLTCR, 5, 2, ReadWriteMode, TAMPFLTCRBase> ;
    using TAMPPUDIS = TAMP_FLTCR_TAMPPUDIS_Values<TAMP::FLTCR, 7, 1, ReadWriteMode, TAMPFLTCRBase> ;
    using FieldValues = TAMP_FLTCR_TAMPPUDIS_Values<TAMP::FLTCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FLTCRPack  = Register<0x4000240C, 32, ReadWriteMode, TAMPFLTCRBase, T...> ;

  struct TAMPIERBase {} ;

  struct IER : public RegisterBase<0x4000242C, 32, ReadWriteMode>
  {
    using TAMP1IE = TAMP_IER_TAMP1IE_Values<TAMP::IER, 0, 1, ReadWriteMode, TAMPIERBase> ;
    using TAMP2IE = TAMP_IER_TAMP2IE_Values<TAMP::IER, 1, 1, ReadWriteMode, TAMPIERBase> ;
    using TAMP3IE = TAMP_IER_TAMP3IE_Values<TAMP::IER, 2, 1, ReadWriteMode, TAMPIERBase> ;
    using ITAMP3IE = TAMP_IER_ITAMP3IE_Values<TAMP::IER, 18, 1, ReadWriteMode, TAMPIERBase> ;
    using ITAMP4IE = TAMP_IER_ITAMP4IE_Values<TAMP::IER, 19, 1, ReadWriteMode, TAMPIERBase> ;
    using ITAMP5IE = TAMP_IER_ITAMP5IE_Values<TAMP::IER, 20, 1, ReadWriteMode, TAMPIERBase> ;
    using ITAMP6IE = TAMP_IER_ITAMP6IE_Values<TAMP::IER, 21, 1, ReadWriteMode, TAMPIERBase> ;
    using FieldValues = TAMP_IER_ITAMP6IE_Values<TAMP::IER, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IERPack  = Register<0x4000242C, 32, ReadWriteMode, TAMPIERBase, T...> ;

  struct TAMPSRBase {} ;

  struct SR : public RegisterBase<0x40002430, 32, ReadMode>
  {
    using TAMP1F = TAMP_SR_TAMP1F_Values<TAMP::SR, 0, 1, ReadMode, TAMPSRBase> ;
    using TAMP2F = TAMP_SR_TAMP2F_Values<TAMP::SR, 1, 1, ReadMode, TAMPSRBase> ;
    using TAMP3F = TAMP_SR_TAMP3F_Values<TAMP::SR, 2, 1, ReadMode, TAMPSRBase> ;
    using ITAMP3F = TAMP_SR_ITAMP3F_Values<TAMP::SR, 18, 1, ReadMode, TAMPSRBase> ;
    using ITAMP4F = TAMP_SR_ITAMP4F_Values<TAMP::SR, 19, 1, ReadMode, TAMPSRBase> ;
    using ITAMP5F = TAMP_SR_ITAMP5F_Values<TAMP::SR, 20, 1, ReadMode, TAMPSRBase> ;
    using ITAMP6F = TAMP_SR_ITAMP6F_Values<TAMP::SR, 21, 1, ReadMode, TAMPSRBase> ;
    using FieldValues = TAMP_SR_ITAMP6F_Values<TAMP::SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40002430, 32, ReadMode, TAMPSRBase, T...> ;

  struct TAMPMISRBase {} ;

  struct MISR : public RegisterBase<0x40002434, 32, ReadMode>
  {
    using TAMP1MF = TAMP_MISR_TAMP1MF_Values<TAMP::MISR, 0, 1, ReadMode, TAMPMISRBase> ;
    using TAMP2MF = TAMP_MISR_TAMP2MF_Values<TAMP::MISR, 1, 1, ReadMode, TAMPMISRBase> ;
    using TAMP3MF = TAMP_MISR_TAMP3MF_Values<TAMP::MISR, 2, 1, ReadMode, TAMPMISRBase> ;
    using ITAMP3MF = TAMP_MISR_ITAMP3MF_Values<TAMP::MISR, 18, 1, ReadMode, TAMPMISRBase> ;
    using ITAMP4MF = TAMP_MISR_ITAMP4MF_Values<TAMP::MISR, 19, 1, ReadMode, TAMPMISRBase> ;
    using ITAMP5MF = TAMP_MISR_ITAMP5MF_Values<TAMP::MISR, 20, 1, ReadMode, TAMPMISRBase> ;
    using ITAMP6MF = TAMP_MISR_ITAMP6MF_Values<TAMP::MISR, 21, 1, ReadMode, TAMPMISRBase> ;
    using FieldValues = TAMP_MISR_ITAMP6MF_Values<TAMP::MISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using MISRPack  = Register<0x40002434, 32, ReadMode, TAMPMISRBase, T...> ;

  struct TAMPSCRBase {} ;

  struct SCR : public RegisterBase<0x4000243C, 32, ReadWriteMode>
  {
    using CTAMP1F = TAMP_SCR_CTAMP1F_Values<TAMP::SCR, 0, 1, ReadWriteMode, TAMPSCRBase> ;
    using CTAMP2F = TAMP_SCR_CTAMP2F_Values<TAMP::SCR, 1, 1, ReadWriteMode, TAMPSCRBase> ;
    using CTAMP3F = TAMP_SCR_CTAMP3F_Values<TAMP::SCR, 2, 1, ReadWriteMode, TAMPSCRBase> ;
    using CITAMP3F = TAMP_SCR_CITAMP3F_Values<TAMP::SCR, 18, 1, ReadWriteMode, TAMPSCRBase> ;
    using CITAMP4F = TAMP_SCR_CITAMP4F_Values<TAMP::SCR, 19, 1, ReadWriteMode, TAMPSCRBase> ;
    using CITAMP5F = TAMP_SCR_CITAMP5F_Values<TAMP::SCR, 20, 1, ReadWriteMode, TAMPSCRBase> ;
    using CITAMP6F = TAMP_SCR_CITAMP6F_Values<TAMP::SCR, 21, 1, ReadWriteMode, TAMPSCRBase> ;
    using FieldValues = TAMP_SCR_CITAMP6F_Values<TAMP::SCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SCRPack  = Register<0x4000243C, 32, ReadWriteMode, TAMPSCRBase, T...> ;

  struct TAMPBKP0RBase {} ;

  struct BKP0R : public RegisterBase<0x40002500, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP0R_BKP_Values<TAMP::BKP0R, 0, 32, ReadWriteMode, TAMPBKP0RBase> ;
    using FieldValues = TAMP_BKP0R_BKP_Values<TAMP::BKP0R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP0RPack  = Register<0x40002500, 32, ReadWriteMode, TAMPBKP0RBase, T...> ;

  struct TAMPBKP1RBase {} ;

  struct BKP1R : public RegisterBase<0x40002504, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP1R_BKP_Values<TAMP::BKP1R, 0, 32, ReadWriteMode, TAMPBKP1RBase> ;
    using FieldValues = TAMP_BKP1R_BKP_Values<TAMP::BKP1R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP1RPack  = Register<0x40002504, 32, ReadWriteMode, TAMPBKP1RBase, T...> ;

  struct TAMPBKP2RBase {} ;

  struct BKP2R : public RegisterBase<0x40002508, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP2R_BKP_Values<TAMP::BKP2R, 0, 32, ReadWriteMode, TAMPBKP2RBase> ;
    using FieldValues = TAMP_BKP2R_BKP_Values<TAMP::BKP2R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP2RPack  = Register<0x40002508, 32, ReadWriteMode, TAMPBKP2RBase, T...> ;

  struct TAMPBKP3RBase {} ;

  struct BKP3R : public RegisterBase<0x4000250C, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP3R_BKP_Values<TAMP::BKP3R, 0, 32, ReadWriteMode, TAMPBKP3RBase> ;
    using FieldValues = TAMP_BKP3R_BKP_Values<TAMP::BKP3R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP3RPack  = Register<0x4000250C, 32, ReadWriteMode, TAMPBKP3RBase, T...> ;

  struct TAMPBKP4RBase {} ;

  struct BKP4R : public RegisterBase<0x40002510, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP4R_BKP_Values<TAMP::BKP4R, 0, 32, ReadWriteMode, TAMPBKP4RBase> ;
    using FieldValues = TAMP_BKP4R_BKP_Values<TAMP::BKP4R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP4RPack  = Register<0x40002510, 32, ReadWriteMode, TAMPBKP4RBase, T...> ;

  struct TAMPBKP5RBase {} ;

  struct BKP5R : public RegisterBase<0x40002514, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP5R_BKP_Values<TAMP::BKP5R, 0, 32, ReadWriteMode, TAMPBKP5RBase> ;
    using FieldValues = TAMP_BKP5R_BKP_Values<TAMP::BKP5R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP5RPack  = Register<0x40002514, 32, ReadWriteMode, TAMPBKP5RBase, T...> ;

  struct TAMPBKP6RBase {} ;

  struct BKP6R : public RegisterBase<0x40002518, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP6R_BKP_Values<TAMP::BKP6R, 0, 32, ReadWriteMode, TAMPBKP6RBase> ;
    using FieldValues = TAMP_BKP6R_BKP_Values<TAMP::BKP6R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP6RPack  = Register<0x40002518, 32, ReadWriteMode, TAMPBKP6RBase, T...> ;

  struct TAMPBKP7RBase {} ;

  struct BKP7R : public RegisterBase<0x4000251C, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP7R_BKP_Values<TAMP::BKP7R, 0, 32, ReadWriteMode, TAMPBKP7RBase> ;
    using FieldValues = TAMP_BKP7R_BKP_Values<TAMP::BKP7R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP7RPack  = Register<0x4000251C, 32, ReadWriteMode, TAMPBKP7RBase, T...> ;

  struct TAMPBKP8RBase {} ;

  struct BKP8R : public RegisterBase<0x40002520, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP8R_BKP_Values<TAMP::BKP8R, 0, 32, ReadWriteMode, TAMPBKP8RBase> ;
    using FieldValues = TAMP_BKP8R_BKP_Values<TAMP::BKP8R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP8RPack  = Register<0x40002520, 32, ReadWriteMode, TAMPBKP8RBase, T...> ;

  struct TAMPBKP9RBase {} ;

  struct BKP9R : public RegisterBase<0x40002524, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP9R_BKP_Values<TAMP::BKP9R, 0, 32, ReadWriteMode, TAMPBKP9RBase> ;
    using FieldValues = TAMP_BKP9R_BKP_Values<TAMP::BKP9R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP9RPack  = Register<0x40002524, 32, ReadWriteMode, TAMPBKP9RBase, T...> ;

  struct TAMPBKP10RBase {} ;

  struct BKP10R : public RegisterBase<0x40002528, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP10R_BKP_Values<TAMP::BKP10R, 0, 32, ReadWriteMode, TAMPBKP10RBase> ;
    using FieldValues = TAMP_BKP10R_BKP_Values<TAMP::BKP10R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP10RPack  = Register<0x40002528, 32, ReadWriteMode, TAMPBKP10RBase, T...> ;

  struct TAMPBKP11RBase {} ;

  struct BKP11R : public RegisterBase<0x4000252C, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP11R_BKP_Values<TAMP::BKP11R, 0, 32, ReadWriteMode, TAMPBKP11RBase> ;
    using FieldValues = TAMP_BKP11R_BKP_Values<TAMP::BKP11R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP11RPack  = Register<0x4000252C, 32, ReadWriteMode, TAMPBKP11RBase, T...> ;

  struct TAMPBKP12RBase {} ;

  struct BKP12R : public RegisterBase<0x40002530, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP12R_BKP_Values<TAMP::BKP12R, 0, 32, ReadWriteMode, TAMPBKP12RBase> ;
    using FieldValues = TAMP_BKP12R_BKP_Values<TAMP::BKP12R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP12RPack  = Register<0x40002530, 32, ReadWriteMode, TAMPBKP12RBase, T...> ;

  struct TAMPBKP13RBase {} ;

  struct BKP13R : public RegisterBase<0x40002534, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP13R_BKP_Values<TAMP::BKP13R, 0, 32, ReadWriteMode, TAMPBKP13RBase> ;
    using FieldValues = TAMP_BKP13R_BKP_Values<TAMP::BKP13R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP13RPack  = Register<0x40002534, 32, ReadWriteMode, TAMPBKP13RBase, T...> ;

  struct TAMPBKP14RBase {} ;

  struct BKP14R : public RegisterBase<0x40002538, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP14R_BKP_Values<TAMP::BKP14R, 0, 32, ReadWriteMode, TAMPBKP14RBase> ;
    using FieldValues = TAMP_BKP14R_BKP_Values<TAMP::BKP14R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP14RPack  = Register<0x40002538, 32, ReadWriteMode, TAMPBKP14RBase, T...> ;

  struct TAMPBKP15RBase {} ;

  struct BKP15R : public RegisterBase<0x4000253C, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP15R_BKP_Values<TAMP::BKP15R, 0, 32, ReadWriteMode, TAMPBKP15RBase> ;
    using FieldValues = TAMP_BKP15R_BKP_Values<TAMP::BKP15R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP15RPack  = Register<0x4000253C, 32, ReadWriteMode, TAMPBKP15RBase, T...> ;

  struct TAMPBKP16RBase {} ;

  struct BKP16R : public RegisterBase<0x40002540, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP16R_BKP_Values<TAMP::BKP16R, 0, 32, ReadWriteMode, TAMPBKP16RBase> ;
    using FieldValues = TAMP_BKP16R_BKP_Values<TAMP::BKP16R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP16RPack  = Register<0x40002540, 32, ReadWriteMode, TAMPBKP16RBase, T...> ;

  struct TAMPBKP17RBase {} ;

  struct BKP17R : public RegisterBase<0x40002544, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP17R_BKP_Values<TAMP::BKP17R, 0, 32, ReadWriteMode, TAMPBKP17RBase> ;
    using FieldValues = TAMP_BKP17R_BKP_Values<TAMP::BKP17R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP17RPack  = Register<0x40002544, 32, ReadWriteMode, TAMPBKP17RBase, T...> ;

  struct TAMPBKP18RBase {} ;

  struct BKP18R : public RegisterBase<0x40002548, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP18R_BKP_Values<TAMP::BKP18R, 0, 32, ReadWriteMode, TAMPBKP18RBase> ;
    using FieldValues = TAMP_BKP18R_BKP_Values<TAMP::BKP18R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP18RPack  = Register<0x40002548, 32, ReadWriteMode, TAMPBKP18RBase, T...> ;

  struct TAMPBKP19RBase {} ;

  struct BKP19R : public RegisterBase<0x4000254C, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP19R_BKP_Values<TAMP::BKP19R, 0, 32, ReadWriteMode, TAMPBKP19RBase> ;
    using FieldValues = TAMP_BKP19R_BKP_Values<TAMP::BKP19R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP19RPack  = Register<0x4000254C, 32, ReadWriteMode, TAMPBKP19RBase, T...> ;

  struct TAMPBKP20RBase {} ;

  struct BKP20R : public RegisterBase<0x40002550, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP20R_BKP_Values<TAMP::BKP20R, 0, 32, ReadWriteMode, TAMPBKP20RBase> ;
    using FieldValues = TAMP_BKP20R_BKP_Values<TAMP::BKP20R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP20RPack  = Register<0x40002550, 32, ReadWriteMode, TAMPBKP20RBase, T...> ;

  struct TAMPBKP21RBase {} ;

  struct BKP21R : public RegisterBase<0x40002554, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP21R_BKP_Values<TAMP::BKP21R, 0, 32, ReadWriteMode, TAMPBKP21RBase> ;
    using FieldValues = TAMP_BKP21R_BKP_Values<TAMP::BKP21R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP21RPack  = Register<0x40002554, 32, ReadWriteMode, TAMPBKP21RBase, T...> ;

  struct TAMPBKP22RBase {} ;

  struct BKP22R : public RegisterBase<0x40002558, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP22R_BKP_Values<TAMP::BKP22R, 0, 32, ReadWriteMode, TAMPBKP22RBase> ;
    using FieldValues = TAMP_BKP22R_BKP_Values<TAMP::BKP22R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP22RPack  = Register<0x40002558, 32, ReadWriteMode, TAMPBKP22RBase, T...> ;

  struct TAMPBKP23RBase {} ;

  struct BKP23R : public RegisterBase<0x4000255C, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP23R_BKP_Values<TAMP::BKP23R, 0, 32, ReadWriteMode, TAMPBKP23RBase> ;
    using FieldValues = TAMP_BKP23R_BKP_Values<TAMP::BKP23R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP23RPack  = Register<0x4000255C, 32, ReadWriteMode, TAMPBKP23RBase, T...> ;

  struct TAMPBKP24RBase {} ;

  struct BKP24R : public RegisterBase<0x40002560, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP24R_BKP_Values<TAMP::BKP24R, 0, 32, ReadWriteMode, TAMPBKP24RBase> ;
    using FieldValues = TAMP_BKP24R_BKP_Values<TAMP::BKP24R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP24RPack  = Register<0x40002560, 32, ReadWriteMode, TAMPBKP24RBase, T...> ;

  struct TAMPBKP25RBase {} ;

  struct BKP25R : public RegisterBase<0x40002564, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP25R_BKP_Values<TAMP::BKP25R, 0, 32, ReadWriteMode, TAMPBKP25RBase> ;
    using FieldValues = TAMP_BKP25R_BKP_Values<TAMP::BKP25R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP25RPack  = Register<0x40002564, 32, ReadWriteMode, TAMPBKP25RBase, T...> ;

  struct TAMPBKP26RBase {} ;

  struct BKP26R : public RegisterBase<0x40002568, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP26R_BKP_Values<TAMP::BKP26R, 0, 32, ReadWriteMode, TAMPBKP26RBase> ;
    using FieldValues = TAMP_BKP26R_BKP_Values<TAMP::BKP26R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP26RPack  = Register<0x40002568, 32, ReadWriteMode, TAMPBKP26RBase, T...> ;

  struct TAMPBKP27RBase {} ;

  struct BKP27R : public RegisterBase<0x4000256C, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP27R_BKP_Values<TAMP::BKP27R, 0, 32, ReadWriteMode, TAMPBKP27RBase> ;
    using FieldValues = TAMP_BKP27R_BKP_Values<TAMP::BKP27R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP27RPack  = Register<0x4000256C, 32, ReadWriteMode, TAMPBKP27RBase, T...> ;

  struct TAMPBKP28RBase {} ;

  struct BKP28R : public RegisterBase<0x40002570, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP28R_BKP_Values<TAMP::BKP28R, 0, 32, ReadWriteMode, TAMPBKP28RBase> ;
    using FieldValues = TAMP_BKP28R_BKP_Values<TAMP::BKP28R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP28RPack  = Register<0x40002570, 32, ReadWriteMode, TAMPBKP28RBase, T...> ;

  struct TAMPBKP29RBase {} ;

  struct BKP29R : public RegisterBase<0x40002574, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP29R_BKP_Values<TAMP::BKP29R, 0, 32, ReadWriteMode, TAMPBKP29RBase> ;
    using FieldValues = TAMP_BKP29R_BKP_Values<TAMP::BKP29R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP29RPack  = Register<0x40002574, 32, ReadWriteMode, TAMPBKP29RBase, T...> ;

  struct TAMPBKP30RBase {} ;

  struct BKP30R : public RegisterBase<0x40002578, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP30R_BKP_Values<TAMP::BKP30R, 0, 32, ReadWriteMode, TAMPBKP30RBase> ;
    using FieldValues = TAMP_BKP30R_BKP_Values<TAMP::BKP30R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP30RPack  = Register<0x40002578, 32, ReadWriteMode, TAMPBKP30RBase, T...> ;

  struct TAMPBKP31RBase {} ;

  struct BKP31R : public RegisterBase<0x4000257C, 32, ReadWriteMode>
  {
    using BKP = TAMP_BKP31R_BKP_Values<TAMP::BKP31R, 0, 32, ReadWriteMode, TAMPBKP31RBase> ;
    using FieldValues = TAMP_BKP31R_BKP_Values<TAMP::BKP31R, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using BKP31RPack  = Register<0x4000257C, 32, ReadWriteMode, TAMPBKP31RBase, T...> ;

} ;

