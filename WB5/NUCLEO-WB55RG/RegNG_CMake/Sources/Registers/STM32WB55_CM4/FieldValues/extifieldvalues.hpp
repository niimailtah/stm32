/*******************************************************************************
* Filename      : extifieldvalues.hpp
*
* Details       : Enumerations related with EXTI peripheral. This header file is
*                 auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_RTSR1_RT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_RTSR1_RT_31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_RTSR1_RT_31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_RTSR1_RT_31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_FTSR1_FT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_FTSR1_FT_31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_FTSR1_FT_31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_FTSR1_FT_31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_SWIER1_SWI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_SWIER1_SWI_31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_SWIER1_SWI_31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_SWIER1_SWI_31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_PR1_PIF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_PR1_PIF_31_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_PR1_PIF_31_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_PR1_PIF_31_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_RTSR2_RT33_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_RTSR2_RT33_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_RTSR2_RT33_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_RTSR2_RT40_41_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_RTSR2_RT40_41_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_RTSR2_RT40_41_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_RTSR2_RT40_41_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_RTSR2_RT40_41_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_FTSR2_FT33_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_FTSR2_FT33_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_FTSR2_FT33_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_FTSR2_FT40_41_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_FTSR2_FT40_41_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_FTSR2_FT40_41_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_FTSR2_FT40_41_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_FTSR2_FT40_41_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_SWIER2_SWI33_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_SWIER2_SWI33_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_SWIER2_SWI33_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_SWIER2_SWI40_41_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_SWIER2_SWI40_41_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_SWIER2_SWI40_41_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_SWIER2_SWI40_41_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_SWIER2_SWI40_41_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_PR2_PIF33_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_PR2_PIF33_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_PR2_PIF33_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_PR2_PIF40_41_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_PR2_PIF40_41_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_PR2_PIF40_41_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_PR2_PIF40_41_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_PR2_PIF40_41_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_C1IMR1_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_C2IMR1_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_C1EMR1_EM0_15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_C1EMR1_EM17_21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 3U> ;
  using Value4 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 4U> ;
  using Value5 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 5U> ;
  using Value6 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 6U> ;
  using Value7 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 7U> ;
  using Value8 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 8U> ;
  using Value9 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 9U> ;
  using Value10 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 10U> ;
  using Value11 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 11U> ;
  using Value12 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 12U> ;
  using Value13 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 13U> ;
  using Value14 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 14U> ;
  using Value15 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 15U> ;
  using Value16 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 16U> ;
  using Value17 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 17U> ;
  using Value18 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 18U> ;
  using Value19 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 19U> ;
  using Value20 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 20U> ;
  using Value21 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 21U> ;
  using Value22 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 22U> ;
  using Value23 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 23U> ;
  using Value24 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 24U> ;
  using Value25 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 25U> ;
  using Value26 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 26U> ;
  using Value27 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 27U> ;
  using Value28 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 28U> ;
  using Value29 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 29U> ;
  using Value30 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 30U> ;
  using Value31 = FieldValue<EXTI_C1EMR1_EM17_21_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_C2EMR1_EM0_15_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_C2EMR1_EM17_21_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 3U> ;
  using Value4 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 4U> ;
  using Value5 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 5U> ;
  using Value6 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 6U> ;
  using Value7 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 7U> ;
  using Value8 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 8U> ;
  using Value9 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 9U> ;
  using Value10 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 10U> ;
  using Value11 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 11U> ;
  using Value12 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 12U> ;
  using Value13 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 13U> ;
  using Value14 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 14U> ;
  using Value15 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 15U> ;
  using Value16 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 16U> ;
  using Value17 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 17U> ;
  using Value18 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 18U> ;
  using Value19 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 19U> ;
  using Value20 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 20U> ;
  using Value21 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 21U> ;
  using Value22 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 22U> ;
  using Value23 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 23U> ;
  using Value24 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 24U> ;
  using Value25 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 25U> ;
  using Value26 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 26U> ;
  using Value27 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 27U> ;
  using Value28 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 28U> ;
  using Value29 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 29U> ;
  using Value30 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 30U> ;
  using Value31 = FieldValue<EXTI_C2EMR1_EM17_21_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_C1IMR2_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_C2IMR2_IM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_C1EMR2_EM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_C1EMR2_EM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_C1EMR2_EM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_C1EMR2_EM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_C1EMR2_EM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_C2EMR2_EM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_C2EMR2_EM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_C2EMR2_EM_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_C2EMR2_EM_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_C2EMR2_EM_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_HWCFGR5_CPUEVENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_HWCFGR6_CPUEVENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_HWCFGR7_CPUEVENT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_HWCFGR2_EVENT_TRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_HWCFGR3_EVENT_TRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_HWCFGR4_EVENT_TRG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_HWCFGR1_NBEVENTS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_HWCFGR1_NBCPUS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<EXTI_HWCFGR1_NBCPUS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_HWCFGR1_CPUEVTEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 3U> ;
  using Value4 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 4U> ;
  using Value5 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 5U> ;
  using Value6 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 6U> ;
  using Value7 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 7U> ;
  using Value8 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 8U> ;
  using Value9 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 9U> ;
  using Value10 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 10U> ;
  using Value11 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 11U> ;
  using Value12 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 12U> ;
  using Value13 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 13U> ;
  using Value14 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 14U> ;
  using Value15 = FieldValue<EXTI_HWCFGR1_CPUEVTEN_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_VERR_MINREV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<EXTI_VERR_MINREV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_VERR_MAJREV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 1U> ;
  using Value2 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 2U> ;
  using Value3 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 3U> ;
  using Value4 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 4U> ;
  using Value5 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 5U> ;
  using Value6 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 6U> ;
  using Value7 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 7U> ;
  using Value8 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 8U> ;
  using Value9 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 9U> ;
  using Value10 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 10U> ;
  using Value11 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 11U> ;
  using Value12 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 12U> ;
  using Value13 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 13U> ;
  using Value14 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 14U> ;
  using Value15 = FieldValue<EXTI_VERR_MAJREV_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_IPIDR_IPID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct EXTI_SIDR_SID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

