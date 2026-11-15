/*******************************************************************************
* Filename      : dbgmcuregisters.hpp
*
* Details       : Debug support. This header file is auto-generated for
*                 STM32G474 device.
*
*
*******************************************************************************/

#pragma once

#include "dbgmcufieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct DBGMCU
{
  struct DBGMCUIDCODEBase {} ;

  struct IDCODE : public RegisterBase<0xE0042000, 32, ReadMode>
  {
    using DEV_ID = DBGMCU_IDCODE_DEV_ID_Values<DBGMCU::IDCODE, 0, 16, ReadMode, DBGMCUIDCODEBase> ;
    using REV_ID = DBGMCU_IDCODE_REV_ID_Values<DBGMCU::IDCODE, 16, 16, ReadMode, DBGMCUIDCODEBase> ;
    using FieldValues = DBGMCU_IDCODE_REV_ID_Values<DBGMCU::IDCODE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using IDCODEPack  = Register<0xE0042000, 32, ReadMode, DBGMCUIDCODEBase, T...> ;

  struct DBGMCUCRBase {} ;

  struct CR : public RegisterBase<0xE0042004, 32, ReadWriteMode>
  {
    using DBG_SLEEP = DBGMCU_CR_DBG_SLEEP_Values<DBGMCU::CR, 0, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBG_STOP = DBGMCU_CR_DBG_STOP_Values<DBGMCU::CR, 1, 1, ReadWriteMode, DBGMCUCRBase> ;
    using DBG_STANDBY = DBGMCU_CR_DBG_STANDBY_Values<DBGMCU::CR, 2, 1, ReadWriteMode, DBGMCUCRBase> ;
    using TRACE_IOEN = DBGMCU_CR_TRACE_IOEN_Values<DBGMCU::CR, 5, 1, ReadWriteMode, DBGMCUCRBase> ;
    using TRACE_MODE = DBGMCU_CR_TRACE_MODE_Values<DBGMCU::CR, 6, 2, ReadWriteMode, DBGMCUCRBase> ;
    using FieldValues = DBGMCU_CR_TRACE_MODE_Values<DBGMCU::CR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CRPack  = Register<0xE0042004, 32, ReadWriteMode, DBGMCUCRBase, T...> ;

  struct DBGMCUAPB1L_FZBase {} ;

  struct APB1L_FZ : public RegisterBase<0xE0042008, 32, ReadWriteMode>
  {
    using DBG_TIMER2_STOP = DBGMCU_APB1L_FZ_DBG_TIMER2_STOP_Values<DBGMCU::APB1L_FZ, 0, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_TIM3_STOP = DBGMCU_APB1L_FZ_DBG_TIM3_STOP_Values<DBGMCU::APB1L_FZ, 1, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_TIM4_STOP = DBGMCU_APB1L_FZ_DBG_TIM4_STOP_Values<DBGMCU::APB1L_FZ, 2, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_TIM5_STOP = DBGMCU_APB1L_FZ_DBG_TIM5_STOP_Values<DBGMCU::APB1L_FZ, 3, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_TIMER6_STOP = DBGMCU_APB1L_FZ_DBG_TIMER6_STOP_Values<DBGMCU::APB1L_FZ, 4, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_TIM7_STOP = DBGMCU_APB1L_FZ_DBG_TIM7_STOP_Values<DBGMCU::APB1L_FZ, 5, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_RTC_STOP = DBGMCU_APB1L_FZ_DBG_RTC_STOP_Values<DBGMCU::APB1L_FZ, 10, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_WWDG_STOP = DBGMCU_APB1L_FZ_DBG_WWDG_STOP_Values<DBGMCU::APB1L_FZ, 11, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_IWDG_STOP = DBGMCU_APB1L_FZ_DBG_IWDG_STOP_Values<DBGMCU::APB1L_FZ, 12, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_I2C1_STOP = DBGMCU_APB1L_FZ_DBG_I2C1_STOP_Values<DBGMCU::APB1L_FZ, 21, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_I2C2_STOP = DBGMCU_APB1L_FZ_DBG_I2C2_STOP_Values<DBGMCU::APB1L_FZ, 22, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_I2C3_STOP = DBGMCU_APB1L_FZ_DBG_I2C3_STOP_Values<DBGMCU::APB1L_FZ, 30, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using DBG_LPTIMER_STOP = DBGMCU_APB1L_FZ_DBG_LPTIMER_STOP_Values<DBGMCU::APB1L_FZ, 31, 1, ReadWriteMode, DBGMCUAPB1L_FZBase> ;
    using FieldValues = DBGMCU_APB1L_FZ_DBG_LPTIMER_STOP_Values<DBGMCU::APB1L_FZ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1L_FZPack  = Register<0xE0042008, 32, ReadWriteMode, DBGMCUAPB1L_FZBase, T...> ;

  struct DBGMCUAPB1H_FZBase {} ;

  struct APB1H_FZ : public RegisterBase<0xE004200C, 32, ReadWriteMode>
  {
    using DBG_I2C4_STOP = DBGMCU_APB1H_FZ_DBG_I2C4_STOP_Values<DBGMCU::APB1H_FZ, 1, 1, ReadWriteMode, DBGMCUAPB1H_FZBase> ;
    using FieldValues = DBGMCU_APB1H_FZ_DBG_I2C4_STOP_Values<DBGMCU::APB1H_FZ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB1H_FZPack  = Register<0xE004200C, 32, ReadWriteMode, DBGMCUAPB1H_FZBase, T...> ;

  struct DBGMCUAPB2_FZBase {} ;

  struct APB2_FZ : public RegisterBase<0xE0042010, 32, ReadWriteMode>
  {
    using DBG_TIM1_STOP = DBGMCU_APB2_FZ_DBG_TIM1_STOP_Values<DBGMCU::APB2_FZ, 11, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_TIM8_STOP = DBGMCU_APB2_FZ_DBG_TIM8_STOP_Values<DBGMCU::APB2_FZ, 13, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_TIM15_STOP = DBGMCU_APB2_FZ_DBG_TIM15_STOP_Values<DBGMCU::APB2_FZ, 16, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_TIM16_STOP = DBGMCU_APB2_FZ_DBG_TIM16_STOP_Values<DBGMCU::APB2_FZ, 17, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_TIM17_STOP = DBGMCU_APB2_FZ_DBG_TIM17_STOP_Values<DBGMCU::APB2_FZ, 18, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_TIM20_STOP = DBGMCU_APB2_FZ_DBG_TIM20_STOP_Values<DBGMCU::APB2_FZ, 20, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_HRTIM0_STOP = DBGMCU_APB2_FZ_DBG_HRTIM0_STOP_Values<DBGMCU::APB2_FZ, 26, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_HRTIM1_STOP = DBGMCU_APB2_FZ_DBG_HRTIM1_STOP_Values<DBGMCU::APB2_FZ, 27, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_HRTIM2_STOP = DBGMCU_APB2_FZ_DBG_HRTIM2_STOP_Values<DBGMCU::APB2_FZ, 28, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using DBG_HRTIM3_STOP = DBGMCU_APB2_FZ_DBG_HRTIM3_STOP_Values<DBGMCU::APB2_FZ, 29, 1, ReadWriteMode, DBGMCUAPB2_FZBase> ;
    using FieldValues = DBGMCU_APB2_FZ_DBG_HRTIM3_STOP_Values<DBGMCU::APB2_FZ, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using APB2_FZPack  = Register<0xE0042010, 32, ReadWriteMode, DBGMCUAPB2_FZBase, T...> ;

} ;

