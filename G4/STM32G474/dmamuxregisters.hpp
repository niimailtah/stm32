/*******************************************************************************
* Filename      : dmamuxregisters.hpp
*
* Details       : DMAMUX. This header file is auto-generated for STM32G474
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "dmamuxfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DMAMUX
{
  struct DMAMUXC0CRBase {} ;

  struct C0CR : public RegisterBase<0x40020800, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C0CR_DMAREQ_ID_Values<DMAMUX::C0CR, 0, 7, ReadWriteMode, DMAMUXC0CRBase> ;
    using SOIE = DMAMUX_C0CR_SOIE_Values<DMAMUX::C0CR, 8, 1, ReadWriteMode, DMAMUXC0CRBase> ;
    using EGE = DMAMUX_C0CR_EGE_Values<DMAMUX::C0CR, 9, 1, ReadWriteMode, DMAMUXC0CRBase> ;
    using SE = DMAMUX_C0CR_SE_Values<DMAMUX::C0CR, 16, 1, ReadWriteMode, DMAMUXC0CRBase> ;
    using SPOL = DMAMUX_C0CR_SPOL_Values<DMAMUX::C0CR, 17, 2, ReadWriteMode, DMAMUXC0CRBase> ;
    using NBREQ = DMAMUX_C0CR_NBREQ_Values<DMAMUX::C0CR, 19, 5, ReadWriteMode, DMAMUXC0CRBase> ;
    using SYNC_ID = DMAMUX_C0CR_SYNC_ID_Values<DMAMUX::C0CR, 24, 5, ReadWriteMode, DMAMUXC0CRBase> ;
    using FieldValues = DMAMUX_C0CR_SYNC_ID_Values<DMAMUX::C0CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C0CRPack  = Register<0x40020800, 32, ReadWriteMode, DMAMUXC0CRBase, T...> ;

  struct DMAMUXC1CRBase {} ;

  struct C1CR : public RegisterBase<0x40020804, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C1CR_DMAREQ_ID_Values<DMAMUX::C1CR, 0, 7, ReadWriteMode, DMAMUXC1CRBase> ;
    using SOIE = DMAMUX_C1CR_SOIE_Values<DMAMUX::C1CR, 8, 1, ReadWriteMode, DMAMUXC1CRBase> ;
    using EGE = DMAMUX_C1CR_EGE_Values<DMAMUX::C1CR, 9, 1, ReadWriteMode, DMAMUXC1CRBase> ;
    using SE = DMAMUX_C1CR_SE_Values<DMAMUX::C1CR, 16, 1, ReadWriteMode, DMAMUXC1CRBase> ;
    using SPOL = DMAMUX_C1CR_SPOL_Values<DMAMUX::C1CR, 17, 2, ReadWriteMode, DMAMUXC1CRBase> ;
    using NBREQ = DMAMUX_C1CR_NBREQ_Values<DMAMUX::C1CR, 19, 5, ReadWriteMode, DMAMUXC1CRBase> ;
    using SYNC_ID = DMAMUX_C1CR_SYNC_ID_Values<DMAMUX::C1CR, 24, 5, ReadWriteMode, DMAMUXC1CRBase> ;
    using FieldValues = DMAMUX_C1CR_SYNC_ID_Values<DMAMUX::C1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1CRPack  = Register<0x40020804, 32, ReadWriteMode, DMAMUXC1CRBase, T...> ;

  struct DMAMUXC2CRBase {} ;

  struct C2CR : public RegisterBase<0x40020808, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C2CR_DMAREQ_ID_Values<DMAMUX::C2CR, 0, 7, ReadWriteMode, DMAMUXC2CRBase> ;
    using SOIE = DMAMUX_C2CR_SOIE_Values<DMAMUX::C2CR, 8, 1, ReadWriteMode, DMAMUXC2CRBase> ;
    using EGE = DMAMUX_C2CR_EGE_Values<DMAMUX::C2CR, 9, 1, ReadWriteMode, DMAMUXC2CRBase> ;
    using SE = DMAMUX_C2CR_SE_Values<DMAMUX::C2CR, 16, 1, ReadWriteMode, DMAMUXC2CRBase> ;
    using SPOL = DMAMUX_C2CR_SPOL_Values<DMAMUX::C2CR, 17, 2, ReadWriteMode, DMAMUXC2CRBase> ;
    using NBREQ = DMAMUX_C2CR_NBREQ_Values<DMAMUX::C2CR, 19, 5, ReadWriteMode, DMAMUXC2CRBase> ;
    using SYNC_ID = DMAMUX_C2CR_SYNC_ID_Values<DMAMUX::C2CR, 24, 5, ReadWriteMode, DMAMUXC2CRBase> ;
    using FieldValues = DMAMUX_C2CR_SYNC_ID_Values<DMAMUX::C2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2CRPack  = Register<0x40020808, 32, ReadWriteMode, DMAMUXC2CRBase, T...> ;

  struct DMAMUXC3CRBase {} ;

  struct C3CR : public RegisterBase<0x4002080C, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C3CR_DMAREQ_ID_Values<DMAMUX::C3CR, 0, 7, ReadWriteMode, DMAMUXC3CRBase> ;
    using SOIE = DMAMUX_C3CR_SOIE_Values<DMAMUX::C3CR, 8, 1, ReadWriteMode, DMAMUXC3CRBase> ;
    using EGE = DMAMUX_C3CR_EGE_Values<DMAMUX::C3CR, 9, 1, ReadWriteMode, DMAMUXC3CRBase> ;
    using SE = DMAMUX_C3CR_SE_Values<DMAMUX::C3CR, 16, 1, ReadWriteMode, DMAMUXC3CRBase> ;
    using SPOL = DMAMUX_C3CR_SPOL_Values<DMAMUX::C3CR, 17, 2, ReadWriteMode, DMAMUXC3CRBase> ;
    using NBREQ = DMAMUX_C3CR_NBREQ_Values<DMAMUX::C3CR, 19, 5, ReadWriteMode, DMAMUXC3CRBase> ;
    using SYNC_ID = DMAMUX_C3CR_SYNC_ID_Values<DMAMUX::C3CR, 24, 5, ReadWriteMode, DMAMUXC3CRBase> ;
    using FieldValues = DMAMUX_C3CR_SYNC_ID_Values<DMAMUX::C3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C3CRPack  = Register<0x4002080C, 32, ReadWriteMode, DMAMUXC3CRBase, T...> ;

  struct DMAMUXC4CRBase {} ;

  struct C4CR : public RegisterBase<0x40020810, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C4CR_DMAREQ_ID_Values<DMAMUX::C4CR, 0, 7, ReadWriteMode, DMAMUXC4CRBase> ;
    using SOIE = DMAMUX_C4CR_SOIE_Values<DMAMUX::C4CR, 8, 1, ReadWriteMode, DMAMUXC4CRBase> ;
    using EGE = DMAMUX_C4CR_EGE_Values<DMAMUX::C4CR, 9, 1, ReadWriteMode, DMAMUXC4CRBase> ;
    using SE = DMAMUX_C4CR_SE_Values<DMAMUX::C4CR, 16, 1, ReadWriteMode, DMAMUXC4CRBase> ;
    using SPOL = DMAMUX_C4CR_SPOL_Values<DMAMUX::C4CR, 17, 2, ReadWriteMode, DMAMUXC4CRBase> ;
    using NBREQ = DMAMUX_C4CR_NBREQ_Values<DMAMUX::C4CR, 19, 5, ReadWriteMode, DMAMUXC4CRBase> ;
    using SYNC_ID = DMAMUX_C4CR_SYNC_ID_Values<DMAMUX::C4CR, 24, 5, ReadWriteMode, DMAMUXC4CRBase> ;
    using FieldValues = DMAMUX_C4CR_SYNC_ID_Values<DMAMUX::C4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C4CRPack  = Register<0x40020810, 32, ReadWriteMode, DMAMUXC4CRBase, T...> ;

  struct DMAMUXC5CRBase {} ;

  struct C5CR : public RegisterBase<0x40020814, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C5CR_DMAREQ_ID_Values<DMAMUX::C5CR, 0, 7, ReadWriteMode, DMAMUXC5CRBase> ;
    using SOIE = DMAMUX_C5CR_SOIE_Values<DMAMUX::C5CR, 8, 1, ReadWriteMode, DMAMUXC5CRBase> ;
    using EGE = DMAMUX_C5CR_EGE_Values<DMAMUX::C5CR, 9, 1, ReadWriteMode, DMAMUXC5CRBase> ;
    using SE = DMAMUX_C5CR_SE_Values<DMAMUX::C5CR, 16, 1, ReadWriteMode, DMAMUXC5CRBase> ;
    using SPOL = DMAMUX_C5CR_SPOL_Values<DMAMUX::C5CR, 17, 2, ReadWriteMode, DMAMUXC5CRBase> ;
    using NBREQ = DMAMUX_C5CR_NBREQ_Values<DMAMUX::C5CR, 19, 5, ReadWriteMode, DMAMUXC5CRBase> ;
    using SYNC_ID = DMAMUX_C5CR_SYNC_ID_Values<DMAMUX::C5CR, 24, 5, ReadWriteMode, DMAMUXC5CRBase> ;
    using FieldValues = DMAMUX_C5CR_SYNC_ID_Values<DMAMUX::C5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C5CRPack  = Register<0x40020814, 32, ReadWriteMode, DMAMUXC5CRBase, T...> ;

  struct DMAMUXC6CRBase {} ;

  struct C6CR : public RegisterBase<0x40020818, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C6CR_DMAREQ_ID_Values<DMAMUX::C6CR, 0, 7, ReadWriteMode, DMAMUXC6CRBase> ;
    using SOIE = DMAMUX_C6CR_SOIE_Values<DMAMUX::C6CR, 8, 1, ReadWriteMode, DMAMUXC6CRBase> ;
    using EGE = DMAMUX_C6CR_EGE_Values<DMAMUX::C6CR, 9, 1, ReadWriteMode, DMAMUXC6CRBase> ;
    using SE = DMAMUX_C6CR_SE_Values<DMAMUX::C6CR, 16, 1, ReadWriteMode, DMAMUXC6CRBase> ;
    using SPOL = DMAMUX_C6CR_SPOL_Values<DMAMUX::C6CR, 17, 2, ReadWriteMode, DMAMUXC6CRBase> ;
    using NBREQ = DMAMUX_C6CR_NBREQ_Values<DMAMUX::C6CR, 19, 5, ReadWriteMode, DMAMUXC6CRBase> ;
    using SYNC_ID = DMAMUX_C6CR_SYNC_ID_Values<DMAMUX::C6CR, 24, 5, ReadWriteMode, DMAMUXC6CRBase> ;
    using FieldValues = DMAMUX_C6CR_SYNC_ID_Values<DMAMUX::C6CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C6CRPack  = Register<0x40020818, 32, ReadWriteMode, DMAMUXC6CRBase, T...> ;

  struct DMAMUXC7CRBase {} ;

  struct C7CR : public RegisterBase<0x4002081C, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C7CR_DMAREQ_ID_Values<DMAMUX::C7CR, 0, 7, ReadWriteMode, DMAMUXC7CRBase> ;
    using SOIE = DMAMUX_C7CR_SOIE_Values<DMAMUX::C7CR, 8, 1, ReadWriteMode, DMAMUXC7CRBase> ;
    using EGE = DMAMUX_C7CR_EGE_Values<DMAMUX::C7CR, 9, 1, ReadWriteMode, DMAMUXC7CRBase> ;
    using SE = DMAMUX_C7CR_SE_Values<DMAMUX::C7CR, 16, 1, ReadWriteMode, DMAMUXC7CRBase> ;
    using SPOL = DMAMUX_C7CR_SPOL_Values<DMAMUX::C7CR, 17, 2, ReadWriteMode, DMAMUXC7CRBase> ;
    using NBREQ = DMAMUX_C7CR_NBREQ_Values<DMAMUX::C7CR, 19, 5, ReadWriteMode, DMAMUXC7CRBase> ;
    using SYNC_ID = DMAMUX_C7CR_SYNC_ID_Values<DMAMUX::C7CR, 24, 5, ReadWriteMode, DMAMUXC7CRBase> ;
    using FieldValues = DMAMUX_C7CR_SYNC_ID_Values<DMAMUX::C7CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C7CRPack  = Register<0x4002081C, 32, ReadWriteMode, DMAMUXC7CRBase, T...> ;

  struct DMAMUXC8CRBase {} ;

  struct C8CR : public RegisterBase<0x40020820, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C8CR_DMAREQ_ID_Values<DMAMUX::C8CR, 0, 7, ReadWriteMode, DMAMUXC8CRBase> ;
    using SOIE = DMAMUX_C8CR_SOIE_Values<DMAMUX::C8CR, 8, 1, ReadWriteMode, DMAMUXC8CRBase> ;
    using EGE = DMAMUX_C8CR_EGE_Values<DMAMUX::C8CR, 9, 1, ReadWriteMode, DMAMUXC8CRBase> ;
    using SE = DMAMUX_C8CR_SE_Values<DMAMUX::C8CR, 16, 1, ReadWriteMode, DMAMUXC8CRBase> ;
    using SPOL = DMAMUX_C8CR_SPOL_Values<DMAMUX::C8CR, 17, 2, ReadWriteMode, DMAMUXC8CRBase> ;
    using NBREQ = DMAMUX_C8CR_NBREQ_Values<DMAMUX::C8CR, 19, 5, ReadWriteMode, DMAMUXC8CRBase> ;
    using SYNC_ID = DMAMUX_C8CR_SYNC_ID_Values<DMAMUX::C8CR, 24, 5, ReadWriteMode, DMAMUXC8CRBase> ;
    using FieldValues = DMAMUX_C8CR_SYNC_ID_Values<DMAMUX::C8CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C8CRPack  = Register<0x40020820, 32, ReadWriteMode, DMAMUXC8CRBase, T...> ;

  struct DMAMUXC9CRBase {} ;

  struct C9CR : public RegisterBase<0x40020824, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C9CR_DMAREQ_ID_Values<DMAMUX::C9CR, 0, 7, ReadWriteMode, DMAMUXC9CRBase> ;
    using SOIE = DMAMUX_C9CR_SOIE_Values<DMAMUX::C9CR, 8, 1, ReadWriteMode, DMAMUXC9CRBase> ;
    using EGE = DMAMUX_C9CR_EGE_Values<DMAMUX::C9CR, 9, 1, ReadWriteMode, DMAMUXC9CRBase> ;
    using SE = DMAMUX_C9CR_SE_Values<DMAMUX::C9CR, 16, 1, ReadWriteMode, DMAMUXC9CRBase> ;
    using SPOL = DMAMUX_C9CR_SPOL_Values<DMAMUX::C9CR, 17, 2, ReadWriteMode, DMAMUXC9CRBase> ;
    using NBREQ = DMAMUX_C9CR_NBREQ_Values<DMAMUX::C9CR, 19, 5, ReadWriteMode, DMAMUXC9CRBase> ;
    using SYNC_ID = DMAMUX_C9CR_SYNC_ID_Values<DMAMUX::C9CR, 24, 5, ReadWriteMode, DMAMUXC9CRBase> ;
    using FieldValues = DMAMUX_C9CR_SYNC_ID_Values<DMAMUX::C9CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C9CRPack  = Register<0x40020824, 32, ReadWriteMode, DMAMUXC9CRBase, T...> ;

  struct DMAMUXC10CRBase {} ;

  struct C10CR : public RegisterBase<0x40020828, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C10CR_DMAREQ_ID_Values<DMAMUX::C10CR, 0, 7, ReadWriteMode, DMAMUXC10CRBase> ;
    using SOIE = DMAMUX_C10CR_SOIE_Values<DMAMUX::C10CR, 8, 1, ReadWriteMode, DMAMUXC10CRBase> ;
    using EGE = DMAMUX_C10CR_EGE_Values<DMAMUX::C10CR, 9, 1, ReadWriteMode, DMAMUXC10CRBase> ;
    using SE = DMAMUX_C10CR_SE_Values<DMAMUX::C10CR, 16, 1, ReadWriteMode, DMAMUXC10CRBase> ;
    using SPOL = DMAMUX_C10CR_SPOL_Values<DMAMUX::C10CR, 17, 2, ReadWriteMode, DMAMUXC10CRBase> ;
    using NBREQ = DMAMUX_C10CR_NBREQ_Values<DMAMUX::C10CR, 19, 5, ReadWriteMode, DMAMUXC10CRBase> ;
    using SYNC_ID = DMAMUX_C10CR_SYNC_ID_Values<DMAMUX::C10CR, 24, 5, ReadWriteMode, DMAMUXC10CRBase> ;
    using FieldValues = DMAMUX_C10CR_SYNC_ID_Values<DMAMUX::C10CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C10CRPack  = Register<0x40020828, 32, ReadWriteMode, DMAMUXC10CRBase, T...> ;

  struct DMAMUXC11CRBase {} ;

  struct C11CR : public RegisterBase<0x4002082C, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C11CR_DMAREQ_ID_Values<DMAMUX::C11CR, 0, 7, ReadWriteMode, DMAMUXC11CRBase> ;
    using SOIE = DMAMUX_C11CR_SOIE_Values<DMAMUX::C11CR, 8, 1, ReadWriteMode, DMAMUXC11CRBase> ;
    using EGE = DMAMUX_C11CR_EGE_Values<DMAMUX::C11CR, 9, 1, ReadWriteMode, DMAMUXC11CRBase> ;
    using SE = DMAMUX_C11CR_SE_Values<DMAMUX::C11CR, 16, 1, ReadWriteMode, DMAMUXC11CRBase> ;
    using SPOL = DMAMUX_C11CR_SPOL_Values<DMAMUX::C11CR, 17, 2, ReadWriteMode, DMAMUXC11CRBase> ;
    using NBREQ = DMAMUX_C11CR_NBREQ_Values<DMAMUX::C11CR, 19, 5, ReadWriteMode, DMAMUXC11CRBase> ;
    using SYNC_ID = DMAMUX_C11CR_SYNC_ID_Values<DMAMUX::C11CR, 24, 5, ReadWriteMode, DMAMUXC11CRBase> ;
    using FieldValues = DMAMUX_C11CR_SYNC_ID_Values<DMAMUX::C11CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C11CRPack  = Register<0x4002082C, 32, ReadWriteMode, DMAMUXC11CRBase, T...> ;

  struct DMAMUXC12CRBase {} ;

  struct C12CR : public RegisterBase<0x40020830, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C12CR_DMAREQ_ID_Values<DMAMUX::C12CR, 0, 7, ReadWriteMode, DMAMUXC12CRBase> ;
    using SOIE = DMAMUX_C12CR_SOIE_Values<DMAMUX::C12CR, 8, 1, ReadWriteMode, DMAMUXC12CRBase> ;
    using EGE = DMAMUX_C12CR_EGE_Values<DMAMUX::C12CR, 9, 1, ReadWriteMode, DMAMUXC12CRBase> ;
    using SE = DMAMUX_C12CR_SE_Values<DMAMUX::C12CR, 16, 1, ReadWriteMode, DMAMUXC12CRBase> ;
    using SPOL = DMAMUX_C12CR_SPOL_Values<DMAMUX::C12CR, 17, 2, ReadWriteMode, DMAMUXC12CRBase> ;
    using NBREQ = DMAMUX_C12CR_NBREQ_Values<DMAMUX::C12CR, 19, 5, ReadWriteMode, DMAMUXC12CRBase> ;
    using SYNC_ID = DMAMUX_C12CR_SYNC_ID_Values<DMAMUX::C12CR, 24, 5, ReadWriteMode, DMAMUXC12CRBase> ;
    using FieldValues = DMAMUX_C12CR_SYNC_ID_Values<DMAMUX::C12CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C12CRPack  = Register<0x40020830, 32, ReadWriteMode, DMAMUXC12CRBase, T...> ;

  struct DMAMUXC13CRBase {} ;

  struct C13CR : public RegisterBase<0x40020834, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C13CR_DMAREQ_ID_Values<DMAMUX::C13CR, 0, 7, ReadWriteMode, DMAMUXC13CRBase> ;
    using SOIE = DMAMUX_C13CR_SOIE_Values<DMAMUX::C13CR, 8, 1, ReadWriteMode, DMAMUXC13CRBase> ;
    using EGE = DMAMUX_C13CR_EGE_Values<DMAMUX::C13CR, 9, 1, ReadWriteMode, DMAMUXC13CRBase> ;
    using SE = DMAMUX_C13CR_SE_Values<DMAMUX::C13CR, 16, 1, ReadWriteMode, DMAMUXC13CRBase> ;
    using SPOL = DMAMUX_C13CR_SPOL_Values<DMAMUX::C13CR, 17, 2, ReadWriteMode, DMAMUXC13CRBase> ;
    using NBREQ = DMAMUX_C13CR_NBREQ_Values<DMAMUX::C13CR, 19, 5, ReadWriteMode, DMAMUXC13CRBase> ;
    using SYNC_ID = DMAMUX_C13CR_SYNC_ID_Values<DMAMUX::C13CR, 24, 5, ReadWriteMode, DMAMUXC13CRBase> ;
    using FieldValues = DMAMUX_C13CR_SYNC_ID_Values<DMAMUX::C13CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C13CRPack  = Register<0x40020834, 32, ReadWriteMode, DMAMUXC13CRBase, T...> ;

  struct DMAMUXC14CRBase {} ;

  struct C14CR : public RegisterBase<0x40020838, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C14CR_DMAREQ_ID_Values<DMAMUX::C14CR, 0, 7, ReadWriteMode, DMAMUXC14CRBase> ;
    using SOIE = DMAMUX_C14CR_SOIE_Values<DMAMUX::C14CR, 8, 1, ReadWriteMode, DMAMUXC14CRBase> ;
    using EGE = DMAMUX_C14CR_EGE_Values<DMAMUX::C14CR, 9, 1, ReadWriteMode, DMAMUXC14CRBase> ;
    using SE = DMAMUX_C14CR_SE_Values<DMAMUX::C14CR, 16, 1, ReadWriteMode, DMAMUXC14CRBase> ;
    using SPOL = DMAMUX_C14CR_SPOL_Values<DMAMUX::C14CR, 17, 2, ReadWriteMode, DMAMUXC14CRBase> ;
    using NBREQ = DMAMUX_C14CR_NBREQ_Values<DMAMUX::C14CR, 19, 5, ReadWriteMode, DMAMUXC14CRBase> ;
    using SYNC_ID = DMAMUX_C14CR_SYNC_ID_Values<DMAMUX::C14CR, 24, 5, ReadWriteMode, DMAMUXC14CRBase> ;
    using FieldValues = DMAMUX_C14CR_SYNC_ID_Values<DMAMUX::C14CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C14CRPack  = Register<0x40020838, 32, ReadWriteMode, DMAMUXC14CRBase, T...> ;

  struct DMAMUXC15CRBase {} ;

  struct C15CR : public RegisterBase<0x4002083C, 32, ReadWriteMode>
  {
    using DMAREQ_ID = DMAMUX_C15CR_DMAREQ_ID_Values<DMAMUX::C15CR, 0, 7, ReadWriteMode, DMAMUXC15CRBase> ;
    using SOIE = DMAMUX_C15CR_SOIE_Values<DMAMUX::C15CR, 8, 1, ReadWriteMode, DMAMUXC15CRBase> ;
    using EGE = DMAMUX_C15CR_EGE_Values<DMAMUX::C15CR, 9, 1, ReadWriteMode, DMAMUXC15CRBase> ;
    using SE = DMAMUX_C15CR_SE_Values<DMAMUX::C15CR, 16, 1, ReadWriteMode, DMAMUXC15CRBase> ;
    using SPOL = DMAMUX_C15CR_SPOL_Values<DMAMUX::C15CR, 17, 2, ReadWriteMode, DMAMUXC15CRBase> ;
    using NBREQ = DMAMUX_C15CR_NBREQ_Values<DMAMUX::C15CR, 19, 5, ReadWriteMode, DMAMUXC15CRBase> ;
    using SYNC_ID = DMAMUX_C15CR_SYNC_ID_Values<DMAMUX::C15CR, 24, 5, ReadWriteMode, DMAMUXC15CRBase> ;
    using FieldValues = DMAMUX_C15CR_SYNC_ID_Values<DMAMUX::C15CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C15CRPack  = Register<0x4002083C, 32, ReadWriteMode, DMAMUXC15CRBase, T...> ;

  struct DMAMUXRG0CRBase {} ;

  struct RG0CR : public RegisterBase<0x40020900, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX_RG0CR_SIG_ID_Values<DMAMUX::RG0CR, 0, 5, ReadWriteMode, DMAMUXRG0CRBase> ;
    using OIE = DMAMUX_RG0CR_OIE_Values<DMAMUX::RG0CR, 8, 1, ReadWriteMode, DMAMUXRG0CRBase> ;
    using GE = DMAMUX_RG0CR_GE_Values<DMAMUX::RG0CR, 16, 1, ReadWriteMode, DMAMUXRG0CRBase> ;
    using GPOL = DMAMUX_RG0CR_GPOL_Values<DMAMUX::RG0CR, 17, 2, ReadWriteMode, DMAMUXRG0CRBase> ;
    using GNBREQ = DMAMUX_RG0CR_GNBREQ_Values<DMAMUX::RG0CR, 19, 5, ReadWriteMode, DMAMUXRG0CRBase> ;
    using FieldValues = DMAMUX_RG0CR_GNBREQ_Values<DMAMUX::RG0CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG0CRPack  = Register<0x40020900, 32, ReadWriteMode, DMAMUXRG0CRBase, T...> ;

  struct DMAMUXRG1CRBase {} ;

  struct RG1CR : public RegisterBase<0x40020904, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX_RG1CR_SIG_ID_Values<DMAMUX::RG1CR, 0, 5, ReadWriteMode, DMAMUXRG1CRBase> ;
    using OIE = DMAMUX_RG1CR_OIE_Values<DMAMUX::RG1CR, 8, 1, ReadWriteMode, DMAMUXRG1CRBase> ;
    using GE = DMAMUX_RG1CR_GE_Values<DMAMUX::RG1CR, 16, 1, ReadWriteMode, DMAMUXRG1CRBase> ;
    using GPOL = DMAMUX_RG1CR_GPOL_Values<DMAMUX::RG1CR, 17, 2, ReadWriteMode, DMAMUXRG1CRBase> ;
    using GNBREQ = DMAMUX_RG1CR_GNBREQ_Values<DMAMUX::RG1CR, 19, 5, ReadWriteMode, DMAMUXRG1CRBase> ;
    using FieldValues = DMAMUX_RG1CR_GNBREQ_Values<DMAMUX::RG1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG1CRPack  = Register<0x40020904, 32, ReadWriteMode, DMAMUXRG1CRBase, T...> ;

  struct DMAMUXRG2CRBase {} ;

  struct RG2CR : public RegisterBase<0x40020908, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX_RG2CR_SIG_ID_Values<DMAMUX::RG2CR, 0, 5, ReadWriteMode, DMAMUXRG2CRBase> ;
    using OIE = DMAMUX_RG2CR_OIE_Values<DMAMUX::RG2CR, 8, 1, ReadWriteMode, DMAMUXRG2CRBase> ;
    using GE = DMAMUX_RG2CR_GE_Values<DMAMUX::RG2CR, 16, 1, ReadWriteMode, DMAMUXRG2CRBase> ;
    using GPOL = DMAMUX_RG2CR_GPOL_Values<DMAMUX::RG2CR, 17, 2, ReadWriteMode, DMAMUXRG2CRBase> ;
    using GNBREQ = DMAMUX_RG2CR_GNBREQ_Values<DMAMUX::RG2CR, 19, 5, ReadWriteMode, DMAMUXRG2CRBase> ;
    using FieldValues = DMAMUX_RG2CR_GNBREQ_Values<DMAMUX::RG2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG2CRPack  = Register<0x40020908, 32, ReadWriteMode, DMAMUXRG2CRBase, T...> ;

  struct DMAMUXRG3CRBase {} ;

  struct RG3CR : public RegisterBase<0x4002090C, 32, ReadWriteMode>
  {
    using SIG_ID = DMAMUX_RG3CR_SIG_ID_Values<DMAMUX::RG3CR, 0, 5, ReadWriteMode, DMAMUXRG3CRBase> ;
    using OIE = DMAMUX_RG3CR_OIE_Values<DMAMUX::RG3CR, 8, 1, ReadWriteMode, DMAMUXRG3CRBase> ;
    using GE = DMAMUX_RG3CR_GE_Values<DMAMUX::RG3CR, 16, 1, ReadWriteMode, DMAMUXRG3CRBase> ;
    using GPOL = DMAMUX_RG3CR_GPOL_Values<DMAMUX::RG3CR, 17, 2, ReadWriteMode, DMAMUXRG3CRBase> ;
    using GNBREQ = DMAMUX_RG3CR_GNBREQ_Values<DMAMUX::RG3CR, 19, 5, ReadWriteMode, DMAMUXRG3CRBase> ;
    using FieldValues = DMAMUX_RG3CR_GNBREQ_Values<DMAMUX::RG3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG3CRPack  = Register<0x4002090C, 32, ReadWriteMode, DMAMUXRG3CRBase, T...> ;

  struct DMAMUXRGSRBase {} ;

  struct RGSR : public RegisterBase<0x40020940, 32, ReadMode>
  {
    using OF = DMAMUX_RGSR_OF_Values<DMAMUX::RGSR, 0, 4, ReadMode, DMAMUXRGSRBase> ;
    using FieldValues = DMAMUX_RGSR_OF_Values<DMAMUX::RGSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RGSRPack  = Register<0x40020940, 32, ReadMode, DMAMUXRGSRBase, T...> ;

  struct DMAMUXRGCFRBase {} ;

  struct RGCFR : public RegisterBase<0x40020944, 32, WriteMode>
  {
    using COF = DMAMUX_RGCFR_COF_Values<DMAMUX::RGCFR, 0, 4, WriteMode, DMAMUXRGCFRBase> ;
    using FieldValues = DMAMUX_RGCFR_COF_Values<DMAMUX::RGCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RGCFRPack  = Register<0x40020944, 32, WriteMode, DMAMUXRGCFRBase, T...> ;

  struct DMAMUXCSRBase {} ;

  struct CSR : public RegisterBase<0x40020880, 32, ReadMode>
  {
    using SOF = DMAMUX_CSR_SOF_Values<DMAMUX::CSR, 0, 16, ReadMode, DMAMUXCSRBase> ;
    using FieldValues = DMAMUX_CSR_SOF_Values<DMAMUX::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40020880, 32, ReadMode, DMAMUXCSRBase, T...> ;

  struct DMAMUXCFRBase {} ;

  struct CFR : public RegisterBase<0x40020884, 32, WriteMode>
  {
    using CSOF = DMAMUX_CFR_CSOF_Values<DMAMUX::CFR, 0, 16, WriteMode, DMAMUXCFRBase> ;
    using FieldValues = DMAMUX_CFR_CSOF_Values<DMAMUX::CFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFRPack  = Register<0x40020884, 32, WriteMode, DMAMUXCFRBase, T...> ;

} ;

