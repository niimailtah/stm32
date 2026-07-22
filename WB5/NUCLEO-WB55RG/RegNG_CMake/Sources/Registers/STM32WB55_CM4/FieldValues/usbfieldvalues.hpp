/*******************************************************************************
* Filename      : usbfieldvalues.hpp
*
* Details       : Enumerations related with USB peripheral. This header file is
*                 auto-generated for STM32WB55_CM4 device.
*
*
*******************************************************************************/

#pragma once

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP0R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP0R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP0R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP0R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP0R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_EP0R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_EP0R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_EP0R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_EP0R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_EP0R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_EP0R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_EP0R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_EP0R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_EP0R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_EP0R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_EP0R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_EP0R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP0R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP0R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP0R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP0R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP0R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP0R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP0R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP0R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP0R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP0R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP0R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP0R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP0R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP0R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP0R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP0R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP0R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP0R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP0R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP0R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP0R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP0R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP0R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP0R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP0R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP0R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP0R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP0R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP0R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP0R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP0R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP0R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP0R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP1R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP1R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP1R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP1R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP1R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_EP1R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_EP1R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_EP1R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_EP1R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_EP1R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_EP1R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_EP1R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_EP1R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_EP1R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_EP1R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_EP1R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_EP1R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP1R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP1R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP1R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP1R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP1R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP1R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP1R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP1R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP1R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP1R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP1R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP1R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP1R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP1R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP1R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP1R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP1R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP1R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP1R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP1R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP1R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP1R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP1R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP1R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP1R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP1R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP1R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP1R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP1R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP1R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP1R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP1R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP1R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP2R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP2R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP2R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP2R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP2R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_EP2R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_EP2R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_EP2R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_EP2R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_EP2R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_EP2R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_EP2R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_EP2R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_EP2R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_EP2R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_EP2R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_EP2R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP2R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP2R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP2R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP2R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP2R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP2R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP2R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP2R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP2R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP2R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP2R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP2R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP2R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP2R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP2R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP2R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP2R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP2R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP2R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP2R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP2R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP2R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP2R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP2R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP2R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP2R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP2R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP2R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP2R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP2R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP2R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP2R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP2R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP3R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP3R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP3R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP3R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP3R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_EP3R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_EP3R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_EP3R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_EP3R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_EP3R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_EP3R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_EP3R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_EP3R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_EP3R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_EP3R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_EP3R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_EP3R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP3R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP3R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP3R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP3R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP3R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP3R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP3R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP3R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP3R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP3R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP3R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP3R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP3R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP3R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP3R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP3R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP3R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP3R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP3R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP3R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP3R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP3R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP3R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP3R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP3R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP3R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP3R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP3R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP3R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP3R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP3R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP3R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP3R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP4R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP4R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP4R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP4R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP4R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_EP4R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_EP4R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_EP4R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_EP4R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_EP4R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_EP4R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_EP4R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_EP4R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_EP4R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_EP4R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_EP4R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_EP4R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP4R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP4R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP4R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP4R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP4R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP4R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP4R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP4R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP4R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP4R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP4R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP4R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP4R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP4R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP4R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP4R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP4R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP4R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP4R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP4R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP4R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP4R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP4R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP4R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP4R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP4R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP4R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP4R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP4R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP4R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP4R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP4R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP4R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP5R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP5R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP5R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP5R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP5R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_EP5R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_EP5R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_EP5R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_EP5R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_EP5R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_EP5R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_EP5R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_EP5R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_EP5R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_EP5R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_EP5R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_EP5R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP5R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP5R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP5R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP5R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP5R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP5R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP5R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP5R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP5R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP5R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP5R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP5R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP5R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP5R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP5R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP5R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP5R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP5R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP5R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP5R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP5R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP5R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP5R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP5R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP5R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP5R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP5R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP5R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP5R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP5R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP5R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP5R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP5R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP6R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP6R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP6R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP6R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP6R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_EP6R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_EP6R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_EP6R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_EP6R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_EP6R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_EP6R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_EP6R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_EP6R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_EP6R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_EP6R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_EP6R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_EP6R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP6R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP6R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP6R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP6R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP6R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP6R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP6R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP6R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP6R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP6R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP6R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP6R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP6R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP6R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP6R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP6R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP6R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP6R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP6R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP6R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP6R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP6R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP6R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP6R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP6R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP6R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP6R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP6R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP6R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP6R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP6R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP6R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP6R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP7R_EA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP7R_EA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP7R_EA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP7R_EA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP7R_EA_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_EP7R_EA_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_EP7R_EA_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_EP7R_EA_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_EP7R_EA_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_EP7R_EA_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_EP7R_EA_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_EP7R_EA_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_EP7R_EA_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_EP7R_EA_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_EP7R_EA_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_EP7R_EA_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_EP7R_EA_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP7R_STAT_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP7R_STAT_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP7R_STAT_TX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP7R_STAT_TX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP7R_STAT_TX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP7R_DTOG_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP7R_DTOG_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP7R_DTOG_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP7R_CTR_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP7R_CTR_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP7R_CTR_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP7R_EP_KIND_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP7R_EP_KIND_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP7R_EP_KIND_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP7R_EP_TYPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP7R_EP_TYPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP7R_EP_TYPE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP7R_EP_TYPE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP7R_EP_TYPE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP7R_SETUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP7R_SETUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP7R_SETUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP7R_STAT_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP7R_STAT_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP7R_STAT_RX_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_EP7R_STAT_RX_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_EP7R_STAT_RX_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP7R_DTOG_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP7R_DTOG_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP7R_DTOG_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_EP7R_CTR_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_EP7R_CTR_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_EP7R_CTR_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_FRES_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_FRES_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_FRES_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_PDWN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_PDWN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_PDWN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_LPMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_LPMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_LPMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_FSUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_FSUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_FSUSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_RESUME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_RESUME_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_RESUME_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_L1RESUME_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_L1RESUME_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_L1RESUME_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_L1REQM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_L1REQM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_L1REQM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_ESOFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_ESOFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_ESOFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_SOFM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_SOFM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_SOFM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_RESETM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_RESETM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_RESETM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_SUSPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_SUSPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_SUSPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_WKUPM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_WKUPM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_WKUPM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_ERRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_ERRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_ERRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_PMAOVRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_PMAOVRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_PMAOVRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_CNTR_CTRM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_CNTR_CTRM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_CNTR_CTRM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ISTR_EP_ID_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_ISTR_EP_ID_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ISTR_DIR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_ISTR_DIR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_ISTR_DIR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ISTR_L1REQ_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_ISTR_L1REQ_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_ISTR_L1REQ_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ISTR_ESOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_ISTR_ESOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_ISTR_ESOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ISTR_SOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_ISTR_SOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_ISTR_SOF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ISTR_RESET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_ISTR_RESET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_ISTR_RESET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ISTR_SUSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_ISTR_SUSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_ISTR_SUSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ISTR_WKUP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_ISTR_WKUP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_ISTR_WKUP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ISTR_ERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_ISTR_ERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_ISTR_ERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ISTR_PMAOVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_ISTR_PMAOVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_ISTR_PMAOVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ISTR_CTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_ISTR_CTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_ISTR_CTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FNR_FN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FNR_LSOF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FNR_LSOF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FNR_LSOF_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_FNR_LSOF_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_FNR_LSOF_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FNR_LCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FNR_LCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FNR_LCK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FNR_RXDM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FNR_RXDM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FNR_RXDM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_FNR_RXDP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_FNR_RXDP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_FNR_RXDP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_DADDR_ADD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_DADDR_EF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_DADDR_EF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_DADDR_EF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_BTABLE_BTABLE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT0_TX_COUNT0_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT1_TX_COUNT1_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT2_TX_COUNT2_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT3_TX_COUNT3_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT4_TX_COUNT4_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT5_TX_COUNT5_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT6_TX_COUNT6_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT7_TX_COUNT7_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ADDR0_RX_ADDR0_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ADDR1_RX_ADDR1_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ADDR2_RX_ADDR2_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ADDR3_RX_ADDR3_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ADDR4_RX_ADDR4_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ADDR5_RX_ADDR5_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ADDR6_RX_ADDR6_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_ADDR7_RX_ADDR7_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT0_RX_COUNT0_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT0_RX_NUM_BLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 15U> ;
  using Value16 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 16U> ;
  using Value17 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 17U> ;
  using Value18 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 18U> ;
  using Value19 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 19U> ;
  using Value20 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 20U> ;
  using Value21 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 21U> ;
  using Value22 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 22U> ;
  using Value23 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 23U> ;
  using Value24 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 24U> ;
  using Value25 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 25U> ;
  using Value26 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 26U> ;
  using Value27 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 27U> ;
  using Value28 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 28U> ;
  using Value29 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 29U> ;
  using Value30 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 30U> ;
  using Value31 = FieldValue<USB_COUNT0_RX_NUM_BLOCK_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT0_RX_BL_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT0_RX_BL_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT0_RX_BL_SIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT1_RX_COUNT1_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT1_RX_NUM_BLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 15U> ;
  using Value16 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 16U> ;
  using Value17 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 17U> ;
  using Value18 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 18U> ;
  using Value19 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 19U> ;
  using Value20 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 20U> ;
  using Value21 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 21U> ;
  using Value22 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 22U> ;
  using Value23 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 23U> ;
  using Value24 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 24U> ;
  using Value25 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 25U> ;
  using Value26 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 26U> ;
  using Value27 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 27U> ;
  using Value28 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 28U> ;
  using Value29 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 29U> ;
  using Value30 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 30U> ;
  using Value31 = FieldValue<USB_COUNT1_RX_NUM_BLOCK_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT1_RX_BL_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT1_RX_BL_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT1_RX_BL_SIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT2_RX_COUNT2_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT2_RX_NUM_BLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 15U> ;
  using Value16 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 16U> ;
  using Value17 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 17U> ;
  using Value18 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 18U> ;
  using Value19 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 19U> ;
  using Value20 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 20U> ;
  using Value21 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 21U> ;
  using Value22 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 22U> ;
  using Value23 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 23U> ;
  using Value24 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 24U> ;
  using Value25 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 25U> ;
  using Value26 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 26U> ;
  using Value27 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 27U> ;
  using Value28 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 28U> ;
  using Value29 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 29U> ;
  using Value30 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 30U> ;
  using Value31 = FieldValue<USB_COUNT2_RX_NUM_BLOCK_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT2_RX_BL_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT2_RX_BL_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT2_RX_BL_SIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT3_RX_COUNT3_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT3_RX_NUM_BLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 15U> ;
  using Value16 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 16U> ;
  using Value17 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 17U> ;
  using Value18 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 18U> ;
  using Value19 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 19U> ;
  using Value20 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 20U> ;
  using Value21 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 21U> ;
  using Value22 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 22U> ;
  using Value23 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 23U> ;
  using Value24 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 24U> ;
  using Value25 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 25U> ;
  using Value26 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 26U> ;
  using Value27 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 27U> ;
  using Value28 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 28U> ;
  using Value29 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 29U> ;
  using Value30 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 30U> ;
  using Value31 = FieldValue<USB_COUNT3_RX_NUM_BLOCK_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT3_RX_BL_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT3_RX_BL_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT3_RX_BL_SIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT4_RX_COUNT4_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT4_RX_NUM_BLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 15U> ;
  using Value16 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 16U> ;
  using Value17 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 17U> ;
  using Value18 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 18U> ;
  using Value19 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 19U> ;
  using Value20 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 20U> ;
  using Value21 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 21U> ;
  using Value22 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 22U> ;
  using Value23 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 23U> ;
  using Value24 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 24U> ;
  using Value25 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 25U> ;
  using Value26 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 26U> ;
  using Value27 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 27U> ;
  using Value28 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 28U> ;
  using Value29 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 29U> ;
  using Value30 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 30U> ;
  using Value31 = FieldValue<USB_COUNT4_RX_NUM_BLOCK_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT4_RX_BL_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT4_RX_BL_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT4_RX_BL_SIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT5_RX_COUNT5_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT5_RX_NUM_BLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 15U> ;
  using Value16 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 16U> ;
  using Value17 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 17U> ;
  using Value18 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 18U> ;
  using Value19 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 19U> ;
  using Value20 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 20U> ;
  using Value21 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 21U> ;
  using Value22 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 22U> ;
  using Value23 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 23U> ;
  using Value24 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 24U> ;
  using Value25 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 25U> ;
  using Value26 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 26U> ;
  using Value27 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 27U> ;
  using Value28 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 28U> ;
  using Value29 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 29U> ;
  using Value30 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 30U> ;
  using Value31 = FieldValue<USB_COUNT5_RX_NUM_BLOCK_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT5_RX_BL_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT5_RX_BL_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT5_RX_BL_SIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT6_RX_COUNT6_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT6_RX_NUM_BLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 15U> ;
  using Value16 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 16U> ;
  using Value17 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 17U> ;
  using Value18 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 18U> ;
  using Value19 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 19U> ;
  using Value20 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 20U> ;
  using Value21 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 21U> ;
  using Value22 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 22U> ;
  using Value23 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 23U> ;
  using Value24 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 24U> ;
  using Value25 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 25U> ;
  using Value26 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 26U> ;
  using Value27 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 27U> ;
  using Value28 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 28U> ;
  using Value29 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 29U> ;
  using Value30 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 30U> ;
  using Value31 = FieldValue<USB_COUNT6_RX_NUM_BLOCK_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT6_RX_BL_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT6_RX_BL_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT6_RX_BL_SIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT7_RX_COUNT7_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT7_RX_NUM_BLOCK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 15U> ;
  using Value16 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 16U> ;
  using Value17 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 17U> ;
  using Value18 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 18U> ;
  using Value19 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 19U> ;
  using Value20 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 20U> ;
  using Value21 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 21U> ;
  using Value22 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 22U> ;
  using Value23 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 23U> ;
  using Value24 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 24U> ;
  using Value25 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 25U> ;
  using Value26 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 26U> ;
  using Value27 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 27U> ;
  using Value28 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 28U> ;
  using Value29 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 29U> ;
  using Value30 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 30U> ;
  using Value31 = FieldValue<USB_COUNT7_RX_NUM_BLOCK_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_COUNT7_RX_BL_SIZE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_COUNT7_RX_BL_SIZE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_COUNT7_RX_BL_SIZE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_LPMCSR_LPMEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_LPMCSR_LPMEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_LPMCSR_LPMEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_LPMCSR_LPMACK_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_LPMCSR_LPMACK_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_LPMCSR_LPMACK_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_LPMCSR_REMWAKE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_LPMCSR_REMWAKE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_LPMCSR_REMWAKE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_LPMCSR_BESL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<USB_LPMCSR_BESL_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_BCDR_BCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_BCDR_BCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_BCDR_BCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_BCDR_DCDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_BCDR_DCDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_BCDR_DCDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_BCDR_PDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_BCDR_PDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_BCDR_PDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_BCDR_SDEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_BCDR_SDEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_BCDR_SDEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_BCDR_DCDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_BCDR_DCDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_BCDR_DCDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_BCDR_PDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_BCDR_PDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_BCDR_PDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_BCDR_SDET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_BCDR_SDET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_BCDR_SDET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_BCDR_PS2DET_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_BCDR_PS2DET_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_BCDR_PS2DET_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct USB_BCDR_DPPU_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<USB_BCDR_DPPU_Values, BaseType, 0U> ;
  using Value1 = FieldValue<USB_BCDR_DPPU_Values, BaseType, 1U> ;
} ;

