/*******************************************************************************
* Filename      : extiregisters.hpp
*
* Details       : External interrupt/event controller. This header file is
*                 auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "extifieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EXTI
{
  struct EXTIRTSR1Base {} ;

  struct RTSR1 : public RegisterBase<0x58000800, 32, ReadWriteMode>
  {
    using RT = EXTI_RTSR1_RT_Values<EXTI::RTSR1, 0, 22, ReadWriteMode, EXTIRTSR1Base> ;
    using RT_31 = EXTI_RTSR1_RT_31_Values<EXTI::RTSR1, 31, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using FieldValues = EXTI_RTSR1_RT_31_Values<EXTI::RTSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTSR1Pack  = Register<0x58000800, 32, ReadWriteMode, EXTIRTSR1Base, T...> ;

  struct EXTIFTSR1Base {} ;

  struct FTSR1 : public RegisterBase<0x58000804, 32, ReadWriteMode>
  {
    using FT = EXTI_FTSR1_FT_Values<EXTI::FTSR1, 0, 22, ReadWriteMode, EXTIFTSR1Base> ;
    using FT_31 = EXTI_FTSR1_FT_31_Values<EXTI::FTSR1, 31, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FieldValues = EXTI_FTSR1_FT_31_Values<EXTI::FTSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FTSR1Pack  = Register<0x58000804, 32, ReadWriteMode, EXTIFTSR1Base, T...> ;

  struct EXTISWIER1Base {} ;

  struct SWIER1 : public RegisterBase<0x58000808, 32, ReadWriteMode>
  {
    using SWI = EXTI_SWIER1_SWI_Values<EXTI::SWIER1, 0, 22, ReadWriteMode, EXTISWIER1Base> ;
    using SWI_31 = EXTI_SWIER1_SWI_31_Values<EXTI::SWIER1, 31, 1, ReadWriteMode, EXTISWIER1Base> ;
    using FieldValues = EXTI_SWIER1_SWI_31_Values<EXTI::SWIER1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWIER1Pack  = Register<0x58000808, 32, ReadWriteMode, EXTISWIER1Base, T...> ;

  struct EXTIPR1Base {} ;

  struct PR1 : public RegisterBase<0x5800080C, 32, ReadWriteMode>
  {
    using PIF = EXTI_PR1_PIF_Values<EXTI::PR1, 0, 22, ReadWriteMode, EXTIPR1Base> ;
    using PIF_31 = EXTI_PR1_PIF_31_Values<EXTI::PR1, 31, 1, ReadWriteMode, EXTIPR1Base> ;
    using FieldValues = EXTI_PR1_PIF_31_Values<EXTI::PR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PR1Pack  = Register<0x5800080C, 32, ReadWriteMode, EXTIPR1Base, T...> ;

  struct EXTIRTSR2Base {} ;

  struct RTSR2 : public RegisterBase<0x58000820, 32, ReadWriteMode>
  {
    using RT33 = EXTI_RTSR2_RT33_Values<EXTI::RTSR2, 1, 1, ReadWriteMode, EXTIRTSR2Base> ;
    using RT40_41 = EXTI_RTSR2_RT40_41_Values<EXTI::RTSR2, 8, 2, ReadWriteMode, EXTIRTSR2Base> ;
    using FieldValues = EXTI_RTSR2_RT40_41_Values<EXTI::RTSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTSR2Pack  = Register<0x58000820, 32, ReadWriteMode, EXTIRTSR2Base, T...> ;

  struct EXTIFTSR2Base {} ;

  struct FTSR2 : public RegisterBase<0x58000824, 32, ReadWriteMode>
  {
    using FT33 = EXTI_FTSR2_FT33_Values<EXTI::FTSR2, 1, 1, ReadWriteMode, EXTIFTSR2Base> ;
    using FT40_41 = EXTI_FTSR2_FT40_41_Values<EXTI::FTSR2, 8, 2, ReadWriteMode, EXTIFTSR2Base> ;
    using FieldValues = EXTI_FTSR2_FT40_41_Values<EXTI::FTSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FTSR2Pack  = Register<0x58000824, 32, ReadWriteMode, EXTIFTSR2Base, T...> ;

  struct EXTISWIER2Base {} ;

  struct SWIER2 : public RegisterBase<0x58000828, 32, ReadWriteMode>
  {
    using SWI33 = EXTI_SWIER2_SWI33_Values<EXTI::SWIER2, 1, 1, ReadWriteMode, EXTISWIER2Base> ;
    using SWI40_41 = EXTI_SWIER2_SWI40_41_Values<EXTI::SWIER2, 8, 2, ReadWriteMode, EXTISWIER2Base> ;
    using FieldValues = EXTI_SWIER2_SWI40_41_Values<EXTI::SWIER2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWIER2Pack  = Register<0x58000828, 32, ReadWriteMode, EXTISWIER2Base, T...> ;

  struct EXTIPR2Base {} ;

  struct PR2 : public RegisterBase<0x5800082C, 32, ReadWriteMode>
  {
    using PIF33 = EXTI_PR2_PIF33_Values<EXTI::PR2, 1, 1, ReadWriteMode, EXTIPR2Base> ;
    using PIF40_41 = EXTI_PR2_PIF40_41_Values<EXTI::PR2, 8, 2, ReadWriteMode, EXTIPR2Base> ;
    using FieldValues = EXTI_PR2_PIF40_41_Values<EXTI::PR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PR2Pack  = Register<0x5800082C, 32, ReadWriteMode, EXTIPR2Base, T...> ;

  struct EXTIC1IMR1Base {} ;

  struct C1IMR1 : public RegisterBase<0x58000880, 32, ReadWriteMode>
  {
    using IM = EXTI_C1IMR1_IM_Values<EXTI::C1IMR1, 0, 32, ReadWriteMode, EXTIC1IMR1Base> ;
    using FieldValues = EXTI_C1IMR1_IM_Values<EXTI::C1IMR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1IMR1Pack  = Register<0x58000880, 32, ReadWriteMode, EXTIC1IMR1Base, T...> ;

  struct EXTIC2IMR1Base {} ;

  struct C2IMR1 : public RegisterBase<0x580008C0, 32, ReadWriteMode>
  {
    using IM = EXTI_C2IMR1_IM_Values<EXTI::C2IMR1, 0, 32, ReadWriteMode, EXTIC2IMR1Base> ;
    using FieldValues = EXTI_C2IMR1_IM_Values<EXTI::C2IMR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2IMR1Pack  = Register<0x580008C0, 32, ReadWriteMode, EXTIC2IMR1Base, T...> ;

  struct EXTIC1EMR1Base {} ;

  struct C1EMR1 : public RegisterBase<0x58000884, 32, ReadWriteMode>
  {
    using EM0_15 = EXTI_C1EMR1_EM0_15_Values<EXTI::C1EMR1, 0, 16, ReadWriteMode, EXTIC1EMR1Base> ;
    using EM17_21 = EXTI_C1EMR1_EM17_21_Values<EXTI::C1EMR1, 17, 5, ReadWriteMode, EXTIC1EMR1Base> ;
    using FieldValues = EXTI_C1EMR1_EM17_21_Values<EXTI::C1EMR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1EMR1Pack  = Register<0x58000884, 32, ReadWriteMode, EXTIC1EMR1Base, T...> ;

  struct EXTIC2EMR1Base {} ;

  struct C2EMR1 : public RegisterBase<0x580008C4, 32, ReadWriteMode>
  {
    using EM0_15 = EXTI_C2EMR1_EM0_15_Values<EXTI::C2EMR1, 0, 16, ReadWriteMode, EXTIC2EMR1Base> ;
    using EM17_21 = EXTI_C2EMR1_EM17_21_Values<EXTI::C2EMR1, 17, 5, ReadWriteMode, EXTIC2EMR1Base> ;
    using FieldValues = EXTI_C2EMR1_EM17_21_Values<EXTI::C2EMR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2EMR1Pack  = Register<0x580008C4, 32, ReadWriteMode, EXTIC2EMR1Base, T...> ;

  struct EXTIC1IMR2Base {} ;

  struct C1IMR2 : public RegisterBase<0x58000890, 32, ReadWriteMode>
  {
    using IM = EXTI_C1IMR2_IM_Values<EXTI::C1IMR2, 0, 17, ReadWriteMode, EXTIC1IMR2Base> ;
    using FieldValues = EXTI_C1IMR2_IM_Values<EXTI::C1IMR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1IMR2Pack  = Register<0x58000890, 32, ReadWriteMode, EXTIC1IMR2Base, T...> ;

  struct EXTIC2IMR2Base {} ;

  struct C2IMR2 : public RegisterBase<0x580008D0, 32, ReadWriteMode>
  {
    using IM = EXTI_C2IMR2_IM_Values<EXTI::C2IMR2, 0, 17, ReadWriteMode, EXTIC2IMR2Base> ;
    using FieldValues = EXTI_C2IMR2_IM_Values<EXTI::C2IMR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2IMR2Pack  = Register<0x580008D0, 32, ReadWriteMode, EXTIC2IMR2Base, T...> ;

  struct EXTIC1EMR2Base {} ;

  struct C1EMR2 : public RegisterBase<0x58000894, 32, ReadWriteMode>
  {
    using EM = EXTI_C1EMR2_EM_Values<EXTI::C1EMR2, 8, 2, ReadWriteMode, EXTIC1EMR2Base> ;
    using FieldValues = EXTI_C1EMR2_EM_Values<EXTI::C1EMR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C1EMR2Pack  = Register<0x58000894, 32, ReadWriteMode, EXTIC1EMR2Base, T...> ;

  struct EXTIC2EMR2Base {} ;

  struct C2EMR2 : public RegisterBase<0x580008D4, 32, ReadWriteMode>
  {
    using EM = EXTI_C2EMR2_EM_Values<EXTI::C2EMR2, 8, 2, ReadWriteMode, EXTIC2EMR2Base> ;
    using FieldValues = EXTI_C2EMR2_EM_Values<EXTI::C2EMR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using C2EMR2Pack  = Register<0x580008D4, 32, ReadWriteMode, EXTIC2EMR2Base, T...> ;

  struct EXTIHWCFGR5Base {} ;

  struct HWCFGR5 : public RegisterBase<0x58000BE0, 32, ReadMode>
  {
    using CPUEVENT = EXTI_HWCFGR5_CPUEVENT_Values<EXTI::HWCFGR5, 0, 32, ReadMode, EXTIHWCFGR5Base> ;
    using FieldValues = EXTI_HWCFGR5_CPUEVENT_Values<EXTI::HWCFGR5, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFGR5Pack  = Register<0x58000BE0, 32, ReadMode, EXTIHWCFGR5Base, T...> ;

  struct EXTIHWCFGR6Base {} ;

  struct HWCFGR6 : public RegisterBase<0x58000BDC, 32, ReadMode>
  {
    using CPUEVENT = EXTI_HWCFGR6_CPUEVENT_Values<EXTI::HWCFGR6, 0, 32, ReadMode, EXTIHWCFGR6Base> ;
    using FieldValues = EXTI_HWCFGR6_CPUEVENT_Values<EXTI::HWCFGR6, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFGR6Pack  = Register<0x58000BDC, 32, ReadMode, EXTIHWCFGR6Base, T...> ;

  struct EXTIHWCFGR7Base {} ;

  struct HWCFGR7 : public RegisterBase<0x58000BD8, 32, ReadMode>
  {
    using CPUEVENT = EXTI_HWCFGR7_CPUEVENT_Values<EXTI::HWCFGR7, 0, 32, ReadMode, EXTIHWCFGR7Base> ;
    using FieldValues = EXTI_HWCFGR7_CPUEVENT_Values<EXTI::HWCFGR7, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFGR7Pack  = Register<0x58000BD8, 32, ReadMode, EXTIHWCFGR7Base, T...> ;

  struct EXTIHWCFGR2Base {} ;

  struct HWCFGR2 : public RegisterBase<0x58000BEC, 32, ReadMode>
  {
    using EVENT_TRG = EXTI_HWCFGR2_EVENT_TRG_Values<EXTI::HWCFGR2, 0, 32, ReadMode, EXTIHWCFGR2Base> ;
    using FieldValues = EXTI_HWCFGR2_EVENT_TRG_Values<EXTI::HWCFGR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFGR2Pack  = Register<0x58000BEC, 32, ReadMode, EXTIHWCFGR2Base, T...> ;

  struct EXTIHWCFGR3Base {} ;

  struct HWCFGR3 : public RegisterBase<0x58000BE8, 32, ReadMode>
  {
    using EVENT_TRG = EXTI_HWCFGR3_EVENT_TRG_Values<EXTI::HWCFGR3, 0, 32, ReadMode, EXTIHWCFGR3Base> ;
    using FieldValues = EXTI_HWCFGR3_EVENT_TRG_Values<EXTI::HWCFGR3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFGR3Pack  = Register<0x58000BE8, 32, ReadMode, EXTIHWCFGR3Base, T...> ;

  struct EXTIHWCFGR4Base {} ;

  struct HWCFGR4 : public RegisterBase<0x58000BE4, 32, ReadMode>
  {
    using EVENT_TRG = EXTI_HWCFGR4_EVENT_TRG_Values<EXTI::HWCFGR4, 0, 32, ReadMode, EXTIHWCFGR4Base> ;
    using FieldValues = EXTI_HWCFGR4_EVENT_TRG_Values<EXTI::HWCFGR4, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFGR4Pack  = Register<0x58000BE4, 32, ReadMode, EXTIHWCFGR4Base, T...> ;

  struct EXTIHWCFGR1Base {} ;

  struct HWCFGR1 : public RegisterBase<0x58000BF0, 32, ReadMode>
  {
    using NBEVENTS = EXTI_HWCFGR1_NBEVENTS_Values<EXTI::HWCFGR1, 0, 8, ReadMode, EXTIHWCFGR1Base> ;
    using NBCPUS = EXTI_HWCFGR1_NBCPUS_Values<EXTI::HWCFGR1, 8, 4, ReadMode, EXTIHWCFGR1Base> ;
    using CPUEVTEN = EXTI_HWCFGR1_CPUEVTEN_Values<EXTI::HWCFGR1, 12, 4, ReadMode, EXTIHWCFGR1Base> ;
    using FieldValues = EXTI_HWCFGR1_CPUEVTEN_Values<EXTI::HWCFGR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using HWCFGR1Pack  = Register<0x58000BF0, 32, ReadMode, EXTIHWCFGR1Base, T...> ;

  struct EXTIVERRBase {} ;

  struct VERR : public RegisterBase<0x58000BF4, 32, ReadMode>
  {
    using MINREV = EXTI_VERR_MINREV_Values<EXTI::VERR, 0, 4, ReadMode, EXTIVERRBase> ;
    using MAJREV = EXTI_VERR_MAJREV_Values<EXTI::VERR, 4, 4, ReadMode, EXTIVERRBase> ;
    using FieldValues = EXTI_VERR_MAJREV_Values<EXTI::VERR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using VERRPack  = Register<0x58000BF4, 32, ReadMode, EXTIVERRBase, T...> ;

  struct EXTIIPIDRBase {} ;

  struct IPIDR : public RegisterBase<0x58000BF8, 32, ReadMode>
  {
    using IPID = EXTI_IPIDR_IPID_Values<EXTI::IPIDR, 0, 32, ReadMode, EXTIIPIDRBase> ;
    using FieldValues = EXTI_IPIDR_IPID_Values<EXTI::IPIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IPIDRPack  = Register<0x58000BF8, 32, ReadMode, EXTIIPIDRBase, T...> ;

  struct EXTISIDRBase {} ;

  struct SIDR : public RegisterBase<0x58000BFC, 32, ReadMode>
  {
    using SID = EXTI_SIDR_SID_Values<EXTI::SIDR, 0, 32, ReadMode, EXTISIDRBase> ;
    using FieldValues = EXTI_SIDR_SID_Values<EXTI::SIDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SIDRPack  = Register<0x58000BFC, 32, ReadMode, EXTISIDRBase, T...> ;

} ;

