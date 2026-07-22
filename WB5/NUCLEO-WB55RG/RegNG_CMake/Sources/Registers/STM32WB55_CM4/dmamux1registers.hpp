/*******************************************************************************
* Filename      : dmamux1registers.hpp
*
* Details       : Direct memory access Multiplexer. This header file is
*                 auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "dmamux1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DMAMUX1
{
  struct DMAMUX1C0CRBase {} ;

  struct C0CR : public RegisterBase<0x40020800, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C0CR_SYNC_ID_Values<DMAMUX1::C0CR, 24, 5, ReadWriteMode, DMAMUX1C0CRBase> ;
    using NBREQ = DMAMUX1_C0CR_NBREQ_Values<DMAMUX1::C0CR, 19, 5, ReadWriteMode, DMAMUX1C0CRBase> ;
    using SPOL = DMAMUX1_C0CR_SPOL_Values<DMAMUX1::C0CR, 17, 2, ReadWriteMode, DMAMUX1C0CRBase> ;
    using SE = DMAMUX1_C0CR_SE_Values<DMAMUX1::C0CR, 16, 1, ReadWriteMode, DMAMUX1C0CRBase> ;
    using EGE = DMAMUX1_C0CR_EGE_Values<DMAMUX1::C0CR, 9, 1, ReadWriteMode, DMAMUX1C0CRBase> ;
    using SOIE = DMAMUX1_C0CR_SOIE_Values<DMAMUX1::C0CR, 8, 1, ReadWriteMode, DMAMUX1C0CRBase> ;
    using DMAREQ_ID = DMAMUX1_C0CR_DMAREQ_ID_Values<DMAMUX1::C0CR, 0, 8, ReadWriteMode, DMAMUX1C0CRBase> ;
    using FieldValues = DMAMUX1_C0CR_DMAREQ_ID_Values<DMAMUX1::C0CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C0CRPack  = Register<0x40020800, 32, ReadWriteMode, DMAMUX1C0CRBase, T...> ;

  struct DMAMUX1C1CRBase {} ;

  struct C1CR : public RegisterBase<0x40020804, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C1CR_SYNC_ID_Values<DMAMUX1::C1CR, 24, 5, ReadWriteMode, DMAMUX1C1CRBase> ;
    using NBREQ = DMAMUX1_C1CR_NBREQ_Values<DMAMUX1::C1CR, 19, 5, ReadWriteMode, DMAMUX1C1CRBase> ;
    using SPOL = DMAMUX1_C1CR_SPOL_Values<DMAMUX1::C1CR, 17, 2, ReadWriteMode, DMAMUX1C1CRBase> ;
    using SE = DMAMUX1_C1CR_SE_Values<DMAMUX1::C1CR, 16, 1, ReadWriteMode, DMAMUX1C1CRBase> ;
    using EGE = DMAMUX1_C1CR_EGE_Values<DMAMUX1::C1CR, 9, 1, ReadWriteMode, DMAMUX1C1CRBase> ;
    using SOIE = DMAMUX1_C1CR_SOIE_Values<DMAMUX1::C1CR, 8, 1, ReadWriteMode, DMAMUX1C1CRBase> ;
    using DMAREQ_ID = DMAMUX1_C1CR_DMAREQ_ID_Values<DMAMUX1::C1CR, 0, 8, ReadWriteMode, DMAMUX1C1CRBase> ;
    using FieldValues = DMAMUX1_C1CR_DMAREQ_ID_Values<DMAMUX1::C1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1CRPack  = Register<0x40020804, 32, ReadWriteMode, DMAMUX1C1CRBase, T...> ;

  struct DMAMUX1C2CRBase {} ;

  struct C2CR : public RegisterBase<0x40020808, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C2CR_SYNC_ID_Values<DMAMUX1::C2CR, 24, 5, ReadWriteMode, DMAMUX1C2CRBase> ;
    using NBREQ = DMAMUX1_C2CR_NBREQ_Values<DMAMUX1::C2CR, 19, 5, ReadWriteMode, DMAMUX1C2CRBase> ;
    using SPOL = DMAMUX1_C2CR_SPOL_Values<DMAMUX1::C2CR, 17, 2, ReadWriteMode, DMAMUX1C2CRBase> ;
    using SE = DMAMUX1_C2CR_SE_Values<DMAMUX1::C2CR, 16, 1, ReadWriteMode, DMAMUX1C2CRBase> ;
    using EGE = DMAMUX1_C2CR_EGE_Values<DMAMUX1::C2CR, 9, 1, ReadWriteMode, DMAMUX1C2CRBase> ;
    using SOIE = DMAMUX1_C2CR_SOIE_Values<DMAMUX1::C2CR, 8, 1, ReadWriteMode, DMAMUX1C2CRBase> ;
    using DMAREQ_ID = DMAMUX1_C2CR_DMAREQ_ID_Values<DMAMUX1::C2CR, 0, 8, ReadWriteMode, DMAMUX1C2CRBase> ;
    using FieldValues = DMAMUX1_C2CR_DMAREQ_ID_Values<DMAMUX1::C2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2CRPack  = Register<0x40020808, 32, ReadWriteMode, DMAMUX1C2CRBase, T...> ;

  struct DMAMUX1C3CRBase {} ;

  struct C3CR : public RegisterBase<0x4002080C, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C3CR_SYNC_ID_Values<DMAMUX1::C3CR, 24, 5, ReadWriteMode, DMAMUX1C3CRBase> ;
    using NBREQ = DMAMUX1_C3CR_NBREQ_Values<DMAMUX1::C3CR, 19, 5, ReadWriteMode, DMAMUX1C3CRBase> ;
    using SPOL = DMAMUX1_C3CR_SPOL_Values<DMAMUX1::C3CR, 17, 2, ReadWriteMode, DMAMUX1C3CRBase> ;
    using SE = DMAMUX1_C3CR_SE_Values<DMAMUX1::C3CR, 16, 1, ReadWriteMode, DMAMUX1C3CRBase> ;
    using EGE = DMAMUX1_C3CR_EGE_Values<DMAMUX1::C3CR, 9, 1, ReadWriteMode, DMAMUX1C3CRBase> ;
    using SOIE = DMAMUX1_C3CR_SOIE_Values<DMAMUX1::C3CR, 8, 1, ReadWriteMode, DMAMUX1C3CRBase> ;
    using DMAREQ_ID = DMAMUX1_C3CR_DMAREQ_ID_Values<DMAMUX1::C3CR, 0, 8, ReadWriteMode, DMAMUX1C3CRBase> ;
    using FieldValues = DMAMUX1_C3CR_DMAREQ_ID_Values<DMAMUX1::C3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C3CRPack  = Register<0x4002080C, 32, ReadWriteMode, DMAMUX1C3CRBase, T...> ;

  struct DMAMUX1C4CRBase {} ;

  struct C4CR : public RegisterBase<0x40020810, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C4CR_SYNC_ID_Values<DMAMUX1::C4CR, 24, 5, ReadWriteMode, DMAMUX1C4CRBase> ;
    using NBREQ = DMAMUX1_C4CR_NBREQ_Values<DMAMUX1::C4CR, 19, 5, ReadWriteMode, DMAMUX1C4CRBase> ;
    using SPOL = DMAMUX1_C4CR_SPOL_Values<DMAMUX1::C4CR, 17, 2, ReadWriteMode, DMAMUX1C4CRBase> ;
    using SE = DMAMUX1_C4CR_SE_Values<DMAMUX1::C4CR, 16, 1, ReadWriteMode, DMAMUX1C4CRBase> ;
    using EGE = DMAMUX1_C4CR_EGE_Values<DMAMUX1::C4CR, 9, 1, ReadWriteMode, DMAMUX1C4CRBase> ;
    using SOIE = DMAMUX1_C4CR_SOIE_Values<DMAMUX1::C4CR, 8, 1, ReadWriteMode, DMAMUX1C4CRBase> ;
    using DMAREQ_ID = DMAMUX1_C4CR_DMAREQ_ID_Values<DMAMUX1::C4CR, 0, 8, ReadWriteMode, DMAMUX1C4CRBase> ;
    using FieldValues = DMAMUX1_C4CR_DMAREQ_ID_Values<DMAMUX1::C4CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C4CRPack  = Register<0x40020810, 32, ReadWriteMode, DMAMUX1C4CRBase, T...> ;

  struct DMAMUX1C5CRBase {} ;

  struct C5CR : public RegisterBase<0x40020814, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C5CR_SYNC_ID_Values<DMAMUX1::C5CR, 24, 5, ReadWriteMode, DMAMUX1C5CRBase> ;
    using NBREQ = DMAMUX1_C5CR_NBREQ_Values<DMAMUX1::C5CR, 19, 5, ReadWriteMode, DMAMUX1C5CRBase> ;
    using SPOL = DMAMUX1_C5CR_SPOL_Values<DMAMUX1::C5CR, 17, 2, ReadWriteMode, DMAMUX1C5CRBase> ;
    using SE = DMAMUX1_C5CR_SE_Values<DMAMUX1::C5CR, 16, 1, ReadWriteMode, DMAMUX1C5CRBase> ;
    using EGE = DMAMUX1_C5CR_EGE_Values<DMAMUX1::C5CR, 9, 1, ReadWriteMode, DMAMUX1C5CRBase> ;
    using SOIE = DMAMUX1_C5CR_SOIE_Values<DMAMUX1::C5CR, 8, 1, ReadWriteMode, DMAMUX1C5CRBase> ;
    using DMAREQ_ID = DMAMUX1_C5CR_DMAREQ_ID_Values<DMAMUX1::C5CR, 0, 8, ReadWriteMode, DMAMUX1C5CRBase> ;
    using FieldValues = DMAMUX1_C5CR_DMAREQ_ID_Values<DMAMUX1::C5CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C5CRPack  = Register<0x40020814, 32, ReadWriteMode, DMAMUX1C5CRBase, T...> ;

  struct DMAMUX1C6CRBase {} ;

  struct C6CR : public RegisterBase<0x40020818, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C6CR_SYNC_ID_Values<DMAMUX1::C6CR, 24, 5, ReadWriteMode, DMAMUX1C6CRBase> ;
    using NBREQ = DMAMUX1_C6CR_NBREQ_Values<DMAMUX1::C6CR, 19, 5, ReadWriteMode, DMAMUX1C6CRBase> ;
    using SPOL = DMAMUX1_C6CR_SPOL_Values<DMAMUX1::C6CR, 17, 2, ReadWriteMode, DMAMUX1C6CRBase> ;
    using SE = DMAMUX1_C6CR_SE_Values<DMAMUX1::C6CR, 16, 1, ReadWriteMode, DMAMUX1C6CRBase> ;
    using EGE = DMAMUX1_C6CR_EGE_Values<DMAMUX1::C6CR, 9, 1, ReadWriteMode, DMAMUX1C6CRBase> ;
    using SOIE = DMAMUX1_C6CR_SOIE_Values<DMAMUX1::C6CR, 8, 1, ReadWriteMode, DMAMUX1C6CRBase> ;
    using DMAREQ_ID = DMAMUX1_C6CR_DMAREQ_ID_Values<DMAMUX1::C6CR, 0, 8, ReadWriteMode, DMAMUX1C6CRBase> ;
    using FieldValues = DMAMUX1_C6CR_DMAREQ_ID_Values<DMAMUX1::C6CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C6CRPack  = Register<0x40020818, 32, ReadWriteMode, DMAMUX1C6CRBase, T...> ;

  struct DMAMUX1C7CRBase {} ;

  struct C7CR : public RegisterBase<0x4002081C, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C7CR_SYNC_ID_Values<DMAMUX1::C7CR, 24, 5, ReadWriteMode, DMAMUX1C7CRBase> ;
    using NBREQ = DMAMUX1_C7CR_NBREQ_Values<DMAMUX1::C7CR, 19, 5, ReadWriteMode, DMAMUX1C7CRBase> ;
    using SPOL = DMAMUX1_C7CR_SPOL_Values<DMAMUX1::C7CR, 17, 2, ReadWriteMode, DMAMUX1C7CRBase> ;
    using SE = DMAMUX1_C7CR_SE_Values<DMAMUX1::C7CR, 16, 1, ReadWriteMode, DMAMUX1C7CRBase> ;
    using EGE = DMAMUX1_C7CR_EGE_Values<DMAMUX1::C7CR, 9, 1, ReadWriteMode, DMAMUX1C7CRBase> ;
    using SOIE = DMAMUX1_C7CR_SOIE_Values<DMAMUX1::C7CR, 8, 1, ReadWriteMode, DMAMUX1C7CRBase> ;
    using DMAREQ_ID = DMAMUX1_C7CR_DMAREQ_ID_Values<DMAMUX1::C7CR, 0, 8, ReadWriteMode, DMAMUX1C7CRBase> ;
    using FieldValues = DMAMUX1_C7CR_DMAREQ_ID_Values<DMAMUX1::C7CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C7CRPack  = Register<0x4002081C, 32, ReadWriteMode, DMAMUX1C7CRBase, T...> ;

  struct DMAMUX1C8CRBase {} ;

  struct C8CR : public RegisterBase<0x40020820, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C8CR_SYNC_ID_Values<DMAMUX1::C8CR, 24, 5, ReadWriteMode, DMAMUX1C8CRBase> ;
    using NBREQ = DMAMUX1_C8CR_NBREQ_Values<DMAMUX1::C8CR, 19, 5, ReadWriteMode, DMAMUX1C8CRBase> ;
    using SPOL = DMAMUX1_C8CR_SPOL_Values<DMAMUX1::C8CR, 17, 2, ReadWriteMode, DMAMUX1C8CRBase> ;
    using SE = DMAMUX1_C8CR_SE_Values<DMAMUX1::C8CR, 16, 1, ReadWriteMode, DMAMUX1C8CRBase> ;
    using EGE = DMAMUX1_C8CR_EGE_Values<DMAMUX1::C8CR, 9, 1, ReadWriteMode, DMAMUX1C8CRBase> ;
    using SOIE = DMAMUX1_C8CR_SOIE_Values<DMAMUX1::C8CR, 8, 1, ReadWriteMode, DMAMUX1C8CRBase> ;
    using DMAREQ_ID = DMAMUX1_C8CR_DMAREQ_ID_Values<DMAMUX1::C8CR, 0, 8, ReadWriteMode, DMAMUX1C8CRBase> ;
    using FieldValues = DMAMUX1_C8CR_DMAREQ_ID_Values<DMAMUX1::C8CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C8CRPack  = Register<0x40020820, 32, ReadWriteMode, DMAMUX1C8CRBase, T...> ;

  struct DMAMUX1C9CRBase {} ;

  struct C9CR : public RegisterBase<0x40020824, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C9CR_SYNC_ID_Values<DMAMUX1::C9CR, 24, 5, ReadWriteMode, DMAMUX1C9CRBase> ;
    using NBREQ = DMAMUX1_C9CR_NBREQ_Values<DMAMUX1::C9CR, 19, 5, ReadWriteMode, DMAMUX1C9CRBase> ;
    using SPOL = DMAMUX1_C9CR_SPOL_Values<DMAMUX1::C9CR, 17, 2, ReadWriteMode, DMAMUX1C9CRBase> ;
    using SE = DMAMUX1_C9CR_SE_Values<DMAMUX1::C9CR, 16, 1, ReadWriteMode, DMAMUX1C9CRBase> ;
    using EGE = DMAMUX1_C9CR_EGE_Values<DMAMUX1::C9CR, 9, 1, ReadWriteMode, DMAMUX1C9CRBase> ;
    using SOIE = DMAMUX1_C9CR_SOIE_Values<DMAMUX1::C9CR, 8, 1, ReadWriteMode, DMAMUX1C9CRBase> ;
    using DMAREQ_ID = DMAMUX1_C9CR_DMAREQ_ID_Values<DMAMUX1::C9CR, 0, 8, ReadWriteMode, DMAMUX1C9CRBase> ;
    using FieldValues = DMAMUX1_C9CR_DMAREQ_ID_Values<DMAMUX1::C9CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C9CRPack  = Register<0x40020824, 32, ReadWriteMode, DMAMUX1C9CRBase, T...> ;

  struct DMAMUX1C10CRBase {} ;

  struct C10CR : public RegisterBase<0x40020828, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C10CR_SYNC_ID_Values<DMAMUX1::C10CR, 24, 5, ReadWriteMode, DMAMUX1C10CRBase> ;
    using NBREQ = DMAMUX1_C10CR_NBREQ_Values<DMAMUX1::C10CR, 19, 5, ReadWriteMode, DMAMUX1C10CRBase> ;
    using SPOL = DMAMUX1_C10CR_SPOL_Values<DMAMUX1::C10CR, 17, 2, ReadWriteMode, DMAMUX1C10CRBase> ;
    using SE = DMAMUX1_C10CR_SE_Values<DMAMUX1::C10CR, 16, 1, ReadWriteMode, DMAMUX1C10CRBase> ;
    using EGE = DMAMUX1_C10CR_EGE_Values<DMAMUX1::C10CR, 9, 1, ReadWriteMode, DMAMUX1C10CRBase> ;
    using SOIE = DMAMUX1_C10CR_SOIE_Values<DMAMUX1::C10CR, 8, 1, ReadWriteMode, DMAMUX1C10CRBase> ;
    using DMAREQ_ID = DMAMUX1_C10CR_DMAREQ_ID_Values<DMAMUX1::C10CR, 0, 8, ReadWriteMode, DMAMUX1C10CRBase> ;
    using FieldValues = DMAMUX1_C10CR_DMAREQ_ID_Values<DMAMUX1::C10CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C10CRPack  = Register<0x40020828, 32, ReadWriteMode, DMAMUX1C10CRBase, T...> ;

  struct DMAMUX1C11CRBase {} ;

  struct C11CR : public RegisterBase<0x4002082C, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C11CR_SYNC_ID_Values<DMAMUX1::C11CR, 24, 5, ReadWriteMode, DMAMUX1C11CRBase> ;
    using NBREQ = DMAMUX1_C11CR_NBREQ_Values<DMAMUX1::C11CR, 19, 5, ReadWriteMode, DMAMUX1C11CRBase> ;
    using SPOL = DMAMUX1_C11CR_SPOL_Values<DMAMUX1::C11CR, 17, 2, ReadWriteMode, DMAMUX1C11CRBase> ;
    using SE = DMAMUX1_C11CR_SE_Values<DMAMUX1::C11CR, 16, 1, ReadWriteMode, DMAMUX1C11CRBase> ;
    using EGE = DMAMUX1_C11CR_EGE_Values<DMAMUX1::C11CR, 9, 1, ReadWriteMode, DMAMUX1C11CRBase> ;
    using SOIE = DMAMUX1_C11CR_SOIE_Values<DMAMUX1::C11CR, 8, 1, ReadWriteMode, DMAMUX1C11CRBase> ;
    using DMAREQ_ID = DMAMUX1_C11CR_DMAREQ_ID_Values<DMAMUX1::C11CR, 0, 8, ReadWriteMode, DMAMUX1C11CRBase> ;
    using FieldValues = DMAMUX1_C11CR_DMAREQ_ID_Values<DMAMUX1::C11CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C11CRPack  = Register<0x4002082C, 32, ReadWriteMode, DMAMUX1C11CRBase, T...> ;

  struct DMAMUX1C12CRBase {} ;

  struct C12CR : public RegisterBase<0x40020830, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C12CR_SYNC_ID_Values<DMAMUX1::C12CR, 24, 5, ReadWriteMode, DMAMUX1C12CRBase> ;
    using NBREQ = DMAMUX1_C12CR_NBREQ_Values<DMAMUX1::C12CR, 19, 5, ReadWriteMode, DMAMUX1C12CRBase> ;
    using SPOL = DMAMUX1_C12CR_SPOL_Values<DMAMUX1::C12CR, 17, 2, ReadWriteMode, DMAMUX1C12CRBase> ;
    using SE = DMAMUX1_C12CR_SE_Values<DMAMUX1::C12CR, 16, 1, ReadWriteMode, DMAMUX1C12CRBase> ;
    using EGE = DMAMUX1_C12CR_EGE_Values<DMAMUX1::C12CR, 9, 1, ReadWriteMode, DMAMUX1C12CRBase> ;
    using SOIE = DMAMUX1_C12CR_SOIE_Values<DMAMUX1::C12CR, 8, 1, ReadWriteMode, DMAMUX1C12CRBase> ;
    using DMAREQ_ID = DMAMUX1_C12CR_DMAREQ_ID_Values<DMAMUX1::C12CR, 0, 8, ReadWriteMode, DMAMUX1C12CRBase> ;
    using FieldValues = DMAMUX1_C12CR_DMAREQ_ID_Values<DMAMUX1::C12CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C12CRPack  = Register<0x40020830, 32, ReadWriteMode, DMAMUX1C12CRBase, T...> ;

  struct DMAMUX1C13CRBase {} ;

  struct C13CR : public RegisterBase<0x40020834, 32, ReadWriteMode>
  {
    using SYNC_ID = DMAMUX1_C13CR_SYNC_ID_Values<DMAMUX1::C13CR, 24, 5, ReadWriteMode, DMAMUX1C13CRBase> ;
    using NBREQ = DMAMUX1_C13CR_NBREQ_Values<DMAMUX1::C13CR, 19, 5, ReadWriteMode, DMAMUX1C13CRBase> ;
    using SPOL = DMAMUX1_C13CR_SPOL_Values<DMAMUX1::C13CR, 17, 2, ReadWriteMode, DMAMUX1C13CRBase> ;
    using SE = DMAMUX1_C13CR_SE_Values<DMAMUX1::C13CR, 16, 1, ReadWriteMode, DMAMUX1C13CRBase> ;
    using EGE = DMAMUX1_C13CR_EGE_Values<DMAMUX1::C13CR, 9, 1, ReadWriteMode, DMAMUX1C13CRBase> ;
    using SOIE = DMAMUX1_C13CR_SOIE_Values<DMAMUX1::C13CR, 8, 1, ReadWriteMode, DMAMUX1C13CRBase> ;
    using DMAREQ_ID = DMAMUX1_C13CR_DMAREQ_ID_Values<DMAMUX1::C13CR, 0, 8, ReadWriteMode, DMAMUX1C13CRBase> ;
    using FieldValues = DMAMUX1_C13CR_DMAREQ_ID_Values<DMAMUX1::C13CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C13CRPack  = Register<0x40020834, 32, ReadWriteMode, DMAMUX1C13CRBase, T...> ;

  struct DMAMUX1CSRBase {} ;

  struct CSR : public RegisterBase<0x40020880, 32, ReadMode>
  {
    using SOF0 = DMAMUX1_CSR_SOF0_Values<DMAMUX1::CSR, 0, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF1 = DMAMUX1_CSR_SOF1_Values<DMAMUX1::CSR, 1, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF2 = DMAMUX1_CSR_SOF2_Values<DMAMUX1::CSR, 2, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF3 = DMAMUX1_CSR_SOF3_Values<DMAMUX1::CSR, 3, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF4 = DMAMUX1_CSR_SOF4_Values<DMAMUX1::CSR, 4, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF5 = DMAMUX1_CSR_SOF5_Values<DMAMUX1::CSR, 5, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF6 = DMAMUX1_CSR_SOF6_Values<DMAMUX1::CSR, 6, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF7 = DMAMUX1_CSR_SOF7_Values<DMAMUX1::CSR, 7, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF8 = DMAMUX1_CSR_SOF8_Values<DMAMUX1::CSR, 8, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF9 = DMAMUX1_CSR_SOF9_Values<DMAMUX1::CSR, 9, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF10 = DMAMUX1_CSR_SOF10_Values<DMAMUX1::CSR, 10, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF11 = DMAMUX1_CSR_SOF11_Values<DMAMUX1::CSR, 11, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF12 = DMAMUX1_CSR_SOF12_Values<DMAMUX1::CSR, 12, 1, ReadMode, DMAMUX1CSRBase> ;
    using SOF13 = DMAMUX1_CSR_SOF13_Values<DMAMUX1::CSR, 13, 1, ReadMode, DMAMUX1CSRBase> ;
    using FieldValues = DMAMUX1_CSR_SOF13_Values<DMAMUX1::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x40020880, 32, ReadMode, DMAMUX1CSRBase, T...> ;

  struct DMAMUX1CFRBase {} ;

  struct CFR : public RegisterBase<0x40020884, 32, WriteMode>
  {
    using CSOF0 = DMAMUX1_CFR_CSOF0_Values<DMAMUX1::CFR, 0, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF1 = DMAMUX1_CFR_CSOF1_Values<DMAMUX1::CFR, 1, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF2 = DMAMUX1_CFR_CSOF2_Values<DMAMUX1::CFR, 2, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF3 = DMAMUX1_CFR_CSOF3_Values<DMAMUX1::CFR, 3, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF4 = DMAMUX1_CFR_CSOF4_Values<DMAMUX1::CFR, 4, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF5 = DMAMUX1_CFR_CSOF5_Values<DMAMUX1::CFR, 5, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF6 = DMAMUX1_CFR_CSOF6_Values<DMAMUX1::CFR, 6, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF7 = DMAMUX1_CFR_CSOF7_Values<DMAMUX1::CFR, 7, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF8 = DMAMUX1_CFR_CSOF8_Values<DMAMUX1::CFR, 8, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF9 = DMAMUX1_CFR_CSOF9_Values<DMAMUX1::CFR, 9, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF10 = DMAMUX1_CFR_CSOF10_Values<DMAMUX1::CFR, 10, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF11 = DMAMUX1_CFR_CSOF11_Values<DMAMUX1::CFR, 11, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF12 = DMAMUX1_CFR_CSOF12_Values<DMAMUX1::CFR, 12, 1, WriteMode, DMAMUX1CFRBase> ;
    using CSOF13 = DMAMUX1_CFR_CSOF13_Values<DMAMUX1::CFR, 13, 1, WriteMode, DMAMUX1CFRBase> ;
    using FieldValues = DMAMUX1_CFR_CSOF13_Values<DMAMUX1::CFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CFRPack  = Register<0x40020884, 32, WriteMode, DMAMUX1CFRBase, T...> ;

  struct DMAMUX1RG0CRBase {} ;

  struct RG0CR : public RegisterBase<0x40020900, 32, ReadWriteMode>
  {
    using GNBREQ = DMAMUX1_RG0CR_GNBREQ_Values<DMAMUX1::RG0CR, 19, 5, ReadWriteMode, DMAMUX1RG0CRBase> ;
    using GPOL = DMAMUX1_RG0CR_GPOL_Values<DMAMUX1::RG0CR, 17, 2, ReadWriteMode, DMAMUX1RG0CRBase> ;
    using GE = DMAMUX1_RG0CR_GE_Values<DMAMUX1::RG0CR, 16, 1, ReadWriteMode, DMAMUX1RG0CRBase> ;
    using OIE = DMAMUX1_RG0CR_OIE_Values<DMAMUX1::RG0CR, 8, 1, ReadWriteMode, DMAMUX1RG0CRBase> ;
    using SIG_ID = DMAMUX1_RG0CR_SIG_ID_Values<DMAMUX1::RG0CR, 0, 5, ReadWriteMode, DMAMUX1RG0CRBase> ;
    using FieldValues = DMAMUX1_RG0CR_SIG_ID_Values<DMAMUX1::RG0CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG0CRPack  = Register<0x40020900, 32, ReadWriteMode, DMAMUX1RG0CRBase, T...> ;

  struct DMAMUX1RG1CRBase {} ;

  struct RG1CR : public RegisterBase<0x40020904, 32, ReadWriteMode>
  {
    using GNBREQ = DMAMUX1_RG1CR_GNBREQ_Values<DMAMUX1::RG1CR, 19, 5, ReadWriteMode, DMAMUX1RG1CRBase> ;
    using GPOL = DMAMUX1_RG1CR_GPOL_Values<DMAMUX1::RG1CR, 17, 2, ReadWriteMode, DMAMUX1RG1CRBase> ;
    using GE = DMAMUX1_RG1CR_GE_Values<DMAMUX1::RG1CR, 16, 1, ReadWriteMode, DMAMUX1RG1CRBase> ;
    using OIE = DMAMUX1_RG1CR_OIE_Values<DMAMUX1::RG1CR, 8, 1, ReadWriteMode, DMAMUX1RG1CRBase> ;
    using SIG_ID = DMAMUX1_RG1CR_SIG_ID_Values<DMAMUX1::RG1CR, 0, 5, ReadWriteMode, DMAMUX1RG1CRBase> ;
    using FieldValues = DMAMUX1_RG1CR_SIG_ID_Values<DMAMUX1::RG1CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG1CRPack  = Register<0x40020904, 32, ReadWriteMode, DMAMUX1RG1CRBase, T...> ;

  struct DMAMUX1RG2CRBase {} ;

  struct RG2CR : public RegisterBase<0x40020908, 32, ReadWriteMode>
  {
    using GNBREQ = DMAMUX1_RG2CR_GNBREQ_Values<DMAMUX1::RG2CR, 19, 5, ReadWriteMode, DMAMUX1RG2CRBase> ;
    using GPOL = DMAMUX1_RG2CR_GPOL_Values<DMAMUX1::RG2CR, 17, 2, ReadWriteMode, DMAMUX1RG2CRBase> ;
    using GE = DMAMUX1_RG2CR_GE_Values<DMAMUX1::RG2CR, 16, 1, ReadWriteMode, DMAMUX1RG2CRBase> ;
    using OIE = DMAMUX1_RG2CR_OIE_Values<DMAMUX1::RG2CR, 8, 1, ReadWriteMode, DMAMUX1RG2CRBase> ;
    using SIG_ID = DMAMUX1_RG2CR_SIG_ID_Values<DMAMUX1::RG2CR, 0, 5, ReadWriteMode, DMAMUX1RG2CRBase> ;
    using FieldValues = DMAMUX1_RG2CR_SIG_ID_Values<DMAMUX1::RG2CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG2CRPack  = Register<0x40020908, 32, ReadWriteMode, DMAMUX1RG2CRBase, T...> ;

  struct DMAMUX1RG3CRBase {} ;

  struct RG3CR : public RegisterBase<0x4002090C, 32, ReadWriteMode>
  {
    using GNBREQ = DMAMUX1_RG3CR_GNBREQ_Values<DMAMUX1::RG3CR, 19, 5, ReadWriteMode, DMAMUX1RG3CRBase> ;
    using GPOL = DMAMUX1_RG3CR_GPOL_Values<DMAMUX1::RG3CR, 17, 2, ReadWriteMode, DMAMUX1RG3CRBase> ;
    using GE = DMAMUX1_RG3CR_GE_Values<DMAMUX1::RG3CR, 16, 1, ReadWriteMode, DMAMUX1RG3CRBase> ;
    using OIE = DMAMUX1_RG3CR_OIE_Values<DMAMUX1::RG3CR, 8, 1, ReadWriteMode, DMAMUX1RG3CRBase> ;
    using SIG_ID = DMAMUX1_RG3CR_SIG_ID_Values<DMAMUX1::RG3CR, 0, 5, ReadWriteMode, DMAMUX1RG3CRBase> ;
    using FieldValues = DMAMUX1_RG3CR_SIG_ID_Values<DMAMUX1::RG3CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RG3CRPack  = Register<0x4002090C, 32, ReadWriteMode, DMAMUX1RG3CRBase, T...> ;

  struct DMAMUX1RGSRBase {} ;

  struct RGSR : public RegisterBase<0x40020940, 32, ReadMode>
  {
    using OF0 = DMAMUX1_RGSR_OF0_Values<DMAMUX1::RGSR, 0, 1, ReadMode, DMAMUX1RGSRBase> ;
    using OF1 = DMAMUX1_RGSR_OF1_Values<DMAMUX1::RGSR, 1, 1, ReadMode, DMAMUX1RGSRBase> ;
    using OF2 = DMAMUX1_RGSR_OF2_Values<DMAMUX1::RGSR, 2, 1, ReadMode, DMAMUX1RGSRBase> ;
    using OF3 = DMAMUX1_RGSR_OF3_Values<DMAMUX1::RGSR, 3, 1, ReadMode, DMAMUX1RGSRBase> ;
    using FieldValues = DMAMUX1_RGSR_OF3_Values<DMAMUX1::RGSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RGSRPack  = Register<0x40020940, 32, ReadMode, DMAMUX1RGSRBase, T...> ;

  struct DMAMUX1RGCFRBase {} ;

  struct RGCFR : public RegisterBase<0x40020944, 32, WriteMode>
  {
    using COF0 = DMAMUX1_RGCFR_COF0_Values<DMAMUX1::RGCFR, 0, 1, WriteMode, DMAMUX1RGCFRBase> ;
    using COF1 = DMAMUX1_RGCFR_COF1_Values<DMAMUX1::RGCFR, 1, 1, WriteMode, DMAMUX1RGCFRBase> ;
    using COF2 = DMAMUX1_RGCFR_COF2_Values<DMAMUX1::RGCFR, 2, 1, WriteMode, DMAMUX1RGCFRBase> ;
    using COF3 = DMAMUX1_RGCFR_COF3_Values<DMAMUX1::RGCFR, 3, 1, WriteMode, DMAMUX1RGCFRBase> ;
    using FieldValues = DMAMUX1_RGCFR_COF3_Values<DMAMUX1::RGCFR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RGCFRPack  = Register<0x40020944, 32, WriteMode, DMAMUX1RGCFRBase, T...> ;

} ;

