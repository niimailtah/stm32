/*******************************************************************************
* Filename      : hsemregisters.hpp
*
* Details       : HSEM. This header file is auto-generated for STM32WB55_CM4
*                 device.
*
*
*******************************************************************************/

#pragma once

#include "hsemfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct HSEM
{
  struct HSEMR0Base {} ;

  struct R0 : public RegisterBase<0x58001400, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R0_LOCK_Values<HSEM::R0, 31, 1, ReadWriteMode, HSEMR0Base> ;
    using COREID = HSEM_R0_COREID_Values<HSEM::R0, 8, 4, ReadWriteMode, HSEMR0Base> ;
    using PROCID = HSEM_R0_PROCID_Values<HSEM::R0, 0, 8, ReadWriteMode, HSEMR0Base> ;
    using FieldValues = HSEM_R0_PROCID_Values<HSEM::R0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R0Pack  = Register<0x58001400, 32, ReadWriteMode, HSEMR0Base, T...> ;

  struct HSEMR1Base {} ;

  struct R1 : public RegisterBase<0x58001404, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R1_LOCK_Values<HSEM::R1, 31, 1, ReadWriteMode, HSEMR1Base> ;
    using COREID = HSEM_R1_COREID_Values<HSEM::R1, 8, 4, ReadWriteMode, HSEMR1Base> ;
    using PROCID = HSEM_R1_PROCID_Values<HSEM::R1, 0, 8, ReadWriteMode, HSEMR1Base> ;
    using FieldValues = HSEM_R1_PROCID_Values<HSEM::R1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R1Pack  = Register<0x58001404, 32, ReadWriteMode, HSEMR1Base, T...> ;

  struct HSEMR2Base {} ;

  struct R2 : public RegisterBase<0x58001408, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R2_LOCK_Values<HSEM::R2, 31, 1, ReadWriteMode, HSEMR2Base> ;
    using COREID = HSEM_R2_COREID_Values<HSEM::R2, 8, 4, ReadWriteMode, HSEMR2Base> ;
    using PROCID = HSEM_R2_PROCID_Values<HSEM::R2, 0, 8, ReadWriteMode, HSEMR2Base> ;
    using FieldValues = HSEM_R2_PROCID_Values<HSEM::R2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R2Pack  = Register<0x58001408, 32, ReadWriteMode, HSEMR2Base, T...> ;

  struct HSEMR3Base {} ;

  struct R3 : public RegisterBase<0x5800140C, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R3_LOCK_Values<HSEM::R3, 31, 1, ReadWriteMode, HSEMR3Base> ;
    using COREID = HSEM_R3_COREID_Values<HSEM::R3, 8, 4, ReadWriteMode, HSEMR3Base> ;
    using PROCID = HSEM_R3_PROCID_Values<HSEM::R3, 0, 8, ReadWriteMode, HSEMR3Base> ;
    using FieldValues = HSEM_R3_PROCID_Values<HSEM::R3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R3Pack  = Register<0x5800140C, 32, ReadWriteMode, HSEMR3Base, T...> ;

  struct HSEMR4Base {} ;

  struct R4 : public RegisterBase<0x58001410, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R4_LOCK_Values<HSEM::R4, 31, 1, ReadWriteMode, HSEMR4Base> ;
    using COREID = HSEM_R4_COREID_Values<HSEM::R4, 8, 4, ReadWriteMode, HSEMR4Base> ;
    using PROCID = HSEM_R4_PROCID_Values<HSEM::R4, 0, 8, ReadWriteMode, HSEMR4Base> ;
    using FieldValues = HSEM_R4_PROCID_Values<HSEM::R4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R4Pack  = Register<0x58001410, 32, ReadWriteMode, HSEMR4Base, T...> ;

  struct HSEMR5Base {} ;

  struct R5 : public RegisterBase<0x58001414, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R5_LOCK_Values<HSEM::R5, 31, 1, ReadWriteMode, HSEMR5Base> ;
    using COREID = HSEM_R5_COREID_Values<HSEM::R5, 8, 4, ReadWriteMode, HSEMR5Base> ;
    using PROCID = HSEM_R5_PROCID_Values<HSEM::R5, 0, 8, ReadWriteMode, HSEMR5Base> ;
    using FieldValues = HSEM_R5_PROCID_Values<HSEM::R5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R5Pack  = Register<0x58001414, 32, ReadWriteMode, HSEMR5Base, T...> ;

  struct HSEMR6Base {} ;

  struct R6 : public RegisterBase<0x58001418, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R6_LOCK_Values<HSEM::R6, 31, 1, ReadWriteMode, HSEMR6Base> ;
    using COREID = HSEM_R6_COREID_Values<HSEM::R6, 8, 4, ReadWriteMode, HSEMR6Base> ;
    using PROCID = HSEM_R6_PROCID_Values<HSEM::R6, 0, 8, ReadWriteMode, HSEMR6Base> ;
    using FieldValues = HSEM_R6_PROCID_Values<HSEM::R6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R6Pack  = Register<0x58001418, 32, ReadWriteMode, HSEMR6Base, T...> ;

  struct HSEMR7Base {} ;

  struct R7 : public RegisterBase<0x5800141C, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R7_LOCK_Values<HSEM::R7, 31, 1, ReadWriteMode, HSEMR7Base> ;
    using COREID = HSEM_R7_COREID_Values<HSEM::R7, 8, 4, ReadWriteMode, HSEMR7Base> ;
    using PROCID = HSEM_R7_PROCID_Values<HSEM::R7, 0, 8, ReadWriteMode, HSEMR7Base> ;
    using FieldValues = HSEM_R7_PROCID_Values<HSEM::R7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R7Pack  = Register<0x5800141C, 32, ReadWriteMode, HSEMR7Base, T...> ;

  struct HSEMR8Base {} ;

  struct R8 : public RegisterBase<0x58001420, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R8_LOCK_Values<HSEM::R8, 31, 1, ReadWriteMode, HSEMR8Base> ;
    using COREID = HSEM_R8_COREID_Values<HSEM::R8, 8, 4, ReadWriteMode, HSEMR8Base> ;
    using PROCID = HSEM_R8_PROCID_Values<HSEM::R8, 0, 8, ReadWriteMode, HSEMR8Base> ;
    using FieldValues = HSEM_R8_PROCID_Values<HSEM::R8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R8Pack  = Register<0x58001420, 32, ReadWriteMode, HSEMR8Base, T...> ;

  struct HSEMR9Base {} ;

  struct R9 : public RegisterBase<0x58001424, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R9_LOCK_Values<HSEM::R9, 31, 1, ReadWriteMode, HSEMR9Base> ;
    using COREID = HSEM_R9_COREID_Values<HSEM::R9, 8, 4, ReadWriteMode, HSEMR9Base> ;
    using PROCID = HSEM_R9_PROCID_Values<HSEM::R9, 0, 8, ReadWriteMode, HSEMR9Base> ;
    using FieldValues = HSEM_R9_PROCID_Values<HSEM::R9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R9Pack  = Register<0x58001424, 32, ReadWriteMode, HSEMR9Base, T...> ;

  struct HSEMR10Base {} ;

  struct R10 : public RegisterBase<0x58001428, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R10_LOCK_Values<HSEM::R10, 31, 1, ReadWriteMode, HSEMR10Base> ;
    using COREID = HSEM_R10_COREID_Values<HSEM::R10, 8, 4, ReadWriteMode, HSEMR10Base> ;
    using PROCID = HSEM_R10_PROCID_Values<HSEM::R10, 0, 8, ReadWriteMode, HSEMR10Base> ;
    using FieldValues = HSEM_R10_PROCID_Values<HSEM::R10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R10Pack  = Register<0x58001428, 32, ReadWriteMode, HSEMR10Base, T...> ;

  struct HSEMR11Base {} ;

  struct R11 : public RegisterBase<0x5800142C, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R11_LOCK_Values<HSEM::R11, 31, 1, ReadWriteMode, HSEMR11Base> ;
    using COREID = HSEM_R11_COREID_Values<HSEM::R11, 8, 4, ReadWriteMode, HSEMR11Base> ;
    using PROCID = HSEM_R11_PROCID_Values<HSEM::R11, 0, 8, ReadWriteMode, HSEMR11Base> ;
    using FieldValues = HSEM_R11_PROCID_Values<HSEM::R11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R11Pack  = Register<0x5800142C, 32, ReadWriteMode, HSEMR11Base, T...> ;

  struct HSEMR12Base {} ;

  struct R12 : public RegisterBase<0x58001430, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R12_LOCK_Values<HSEM::R12, 31, 1, ReadWriteMode, HSEMR12Base> ;
    using COREID = HSEM_R12_COREID_Values<HSEM::R12, 8, 4, ReadWriteMode, HSEMR12Base> ;
    using PROCID = HSEM_R12_PROCID_Values<HSEM::R12, 0, 8, ReadWriteMode, HSEMR12Base> ;
    using FieldValues = HSEM_R12_PROCID_Values<HSEM::R12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R12Pack  = Register<0x58001430, 32, ReadWriteMode, HSEMR12Base, T...> ;

  struct HSEMR13Base {} ;

  struct R13 : public RegisterBase<0x58001434, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R13_LOCK_Values<HSEM::R13, 31, 1, ReadWriteMode, HSEMR13Base> ;
    using COREID = HSEM_R13_COREID_Values<HSEM::R13, 8, 4, ReadWriteMode, HSEMR13Base> ;
    using PROCID = HSEM_R13_PROCID_Values<HSEM::R13, 0, 8, ReadWriteMode, HSEMR13Base> ;
    using FieldValues = HSEM_R13_PROCID_Values<HSEM::R13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R13Pack  = Register<0x58001434, 32, ReadWriteMode, HSEMR13Base, T...> ;

  struct HSEMR14Base {} ;

  struct R14 : public RegisterBase<0x58001438, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R14_LOCK_Values<HSEM::R14, 31, 1, ReadWriteMode, HSEMR14Base> ;
    using COREID = HSEM_R14_COREID_Values<HSEM::R14, 8, 4, ReadWriteMode, HSEMR14Base> ;
    using PROCID = HSEM_R14_PROCID_Values<HSEM::R14, 0, 8, ReadWriteMode, HSEMR14Base> ;
    using FieldValues = HSEM_R14_PROCID_Values<HSEM::R14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R14Pack  = Register<0x58001438, 32, ReadWriteMode, HSEMR14Base, T...> ;

  struct HSEMR15Base {} ;

  struct R15 : public RegisterBase<0x5800143C, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R15_LOCK_Values<HSEM::R15, 31, 1, ReadWriteMode, HSEMR15Base> ;
    using COREID = HSEM_R15_COREID_Values<HSEM::R15, 8, 4, ReadWriteMode, HSEMR15Base> ;
    using PROCID = HSEM_R15_PROCID_Values<HSEM::R15, 0, 8, ReadWriteMode, HSEMR15Base> ;
    using FieldValues = HSEM_R15_PROCID_Values<HSEM::R15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R15Pack  = Register<0x5800143C, 32, ReadWriteMode, HSEMR15Base, T...> ;

  struct HSEMR16Base {} ;

  struct R16 : public RegisterBase<0x58001440, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R16_LOCK_Values<HSEM::R16, 31, 1, ReadWriteMode, HSEMR16Base> ;
    using COREID = HSEM_R16_COREID_Values<HSEM::R16, 8, 4, ReadWriteMode, HSEMR16Base> ;
    using PROCID = HSEM_R16_PROCID_Values<HSEM::R16, 0, 8, ReadWriteMode, HSEMR16Base> ;
    using FieldValues = HSEM_R16_PROCID_Values<HSEM::R16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R16Pack  = Register<0x58001440, 32, ReadWriteMode, HSEMR16Base, T...> ;

  struct HSEMR17Base {} ;

  struct R17 : public RegisterBase<0x58001444, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R17_LOCK_Values<HSEM::R17, 31, 1, ReadWriteMode, HSEMR17Base> ;
    using COREID = HSEM_R17_COREID_Values<HSEM::R17, 8, 4, ReadWriteMode, HSEMR17Base> ;
    using PROCID = HSEM_R17_PROCID_Values<HSEM::R17, 0, 8, ReadWriteMode, HSEMR17Base> ;
    using FieldValues = HSEM_R17_PROCID_Values<HSEM::R17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R17Pack  = Register<0x58001444, 32, ReadWriteMode, HSEMR17Base, T...> ;

  struct HSEMR18Base {} ;

  struct R18 : public RegisterBase<0x58001448, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R18_LOCK_Values<HSEM::R18, 31, 1, ReadWriteMode, HSEMR18Base> ;
    using COREID = HSEM_R18_COREID_Values<HSEM::R18, 8, 4, ReadWriteMode, HSEMR18Base> ;
    using PROCID = HSEM_R18_PROCID_Values<HSEM::R18, 0, 8, ReadWriteMode, HSEMR18Base> ;
    using FieldValues = HSEM_R18_PROCID_Values<HSEM::R18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R18Pack  = Register<0x58001448, 32, ReadWriteMode, HSEMR18Base, T...> ;

  struct HSEMR19Base {} ;

  struct R19 : public RegisterBase<0x5800144C, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R19_LOCK_Values<HSEM::R19, 31, 1, ReadWriteMode, HSEMR19Base> ;
    using COREID = HSEM_R19_COREID_Values<HSEM::R19, 8, 4, ReadWriteMode, HSEMR19Base> ;
    using PROCID = HSEM_R19_PROCID_Values<HSEM::R19, 0, 8, ReadWriteMode, HSEMR19Base> ;
    using FieldValues = HSEM_R19_PROCID_Values<HSEM::R19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R19Pack  = Register<0x5800144C, 32, ReadWriteMode, HSEMR19Base, T...> ;

  struct HSEMR20Base {} ;

  struct R20 : public RegisterBase<0x58001450, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R20_LOCK_Values<HSEM::R20, 31, 1, ReadWriteMode, HSEMR20Base> ;
    using COREID = HSEM_R20_COREID_Values<HSEM::R20, 8, 4, ReadWriteMode, HSEMR20Base> ;
    using PROCID = HSEM_R20_PROCID_Values<HSEM::R20, 0, 8, ReadWriteMode, HSEMR20Base> ;
    using FieldValues = HSEM_R20_PROCID_Values<HSEM::R20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R20Pack  = Register<0x58001450, 32, ReadWriteMode, HSEMR20Base, T...> ;

  struct HSEMR21Base {} ;

  struct R21 : public RegisterBase<0x58001454, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R21_LOCK_Values<HSEM::R21, 31, 1, ReadWriteMode, HSEMR21Base> ;
    using COREID = HSEM_R21_COREID_Values<HSEM::R21, 8, 4, ReadWriteMode, HSEMR21Base> ;
    using PROCID = HSEM_R21_PROCID_Values<HSEM::R21, 0, 8, ReadWriteMode, HSEMR21Base> ;
    using FieldValues = HSEM_R21_PROCID_Values<HSEM::R21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R21Pack  = Register<0x58001454, 32, ReadWriteMode, HSEMR21Base, T...> ;

  struct HSEMR22Base {} ;

  struct R22 : public RegisterBase<0x58001458, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R22_LOCK_Values<HSEM::R22, 31, 1, ReadWriteMode, HSEMR22Base> ;
    using COREID = HSEM_R22_COREID_Values<HSEM::R22, 8, 4, ReadWriteMode, HSEMR22Base> ;
    using PROCID = HSEM_R22_PROCID_Values<HSEM::R22, 0, 8, ReadWriteMode, HSEMR22Base> ;
    using FieldValues = HSEM_R22_PROCID_Values<HSEM::R22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R22Pack  = Register<0x58001458, 32, ReadWriteMode, HSEMR22Base, T...> ;

  struct HSEMR23Base {} ;

  struct R23 : public RegisterBase<0x5800145C, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R23_LOCK_Values<HSEM::R23, 31, 1, ReadWriteMode, HSEMR23Base> ;
    using COREID = HSEM_R23_COREID_Values<HSEM::R23, 8, 4, ReadWriteMode, HSEMR23Base> ;
    using PROCID = HSEM_R23_PROCID_Values<HSEM::R23, 0, 8, ReadWriteMode, HSEMR23Base> ;
    using FieldValues = HSEM_R23_PROCID_Values<HSEM::R23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R23Pack  = Register<0x5800145C, 32, ReadWriteMode, HSEMR23Base, T...> ;

  struct HSEMR24Base {} ;

  struct R24 : public RegisterBase<0x58001460, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R24_LOCK_Values<HSEM::R24, 31, 1, ReadWriteMode, HSEMR24Base> ;
    using COREID = HSEM_R24_COREID_Values<HSEM::R24, 8, 4, ReadWriteMode, HSEMR24Base> ;
    using PROCID = HSEM_R24_PROCID_Values<HSEM::R24, 0, 8, ReadWriteMode, HSEMR24Base> ;
    using FieldValues = HSEM_R24_PROCID_Values<HSEM::R24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R24Pack  = Register<0x58001460, 32, ReadWriteMode, HSEMR24Base, T...> ;

  struct HSEMR25Base {} ;

  struct R25 : public RegisterBase<0x58001464, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R25_LOCK_Values<HSEM::R25, 31, 1, ReadWriteMode, HSEMR25Base> ;
    using COREID = HSEM_R25_COREID_Values<HSEM::R25, 8, 4, ReadWriteMode, HSEMR25Base> ;
    using PROCID = HSEM_R25_PROCID_Values<HSEM::R25, 0, 8, ReadWriteMode, HSEMR25Base> ;
    using FieldValues = HSEM_R25_PROCID_Values<HSEM::R25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R25Pack  = Register<0x58001464, 32, ReadWriteMode, HSEMR25Base, T...> ;

  struct HSEMR26Base {} ;

  struct R26 : public RegisterBase<0x58001468, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R26_LOCK_Values<HSEM::R26, 31, 1, ReadWriteMode, HSEMR26Base> ;
    using COREID = HSEM_R26_COREID_Values<HSEM::R26, 8, 4, ReadWriteMode, HSEMR26Base> ;
    using PROCID = HSEM_R26_PROCID_Values<HSEM::R26, 0, 8, ReadWriteMode, HSEMR26Base> ;
    using FieldValues = HSEM_R26_PROCID_Values<HSEM::R26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R26Pack  = Register<0x58001468, 32, ReadWriteMode, HSEMR26Base, T...> ;

  struct HSEMR27Base {} ;

  struct R27 : public RegisterBase<0x5800146C, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R27_LOCK_Values<HSEM::R27, 31, 1, ReadWriteMode, HSEMR27Base> ;
    using COREID = HSEM_R27_COREID_Values<HSEM::R27, 8, 4, ReadWriteMode, HSEMR27Base> ;
    using PROCID = HSEM_R27_PROCID_Values<HSEM::R27, 0, 8, ReadWriteMode, HSEMR27Base> ;
    using FieldValues = HSEM_R27_PROCID_Values<HSEM::R27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R27Pack  = Register<0x5800146C, 32, ReadWriteMode, HSEMR27Base, T...> ;

  struct HSEMR28Base {} ;

  struct R28 : public RegisterBase<0x58001470, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R28_LOCK_Values<HSEM::R28, 31, 1, ReadWriteMode, HSEMR28Base> ;
    using COREID = HSEM_R28_COREID_Values<HSEM::R28, 8, 4, ReadWriteMode, HSEMR28Base> ;
    using PROCID = HSEM_R28_PROCID_Values<HSEM::R28, 0, 8, ReadWriteMode, HSEMR28Base> ;
    using FieldValues = HSEM_R28_PROCID_Values<HSEM::R28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R28Pack  = Register<0x58001470, 32, ReadWriteMode, HSEMR28Base, T...> ;

  struct HSEMR29Base {} ;

  struct R29 : public RegisterBase<0x58001474, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R29_LOCK_Values<HSEM::R29, 31, 1, ReadWriteMode, HSEMR29Base> ;
    using COREID = HSEM_R29_COREID_Values<HSEM::R29, 8, 4, ReadWriteMode, HSEMR29Base> ;
    using PROCID = HSEM_R29_PROCID_Values<HSEM::R29, 0, 8, ReadWriteMode, HSEMR29Base> ;
    using FieldValues = HSEM_R29_PROCID_Values<HSEM::R29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R29Pack  = Register<0x58001474, 32, ReadWriteMode, HSEMR29Base, T...> ;

  struct HSEMR30Base {} ;

  struct R30 : public RegisterBase<0x58001478, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R30_LOCK_Values<HSEM::R30, 31, 1, ReadWriteMode, HSEMR30Base> ;
    using COREID = HSEM_R30_COREID_Values<HSEM::R30, 8, 4, ReadWriteMode, HSEMR30Base> ;
    using PROCID = HSEM_R30_PROCID_Values<HSEM::R30, 0, 8, ReadWriteMode, HSEMR30Base> ;
    using FieldValues = HSEM_R30_PROCID_Values<HSEM::R30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R30Pack  = Register<0x58001478, 32, ReadWriteMode, HSEMR30Base, T...> ;

  struct HSEMR31Base {} ;

  struct R31 : public RegisterBase<0x5800147C, 32, ReadWriteMode>
  {
    using LOCK = HSEM_R31_LOCK_Values<HSEM::R31, 31, 1, ReadWriteMode, HSEMR31Base> ;
    using COREID = HSEM_R31_COREID_Values<HSEM::R31, 8, 4, ReadWriteMode, HSEMR31Base> ;
    using PROCID = HSEM_R31_PROCID_Values<HSEM::R31, 0, 8, ReadWriteMode, HSEMR31Base> ;
    using FieldValues = HSEM_R31_PROCID_Values<HSEM::R31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using R31Pack  = Register<0x5800147C, 32, ReadWriteMode, HSEMR31Base, T...> ;

  struct HSEMRLR0Base {} ;

  struct RLR0 : public RegisterBase<0x58001480, 32, ReadMode>
  {
    using LOCK = HSEM_RLR0_LOCK_Values<HSEM::RLR0, 31, 1, ReadMode, HSEMRLR0Base> ;
    using COREID = HSEM_RLR0_COREID_Values<HSEM::RLR0, 8, 4, ReadMode, HSEMRLR0Base> ;
    using PROCID = HSEM_RLR0_PROCID_Values<HSEM::RLR0, 0, 8, ReadMode, HSEMRLR0Base> ;
    using FieldValues = HSEM_RLR0_PROCID_Values<HSEM::RLR0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR0Pack  = Register<0x58001480, 32, ReadMode, HSEMRLR0Base, T...> ;

  struct HSEMRLR1Base {} ;

  struct RLR1 : public RegisterBase<0x58001484, 32, ReadMode>
  {
    using LOCK = HSEM_RLR1_LOCK_Values<HSEM::RLR1, 31, 1, ReadMode, HSEMRLR1Base> ;
    using COREID = HSEM_RLR1_COREID_Values<HSEM::RLR1, 8, 4, ReadMode, HSEMRLR1Base> ;
    using PROCID = HSEM_RLR1_PROCID_Values<HSEM::RLR1, 0, 8, ReadMode, HSEMRLR1Base> ;
    using FieldValues = HSEM_RLR1_PROCID_Values<HSEM::RLR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR1Pack  = Register<0x58001484, 32, ReadMode, HSEMRLR1Base, T...> ;

  struct HSEMRLR2Base {} ;

  struct RLR2 : public RegisterBase<0x58001488, 32, ReadMode>
  {
    using LOCK = HSEM_RLR2_LOCK_Values<HSEM::RLR2, 31, 1, ReadMode, HSEMRLR2Base> ;
    using COREID = HSEM_RLR2_COREID_Values<HSEM::RLR2, 8, 4, ReadMode, HSEMRLR2Base> ;
    using PROCID = HSEM_RLR2_PROCID_Values<HSEM::RLR2, 0, 8, ReadMode, HSEMRLR2Base> ;
    using FieldValues = HSEM_RLR2_PROCID_Values<HSEM::RLR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR2Pack  = Register<0x58001488, 32, ReadMode, HSEMRLR2Base, T...> ;

  struct HSEMRLR3Base {} ;

  struct RLR3 : public RegisterBase<0x5800148C, 32, ReadMode>
  {
    using LOCK = HSEM_RLR3_LOCK_Values<HSEM::RLR3, 31, 1, ReadMode, HSEMRLR3Base> ;
    using COREID = HSEM_RLR3_COREID_Values<HSEM::RLR3, 8, 4, ReadMode, HSEMRLR3Base> ;
    using PROCID = HSEM_RLR3_PROCID_Values<HSEM::RLR3, 0, 8, ReadMode, HSEMRLR3Base> ;
    using FieldValues = HSEM_RLR3_PROCID_Values<HSEM::RLR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR3Pack  = Register<0x5800148C, 32, ReadMode, HSEMRLR3Base, T...> ;

  struct HSEMRLR4Base {} ;

  struct RLR4 : public RegisterBase<0x58001490, 32, ReadMode>
  {
    using LOCK = HSEM_RLR4_LOCK_Values<HSEM::RLR4, 31, 1, ReadMode, HSEMRLR4Base> ;
    using COREID = HSEM_RLR4_COREID_Values<HSEM::RLR4, 8, 4, ReadMode, HSEMRLR4Base> ;
    using PROCID = HSEM_RLR4_PROCID_Values<HSEM::RLR4, 0, 8, ReadMode, HSEMRLR4Base> ;
    using FieldValues = HSEM_RLR4_PROCID_Values<HSEM::RLR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR4Pack  = Register<0x58001490, 32, ReadMode, HSEMRLR4Base, T...> ;

  struct HSEMRLR5Base {} ;

  struct RLR5 : public RegisterBase<0x58001494, 32, ReadMode>
  {
    using LOCK = HSEM_RLR5_LOCK_Values<HSEM::RLR5, 31, 1, ReadMode, HSEMRLR5Base> ;
    using COREID = HSEM_RLR5_COREID_Values<HSEM::RLR5, 8, 4, ReadMode, HSEMRLR5Base> ;
    using PROCID = HSEM_RLR5_PROCID_Values<HSEM::RLR5, 0, 8, ReadMode, HSEMRLR5Base> ;
    using FieldValues = HSEM_RLR5_PROCID_Values<HSEM::RLR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR5Pack  = Register<0x58001494, 32, ReadMode, HSEMRLR5Base, T...> ;

  struct HSEMRLR6Base {} ;

  struct RLR6 : public RegisterBase<0x58001498, 32, ReadMode>
  {
    using LOCK = HSEM_RLR6_LOCK_Values<HSEM::RLR6, 31, 1, ReadMode, HSEMRLR6Base> ;
    using COREID = HSEM_RLR6_COREID_Values<HSEM::RLR6, 8, 4, ReadMode, HSEMRLR6Base> ;
    using PROCID = HSEM_RLR6_PROCID_Values<HSEM::RLR6, 0, 8, ReadMode, HSEMRLR6Base> ;
    using FieldValues = HSEM_RLR6_PROCID_Values<HSEM::RLR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR6Pack  = Register<0x58001498, 32, ReadMode, HSEMRLR6Base, T...> ;

  struct HSEMRLR7Base {} ;

  struct RLR7 : public RegisterBase<0x5800149C, 32, ReadMode>
  {
    using LOCK = HSEM_RLR7_LOCK_Values<HSEM::RLR7, 31, 1, ReadMode, HSEMRLR7Base> ;
    using COREID = HSEM_RLR7_COREID_Values<HSEM::RLR7, 8, 4, ReadMode, HSEMRLR7Base> ;
    using PROCID = HSEM_RLR7_PROCID_Values<HSEM::RLR7, 0, 8, ReadMode, HSEMRLR7Base> ;
    using FieldValues = HSEM_RLR7_PROCID_Values<HSEM::RLR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR7Pack  = Register<0x5800149C, 32, ReadMode, HSEMRLR7Base, T...> ;

  struct HSEMRLR8Base {} ;

  struct RLR8 : public RegisterBase<0x580014A0, 32, ReadMode>
  {
    using LOCK = HSEM_RLR8_LOCK_Values<HSEM::RLR8, 31, 1, ReadMode, HSEMRLR8Base> ;
    using COREID = HSEM_RLR8_COREID_Values<HSEM::RLR8, 8, 4, ReadMode, HSEMRLR8Base> ;
    using PROCID = HSEM_RLR8_PROCID_Values<HSEM::RLR8, 0, 8, ReadMode, HSEMRLR8Base> ;
    using FieldValues = HSEM_RLR8_PROCID_Values<HSEM::RLR8, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR8Pack  = Register<0x580014A0, 32, ReadMode, HSEMRLR8Base, T...> ;

  struct HSEMRLR9Base {} ;

  struct RLR9 : public RegisterBase<0x580014A4, 32, ReadMode>
  {
    using LOCK = HSEM_RLR9_LOCK_Values<HSEM::RLR9, 31, 1, ReadMode, HSEMRLR9Base> ;
    using COREID = HSEM_RLR9_COREID_Values<HSEM::RLR9, 8, 4, ReadMode, HSEMRLR9Base> ;
    using PROCID = HSEM_RLR9_PROCID_Values<HSEM::RLR9, 0, 8, ReadMode, HSEMRLR9Base> ;
    using FieldValues = HSEM_RLR9_PROCID_Values<HSEM::RLR9, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR9Pack  = Register<0x580014A4, 32, ReadMode, HSEMRLR9Base, T...> ;

  struct HSEMRLR10Base {} ;

  struct RLR10 : public RegisterBase<0x580014A8, 32, ReadMode>
  {
    using LOCK = HSEM_RLR10_LOCK_Values<HSEM::RLR10, 31, 1, ReadMode, HSEMRLR10Base> ;
    using COREID = HSEM_RLR10_COREID_Values<HSEM::RLR10, 8, 4, ReadMode, HSEMRLR10Base> ;
    using PROCID = HSEM_RLR10_PROCID_Values<HSEM::RLR10, 0, 8, ReadMode, HSEMRLR10Base> ;
    using FieldValues = HSEM_RLR10_PROCID_Values<HSEM::RLR10, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR10Pack  = Register<0x580014A8, 32, ReadMode, HSEMRLR10Base, T...> ;

  struct HSEMRLR11Base {} ;

  struct RLR11 : public RegisterBase<0x580014AC, 32, ReadMode>
  {
    using LOCK = HSEM_RLR11_LOCK_Values<HSEM::RLR11, 31, 1, ReadMode, HSEMRLR11Base> ;
    using COREID = HSEM_RLR11_COREID_Values<HSEM::RLR11, 8, 4, ReadMode, HSEMRLR11Base> ;
    using PROCID = HSEM_RLR11_PROCID_Values<HSEM::RLR11, 0, 8, ReadMode, HSEMRLR11Base> ;
    using FieldValues = HSEM_RLR11_PROCID_Values<HSEM::RLR11, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR11Pack  = Register<0x580014AC, 32, ReadMode, HSEMRLR11Base, T...> ;

  struct HSEMRLR12Base {} ;

  struct RLR12 : public RegisterBase<0x580014B0, 32, ReadMode>
  {
    using LOCK = HSEM_RLR12_LOCK_Values<HSEM::RLR12, 31, 1, ReadMode, HSEMRLR12Base> ;
    using COREID = HSEM_RLR12_COREID_Values<HSEM::RLR12, 8, 4, ReadMode, HSEMRLR12Base> ;
    using PROCID = HSEM_RLR12_PROCID_Values<HSEM::RLR12, 0, 8, ReadMode, HSEMRLR12Base> ;
    using FieldValues = HSEM_RLR12_PROCID_Values<HSEM::RLR12, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR12Pack  = Register<0x580014B0, 32, ReadMode, HSEMRLR12Base, T...> ;

  struct HSEMRLR13Base {} ;

  struct RLR13 : public RegisterBase<0x580014B4, 32, ReadMode>
  {
    using LOCK = HSEM_RLR13_LOCK_Values<HSEM::RLR13, 31, 1, ReadMode, HSEMRLR13Base> ;
    using COREID = HSEM_RLR13_COREID_Values<HSEM::RLR13, 8, 4, ReadMode, HSEMRLR13Base> ;
    using PROCID = HSEM_RLR13_PROCID_Values<HSEM::RLR13, 0, 8, ReadMode, HSEMRLR13Base> ;
    using FieldValues = HSEM_RLR13_PROCID_Values<HSEM::RLR13, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR13Pack  = Register<0x580014B4, 32, ReadMode, HSEMRLR13Base, T...> ;

  struct HSEMRLR14Base {} ;

  struct RLR14 : public RegisterBase<0x580014B8, 32, ReadMode>
  {
    using LOCK = HSEM_RLR14_LOCK_Values<HSEM::RLR14, 31, 1, ReadMode, HSEMRLR14Base> ;
    using COREID = HSEM_RLR14_COREID_Values<HSEM::RLR14, 8, 4, ReadMode, HSEMRLR14Base> ;
    using PROCID = HSEM_RLR14_PROCID_Values<HSEM::RLR14, 0, 8, ReadMode, HSEMRLR14Base> ;
    using FieldValues = HSEM_RLR14_PROCID_Values<HSEM::RLR14, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR14Pack  = Register<0x580014B8, 32, ReadMode, HSEMRLR14Base, T...> ;

  struct HSEMRLR15Base {} ;

  struct RLR15 : public RegisterBase<0x580014BC, 32, ReadMode>
  {
    using LOCK = HSEM_RLR15_LOCK_Values<HSEM::RLR15, 31, 1, ReadMode, HSEMRLR15Base> ;
    using COREID = HSEM_RLR15_COREID_Values<HSEM::RLR15, 8, 4, ReadMode, HSEMRLR15Base> ;
    using PROCID = HSEM_RLR15_PROCID_Values<HSEM::RLR15, 0, 8, ReadMode, HSEMRLR15Base> ;
    using FieldValues = HSEM_RLR15_PROCID_Values<HSEM::RLR15, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR15Pack  = Register<0x580014BC, 32, ReadMode, HSEMRLR15Base, T...> ;

  struct HSEMRLR16Base {} ;

  struct RLR16 : public RegisterBase<0x580014C0, 32, ReadMode>
  {
    using LOCK = HSEM_RLR16_LOCK_Values<HSEM::RLR16, 31, 1, ReadMode, HSEMRLR16Base> ;
    using COREID = HSEM_RLR16_COREID_Values<HSEM::RLR16, 8, 4, ReadMode, HSEMRLR16Base> ;
    using PROCID = HSEM_RLR16_PROCID_Values<HSEM::RLR16, 0, 8, ReadMode, HSEMRLR16Base> ;
    using FieldValues = HSEM_RLR16_PROCID_Values<HSEM::RLR16, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR16Pack  = Register<0x580014C0, 32, ReadMode, HSEMRLR16Base, T...> ;

  struct HSEMRLR17Base {} ;

  struct RLR17 : public RegisterBase<0x580014C4, 32, ReadMode>
  {
    using LOCK = HSEM_RLR17_LOCK_Values<HSEM::RLR17, 31, 1, ReadMode, HSEMRLR17Base> ;
    using COREID = HSEM_RLR17_COREID_Values<HSEM::RLR17, 8, 4, ReadMode, HSEMRLR17Base> ;
    using PROCID = HSEM_RLR17_PROCID_Values<HSEM::RLR17, 0, 8, ReadMode, HSEMRLR17Base> ;
    using FieldValues = HSEM_RLR17_PROCID_Values<HSEM::RLR17, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR17Pack  = Register<0x580014C4, 32, ReadMode, HSEMRLR17Base, T...> ;

  struct HSEMRLR18Base {} ;

  struct RLR18 : public RegisterBase<0x580014C8, 32, ReadMode>
  {
    using LOCK = HSEM_RLR18_LOCK_Values<HSEM::RLR18, 31, 1, ReadMode, HSEMRLR18Base> ;
    using COREID = HSEM_RLR18_COREID_Values<HSEM::RLR18, 8, 4, ReadMode, HSEMRLR18Base> ;
    using PROCID = HSEM_RLR18_PROCID_Values<HSEM::RLR18, 0, 8, ReadMode, HSEMRLR18Base> ;
    using FieldValues = HSEM_RLR18_PROCID_Values<HSEM::RLR18, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR18Pack  = Register<0x580014C8, 32, ReadMode, HSEMRLR18Base, T...> ;

  struct HSEMRLR19Base {} ;

  struct RLR19 : public RegisterBase<0x580014CC, 32, ReadMode>
  {
    using LOCK = HSEM_RLR19_LOCK_Values<HSEM::RLR19, 31, 1, ReadMode, HSEMRLR19Base> ;
    using COREID = HSEM_RLR19_COREID_Values<HSEM::RLR19, 8, 4, ReadMode, HSEMRLR19Base> ;
    using PROCID = HSEM_RLR19_PROCID_Values<HSEM::RLR19, 0, 8, ReadMode, HSEMRLR19Base> ;
    using FieldValues = HSEM_RLR19_PROCID_Values<HSEM::RLR19, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR19Pack  = Register<0x580014CC, 32, ReadMode, HSEMRLR19Base, T...> ;

  struct HSEMRLR20Base {} ;

  struct RLR20 : public RegisterBase<0x580014D0, 32, ReadMode>
  {
    using LOCK = HSEM_RLR20_LOCK_Values<HSEM::RLR20, 31, 1, ReadMode, HSEMRLR20Base> ;
    using COREID = HSEM_RLR20_COREID_Values<HSEM::RLR20, 8, 4, ReadMode, HSEMRLR20Base> ;
    using PROCID = HSEM_RLR20_PROCID_Values<HSEM::RLR20, 0, 8, ReadMode, HSEMRLR20Base> ;
    using FieldValues = HSEM_RLR20_PROCID_Values<HSEM::RLR20, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR20Pack  = Register<0x580014D0, 32, ReadMode, HSEMRLR20Base, T...> ;

  struct HSEMRLR21Base {} ;

  struct RLR21 : public RegisterBase<0x580014D4, 32, ReadMode>
  {
    using LOCK = HSEM_RLR21_LOCK_Values<HSEM::RLR21, 31, 1, ReadMode, HSEMRLR21Base> ;
    using COREID = HSEM_RLR21_COREID_Values<HSEM::RLR21, 8, 4, ReadMode, HSEMRLR21Base> ;
    using PROCID = HSEM_RLR21_PROCID_Values<HSEM::RLR21, 0, 8, ReadMode, HSEMRLR21Base> ;
    using FieldValues = HSEM_RLR21_PROCID_Values<HSEM::RLR21, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR21Pack  = Register<0x580014D4, 32, ReadMode, HSEMRLR21Base, T...> ;

  struct HSEMRLR22Base {} ;

  struct RLR22 : public RegisterBase<0x580014D8, 32, ReadMode>
  {
    using LOCK = HSEM_RLR22_LOCK_Values<HSEM::RLR22, 31, 1, ReadMode, HSEMRLR22Base> ;
    using COREID = HSEM_RLR22_COREID_Values<HSEM::RLR22, 8, 4, ReadMode, HSEMRLR22Base> ;
    using PROCID = HSEM_RLR22_PROCID_Values<HSEM::RLR22, 0, 8, ReadMode, HSEMRLR22Base> ;
    using FieldValues = HSEM_RLR22_PROCID_Values<HSEM::RLR22, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR22Pack  = Register<0x580014D8, 32, ReadMode, HSEMRLR22Base, T...> ;

  struct HSEMRLR23Base {} ;

  struct RLR23 : public RegisterBase<0x580014DC, 32, ReadMode>
  {
    using LOCK = HSEM_RLR23_LOCK_Values<HSEM::RLR23, 31, 1, ReadMode, HSEMRLR23Base> ;
    using COREID = HSEM_RLR23_COREID_Values<HSEM::RLR23, 8, 4, ReadMode, HSEMRLR23Base> ;
    using PROCID = HSEM_RLR23_PROCID_Values<HSEM::RLR23, 0, 8, ReadMode, HSEMRLR23Base> ;
    using FieldValues = HSEM_RLR23_PROCID_Values<HSEM::RLR23, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR23Pack  = Register<0x580014DC, 32, ReadMode, HSEMRLR23Base, T...> ;

  struct HSEMRLR24Base {} ;

  struct RLR24 : public RegisterBase<0x580014E0, 32, ReadMode>
  {
    using LOCK = HSEM_RLR24_LOCK_Values<HSEM::RLR24, 31, 1, ReadMode, HSEMRLR24Base> ;
    using COREID = HSEM_RLR24_COREID_Values<HSEM::RLR24, 8, 4, ReadMode, HSEMRLR24Base> ;
    using PROCID = HSEM_RLR24_PROCID_Values<HSEM::RLR24, 0, 8, ReadMode, HSEMRLR24Base> ;
    using FieldValues = HSEM_RLR24_PROCID_Values<HSEM::RLR24, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR24Pack  = Register<0x580014E0, 32, ReadMode, HSEMRLR24Base, T...> ;

  struct HSEMRLR25Base {} ;

  struct RLR25 : public RegisterBase<0x580014E4, 32, ReadMode>
  {
    using LOCK = HSEM_RLR25_LOCK_Values<HSEM::RLR25, 31, 1, ReadMode, HSEMRLR25Base> ;
    using COREID = HSEM_RLR25_COREID_Values<HSEM::RLR25, 8, 4, ReadMode, HSEMRLR25Base> ;
    using PROCID = HSEM_RLR25_PROCID_Values<HSEM::RLR25, 0, 8, ReadMode, HSEMRLR25Base> ;
    using FieldValues = HSEM_RLR25_PROCID_Values<HSEM::RLR25, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR25Pack  = Register<0x580014E4, 32, ReadMode, HSEMRLR25Base, T...> ;

  struct HSEMRLR26Base {} ;

  struct RLR26 : public RegisterBase<0x580014E8, 32, ReadMode>
  {
    using LOCK = HSEM_RLR26_LOCK_Values<HSEM::RLR26, 31, 1, ReadMode, HSEMRLR26Base> ;
    using COREID = HSEM_RLR26_COREID_Values<HSEM::RLR26, 8, 4, ReadMode, HSEMRLR26Base> ;
    using PROCID = HSEM_RLR26_PROCID_Values<HSEM::RLR26, 0, 8, ReadMode, HSEMRLR26Base> ;
    using FieldValues = HSEM_RLR26_PROCID_Values<HSEM::RLR26, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR26Pack  = Register<0x580014E8, 32, ReadMode, HSEMRLR26Base, T...> ;

  struct HSEMRLR27Base {} ;

  struct RLR27 : public RegisterBase<0x580014EC, 32, ReadMode>
  {
    using LOCK = HSEM_RLR27_LOCK_Values<HSEM::RLR27, 31, 1, ReadMode, HSEMRLR27Base> ;
    using COREID = HSEM_RLR27_COREID_Values<HSEM::RLR27, 8, 4, ReadMode, HSEMRLR27Base> ;
    using PROCID = HSEM_RLR27_PROCID_Values<HSEM::RLR27, 0, 8, ReadMode, HSEMRLR27Base> ;
    using FieldValues = HSEM_RLR27_PROCID_Values<HSEM::RLR27, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR27Pack  = Register<0x580014EC, 32, ReadMode, HSEMRLR27Base, T...> ;

  struct HSEMRLR28Base {} ;

  struct RLR28 : public RegisterBase<0x580014F0, 32, ReadMode>
  {
    using LOCK = HSEM_RLR28_LOCK_Values<HSEM::RLR28, 31, 1, ReadMode, HSEMRLR28Base> ;
    using COREID = HSEM_RLR28_COREID_Values<HSEM::RLR28, 8, 4, ReadMode, HSEMRLR28Base> ;
    using PROCID = HSEM_RLR28_PROCID_Values<HSEM::RLR28, 0, 8, ReadMode, HSEMRLR28Base> ;
    using FieldValues = HSEM_RLR28_PROCID_Values<HSEM::RLR28, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR28Pack  = Register<0x580014F0, 32, ReadMode, HSEMRLR28Base, T...> ;

  struct HSEMRLR29Base {} ;

  struct RLR29 : public RegisterBase<0x580014F4, 32, ReadMode>
  {
    using LOCK = HSEM_RLR29_LOCK_Values<HSEM::RLR29, 31, 1, ReadMode, HSEMRLR29Base> ;
    using COREID = HSEM_RLR29_COREID_Values<HSEM::RLR29, 8, 4, ReadMode, HSEMRLR29Base> ;
    using PROCID = HSEM_RLR29_PROCID_Values<HSEM::RLR29, 0, 8, ReadMode, HSEMRLR29Base> ;
    using FieldValues = HSEM_RLR29_PROCID_Values<HSEM::RLR29, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR29Pack  = Register<0x580014F4, 32, ReadMode, HSEMRLR29Base, T...> ;

  struct HSEMRLR30Base {} ;

  struct RLR30 : public RegisterBase<0x580014F8, 32, ReadMode>
  {
    using LOCK = HSEM_RLR30_LOCK_Values<HSEM::RLR30, 31, 1, ReadMode, HSEMRLR30Base> ;
    using COREID = HSEM_RLR30_COREID_Values<HSEM::RLR30, 8, 4, ReadMode, HSEMRLR30Base> ;
    using PROCID = HSEM_RLR30_PROCID_Values<HSEM::RLR30, 0, 8, ReadMode, HSEMRLR30Base> ;
    using FieldValues = HSEM_RLR30_PROCID_Values<HSEM::RLR30, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR30Pack  = Register<0x580014F8, 32, ReadMode, HSEMRLR30Base, T...> ;

  struct HSEMRLR31Base {} ;

  struct RLR31 : public RegisterBase<0x580014FC, 32, ReadMode>
  {
    using LOCK = HSEM_RLR31_LOCK_Values<HSEM::RLR31, 31, 1, ReadMode, HSEMRLR31Base> ;
    using COREID = HSEM_RLR31_COREID_Values<HSEM::RLR31, 8, 4, ReadMode, HSEMRLR31Base> ;
    using PROCID = HSEM_RLR31_PROCID_Values<HSEM::RLR31, 0, 8, ReadMode, HSEMRLR31Base> ;
    using FieldValues = HSEM_RLR31_PROCID_Values<HSEM::RLR31, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RLR31Pack  = Register<0x580014FC, 32, ReadMode, HSEMRLR31Base, T...> ;

  struct HSEMCRBase {} ;

  struct CR : public RegisterBase<0x58001540, 32, ReadWriteMode>
  {
    using KEY = HSEM_CR_KEY_Values<HSEM::CR, 16, 16, ReadWriteMode, HSEMCRBase> ;
    using COREID = HSEM_CR_COREID_Values<HSEM::CR, 8, 4, ReadWriteMode, HSEMCRBase> ;
    using FieldValues = HSEM_CR_COREID_Values<HSEM::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0x58001540, 32, ReadWriteMode, HSEMCRBase, T...> ;

  struct HSEMKEYRBase {} ;

  struct KEYR : public RegisterBase<0x58001544, 32, ReadWriteMode>
  {
    using KEY = HSEM_KEYR_KEY_Values<HSEM::KEYR, 16, 16, ReadWriteMode, HSEMKEYRBase> ;
    using FieldValues = HSEM_KEYR_KEY_Values<HSEM::KEYR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using KEYRPack  = Register<0x58001544, 32, ReadWriteMode, HSEMKEYRBase, T...> ;

  struct HSEMHWCFGR2Base {} ;

  struct HWCFGR2 : public RegisterBase<0x580017EC, 32, ReadMode>
  {
    using MASTERID4 = HSEM_HWCFGR2_MASTERID4_Values<HSEM::HWCFGR2, 12, 4, ReadMode, HSEMHWCFGR2Base> ;
    using MASTERID3 = HSEM_HWCFGR2_MASTERID3_Values<HSEM::HWCFGR2, 8, 4, ReadMode, HSEMHWCFGR2Base> ;
    using MASTERID2 = HSEM_HWCFGR2_MASTERID2_Values<HSEM::HWCFGR2, 4, 4, ReadMode, HSEMHWCFGR2Base> ;
    using MASTERID1 = HSEM_HWCFGR2_MASTERID1_Values<HSEM::HWCFGR2, 0, 4, ReadMode, HSEMHWCFGR2Base> ;
    using FieldValues = HSEM_HWCFGR2_MASTERID1_Values<HSEM::HWCFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFGR2Pack  = Register<0x580017EC, 32, ReadMode, HSEMHWCFGR2Base, T...> ;

  struct HSEMHWCFGR1Base {} ;

  struct HWCFGR1 : public RegisterBase<0x580017F0, 32, ReadMode>
  {
    using NBINT = HSEM_HWCFGR1_NBINT_Values<HSEM::HWCFGR1, 8, 4, ReadMode, HSEMHWCFGR1Base> ;
    using NBSEM = HSEM_HWCFGR1_NBSEM_Values<HSEM::HWCFGR1, 0, 8, ReadMode, HSEMHWCFGR1Base> ;
    using FieldValues = HSEM_HWCFGR1_NBSEM_Values<HSEM::HWCFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFGR1Pack  = Register<0x580017F0, 32, ReadMode, HSEMHWCFGR1Base, T...> ;

  struct HSEMVERRBase {} ;

  struct VERR : public RegisterBase<0x580017F4, 32, ReadMode>
  {
    using MAJREV = HSEM_VERR_MAJREV_Values<HSEM::VERR, 4, 4, ReadMode, HSEMVERRBase> ;
    using MINREV = HSEM_VERR_MINREV_Values<HSEM::VERR, 0, 4, ReadMode, HSEMVERRBase> ;
    using FieldValues = HSEM_VERR_MINREV_Values<HSEM::VERR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VERRPack  = Register<0x580017F4, 32, ReadMode, HSEMVERRBase, T...> ;

  struct HSEMIPIDRBase {} ;

  struct IPIDR : public RegisterBase<0x580017F8, 32, ReadMode>
  {
    using ID = HSEM_IPIDR_ID_Values<HSEM::IPIDR, 0, 32, ReadMode, HSEMIPIDRBase> ;
    using FieldValues = HSEM_IPIDR_ID_Values<HSEM::IPIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPIDRPack  = Register<0x580017F8, 32, ReadMode, HSEMIPIDRBase, T...> ;

  struct HSEMSIDRBase {} ;

  struct SIDR : public RegisterBase<0x580017FC, 32, ReadMode>
  {
    using SID = HSEM_SIDR_SID_Values<HSEM::SIDR, 0, 32, ReadMode, HSEMSIDRBase> ;
    using FieldValues = HSEM_SIDR_SID_Values<HSEM::SIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SIDRPack  = Register<0x580017FC, 32, ReadMode, HSEMSIDRBase, T...> ;

  struct HSEMC1IER0Base {} ;

  struct C1IER0 : public RegisterBase<0x58001500, 32, ReadWriteMode>
  {
    using ISEm = HSEM_C1IER0_ISEm_Values<HSEM::C1IER0, 0, 32, ReadWriteMode, HSEMC1IER0Base> ;
    using FieldValues = HSEM_C1IER0_ISEm_Values<HSEM::C1IER0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1IER0Pack  = Register<0x58001500, 32, ReadWriteMode, HSEMC1IER0Base, T...> ;

  struct HSEMC1ICRBase {} ;

  struct C1ICR : public RegisterBase<0x58001504, 32, ReadWriteMode>
  {
    using ISCm = HSEM_C1ICR_ISCm_Values<HSEM::C1ICR, 0, 32, ReadWriteMode, HSEMC1ICRBase> ;
    using FieldValues = HSEM_C1ICR_ISCm_Values<HSEM::C1ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1ICRPack  = Register<0x58001504, 32, ReadWriteMode, HSEMC1ICRBase, T...> ;

  struct HSEMC1ISRBase {} ;

  struct C1ISR : public RegisterBase<0x58001508, 32, ReadMode>
  {
    using ISFm = HSEM_C1ISR_ISFm_Values<HSEM::C1ISR, 0, 32, ReadMode, HSEMC1ISRBase> ;
    using FieldValues = HSEM_C1ISR_ISFm_Values<HSEM::C1ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1ISRPack  = Register<0x58001508, 32, ReadMode, HSEMC1ISRBase, T...> ;

  struct HSEMC1MISRBase {} ;

  struct C1MISR : public RegisterBase<0x5800150C, 32, ReadMode>
  {
    using MISFm = HSEM_C1MISR_MISFm_Values<HSEM::C1MISR, 0, 32, ReadMode, HSEMC1MISRBase> ;
    using FieldValues = HSEM_C1MISR_MISFm_Values<HSEM::C1MISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1MISRPack  = Register<0x5800150C, 32, ReadMode, HSEMC1MISRBase, T...> ;

  struct HSEMC2IER0Base {} ;

  struct C2IER0 : public RegisterBase<0x58001510, 32, ReadWriteMode>
  {
    using ISEm = HSEM_C2IER0_ISEm_Values<HSEM::C2IER0, 0, 32, ReadWriteMode, HSEMC2IER0Base> ;
    using FieldValues = HSEM_C2IER0_ISEm_Values<HSEM::C2IER0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2IER0Pack  = Register<0x58001510, 32, ReadWriteMode, HSEMC2IER0Base, T...> ;

  struct HSEMC2ICRBase {} ;

  struct C2ICR : public RegisterBase<0x58001514, 32, ReadWriteMode>
  {
    using ISCm = HSEM_C2ICR_ISCm_Values<HSEM::C2ICR, 0, 32, ReadWriteMode, HSEMC2ICRBase> ;
    using FieldValues = HSEM_C2ICR_ISCm_Values<HSEM::C2ICR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2ICRPack  = Register<0x58001514, 32, ReadWriteMode, HSEMC2ICRBase, T...> ;

  struct HSEMC2ISRBase {} ;

  struct C2ISR : public RegisterBase<0x58001518, 32, ReadMode>
  {
    using ISFm = HSEM_C2ISR_ISFm_Values<HSEM::C2ISR, 0, 32, ReadMode, HSEMC2ISRBase> ;
    using FieldValues = HSEM_C2ISR_ISFm_Values<HSEM::C2ISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2ISRPack  = Register<0x58001518, 32, ReadMode, HSEMC2ISRBase, T...> ;

  struct HSEMC2MISRBase {} ;

  struct C2MISR : public RegisterBase<0x5800151C, 32, ReadMode>
  {
    using MISFm = HSEM_C2MISR_MISFm_Values<HSEM::C2MISR, 0, 32, ReadMode, HSEMC2MISRBase> ;
    using FieldValues = HSEM_C2MISR_MISFm_Values<HSEM::C2MISR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2MISRPack  = Register<0x5800151C, 32, ReadMode, HSEMC2MISRBase, T...> ;

} ;

