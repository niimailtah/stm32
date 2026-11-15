/*******************************************************************************
* Filename      : extiregisters.hpp
*
* Details       : External interrupt/event controller. This header file is
*                 auto-generated for STM32G474 device.
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
  struct EXTIIMR1Base {} ;

  struct IMR1 : public RegisterBase<0x40010400, 32, ReadWriteMode>
  {
    using IM0 = EXTI_IMR1_IM0_Values<EXTI::IMR1, 0, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM1 = EXTI_IMR1_IM1_Values<EXTI::IMR1, 1, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM2 = EXTI_IMR1_IM2_Values<EXTI::IMR1, 2, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM3 = EXTI_IMR1_IM3_Values<EXTI::IMR1, 3, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM4 = EXTI_IMR1_IM4_Values<EXTI::IMR1, 4, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM5 = EXTI_IMR1_IM5_Values<EXTI::IMR1, 5, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM6 = EXTI_IMR1_IM6_Values<EXTI::IMR1, 6, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM7 = EXTI_IMR1_IM7_Values<EXTI::IMR1, 7, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM8 = EXTI_IMR1_IM8_Values<EXTI::IMR1, 8, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM9 = EXTI_IMR1_IM9_Values<EXTI::IMR1, 9, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM10 = EXTI_IMR1_IM10_Values<EXTI::IMR1, 10, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM11 = EXTI_IMR1_IM11_Values<EXTI::IMR1, 11, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM12 = EXTI_IMR1_IM12_Values<EXTI::IMR1, 12, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM13 = EXTI_IMR1_IM13_Values<EXTI::IMR1, 13, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM14 = EXTI_IMR1_IM14_Values<EXTI::IMR1, 14, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM15 = EXTI_IMR1_IM15_Values<EXTI::IMR1, 15, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM16 = EXTI_IMR1_IM16_Values<EXTI::IMR1, 16, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM17 = EXTI_IMR1_IM17_Values<EXTI::IMR1, 17, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM18 = EXTI_IMR1_IM18_Values<EXTI::IMR1, 18, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM19 = EXTI_IMR1_IM19_Values<EXTI::IMR1, 19, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM20 = EXTI_IMR1_IM20_Values<EXTI::IMR1, 20, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM21 = EXTI_IMR1_IM21_Values<EXTI::IMR1, 21, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM22 = EXTI_IMR1_IM22_Values<EXTI::IMR1, 22, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM23 = EXTI_IMR1_IM23_Values<EXTI::IMR1, 23, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM24 = EXTI_IMR1_IM24_Values<EXTI::IMR1, 24, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM25 = EXTI_IMR1_IM25_Values<EXTI::IMR1, 25, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM26 = EXTI_IMR1_IM26_Values<EXTI::IMR1, 26, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM27 = EXTI_IMR1_IM27_Values<EXTI::IMR1, 27, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM28 = EXTI_IMR1_IM28_Values<EXTI::IMR1, 28, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM29 = EXTI_IMR1_IM29_Values<EXTI::IMR1, 29, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM30 = EXTI_IMR1_IM30_Values<EXTI::IMR1, 30, 1, ReadWriteMode, EXTIIMR1Base> ;
    using IM31 = EXTI_IMR1_IM31_Values<EXTI::IMR1, 31, 1, ReadWriteMode, EXTIIMR1Base> ;
    using FieldValues = EXTI_IMR1_IM31_Values<EXTI::IMR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMR1Pack  = Register<0x40010400, 32, ReadWriteMode, EXTIIMR1Base, T...> ;

  struct EXTIEMR1Base {} ;

  struct EMR1 : public RegisterBase<0x40010404, 32, ReadWriteMode>
  {
    using EM0 = EXTI_EMR1_EM0_Values<EXTI::EMR1, 0, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM1 = EXTI_EMR1_EM1_Values<EXTI::EMR1, 1, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM2 = EXTI_EMR1_EM2_Values<EXTI::EMR1, 2, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM3 = EXTI_EMR1_EM3_Values<EXTI::EMR1, 3, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM4 = EXTI_EMR1_EM4_Values<EXTI::EMR1, 4, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM5 = EXTI_EMR1_EM5_Values<EXTI::EMR1, 5, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM6 = EXTI_EMR1_EM6_Values<EXTI::EMR1, 6, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM7 = EXTI_EMR1_EM7_Values<EXTI::EMR1, 7, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM8 = EXTI_EMR1_EM8_Values<EXTI::EMR1, 8, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM9 = EXTI_EMR1_EM9_Values<EXTI::EMR1, 9, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM10 = EXTI_EMR1_EM10_Values<EXTI::EMR1, 10, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM11 = EXTI_EMR1_EM11_Values<EXTI::EMR1, 11, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM12 = EXTI_EMR1_EM12_Values<EXTI::EMR1, 12, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM13 = EXTI_EMR1_EM13_Values<EXTI::EMR1, 13, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM14 = EXTI_EMR1_EM14_Values<EXTI::EMR1, 14, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM15 = EXTI_EMR1_EM15_Values<EXTI::EMR1, 15, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM16 = EXTI_EMR1_EM16_Values<EXTI::EMR1, 16, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM17 = EXTI_EMR1_EM17_Values<EXTI::EMR1, 17, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM18 = EXTI_EMR1_EM18_Values<EXTI::EMR1, 18, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM19 = EXTI_EMR1_EM19_Values<EXTI::EMR1, 19, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM20 = EXTI_EMR1_EM20_Values<EXTI::EMR1, 20, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM21 = EXTI_EMR1_EM21_Values<EXTI::EMR1, 21, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM22 = EXTI_EMR1_EM22_Values<EXTI::EMR1, 22, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM23 = EXTI_EMR1_EM23_Values<EXTI::EMR1, 23, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM24 = EXTI_EMR1_EM24_Values<EXTI::EMR1, 24, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM25 = EXTI_EMR1_EM25_Values<EXTI::EMR1, 25, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM26 = EXTI_EMR1_EM26_Values<EXTI::EMR1, 26, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM27 = EXTI_EMR1_EM27_Values<EXTI::EMR1, 27, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM28 = EXTI_EMR1_EM28_Values<EXTI::EMR1, 28, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM29 = EXTI_EMR1_EM29_Values<EXTI::EMR1, 29, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM30 = EXTI_EMR1_EM30_Values<EXTI::EMR1, 30, 1, ReadWriteMode, EXTIEMR1Base> ;
    using EM31 = EXTI_EMR1_EM31_Values<EXTI::EMR1, 31, 1, ReadWriteMode, EXTIEMR1Base> ;
    using FieldValues = EXTI_EMR1_EM31_Values<EXTI::EMR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EMR1Pack  = Register<0x40010404, 32, ReadWriteMode, EXTIEMR1Base, T...> ;

  struct EXTIRTSR1Base {} ;

  struct RTSR1 : public RegisterBase<0x40010408, 32, ReadWriteMode>
  {
    using RT0 = EXTI_RTSR1_RT0_Values<EXTI::RTSR1, 0, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT1 = EXTI_RTSR1_RT1_Values<EXTI::RTSR1, 1, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT2 = EXTI_RTSR1_RT2_Values<EXTI::RTSR1, 2, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT3 = EXTI_RTSR1_RT3_Values<EXTI::RTSR1, 3, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT4 = EXTI_RTSR1_RT4_Values<EXTI::RTSR1, 4, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT5 = EXTI_RTSR1_RT5_Values<EXTI::RTSR1, 5, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT6 = EXTI_RTSR1_RT6_Values<EXTI::RTSR1, 6, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT7 = EXTI_RTSR1_RT7_Values<EXTI::RTSR1, 7, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT8 = EXTI_RTSR1_RT8_Values<EXTI::RTSR1, 8, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT9 = EXTI_RTSR1_RT9_Values<EXTI::RTSR1, 9, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT10 = EXTI_RTSR1_RT10_Values<EXTI::RTSR1, 10, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT11 = EXTI_RTSR1_RT11_Values<EXTI::RTSR1, 11, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT12 = EXTI_RTSR1_RT12_Values<EXTI::RTSR1, 12, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT13 = EXTI_RTSR1_RT13_Values<EXTI::RTSR1, 13, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT14 = EXTI_RTSR1_RT14_Values<EXTI::RTSR1, 14, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT15 = EXTI_RTSR1_RT15_Values<EXTI::RTSR1, 15, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT16 = EXTI_RTSR1_RT16_Values<EXTI::RTSR1, 16, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT18 = EXTI_RTSR1_RT18_Values<EXTI::RTSR1, 18, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT19 = EXTI_RTSR1_RT19_Values<EXTI::RTSR1, 19, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT20 = EXTI_RTSR1_RT20_Values<EXTI::RTSR1, 20, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT21 = EXTI_RTSR1_RT21_Values<EXTI::RTSR1, 21, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT22 = EXTI_RTSR1_RT22_Values<EXTI::RTSR1, 22, 1, ReadWriteMode, EXTIRTSR1Base> ;
    using RT = EXTI_RTSR1_RT_Values<EXTI::RTSR1, 29, 3, ReadWriteMode, EXTIRTSR1Base> ;
    using FieldValues = EXTI_RTSR1_RT_Values<EXTI::RTSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTSR1Pack  = Register<0x40010408, 32, ReadWriteMode, EXTIRTSR1Base, T...> ;

  struct EXTIFTSR1Base {} ;

  struct FTSR1 : public RegisterBase<0x4001040C, 32, ReadWriteMode>
  {
    using FT0 = EXTI_FTSR1_FT0_Values<EXTI::FTSR1, 0, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT1 = EXTI_FTSR1_FT1_Values<EXTI::FTSR1, 1, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT2 = EXTI_FTSR1_FT2_Values<EXTI::FTSR1, 2, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT3 = EXTI_FTSR1_FT3_Values<EXTI::FTSR1, 3, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT4 = EXTI_FTSR1_FT4_Values<EXTI::FTSR1, 4, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT5 = EXTI_FTSR1_FT5_Values<EXTI::FTSR1, 5, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT6 = EXTI_FTSR1_FT6_Values<EXTI::FTSR1, 6, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT7 = EXTI_FTSR1_FT7_Values<EXTI::FTSR1, 7, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT8 = EXTI_FTSR1_FT8_Values<EXTI::FTSR1, 8, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT9 = EXTI_FTSR1_FT9_Values<EXTI::FTSR1, 9, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT10 = EXTI_FTSR1_FT10_Values<EXTI::FTSR1, 10, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT11 = EXTI_FTSR1_FT11_Values<EXTI::FTSR1, 11, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT12 = EXTI_FTSR1_FT12_Values<EXTI::FTSR1, 12, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT13 = EXTI_FTSR1_FT13_Values<EXTI::FTSR1, 13, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT14 = EXTI_FTSR1_FT14_Values<EXTI::FTSR1, 14, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT15 = EXTI_FTSR1_FT15_Values<EXTI::FTSR1, 15, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT16 = EXTI_FTSR1_FT16_Values<EXTI::FTSR1, 16, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT18 = EXTI_FTSR1_FT18_Values<EXTI::FTSR1, 18, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT19 = EXTI_FTSR1_FT19_Values<EXTI::FTSR1, 19, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT20 = EXTI_FTSR1_FT20_Values<EXTI::FTSR1, 20, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT21 = EXTI_FTSR1_FT21_Values<EXTI::FTSR1, 21, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FT22 = EXTI_FTSR1_FT22_Values<EXTI::FTSR1, 22, 1, ReadWriteMode, EXTIFTSR1Base> ;
    using FieldValues = EXTI_FTSR1_FT22_Values<EXTI::FTSR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FTSR1Pack  = Register<0x4001040C, 32, ReadWriteMode, EXTIFTSR1Base, T...> ;

  struct EXTISWIER1Base {} ;

  struct SWIER1 : public RegisterBase<0x40010410, 32, ReadWriteMode>
  {
    using SWI0 = EXTI_SWIER1_SWI0_Values<EXTI::SWIER1, 0, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI1 = EXTI_SWIER1_SWI1_Values<EXTI::SWIER1, 1, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI2 = EXTI_SWIER1_SWI2_Values<EXTI::SWIER1, 2, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI3 = EXTI_SWIER1_SWI3_Values<EXTI::SWIER1, 3, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI4 = EXTI_SWIER1_SWI4_Values<EXTI::SWIER1, 4, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI5 = EXTI_SWIER1_SWI5_Values<EXTI::SWIER1, 5, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI6 = EXTI_SWIER1_SWI6_Values<EXTI::SWIER1, 6, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI7 = EXTI_SWIER1_SWI7_Values<EXTI::SWIER1, 7, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI8 = EXTI_SWIER1_SWI8_Values<EXTI::SWIER1, 8, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI9 = EXTI_SWIER1_SWI9_Values<EXTI::SWIER1, 9, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI10 = EXTI_SWIER1_SWI10_Values<EXTI::SWIER1, 10, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI11 = EXTI_SWIER1_SWI11_Values<EXTI::SWIER1, 11, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI12 = EXTI_SWIER1_SWI12_Values<EXTI::SWIER1, 12, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI13 = EXTI_SWIER1_SWI13_Values<EXTI::SWIER1, 13, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI14 = EXTI_SWIER1_SWI14_Values<EXTI::SWIER1, 14, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI15 = EXTI_SWIER1_SWI15_Values<EXTI::SWIER1, 15, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI16 = EXTI_SWIER1_SWI16_Values<EXTI::SWIER1, 16, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI18 = EXTI_SWIER1_SWI18_Values<EXTI::SWIER1, 18, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI19 = EXTI_SWIER1_SWI19_Values<EXTI::SWIER1, 19, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI20 = EXTI_SWIER1_SWI20_Values<EXTI::SWIER1, 20, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI21 = EXTI_SWIER1_SWI21_Values<EXTI::SWIER1, 21, 1, ReadWriteMode, EXTISWIER1Base> ;
    using SWI22 = EXTI_SWIER1_SWI22_Values<EXTI::SWIER1, 22, 1, ReadWriteMode, EXTISWIER1Base> ;
    using FieldValues = EXTI_SWIER1_SWI22_Values<EXTI::SWIER1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWIER1Pack  = Register<0x40010410, 32, ReadWriteMode, EXTISWIER1Base, T...> ;

  struct EXTIPR1Base {} ;

  struct PR1 : public RegisterBase<0x40010414, 32, ReadWriteMode>
  {
    using PIF0 = EXTI_PR1_PIF0_Values<EXTI::PR1, 0, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF1 = EXTI_PR1_PIF1_Values<EXTI::PR1, 1, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF2 = EXTI_PR1_PIF2_Values<EXTI::PR1, 2, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF3 = EXTI_PR1_PIF3_Values<EXTI::PR1, 3, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF4 = EXTI_PR1_PIF4_Values<EXTI::PR1, 4, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF5 = EXTI_PR1_PIF5_Values<EXTI::PR1, 5, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF6 = EXTI_PR1_PIF6_Values<EXTI::PR1, 6, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF7 = EXTI_PR1_PIF7_Values<EXTI::PR1, 7, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF8 = EXTI_PR1_PIF8_Values<EXTI::PR1, 8, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF9 = EXTI_PR1_PIF9_Values<EXTI::PR1, 9, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF10 = EXTI_PR1_PIF10_Values<EXTI::PR1, 10, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF11 = EXTI_PR1_PIF11_Values<EXTI::PR1, 11, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF12 = EXTI_PR1_PIF12_Values<EXTI::PR1, 12, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF13 = EXTI_PR1_PIF13_Values<EXTI::PR1, 13, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF14 = EXTI_PR1_PIF14_Values<EXTI::PR1, 14, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF15 = EXTI_PR1_PIF15_Values<EXTI::PR1, 15, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF16 = EXTI_PR1_PIF16_Values<EXTI::PR1, 16, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF18 = EXTI_PR1_PIF18_Values<EXTI::PR1, 18, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF19 = EXTI_PR1_PIF19_Values<EXTI::PR1, 19, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF20 = EXTI_PR1_PIF20_Values<EXTI::PR1, 20, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF21 = EXTI_PR1_PIF21_Values<EXTI::PR1, 21, 1, ReadWriteMode, EXTIPR1Base> ;
    using PIF22 = EXTI_PR1_PIF22_Values<EXTI::PR1, 22, 1, ReadWriteMode, EXTIPR1Base> ;
    using FieldValues = EXTI_PR1_PIF22_Values<EXTI::PR1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PR1Pack  = Register<0x40010414, 32, ReadWriteMode, EXTIPR1Base, T...> ;

  struct EXTIIMR2Base {} ;

  struct IMR2 : public RegisterBase<0x40010420, 32, ReadWriteMode>
  {
    using IM32 = EXTI_IMR2_IM32_Values<EXTI::IMR2, 0, 1, ReadWriteMode, EXTIIMR2Base> ;
    using IM33 = EXTI_IMR2_IM33_Values<EXTI::IMR2, 1, 1, ReadWriteMode, EXTIIMR2Base> ;
    using IM34 = EXTI_IMR2_IM34_Values<EXTI::IMR2, 2, 1, ReadWriteMode, EXTIIMR2Base> ;
    using IM35 = EXTI_IMR2_IM35_Values<EXTI::IMR2, 3, 1, ReadWriteMode, EXTIIMR2Base> ;
    using IM36 = EXTI_IMR2_IM36_Values<EXTI::IMR2, 4, 1, ReadWriteMode, EXTIIMR2Base> ;
    using IM37 = EXTI_IMR2_IM37_Values<EXTI::IMR2, 5, 1, ReadWriteMode, EXTIIMR2Base> ;
    using IM38 = EXTI_IMR2_IM38_Values<EXTI::IMR2, 6, 1, ReadWriteMode, EXTIIMR2Base> ;
    using IM39 = EXTI_IMR2_IM39_Values<EXTI::IMR2, 7, 1, ReadWriteMode, EXTIIMR2Base> ;
    using IM40 = EXTI_IMR2_IM40_Values<EXTI::IMR2, 8, 1, ReadWriteMode, EXTIIMR2Base> ;
    using IM41 = EXTI_IMR2_IM41_Values<EXTI::IMR2, 9, 1, ReadWriteMode, EXTIIMR2Base> ;
    using IM42 = EXTI_IMR2_IM42_Values<EXTI::IMR2, 10, 1, ReadWriteMode, EXTIIMR2Base> ;
    using IM43 = EXTI_IMR2_IM43_Values<EXTI::IMR2, 11, 1, ReadWriteMode, EXTIIMR2Base> ;
    using FieldValues = EXTI_IMR2_IM43_Values<EXTI::IMR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IMR2Pack  = Register<0x40010420, 32, ReadWriteMode, EXTIIMR2Base, T...> ;

  struct EXTIEMR2Base {} ;

  struct EMR2 : public RegisterBase<0x40010424, 32, ReadWriteMode>
  {
    using EM32 = EXTI_EMR2_EM32_Values<EXTI::EMR2, 0, 1, ReadWriteMode, EXTIEMR2Base> ;
    using EM33 = EXTI_EMR2_EM33_Values<EXTI::EMR2, 1, 1, ReadWriteMode, EXTIEMR2Base> ;
    using EM34 = EXTI_EMR2_EM34_Values<EXTI::EMR2, 2, 1, ReadWriteMode, EXTIEMR2Base> ;
    using EM35 = EXTI_EMR2_EM35_Values<EXTI::EMR2, 3, 1, ReadWriteMode, EXTIEMR2Base> ;
    using EM36 = EXTI_EMR2_EM36_Values<EXTI::EMR2, 4, 1, ReadWriteMode, EXTIEMR2Base> ;
    using EM37 = EXTI_EMR2_EM37_Values<EXTI::EMR2, 5, 1, ReadWriteMode, EXTIEMR2Base> ;
    using EM38 = EXTI_EMR2_EM38_Values<EXTI::EMR2, 6, 1, ReadWriteMode, EXTIEMR2Base> ;
    using EM39 = EXTI_EMR2_EM39_Values<EXTI::EMR2, 7, 1, ReadWriteMode, EXTIEMR2Base> ;
    using EM40 = EXTI_EMR2_EM40_Values<EXTI::EMR2, 8, 1, ReadWriteMode, EXTIEMR2Base> ;
    using FieldValues = EXTI_EMR2_EM40_Values<EXTI::EMR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using EMR2Pack  = Register<0x40010424, 32, ReadWriteMode, EXTIEMR2Base, T...> ;

  struct EXTIRTSR2Base {} ;

  struct RTSR2 : public RegisterBase<0x40010428, 32, ReadWriteMode>
  {
    using RT32 = EXTI_RTSR2_RT32_Values<EXTI::RTSR2, 0, 1, ReadWriteMode, EXTIRTSR2Base> ;
    using RT33 = EXTI_RTSR2_RT33_Values<EXTI::RTSR2, 1, 1, ReadWriteMode, EXTIRTSR2Base> ;
    using RT38 = EXTI_RTSR2_RT38_Values<EXTI::RTSR2, 6, 1, ReadWriteMode, EXTIRTSR2Base> ;
    using RT39 = EXTI_RTSR2_RT39_Values<EXTI::RTSR2, 7, 1, ReadWriteMode, EXTIRTSR2Base> ;
    using RT40 = EXTI_RTSR2_RT40_Values<EXTI::RTSR2, 8, 1, ReadWriteMode, EXTIRTSR2Base> ;
    using RT41 = EXTI_RTSR2_RT41_Values<EXTI::RTSR2, 9, 1, ReadWriteMode, EXTIRTSR2Base> ;
    using FieldValues = EXTI_RTSR2_RT41_Values<EXTI::RTSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using RTSR2Pack  = Register<0x40010428, 32, ReadWriteMode, EXTIRTSR2Base, T...> ;

  struct EXTIFTSR2Base {} ;

  struct FTSR2 : public RegisterBase<0x4001042C, 32, ReadWriteMode>
  {
    using FT35 = EXTI_FTSR2_FT35_Values<EXTI::FTSR2, 3, 1, ReadWriteMode, EXTIFTSR2Base> ;
    using FT36 = EXTI_FTSR2_FT36_Values<EXTI::FTSR2, 4, 1, ReadWriteMode, EXTIFTSR2Base> ;
    using FT37 = EXTI_FTSR2_FT37_Values<EXTI::FTSR2, 5, 1, ReadWriteMode, EXTIFTSR2Base> ;
    using FT38 = EXTI_FTSR2_FT38_Values<EXTI::FTSR2, 6, 1, ReadWriteMode, EXTIFTSR2Base> ;
    using FieldValues = EXTI_FTSR2_FT38_Values<EXTI::FTSR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using FTSR2Pack  = Register<0x4001042C, 32, ReadWriteMode, EXTIFTSR2Base, T...> ;

  struct EXTISWIER2Base {} ;

  struct SWIER2 : public RegisterBase<0x40010430, 32, ReadWriteMode>
  {
    using SWI35 = EXTI_SWIER2_SWI35_Values<EXTI::SWIER2, 3, 1, ReadWriteMode, EXTISWIER2Base> ;
    using SWI36 = EXTI_SWIER2_SWI36_Values<EXTI::SWIER2, 4, 1, ReadWriteMode, EXTISWIER2Base> ;
    using SWI37 = EXTI_SWIER2_SWI37_Values<EXTI::SWIER2, 5, 1, ReadWriteMode, EXTISWIER2Base> ;
    using SWI38 = EXTI_SWIER2_SWI38_Values<EXTI::SWIER2, 6, 1, ReadWriteMode, EXTISWIER2Base> ;
    using FieldValues = EXTI_SWIER2_SWI38_Values<EXTI::SWIER2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using SWIER2Pack  = Register<0x40010430, 32, ReadWriteMode, EXTISWIER2Base, T...> ;

  struct EXTIPR2Base {} ;

  struct PR2 : public RegisterBase<0x40010434, 32, ReadWriteMode>
  {
    using PIF35 = EXTI_PR2_PIF35_Values<EXTI::PR2, 3, 1, ReadWriteMode, EXTIPR2Base> ;
    using PIF36 = EXTI_PR2_PIF36_Values<EXTI::PR2, 4, 1, ReadWriteMode, EXTIPR2Base> ;
    using PIF37 = EXTI_PR2_PIF37_Values<EXTI::PR2, 5, 1, ReadWriteMode, EXTIPR2Base> ;
    using PIF38 = EXTI_PR2_PIF38_Values<EXTI::PR2, 6, 1, ReadWriteMode, EXTIPR2Base> ;
    using FieldValues = EXTI_PR2_PIF38_Values<EXTI::PR2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using PR2Pack  = Register<0x40010434, 32, ReadWriteMode, EXTIPR2Base, T...> ;

} ;

