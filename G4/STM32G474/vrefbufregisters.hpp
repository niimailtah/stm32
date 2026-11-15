/*******************************************************************************
* Filename      : vrefbufregisters.hpp
*
* Details       : Voltage reference buffer. This header file is auto-generated
*                 for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "vrefbuffieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct VREFBUF
{
  struct VREFBUFVREFBUF_CSRBase {} ;

  struct VREFBUF_CSR : public RegisterBase<0x40010030, 32, ReadWriteMode>
  {
    using ENVR = VREFBUF_VREFBUF_CSR_ENVR_Values<VREFBUF::VREFBUF_CSR, 0, 1, ReadWriteMode, VREFBUFVREFBUF_CSRBase> ;
    using HIZ = VREFBUF_VREFBUF_CSR_HIZ_Values<VREFBUF::VREFBUF_CSR, 1, 1, ReadWriteMode, VREFBUFVREFBUF_CSRBase> ;
    using VRR = VREFBUF_VREFBUF_CSR_VRR_Values<VREFBUF::VREFBUF_CSR, 3, 1, ReadMode, VREFBUFVREFBUF_CSRBase> ;
    using VRS = VREFBUF_VREFBUF_CSR_VRS_Values<VREFBUF::VREFBUF_CSR, 4, 2, ReadWriteMode, VREFBUFVREFBUF_CSRBase> ;
    using FieldValues = VREFBUF_VREFBUF_CSR_VRS_Values<VREFBUF::VREFBUF_CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VREFBUF_CSRPack  = Register<0x40010030, 32, ReadWriteMode, VREFBUFVREFBUF_CSRBase, T...> ;

  struct VREFBUFVREFBUF_CCRBase {} ;

  struct VREFBUF_CCR : public RegisterBase<0x40010034, 32, ReadWriteMode>
  {
    using TRIM = VREFBUF_VREFBUF_CCR_TRIM_Values<VREFBUF::VREFBUF_CCR, 0, 6, ReadWriteMode, VREFBUFVREFBUF_CCRBase> ;
    using FieldValues = VREFBUF_VREFBUF_CCR_TRIM_Values<VREFBUF::VREFBUF_CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VREFBUF_CCRPack  = Register<0x40010034, 32, ReadWriteMode, VREFBUFVREFBUF_CCRBase, T...> ;

} ;

