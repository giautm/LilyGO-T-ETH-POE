/**
 * @file      SPIExample.ino
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2023  Shenzhen Xinyuan Electronic Technology Co., Ltd
 * @date      2023-07-27
 * @note      The sketch only demonstrates how to multiplex the SPI bus
 */

#include <Arduino.h>
#include <SPI.h>
#include "utilities.h"


#if   defined(LILYGO_T_ETH_POE)
// IO34 35,39,34,36 can only be used for input and cannot be set as output
#define SPI_MOSI    4       //OUTPUT
#define SPI_MISO    35      //INPUT
#define SPI_SCK     33      //OUTPUT
#define SPI_CS      16      //OUTPUT
#elif defined(LILYGO_T_ETH_POE_PRO)
// IO34 35,39,34,36 can only be used for input and cannot be set as output
#define SPI_MOSI    12
#define SPI_MISO    13
#define SPI_SCK     14
#define SPI_CS      15
#elif defined(LILYGO_T_INTER_COM)
//No free pin
#error "No  free pin"
#elif defined(LILYGO_T_ETH_LITE_ESP32)
// IO35,39,34,36 can only be used for input and cannot be set as output
#define SPI_MOSI    13
#define SPI_MISO    34      //INPUT
#define SPI_SCK     14
#define SPI_CS      15
#elif defined(LILYGO_T_ETH_LITE_ESP32S3)
// ESP32S3 can freely map unused Pins
#define SPI_MOSI    7
#define SPI_MISO    15
#define SPI_SCK     16
#define SPI_CS      18
#endif

void setup()
{
    // Using SPI requires an explicit call
    SPI.begin(SPI_SCK, SPI_MISO, SPI_MOSI, SPI_CS);
    // do someing ..
}

void loop()
{

}