/**
 * @file:      ili9341.hpp
 * @author:    Alexey Polurotov
 * @version:   0.0.1
 * @date:      2026-08-31
 * @brief:
 */

#pragma once
#include "fsmc.h"

#define RGB565(r, g, b)         (((r & 0xF8) << 8) | ((g & 0xFC) << 3) | ((b & 0xF8) >> 3))

//--------------------------------------------------------------------
// Структура конфигурации GPIO
struct TILI9341_GPIO {
    GPIO_TypeDef* port{nullptr};
    uint16_t pin{0};

    TILI9341_GPIO(GPIO_TypeDef* p, uint16_t pinNum) : port(p), pin(pinNum) {}
};

//--------------------------------------------------------------------
class TILI9341
{
private:
	enum class Register : uint8_t {
		ILI9341_NOP = 0x00,                // No Operation - NOP
		ILI9341_SWRESET = 0x01,            // Software Reset - SWRESET
		ILI9341_RDDIDIF = 0x04,            // Read Display Identification Information - RDDIDIF (читаем dummy byte + 3 байта информации)
//#define  ILI_RDDST           0x09       // Read Display Status (odczytuje dummy byte + 4 bajty informacji)
//#define  ILI_RDDPM           0x0A       // Read Display Power Mode (odczytuje dummy byte + 1 bajt informacji)
//#define  ILI_RDDMADCTL       0x0B       // Read Display MADCTL (odczytuje dummy byte + 1 bajt informacji)
//#define  ILI_RDDCOLMOD       0x0C       // Read Display Pixel Format (odczytuje dummy byte + 1 bajt informacji)
//#define  ILI_RDDIM           0x0D       // Read Display Image Format (odczytuje dummy byte + 1 bajt informacji)
//#define  ILI_RDDSM           0x0E       // Read Display Signal Mode (odczytuje dummy byte + 1 bajt informacji)
//#define  ILI_RDDSDR          0x0F       // Read Display SELF-Diagnostic Result (odczytuje dummy byte + 1 bajt informacji)
//#define  ILI_SLPIN           0x10       // Enter Sleep Mode
        ILI9341_SLPOUT = 0x11,             // Sleep Out - SLPOUT
//#define  ILI_PTLON           0x12       // Partial Mode ON
//#define  ILI_NORON           0x13       // Normal Display Mode ON
//#define  ILI_DINVOFF         0x20       // Display Inversion OFF
//#define  ILI_DINVON          0x21       // Display Inversion ON
        ILI9341_GAMSET = 0x26,             // Gamma Set - GAMSET (1 параметр 8bit)
		ILI9341_DISPOFF = 0x28,            // Display OFF - DISPOFF
		ILI9341_DISPON = 0x29,             // Display ON - DISPON
		ILI9341_CASET = 0x2A,              // Column Address Set - CASET (4 параметра 8bit: SC[15..8], SC[7..0], EC[15..8], EC[7..0])
		ILI9341_PASET = 0x2B,              // Page (row) Address Set - PASET (4 параметра 8bit: SC[15..8], SC[7..0], EC[15..8], EC[7..0])
		ILI9341_RAMWR = 0x2C,              // Memory Write - RAMWR (n параметров 18bit)
//#define  ILI_RGBSET          0x2D       // Color Set (128 parametr體 8b, 32 dla R, 64 dla G i 32 dla B)
//#define  ILI_RAMRD           0x2E       // Memory Read (n parametr體 18b)
//#define  ILI_PLTAR           0x30       // Partial Area (4 parametry 8b: SR[15..8], SR[7..0], ER[15..8], ER[7..0])
//#define  ILI_VSCRDEF         0x33       // Vertical Scrolling Definition (6 parametr體 8b)
//#define  ILI_TEOFF           0x34       // Tearing Effect Line OFF
//#define  ILI_TEON            0x35       // Tearing Effect Line ON (1 parametr 8b)
		ILI9341_MADCTL = 0x36,             // Memory Access Control - MADCTL (1 параметр 8bit)
//#define  ILI_VSCRSADD        0x37       // Vertical Scrolling Start Address (2 parametry 8b)
		ILI9341_IDMOFF = 0x38,             // Idle Mode OFF - IDMOFF
		ILI9341_IDMON = 0x39,              // Idle Mode ON - IDMON
		ILI9341_PIXSET = 0x3A,             // COLMOD: Pixel Format Set (1 параметр 8bit)
		ILI9341_RAMWRCont = 0x3C,          // Write Memory Continue (n параметров 18bit)
//#define  ILI_RAMRDCont       0x3E       // Read Memory Continue (odczytuje dummy byte i n danych 18b)
//#define  ILI_STS             0x44       // Set Tear Scanline (2 parametry 8b)
//#define  ILI_GS              0x45       // Get Scanline (odczytuje dummy i 2 bajty informacji)
//#define  ILI_WRDISBV         0x51       // Write Display Brightness (1 parametr 8b)
//#define  ILI_RDDISBV         0x52       // Read Display Brightness (odczytuje dummy byte i 1 bajt informacji)
//#define  ILI_WRCTRLD         0x53       // Write CTRL Display (1 parametr 8b)
//#define  ILI_RDCTRLD         0x54       // Read CTRL Display (odczytuje dummy byte i 1 bajt informacji)
//#define  ILI_WRCABC          0x55       // Write Content Adaptive Brightness Control (1 parametr 8b)
//#define  ILI_RDCABC          0x56       // Read Content Adaptive Brightness Control (odczytuje dummy byte i 1 bajt informacji)
//#define  ILI_WRCABCMB        0x5E       // Write CABC Minimum Brightness (1 parametr 8b)
//#define  ILI_RDCABCMB        0x5F       // Read CABC Minimum Brightness (odczytuje dummy byte i 1 bajt informacji)
//#define  ILI_RDID1           0xDA       // Read ID1 (odczytuje dummy byte i 1 bajt informacji)
//#define  ILI_RDID2           0xDB       // Read ID2 (odczytuje dummy byte i 1 bajt informacji)
//#define  ILI_RDID3           0xDC       // Read ID3 (odczytuje dummy byte i 1 bajt informacji)
// LEVEL 2 register control
//#define  ILI_IFMODE          0xB0       // RGB  Interface Signal Control (1 parametr 8b)
		ILI9341_FRMCTR1 = 0xB1,            // Frame Rate Control (In Normal Mode/Full Colors) (2 параметра 8bit)
//#define  ILI_FRMCTR2         0xB2       // Frame Rate Control (In Idle Mode/8 Colors) (2 parametry 8b)
//#define  ILI_FRMCTR3         0xB3       // Frame Rate Control (In Partial Mode/Full Colors) (2 parametry 8b)
//#define  ILI_INVTR           0xB4       // Display Inversion Control (1 parametr 8b)
//#define  ILI_PRCTR           0xB5       // Blanking Porch Control (4 parametry 8b)
		ILI9341_DISCTRL = 0xB6,            // Display Function Control (4 параметра 8bit)
//#define  ILI_ETMOD           0xB7       // Entry Mode Set (1 parametr 8b)
//#define  ILI_BLCTRL1         0xB8       // Backlight Control 1 (1 parametr 8b)
//#define  ILI_BLCTRL2         0xB9       // Backlight Control 2 (1 parametr 8b)
//#define  ILI_BLCTRL3         0xBA       // Backlight Control 3 (1 parametr 8b)
//#define  ILI_BLCTRL4         0xBB       // Backlight Control 4 (1 parametr 8b)
//#define  ILI_BLCTRL5         0xBC       // Backlight Control 5 (1 parametr 8b)
//#define  ILI_BLCTRL7         0xBE       // Backlight Control 7 (1 parametr 8b)
//#define  ILI_BLCTRL8         0xBF       // Backlight Control 8 (1 parametr 8b)
		ILI9341_PWCTRL1 = 0xC0,            // Power Control 1 (1 параметр 8bit)
		ILI9341_PWCTRL2 = 0xC1,            // Power Control 2 (1 параметр 8bit)
		ILI9341_VMCTRL1 = 0xC5,            // VCOM Control 1 (2 параметра 8bit)
		ILI9341_VMCTRL2 = 0xC7,            // VCOM Control 2 (1 параметр 8bit)
//#define  ILI_NVMWR           0xD0       // NV Memory Write (2 parametry 8b)
//#define  ILI_NVMPKEY         0xD1       // NV Memory Protection Key (3 parametry 8b)
//#define  ILI_RDNVM           0xD2       // NV Memory Status Read (odczyt dummy byte i 2 bajty informacji)
//#define  ILI_RDID4           0xD3       // Read ID4 (odczytuje dummy byte i 3 bajty informacji)
		ILI9341_PGAMCTRL = 0xE0,       // Positive Gamma Correction (15 параметров 8bit)
		ILI9341_NGAMCTRL = 0xE1,       // Negative Gamma Correction (15 параметров 8bit)
//#define  ILI_DGAMCTRL1       0xE2       // Digital Gamma Control 1 (16 параметров 8b)
//#define  ILI_DGAMCTRL2       0xE3       // Digital Gamma Control 2 (16 параметров 8b)
//#define  ILI_IFCTL           0xF6       // Interface Control (3 parametry 8b)
// EXTEND register control
		ILI9341_PCA = 0xCB,       // Power Control A (5 параметров 8bit)
		ILI9341_PCB = 0xCF,       // Power Control B (3 параметра 8bit)
		ILI9341_DTCA_ic = 0xE8,       // Driver Timming Control A (3 параметра 8b) - for internal clock
//#define  ILI_DTCA_ec         0xE9       // Driver Timming Control A (3 параметра 8b) - for external clock
		ILI9341_DTCB = 0xEA,       // Driver Timming Control B (2 параметра 8bit)
		ILI9341_POSC = 0xED,       // Power On Sequence Control (4 параметра 8bit)
		ILI9341_E3G = 0xF2,       // Enable 3G (1 параметр 8bit)
		ILI9341_PRC = 0xF7,       // Pump Ratio Control (1 параметр 8bit)
	};
	SRAM_HandleTypeDef* m_hsram{nullptr};
	TILI9341_GPIO m_bl{nullptr, 0};
//	const std::vector<uint8_t> initTable{
//			Register::ILI9341_PCB,      3, 0x00, 0xC1, 0X30,
//			Register::ILI9341_POSC,     4, 0x64, 0x03, 0X12, 0X81,
//			Register::ILI9341_DTCA_ic,  3, 0x85, 0x10, 0x7A,
//			Register::ILI9341_PCA,      5, 0x39, 0x2C, 0x00, 0x34, 0x02,
//			Register::ILI9341_PRC,      1, 0x20,
//			Register::ILI9341_DTCB,     2, 0x00, 0x00,
//			Register::ILI9341_PWCTRL1,  1, 0x1B,
//			Register::ILI9341_PWCTRL2,  1, 0x01,
//			Register::ILI9341_VMCTRL1,  2, 0x30, 0x30,
//			Register::ILI9341_VMCTRL2,  1, 0XB7,
//			Register::ILI9341_MADCTL,   1, 0x48,
//			Register::ILI9341_PIXSET,   1, 0x55,
//			Register::ILI9341_FRMCTR1,  2, 0x00, 0x1A,
//			Register::ILI9341_DISCTRL,  2, 0x0A, 0xA2,
//			Register::ILI9341_E3G,      1, 0x00,
//			Register::ILI9341_GAMSET,   1, 0x01,
//			Register::ILI9341_PGAMCTRL, 15, 0x0F, 0x2A, 0x28, 0x08, 0x0E, 0x08, 0x54, 0XA9, 0x43, 0x0A, 0x0F, 0x00, 0x00, 0x00, 0x00,
//			Register::ILI9341_NGAMCTRL, 15, 0x00, 0x15, 0x17, 0x07, 0x11, 0x06, 0x2B, 0x56, 0x3C, 0x05, 0x10, 0x0F, 0x3F, 0x3F, 0x0F,
//			Register::ILI9341_PASET,    4, 0x00, 0x00, 0x01, 0x3f,
//			Register::ILI9341_CASET,    4, 0x00, 0x00, 0x00, 0xef,
//			Register::ILI9341_SLPOUT,   120,
//			Register::ILI9341_DISPON,   0,
//			Register::ILI9341_MADCTL,   1, 0xC9,
//			Register::ILI9341_NOP
//	};


public:
	TILI9341() = default;
	TILI9341(SRAM_HandleTypeDef* hsramHandle, const TILI9341_GPIO& bl);
	virtual ~TILI9341() = default;

	void Init();
	void Demo();

	void LCD_OpenWin(u16 x0, u16 y0, u16 x1, u16 y1);
	void LCD_ClrScr(u16 BackColor);
	void LCD_DisAPoint(u16 x0, u16 y0, u16 Color);
	void LCD_DisALoop(u16 x0, u16 y0, u8 r, u16 Color);
	void LCD_DisARectangular(u16 x0, u16 y0, u16 x1, u16 y1, u16 Color);
	void LCD_DisNoFillRectangular(u16 color, u16 x0, u16 y0, u16 x1, u16 y1);
	void LCD_DrawLine(uint16_t color, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
};
