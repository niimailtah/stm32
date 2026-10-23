/**
  ******************************************************************************
  * @file    palette.hpp
  * @brief
  *  Created on: 4 сент. 2026 г.
  *      Author: Alexey Polurotov
  ******************************************************************************
  */

#pragma once

// Цвета RGB565
namespace ST7789_ColorsRGB565 {
    constexpr uint16_t BLACK   {0x0000};
    constexpr uint16_t WHITE   {0xFFFF};
    constexpr uint16_t RED     {0xF800};
    constexpr uint16_t GREEN   {0x07E0};
    constexpr uint16_t BLUE    {0x001F};
    constexpr uint16_t YELLOW  {0xFFE0};
    constexpr uint16_t CYAN    {0x07FF};
    constexpr uint16_t MAGENTA {0xF81F};

    constexpr uint16_t ALICEBLUE    {0xF7DF};
    constexpr uint16_t ANTIQUEWHITE {0xFF5A};
    constexpr uint16_t AQUA         {0x07FF};
    constexpr uint16_t AQUAMARINE   {0x7FFA};
    constexpr uint16_t AZURE        {0xF7FF};
    constexpr uint16_t BEIGE        {0xF7BB};
    constexpr uint16_t BISQUE       {0xFF38};
    constexpr uint16_t BLUEVIOLET     {0x895C};
    constexpr uint16_t BROWN          {0xA145};
    constexpr uint16_t BURLYWOOD      {0xDDD0};
    constexpr uint16_t CADETBLUE      {0x5CF4};
    constexpr uint16_t CHARTREUSE     {0x7FE0};
    constexpr uint16_t CHOCOLATE      {0xD343};
    constexpr uint16_t CORAL          {0xFBEA};
    constexpr uint16_t CORNFLOWERBLUE {0x64BD};
    constexpr uint16_t CORNSILK       {0xFFDB};
    constexpr uint16_t CRIMSON        {0xD8A7};
    constexpr uint16_t DARKBLUE       {0x0011};
    constexpr uint16_t DARKCYAN       {0x0451};
    constexpr uint16_t DARKGOLDENROD  {0xBC21};
    constexpr uint16_t DARKGRAY       {0xAD55};
    constexpr uint16_t DARKGREEN      {0x0320};
    constexpr uint16_t DARKKHAKI      {0xBDAD};
    constexpr uint16_t DARKMAGENTA    {0x8811};
    constexpr uint16_t DARKOLIVEGREEN {0x5345};
    constexpr uint16_t DARKORANGE     {0xFC60};
    constexpr uint16_t DARKORCHID     {0x9999};
    constexpr uint16_t DARKRED        {0x8800};
    constexpr uint16_t DARKSALMON     {0xECAF};
    constexpr uint16_t DARKSEAGREEN   {0x8DF1};
    constexpr uint16_t DARKSLATEBLUE  {0x49F1};
    constexpr uint16_t DARKSLATEGRAY  {0x2A69};
    constexpr uint16_t DARKTURQUOISE  {0x067A};
    constexpr uint16_t DARKVIOLET     {0x901A};
    constexpr uint16_t DEEPPINK       {0xF8B2};
    constexpr uint16_t DEEPSKYBLUE    {0x05FF};
    constexpr uint16_t DIMGRAY        {0x6B4D};
    constexpr uint16_t DODGERBLUE     {0x1C9F};
    constexpr uint16_t FIREBRICK      {0xB104};
    constexpr uint16_t FORESTGREEN    {0x2444};
    constexpr uint16_t FUCHSIA        {0xF81F};
    constexpr uint16_t GAINSBORO      {0xDEFB};
    constexpr uint16_t GOLD           {0xFEA0};
    constexpr uint16_t GOLDENROD      {0xDD24};
    constexpr uint16_t GRAY           {0x8410};

    constexpr uint16_t table[8] = {
            BLACK,
            WHITE,
            RED,
            CORNFLOWERBLUE,  // YELLOW,
            FORESTGREEN, // GREEN,
            BURLYWOOD,
            CADETBLUE,
            DARKRED
    };

    // Утилиты
    uint16_t rgb565(uint8_t r, uint8_t g, uint8_t b);
}
