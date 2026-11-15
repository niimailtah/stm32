/*******************************************************************************
* Filename      : cordicregisters.hpp
*
* Details       : CORDIC Co-processor. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "cordicfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CORDIC
{
  struct CORDICCSRBase {} ;

  struct CSR : public RegisterBase<0x40020C00, 32, ReadWriteMode>
  {
    using FUNC = CORDIC_CSR_FUNC_Values<CORDIC::CSR, 0, 4, ReadWriteMode, CORDICCSRBase> ;
    using PRECISION = CORDIC_CSR_PRECISION_Values<CORDIC::CSR, 4, 4, ReadWriteMode, CORDICCSRBase> ;
    using SCALE = CORDIC_CSR_SCALE_Values<CORDIC::CSR, 8, 3, ReadWriteMode, CORDICCSRBase> ;
    using IEN = CORDIC_CSR_IEN_Values<CORDIC::CSR, 16, 1, ReadWriteMode, CORDICCSRBase> ;
    using DMAREN = CORDIC_CSR_DMAREN_Values<CORDIC::CSR, 17, 1, ReadWriteMode, CORDICCSRBase> ;
    using DMAWEN = CORDIC_CSR_DMAWEN_Values<CORDIC::CSR, 18, 1, ReadWriteMode, CORDICCSRBase> ;
    using NRES = CORDIC_CSR_NRES_Values<CORDIC::CSR, 19, 1, ReadWriteMode, CORDICCSRBase> ;
    using NARGS = CORDIC_CSR_NARGS_Values<CORDIC::CSR, 20, 1, ReadWriteMode, CORDICCSRBase> ;
    using RESSIZE = CORDIC_CSR_RESSIZE_Values<CORDIC::CSR, 21, 1, ReadWriteMode, CORDICCSRBase> ;
    using ARGSIZE = CORDIC_CSR_ARGSIZE_Values<CORDIC::CSR, 22, 1, ReadWriteMode, CORDICCSRBase> ;
    using RRDY = CORDIC_CSR_RRDY_Values<CORDIC::CSR, 31, 1, ReadWriteMode, CORDICCSRBase> ;
    using FieldValues = CORDIC_CSR_RRDY_Values<CORDIC::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40020C00, 32, ReadWriteMode, CORDICCSRBase, T...> ;

  struct CORDICWDATABase {} ;

  struct WDATA : public RegisterBase<0x40020C04, 32, ReadWriteMode>
  {
    using ARG = CORDIC_WDATA_ARG_Values<CORDIC::WDATA, 0, 32, ReadWriteMode, CORDICWDATABase> ;
    using FieldValues = CORDIC_WDATA_ARG_Values<CORDIC::WDATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using WDATAPack  = Register<0x40020C04, 32, ReadWriteMode, CORDICWDATABase, T...> ;

  struct CORDICRDATABase {} ;

  struct RDATA : public RegisterBase<0x40020C08, 32, ReadMode>
  {
    using RES = CORDIC_RDATA_RES_Values<CORDIC::RDATA, 0, 32, ReadMode, CORDICRDATABase> ;
    using FieldValues = CORDIC_RDATA_RES_Values<CORDIC::RDATA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RDATAPack  = Register<0x40020C08, 32, ReadMode, CORDICRDATABase, T...> ;

} ;

