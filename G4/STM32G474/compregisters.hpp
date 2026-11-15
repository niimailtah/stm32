/*******************************************************************************
* Filename      : compregisters.hpp
*
* Details       : Comparator control and status register. This header file is
*                 auto-generated for STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "compfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct COMP
{
  struct COMPCOMP_C1CSRBase {} ;

  struct COMP_C1CSR : public RegisterBase<0x40010200, 32, ReadWriteMode>
  {
    using EN = COMP_COMP_C1CSR_EN_Values<COMP::COMP_C1CSR, 0, 1, ReadWriteMode, COMPCOMP_C1CSRBase> ;
    using INMSEL = COMP_COMP_C1CSR_INMSEL_Values<COMP::COMP_C1CSR, 4, 3, ReadWriteMode, COMPCOMP_C1CSRBase> ;
    using INPSEL = COMP_COMP_C1CSR_INPSEL_Values<COMP::COMP_C1CSR, 8, 1, ReadWriteMode, COMPCOMP_C1CSRBase> ;
    using POL = COMP_COMP_C1CSR_POL_Values<COMP::COMP_C1CSR, 15, 1, ReadWriteMode, COMPCOMP_C1CSRBase> ;
    using HYST = COMP_COMP_C1CSR_HYST_Values<COMP::COMP_C1CSR, 16, 3, ReadWriteMode, COMPCOMP_C1CSRBase> ;
    using BLANKSEL = COMP_COMP_C1CSR_BLANKSEL_Values<COMP::COMP_C1CSR, 19, 3, ReadWriteMode, COMPCOMP_C1CSRBase> ;
    using BRGEN = COMP_COMP_C1CSR_BRGEN_Values<COMP::COMP_C1CSR, 22, 1, ReadWriteMode, COMPCOMP_C1CSRBase> ;
    using SCALEN = COMP_COMP_C1CSR_SCALEN_Values<COMP::COMP_C1CSR, 23, 1, ReadWriteMode, COMPCOMP_C1CSRBase> ;
    using VALUE = COMP_COMP_C1CSR_VALUE_Values<COMP::COMP_C1CSR, 30, 1, ReadMode, COMPCOMP_C1CSRBase> ;
    using LOCK = COMP_COMP_C1CSR_LOCK_Values<COMP::COMP_C1CSR, 31, 1, ReadWriteMode, COMPCOMP_C1CSRBase> ;
    using FieldValues = COMP_COMP_C1CSR_LOCK_Values<COMP::COMP_C1CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_C1CSRPack  = Register<0x40010200, 32, ReadWriteMode, COMPCOMP_C1CSRBase, T...> ;

  struct COMPCOMP_C2CSRBase {} ;

  struct COMP_C2CSR : public RegisterBase<0x40010204, 32, ReadWriteMode>
  {
    using EN = COMP_COMP_C2CSR_EN_Values<COMP::COMP_C2CSR, 0, 1, ReadWriteMode, COMPCOMP_C2CSRBase> ;
    using INMSEL = COMP_COMP_C2CSR_INMSEL_Values<COMP::COMP_C2CSR, 4, 3, ReadWriteMode, COMPCOMP_C2CSRBase> ;
    using INPSEL = COMP_COMP_C2CSR_INPSEL_Values<COMP::COMP_C2CSR, 8, 1, ReadWriteMode, COMPCOMP_C2CSRBase> ;
    using POL = COMP_COMP_C2CSR_POL_Values<COMP::COMP_C2CSR, 15, 1, ReadWriteMode, COMPCOMP_C2CSRBase> ;
    using HYST = COMP_COMP_C2CSR_HYST_Values<COMP::COMP_C2CSR, 16, 3, ReadWriteMode, COMPCOMP_C2CSRBase> ;
    using BLANKSEL = COMP_COMP_C2CSR_BLANKSEL_Values<COMP::COMP_C2CSR, 19, 3, ReadWriteMode, COMPCOMP_C2CSRBase> ;
    using BRGEN = COMP_COMP_C2CSR_BRGEN_Values<COMP::COMP_C2CSR, 22, 1, ReadWriteMode, COMPCOMP_C2CSRBase> ;
    using SCALEN = COMP_COMP_C2CSR_SCALEN_Values<COMP::COMP_C2CSR, 23, 1, ReadWriteMode, COMPCOMP_C2CSRBase> ;
    using VALUE = COMP_COMP_C2CSR_VALUE_Values<COMP::COMP_C2CSR, 30, 1, ReadMode, COMPCOMP_C2CSRBase> ;
    using LOCK = COMP_COMP_C2CSR_LOCK_Values<COMP::COMP_C2CSR, 31, 1, ReadWriteMode, COMPCOMP_C2CSRBase> ;
    using FieldValues = COMP_COMP_C2CSR_LOCK_Values<COMP::COMP_C2CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_C2CSRPack  = Register<0x40010204, 32, ReadWriteMode, COMPCOMP_C2CSRBase, T...> ;

  struct COMPCOMP_C3CSRBase {} ;

  struct COMP_C3CSR : public RegisterBase<0x40010208, 32, ReadWriteMode>
  {
    using EN = COMP_COMP_C3CSR_EN_Values<COMP::COMP_C3CSR, 0, 1, ReadWriteMode, COMPCOMP_C3CSRBase> ;
    using INMSEL = COMP_COMP_C3CSR_INMSEL_Values<COMP::COMP_C3CSR, 4, 3, ReadWriteMode, COMPCOMP_C3CSRBase> ;
    using INPSEL = COMP_COMP_C3CSR_INPSEL_Values<COMP::COMP_C3CSR, 8, 1, ReadWriteMode, COMPCOMP_C3CSRBase> ;
    using POL = COMP_COMP_C3CSR_POL_Values<COMP::COMP_C3CSR, 15, 1, ReadWriteMode, COMPCOMP_C3CSRBase> ;
    using HYST = COMP_COMP_C3CSR_HYST_Values<COMP::COMP_C3CSR, 16, 3, ReadWriteMode, COMPCOMP_C3CSRBase> ;
    using BLANKSEL = COMP_COMP_C3CSR_BLANKSEL_Values<COMP::COMP_C3CSR, 19, 3, ReadWriteMode, COMPCOMP_C3CSRBase> ;
    using BRGEN = COMP_COMP_C3CSR_BRGEN_Values<COMP::COMP_C3CSR, 22, 1, ReadWriteMode, COMPCOMP_C3CSRBase> ;
    using SCALEN = COMP_COMP_C3CSR_SCALEN_Values<COMP::COMP_C3CSR, 23, 1, ReadWriteMode, COMPCOMP_C3CSRBase> ;
    using VALUE = COMP_COMP_C3CSR_VALUE_Values<COMP::COMP_C3CSR, 30, 1, ReadMode, COMPCOMP_C3CSRBase> ;
    using LOCK = COMP_COMP_C3CSR_LOCK_Values<COMP::COMP_C3CSR, 31, 1, ReadWriteMode, COMPCOMP_C3CSRBase> ;
    using FieldValues = COMP_COMP_C3CSR_LOCK_Values<COMP::COMP_C3CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_C3CSRPack  = Register<0x40010208, 32, ReadWriteMode, COMPCOMP_C3CSRBase, T...> ;

  struct COMPCOMP_C4CSRBase {} ;

  struct COMP_C4CSR : public RegisterBase<0x4001020C, 32, ReadWriteMode>
  {
    using EN = COMP_COMP_C4CSR_EN_Values<COMP::COMP_C4CSR, 0, 1, ReadWriteMode, COMPCOMP_C4CSRBase> ;
    using INMSEL = COMP_COMP_C4CSR_INMSEL_Values<COMP::COMP_C4CSR, 4, 3, ReadWriteMode, COMPCOMP_C4CSRBase> ;
    using INPSEL = COMP_COMP_C4CSR_INPSEL_Values<COMP::COMP_C4CSR, 8, 1, ReadWriteMode, COMPCOMP_C4CSRBase> ;
    using POL = COMP_COMP_C4CSR_POL_Values<COMP::COMP_C4CSR, 15, 1, ReadWriteMode, COMPCOMP_C4CSRBase> ;
    using HYST = COMP_COMP_C4CSR_HYST_Values<COMP::COMP_C4CSR, 16, 3, ReadWriteMode, COMPCOMP_C4CSRBase> ;
    using BLANKSEL = COMP_COMP_C4CSR_BLANKSEL_Values<COMP::COMP_C4CSR, 19, 3, ReadWriteMode, COMPCOMP_C4CSRBase> ;
    using BRGEN = COMP_COMP_C4CSR_BRGEN_Values<COMP::COMP_C4CSR, 22, 1, ReadWriteMode, COMPCOMP_C4CSRBase> ;
    using SCALEN = COMP_COMP_C4CSR_SCALEN_Values<COMP::COMP_C4CSR, 23, 1, ReadWriteMode, COMPCOMP_C4CSRBase> ;
    using VALUE = COMP_COMP_C4CSR_VALUE_Values<COMP::COMP_C4CSR, 30, 1, ReadMode, COMPCOMP_C4CSRBase> ;
    using LOCK = COMP_COMP_C4CSR_LOCK_Values<COMP::COMP_C4CSR, 31, 1, ReadWriteMode, COMPCOMP_C4CSRBase> ;
    using FieldValues = COMP_COMP_C4CSR_LOCK_Values<COMP::COMP_C4CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_C4CSRPack  = Register<0x4001020C, 32, ReadWriteMode, COMPCOMP_C4CSRBase, T...> ;

  struct COMPCOMP_C5CSRBase {} ;

  struct COMP_C5CSR : public RegisterBase<0x40010210, 32, ReadWriteMode>
  {
    using EN = COMP_COMP_C5CSR_EN_Values<COMP::COMP_C5CSR, 0, 1, ReadWriteMode, COMPCOMP_C5CSRBase> ;
    using INMSEL = COMP_COMP_C5CSR_INMSEL_Values<COMP::COMP_C5CSR, 4, 3, ReadWriteMode, COMPCOMP_C5CSRBase> ;
    using INPSEL = COMP_COMP_C5CSR_INPSEL_Values<COMP::COMP_C5CSR, 8, 1, ReadWriteMode, COMPCOMP_C5CSRBase> ;
    using POL = COMP_COMP_C5CSR_POL_Values<COMP::COMP_C5CSR, 15, 1, ReadWriteMode, COMPCOMP_C5CSRBase> ;
    using HYST = COMP_COMP_C5CSR_HYST_Values<COMP::COMP_C5CSR, 16, 3, ReadWriteMode, COMPCOMP_C5CSRBase> ;
    using BLANKSEL = COMP_COMP_C5CSR_BLANKSEL_Values<COMP::COMP_C5CSR, 19, 3, ReadWriteMode, COMPCOMP_C5CSRBase> ;
    using BRGEN = COMP_COMP_C5CSR_BRGEN_Values<COMP::COMP_C5CSR, 22, 1, ReadWriteMode, COMPCOMP_C5CSRBase> ;
    using SCALEN = COMP_COMP_C5CSR_SCALEN_Values<COMP::COMP_C5CSR, 23, 1, ReadWriteMode, COMPCOMP_C5CSRBase> ;
    using VALUE = COMP_COMP_C5CSR_VALUE_Values<COMP::COMP_C5CSR, 30, 1, ReadMode, COMPCOMP_C5CSRBase> ;
    using LOCK = COMP_COMP_C5CSR_LOCK_Values<COMP::COMP_C5CSR, 31, 1, ReadWriteMode, COMPCOMP_C5CSRBase> ;
    using FieldValues = COMP_COMP_C5CSR_LOCK_Values<COMP::COMP_C5CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_C5CSRPack  = Register<0x40010210, 32, ReadWriteMode, COMPCOMP_C5CSRBase, T...> ;

  struct COMPCOMP_C6CSRBase {} ;

  struct COMP_C6CSR : public RegisterBase<0x40010214, 32, ReadWriteMode>
  {
    using EN = COMP_COMP_C6CSR_EN_Values<COMP::COMP_C6CSR, 0, 1, ReadWriteMode, COMPCOMP_C6CSRBase> ;
    using INMSEL = COMP_COMP_C6CSR_INMSEL_Values<COMP::COMP_C6CSR, 4, 3, ReadWriteMode, COMPCOMP_C6CSRBase> ;
    using INPSEL = COMP_COMP_C6CSR_INPSEL_Values<COMP::COMP_C6CSR, 8, 1, ReadWriteMode, COMPCOMP_C6CSRBase> ;
    using POL = COMP_COMP_C6CSR_POL_Values<COMP::COMP_C6CSR, 15, 1, ReadWriteMode, COMPCOMP_C6CSRBase> ;
    using HYST = COMP_COMP_C6CSR_HYST_Values<COMP::COMP_C6CSR, 16, 3, ReadWriteMode, COMPCOMP_C6CSRBase> ;
    using BLANKSEL = COMP_COMP_C6CSR_BLANKSEL_Values<COMP::COMP_C6CSR, 19, 3, ReadWriteMode, COMPCOMP_C6CSRBase> ;
    using BRGEN = COMP_COMP_C6CSR_BRGEN_Values<COMP::COMP_C6CSR, 22, 1, ReadWriteMode, COMPCOMP_C6CSRBase> ;
    using SCALEN = COMP_COMP_C6CSR_SCALEN_Values<COMP::COMP_C6CSR, 23, 1, ReadWriteMode, COMPCOMP_C6CSRBase> ;
    using VALUE = COMP_COMP_C6CSR_VALUE_Values<COMP::COMP_C6CSR, 30, 1, ReadMode, COMPCOMP_C6CSRBase> ;
    using LOCK = COMP_COMP_C6CSR_LOCK_Values<COMP::COMP_C6CSR, 31, 1, ReadWriteMode, COMPCOMP_C6CSRBase> ;
    using FieldValues = COMP_COMP_C6CSR_LOCK_Values<COMP::COMP_C6CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_C6CSRPack  = Register<0x40010214, 32, ReadWriteMode, COMPCOMP_C6CSRBase, T...> ;

  struct COMPCOMP_C7CSRBase {} ;

  struct COMP_C7CSR : public RegisterBase<0x40010218, 32, ReadWriteMode>
  {
    using EN = COMP_COMP_C7CSR_EN_Values<COMP::COMP_C7CSR, 0, 1, ReadWriteMode, COMPCOMP_C7CSRBase> ;
    using INMSEL = COMP_COMP_C7CSR_INMSEL_Values<COMP::COMP_C7CSR, 4, 3, ReadWriteMode, COMPCOMP_C7CSRBase> ;
    using INPSEL = COMP_COMP_C7CSR_INPSEL_Values<COMP::COMP_C7CSR, 8, 1, ReadWriteMode, COMPCOMP_C7CSRBase> ;
    using POL = COMP_COMP_C7CSR_POL_Values<COMP::COMP_C7CSR, 15, 1, ReadWriteMode, COMPCOMP_C7CSRBase> ;
    using HYST = COMP_COMP_C7CSR_HYST_Values<COMP::COMP_C7CSR, 16, 3, ReadWriteMode, COMPCOMP_C7CSRBase> ;
    using BLANKSEL = COMP_COMP_C7CSR_BLANKSEL_Values<COMP::COMP_C7CSR, 19, 3, ReadWriteMode, COMPCOMP_C7CSRBase> ;
    using BRGEN = COMP_COMP_C7CSR_BRGEN_Values<COMP::COMP_C7CSR, 22, 1, ReadWriteMode, COMPCOMP_C7CSRBase> ;
    using SCALEN = COMP_COMP_C7CSR_SCALEN_Values<COMP::COMP_C7CSR, 23, 1, ReadWriteMode, COMPCOMP_C7CSRBase> ;
    using VALUE = COMP_COMP_C7CSR_VALUE_Values<COMP::COMP_C7CSR, 30, 1, ReadMode, COMPCOMP_C7CSRBase> ;
    using LOCK = COMP_COMP_C7CSR_LOCK_Values<COMP::COMP_C7CSR, 31, 1, ReadWriteMode, COMPCOMP_C7CSRBase> ;
    using FieldValues = COMP_COMP_C7CSR_LOCK_Values<COMP::COMP_C7CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using COMP_C7CSRPack  = Register<0x40010218, 32, ReadWriteMode, COMPCOMP_C7CSRBase, T...> ;

} ;

