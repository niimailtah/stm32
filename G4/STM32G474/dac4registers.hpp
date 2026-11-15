/*******************************************************************************
* Filename      : dac4registers.hpp
*
* Details       : Digital-to-analog converter. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "dac4fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DAC4
{
  struct DAC4DAC_CRBase {} ;

  struct DAC_CR : public RegisterBase<0x50001400, 32, ReadWriteMode>
  {
    using EN1 = DAC4_DAC_CR_EN1_Values<DAC4::DAC_CR, 0, 1, ReadWriteMode, DAC4DAC_CRBase> ;
    using TEN1 = DAC4_DAC_CR_TEN1_Values<DAC4::DAC_CR, 1, 1, ReadWriteMode, DAC4DAC_CRBase> ;
    using TSEL1 = DAC4_DAC_CR_TSEL1_Values<DAC4::DAC_CR, 2, 4, ReadWriteMode, DAC4DAC_CRBase> ;
    using WAVE1 = DAC4_DAC_CR_WAVE1_Values<DAC4::DAC_CR, 6, 2, ReadWriteMode, DAC4DAC_CRBase> ;
    using MAMP1 = DAC4_DAC_CR_MAMP1_Values<DAC4::DAC_CR, 8, 4, ReadWriteMode, DAC4DAC_CRBase> ;
    using DMAEN1 = DAC4_DAC_CR_DMAEN1_Values<DAC4::DAC_CR, 12, 1, ReadWriteMode, DAC4DAC_CRBase> ;
    using DMAUDRIE1 = DAC4_DAC_CR_DMAUDRIE1_Values<DAC4::DAC_CR, 13, 1, ReadWriteMode, DAC4DAC_CRBase> ;
    using CEN1 = DAC4_DAC_CR_CEN1_Values<DAC4::DAC_CR, 14, 1, ReadWriteMode, DAC4DAC_CRBase> ;
    using EN2 = DAC4_DAC_CR_EN2_Values<DAC4::DAC_CR, 16, 1, ReadWriteMode, DAC4DAC_CRBase> ;
    using TEN2 = DAC4_DAC_CR_TEN2_Values<DAC4::DAC_CR, 17, 1, ReadWriteMode, DAC4DAC_CRBase> ;
    using TSEL2 = DAC4_DAC_CR_TSEL2_Values<DAC4::DAC_CR, 18, 4, ReadWriteMode, DAC4DAC_CRBase> ;
    using WAVE2 = DAC4_DAC_CR_WAVE2_Values<DAC4::DAC_CR, 22, 2, ReadWriteMode, DAC4DAC_CRBase> ;
    using MAMP2 = DAC4_DAC_CR_MAMP2_Values<DAC4::DAC_CR, 24, 4, ReadWriteMode, DAC4DAC_CRBase> ;
    using DMAEN2 = DAC4_DAC_CR_DMAEN2_Values<DAC4::DAC_CR, 28, 1, ReadWriteMode, DAC4DAC_CRBase> ;
    using DMAUDRIE2 = DAC4_DAC_CR_DMAUDRIE2_Values<DAC4::DAC_CR, 29, 1, ReadWriteMode, DAC4DAC_CRBase> ;
    using CEN2 = DAC4_DAC_CR_CEN2_Values<DAC4::DAC_CR, 30, 1, ReadWriteMode, DAC4DAC_CRBase> ;
    using FieldValues = DAC4_DAC_CR_CEN2_Values<DAC4::DAC_CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_CRPack  = Register<0x50001400, 32, ReadWriteMode, DAC4DAC_CRBase, T...> ;

  struct DAC4DAC_SWTRGRBase {} ;

  struct DAC_SWTRGR : public RegisterBase<0x50001404, 32, WriteMode>
  {
    using SWTRIG1 = DAC4_DAC_SWTRGR_SWTRIG1_Values<DAC4::DAC_SWTRGR, 0, 1, WriteMode, DAC4DAC_SWTRGRBase> ;
    using SWTRIG2 = DAC4_DAC_SWTRGR_SWTRIG2_Values<DAC4::DAC_SWTRGR, 1, 1, WriteMode, DAC4DAC_SWTRGRBase> ;
    using SWTRIGB1 = DAC4_DAC_SWTRGR_SWTRIGB1_Values<DAC4::DAC_SWTRGR, 16, 1, WriteMode, DAC4DAC_SWTRGRBase> ;
    using SWTRIGB2 = DAC4_DAC_SWTRGR_SWTRIGB2_Values<DAC4::DAC_SWTRGR, 17, 1, WriteMode, DAC4DAC_SWTRGRBase> ;
    using FieldValues = DAC4_DAC_SWTRGR_SWTRIGB2_Values<DAC4::DAC_SWTRGR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_SWTRGRPack  = Register<0x50001404, 32, WriteMode, DAC4DAC_SWTRGRBase, T...> ;

  struct DAC4DAC_DHR12R1Base {} ;

  struct DAC_DHR12R1 : public RegisterBase<0x50001408, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC4_DAC_DHR12R1_DACC1DHR_Values<DAC4::DAC_DHR12R1, 0, 12, ReadWriteMode, DAC4DAC_DHR12R1Base> ;
    using DACC1DHRB = DAC4_DAC_DHR12R1_DACC1DHRB_Values<DAC4::DAC_DHR12R1, 16, 12, ReadWriteMode, DAC4DAC_DHR12R1Base> ;
    using FieldValues = DAC4_DAC_DHR12R1_DACC1DHRB_Values<DAC4::DAC_DHR12R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DHR12R1Pack  = Register<0x50001408, 32, ReadWriteMode, DAC4DAC_DHR12R1Base, T...> ;

  struct DAC4DAC_DHR12L1Base {} ;

  struct DAC_DHR12L1 : public RegisterBase<0x5000140C, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC4_DAC_DHR12L1_DACC1DHR_Values<DAC4::DAC_DHR12L1, 4, 12, ReadWriteMode, DAC4DAC_DHR12L1Base> ;
    using DACC1DHRB = DAC4_DAC_DHR12L1_DACC1DHRB_Values<DAC4::DAC_DHR12L1, 20, 12, ReadWriteMode, DAC4DAC_DHR12L1Base> ;
    using FieldValues = DAC4_DAC_DHR12L1_DACC1DHRB_Values<DAC4::DAC_DHR12L1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DHR12L1Pack  = Register<0x5000140C, 32, ReadWriteMode, DAC4DAC_DHR12L1Base, T...> ;

  struct DAC4DAC_DHR8R1Base {} ;

  struct DAC_DHR8R1 : public RegisterBase<0x50001410, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC4_DAC_DHR8R1_DACC1DHR_Values<DAC4::DAC_DHR8R1, 0, 8, ReadWriteMode, DAC4DAC_DHR8R1Base> ;
    using DACC1DHRB = DAC4_DAC_DHR8R1_DACC1DHRB_Values<DAC4::DAC_DHR8R1, 8, 8, ReadWriteMode, DAC4DAC_DHR8R1Base> ;
    using FieldValues = DAC4_DAC_DHR8R1_DACC1DHRB_Values<DAC4::DAC_DHR8R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DHR8R1Pack  = Register<0x50001410, 32, ReadWriteMode, DAC4DAC_DHR8R1Base, T...> ;

  struct DAC4DAC_DHR12R2Base {} ;

  struct DAC_DHR12R2 : public RegisterBase<0x50001414, 32, ReadWriteMode>
  {
    using DACC2DHR = DAC4_DAC_DHR12R2_DACC2DHR_Values<DAC4::DAC_DHR12R2, 0, 12, ReadWriteMode, DAC4DAC_DHR12R2Base> ;
    using DACC2DHRB = DAC4_DAC_DHR12R2_DACC2DHRB_Values<DAC4::DAC_DHR12R2, 16, 12, ReadWriteMode, DAC4DAC_DHR12R2Base> ;
    using FieldValues = DAC4_DAC_DHR12R2_DACC2DHRB_Values<DAC4::DAC_DHR12R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DHR12R2Pack  = Register<0x50001414, 32, ReadWriteMode, DAC4DAC_DHR12R2Base, T...> ;

  struct DAC4DAC_DHR12L2Base {} ;

  struct DAC_DHR12L2 : public RegisterBase<0x50001418, 32, ReadWriteMode>
  {
    using DACC2DHR = DAC4_DAC_DHR12L2_DACC2DHR_Values<DAC4::DAC_DHR12L2, 4, 12, ReadWriteMode, DAC4DAC_DHR12L2Base> ;
    using DACC2DHRB = DAC4_DAC_DHR12L2_DACC2DHRB_Values<DAC4::DAC_DHR12L2, 20, 12, ReadWriteMode, DAC4DAC_DHR12L2Base> ;
    using FieldValues = DAC4_DAC_DHR12L2_DACC2DHRB_Values<DAC4::DAC_DHR12L2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DHR12L2Pack  = Register<0x50001418, 32, ReadWriteMode, DAC4DAC_DHR12L2Base, T...> ;

  struct DAC4DAC_DHR8R2Base {} ;

  struct DAC_DHR8R2 : public RegisterBase<0x5000141C, 32, ReadWriteMode>
  {
    using DACC2DHR = DAC4_DAC_DHR8R2_DACC2DHR_Values<DAC4::DAC_DHR8R2, 0, 8, ReadWriteMode, DAC4DAC_DHR8R2Base> ;
    using DACC2DHRB = DAC4_DAC_DHR8R2_DACC2DHRB_Values<DAC4::DAC_DHR8R2, 8, 8, ReadWriteMode, DAC4DAC_DHR8R2Base> ;
    using FieldValues = DAC4_DAC_DHR8R2_DACC2DHRB_Values<DAC4::DAC_DHR8R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DHR8R2Pack  = Register<0x5000141C, 32, ReadWriteMode, DAC4DAC_DHR8R2Base, T...> ;

  struct DAC4DAC_DHR12RDBase {} ;

  struct DAC_DHR12RD : public RegisterBase<0x50001420, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC4_DAC_DHR12RD_DACC1DHR_Values<DAC4::DAC_DHR12RD, 0, 12, ReadWriteMode, DAC4DAC_DHR12RDBase> ;
    using DACC2DHR = DAC4_DAC_DHR12RD_DACC2DHR_Values<DAC4::DAC_DHR12RD, 16, 12, ReadWriteMode, DAC4DAC_DHR12RDBase> ;
    using FieldValues = DAC4_DAC_DHR12RD_DACC2DHR_Values<DAC4::DAC_DHR12RD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DHR12RDPack  = Register<0x50001420, 32, ReadWriteMode, DAC4DAC_DHR12RDBase, T...> ;

  struct DAC4DAC_DHR12LDBase {} ;

  struct DAC_DHR12LD : public RegisterBase<0x50001424, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC4_DAC_DHR12LD_DACC1DHR_Values<DAC4::DAC_DHR12LD, 4, 12, ReadWriteMode, DAC4DAC_DHR12LDBase> ;
    using DACC2DHR = DAC4_DAC_DHR12LD_DACC2DHR_Values<DAC4::DAC_DHR12LD, 20, 12, ReadWriteMode, DAC4DAC_DHR12LDBase> ;
    using FieldValues = DAC4_DAC_DHR12LD_DACC2DHR_Values<DAC4::DAC_DHR12LD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DHR12LDPack  = Register<0x50001424, 32, ReadWriteMode, DAC4DAC_DHR12LDBase, T...> ;

  struct DAC4DAC_DHR8RDBase {} ;

  struct DAC_DHR8RD : public RegisterBase<0x50001428, 32, ReadWriteMode>
  {
    using DACC1DHR = DAC4_DAC_DHR8RD_DACC1DHR_Values<DAC4::DAC_DHR8RD, 0, 8, ReadWriteMode, DAC4DAC_DHR8RDBase> ;
    using DACC2DHR = DAC4_DAC_DHR8RD_DACC2DHR_Values<DAC4::DAC_DHR8RD, 8, 8, ReadWriteMode, DAC4DAC_DHR8RDBase> ;
    using FieldValues = DAC4_DAC_DHR8RD_DACC2DHR_Values<DAC4::DAC_DHR8RD, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DHR8RDPack  = Register<0x50001428, 32, ReadWriteMode, DAC4DAC_DHR8RDBase, T...> ;

  struct DAC4DAC_DOR1Base {} ;

  struct DAC_DOR1 : public RegisterBase<0x5000142C, 32, ReadMode>
  {
    using DACC1DOR = DAC4_DAC_DOR1_DACC1DOR_Values<DAC4::DAC_DOR1, 0, 12, ReadMode, DAC4DAC_DOR1Base> ;
    using DACC1DORB = DAC4_DAC_DOR1_DACC1DORB_Values<DAC4::DAC_DOR1, 16, 12, ReadMode, DAC4DAC_DOR1Base> ;
    using FieldValues = DAC4_DAC_DOR1_DACC1DORB_Values<DAC4::DAC_DOR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DOR1Pack  = Register<0x5000142C, 32, ReadMode, DAC4DAC_DOR1Base, T...> ;

  struct DAC4DAC_DOR2Base {} ;

  struct DAC_DOR2 : public RegisterBase<0x50001430, 32, ReadMode>
  {
    using DACC2DOR = DAC4_DAC_DOR2_DACC2DOR_Values<DAC4::DAC_DOR2, 0, 12, ReadMode, DAC4DAC_DOR2Base> ;
    using DACC2DORB = DAC4_DAC_DOR2_DACC2DORB_Values<DAC4::DAC_DOR2, 16, 12, ReadMode, DAC4DAC_DOR2Base> ;
    using FieldValues = DAC4_DAC_DOR2_DACC2DORB_Values<DAC4::DAC_DOR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_DOR2Pack  = Register<0x50001430, 32, ReadMode, DAC4DAC_DOR2Base, T...> ;

  struct DAC4DAC_SRBase {} ;

  struct DAC_SR : public RegisterBase<0x50001434, 32, ReadWriteMode>
  {
    using DAC1RDY = DAC4_DAC_SR_DAC1RDY_Values<DAC4::DAC_SR, 11, 1, ReadWriteMode, DAC4DAC_SRBase> ;
    using DORSTAT1 = DAC4_DAC_SR_DORSTAT1_Values<DAC4::DAC_SR, 12, 1, ReadWriteMode, DAC4DAC_SRBase> ;
    using DMAUDR1 = DAC4_DAC_SR_DMAUDR1_Values<DAC4::DAC_SR, 13, 1, ReadWriteMode, DAC4DAC_SRBase> ;
    using CAL_FLAG1 = DAC4_DAC_SR_CAL_FLAG1_Values<DAC4::DAC_SR, 14, 1, ReadMode, DAC4DAC_SRBase> ;
    using BWST1 = DAC4_DAC_SR_BWST1_Values<DAC4::DAC_SR, 15, 1, ReadMode, DAC4DAC_SRBase> ;
    using DAC2RDY = DAC4_DAC_SR_DAC2RDY_Values<DAC4::DAC_SR, 27, 1, ReadWriteMode, DAC4DAC_SRBase> ;
    using DORSTAT2 = DAC4_DAC_SR_DORSTAT2_Values<DAC4::DAC_SR, 28, 1, ReadWriteMode, DAC4DAC_SRBase> ;
    using DMAUDR2 = DAC4_DAC_SR_DMAUDR2_Values<DAC4::DAC_SR, 29, 1, ReadWriteMode, DAC4DAC_SRBase> ;
    using CAL_FLAG2 = DAC4_DAC_SR_CAL_FLAG2_Values<DAC4::DAC_SR, 30, 1, ReadMode, DAC4DAC_SRBase> ;
    using BWST2 = DAC4_DAC_SR_BWST2_Values<DAC4::DAC_SR, 31, 1, ReadMode, DAC4DAC_SRBase> ;
    using FieldValues = DAC4_DAC_SR_BWST2_Values<DAC4::DAC_SR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_SRPack  = Register<0x50001434, 32, ReadWriteMode, DAC4DAC_SRBase, T...> ;

  struct DAC4DAC_CCRBase {} ;

  struct DAC_CCR : public RegisterBase<0x50001438, 32, ReadWriteMode>
  {
    using OTRIM1 = DAC4_DAC_CCR_OTRIM1_Values<DAC4::DAC_CCR, 0, 5, ReadWriteMode, DAC4DAC_CCRBase> ;
    using OTRIM2 = DAC4_DAC_CCR_OTRIM2_Values<DAC4::DAC_CCR, 16, 5, ReadWriteMode, DAC4DAC_CCRBase> ;
    using FieldValues = DAC4_DAC_CCR_OTRIM2_Values<DAC4::DAC_CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_CCRPack  = Register<0x50001438, 32, ReadWriteMode, DAC4DAC_CCRBase, T...> ;

  struct DAC4DAC_MCRBase {} ;

  struct DAC_MCR : public RegisterBase<0x5000143C, 32, ReadWriteMode>
  {
    using MODE1 = DAC4_DAC_MCR_MODE1_Values<DAC4::DAC_MCR, 0, 3, ReadWriteMode, DAC4DAC_MCRBase> ;
    using DMADOUBLE1 = DAC4_DAC_MCR_DMADOUBLE1_Values<DAC4::DAC_MCR, 8, 1, ReadWriteMode, DAC4DAC_MCRBase> ;
    using SINFORMAT1 = DAC4_DAC_MCR_SINFORMAT1_Values<DAC4::DAC_MCR, 9, 1, ReadWriteMode, DAC4DAC_MCRBase> ;
    using HFSEL = DAC4_DAC_MCR_HFSEL_Values<DAC4::DAC_MCR, 14, 2, ReadWriteMode, DAC4DAC_MCRBase> ;
    using MODE2 = DAC4_DAC_MCR_MODE2_Values<DAC4::DAC_MCR, 16, 3, ReadWriteMode, DAC4DAC_MCRBase> ;
    using DMADOUBLE2 = DAC4_DAC_MCR_DMADOUBLE2_Values<DAC4::DAC_MCR, 24, 1, ReadWriteMode, DAC4DAC_MCRBase> ;
    using SINFORMAT2 = DAC4_DAC_MCR_SINFORMAT2_Values<DAC4::DAC_MCR, 25, 1, ReadWriteMode, DAC4DAC_MCRBase> ;
    using FieldValues = DAC4_DAC_MCR_SINFORMAT2_Values<DAC4::DAC_MCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_MCRPack  = Register<0x5000143C, 32, ReadWriteMode, DAC4DAC_MCRBase, T...> ;

  struct DAC4DAC_SHSR1Base {} ;

  struct DAC_SHSR1 : public RegisterBase<0x50001440, 32, ReadWriteMode>
  {
    using TSAMPLE1 = DAC4_DAC_SHSR1_TSAMPLE1_Values<DAC4::DAC_SHSR1, 0, 10, ReadWriteMode, DAC4DAC_SHSR1Base> ;
    using FieldValues = DAC4_DAC_SHSR1_TSAMPLE1_Values<DAC4::DAC_SHSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_SHSR1Pack  = Register<0x50001440, 32, ReadWriteMode, DAC4DAC_SHSR1Base, T...> ;

  struct DAC4DAC_SHSR2Base {} ;

  struct DAC_SHSR2 : public RegisterBase<0x50001444, 32, ReadWriteMode>
  {
    using TSAMPLE2 = DAC4_DAC_SHSR2_TSAMPLE2_Values<DAC4::DAC_SHSR2, 0, 10, ReadWriteMode, DAC4DAC_SHSR2Base> ;
    using FieldValues = DAC4_DAC_SHSR2_TSAMPLE2_Values<DAC4::DAC_SHSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_SHSR2Pack  = Register<0x50001444, 32, ReadWriteMode, DAC4DAC_SHSR2Base, T...> ;

  struct DAC4DAC_SHHRBase {} ;

  struct DAC_SHHR : public RegisterBase<0x50001448, 32, ReadWriteMode>
  {
    using THOLD1 = DAC4_DAC_SHHR_THOLD1_Values<DAC4::DAC_SHHR, 0, 10, ReadWriteMode, DAC4DAC_SHHRBase> ;
    using THOLD2 = DAC4_DAC_SHHR_THOLD2_Values<DAC4::DAC_SHHR, 16, 10, ReadWriteMode, DAC4DAC_SHHRBase> ;
    using FieldValues = DAC4_DAC_SHHR_THOLD2_Values<DAC4::DAC_SHHR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_SHHRPack  = Register<0x50001448, 32, ReadWriteMode, DAC4DAC_SHHRBase, T...> ;

  struct DAC4DAC_SHRRBase {} ;

  struct DAC_SHRR : public RegisterBase<0x5000144C, 32, ReadWriteMode>
  {
    using TREFRESH1 = DAC4_DAC_SHRR_TREFRESH1_Values<DAC4::DAC_SHRR, 0, 8, ReadWriteMode, DAC4DAC_SHRRBase> ;
    using TREFRESH2 = DAC4_DAC_SHRR_TREFRESH2_Values<DAC4::DAC_SHRR, 16, 8, ReadWriteMode, DAC4DAC_SHRRBase> ;
    using FieldValues = DAC4_DAC_SHRR_TREFRESH2_Values<DAC4::DAC_SHRR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_SHRRPack  = Register<0x5000144C, 32, ReadWriteMode, DAC4DAC_SHRRBase, T...> ;

  struct DAC4DAC_STR1Base {} ;

  struct DAC_STR1 : public RegisterBase<0x50001458, 32, ReadWriteMode>
  {
    using STRSTDATA1 = DAC4_DAC_STR1_STRSTDATA1_Values<DAC4::DAC_STR1, 0, 12, ReadWriteMode, DAC4DAC_STR1Base> ;
    using STDIR1 = DAC4_DAC_STR1_STDIR1_Values<DAC4::DAC_STR1, 12, 1, ReadWriteMode, DAC4DAC_STR1Base> ;
    using STINCDATA1 = DAC4_DAC_STR1_STINCDATA1_Values<DAC4::DAC_STR1, 16, 16, ReadWriteMode, DAC4DAC_STR1Base> ;
    using FieldValues = DAC4_DAC_STR1_STINCDATA1_Values<DAC4::DAC_STR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_STR1Pack  = Register<0x50001458, 32, ReadWriteMode, DAC4DAC_STR1Base, T...> ;

  struct DAC4DAC_STR2Base {} ;

  struct DAC_STR2 : public RegisterBase<0x5000145C, 32, ReadWriteMode>
  {
    using STRSTDATA2 = DAC4_DAC_STR2_STRSTDATA2_Values<DAC4::DAC_STR2, 0, 12, ReadWriteMode, DAC4DAC_STR2Base> ;
    using STDIR2 = DAC4_DAC_STR2_STDIR2_Values<DAC4::DAC_STR2, 12, 1, ReadWriteMode, DAC4DAC_STR2Base> ;
    using STINCDATA2 = DAC4_DAC_STR2_STINCDATA2_Values<DAC4::DAC_STR2, 16, 16, ReadWriteMode, DAC4DAC_STR2Base> ;
    using FieldValues = DAC4_DAC_STR2_STINCDATA2_Values<DAC4::DAC_STR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_STR2Pack  = Register<0x5000145C, 32, ReadWriteMode, DAC4DAC_STR2Base, T...> ;

  struct DAC4DAC_STMODRBase {} ;

  struct DAC_STMODR : public RegisterBase<0x50001460, 32, ReadWriteMode>
  {
    using STRSTTRIGSEL1 = DAC4_DAC_STMODR_STRSTTRIGSEL1_Values<DAC4::DAC_STMODR, 0, 4, ReadWriteMode, DAC4DAC_STMODRBase> ;
    using STINCTRIGSEL1 = DAC4_DAC_STMODR_STINCTRIGSEL1_Values<DAC4::DAC_STMODR, 8, 4, ReadWriteMode, DAC4DAC_STMODRBase> ;
    using STRSTTRIGSEL2 = DAC4_DAC_STMODR_STRSTTRIGSEL2_Values<DAC4::DAC_STMODR, 16, 4, ReadWriteMode, DAC4DAC_STMODRBase> ;
    using STINCTRIGSEL2 = DAC4_DAC_STMODR_STINCTRIGSEL2_Values<DAC4::DAC_STMODR, 24, 4, ReadWriteMode, DAC4DAC_STMODRBase> ;
    using FieldValues = DAC4_DAC_STMODR_STINCTRIGSEL2_Values<DAC4::DAC_STMODR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using DAC_STMODRPack  = Register<0x50001460, 32, ReadWriteMode, DAC4DAC_STMODRBase, T...> ;

} ;

