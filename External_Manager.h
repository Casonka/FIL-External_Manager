#pragma once
    /*!
    *   --------------------------------------------------------
    *                ///External Manager\\\
    *   --------------------------------------------------------
    *   @author RCR group developers
    *   @date 14/10/2022 - last update version External Manager
    *
    */
#include "BoardSelection.h"

#define EXTERNAL_REGULATOR              __configEXT_REGULATOR
#define EXTERNAL_MATRIX                 __configEXT_MATRIX
#define EXTERNAL_KINEMATICS             __configEXT_KINEMATICS
#define EXTERNAL_FILTERS                __configEXT_FILTERS
#define EXTERNAL_SSD1306                __configEXT_SSD1306
#define EXTERNAL_MPU9250                __configEXT_MPU9250
#define EXTERNAL_ModBus                 __configEXT_ModBus
#define EXTERNAL_TCS3472                __configEXT_TCS3472
//----------------------------EXTERNAl---------------------------//
#if(FIL_I2C == 1)
    #if(EXTERNAL_SSD1306 == 1)
        #include "ssd1306.h"
    #elif(EXTERNAL_SSD1306 > 1 || EXTERNAL_SSD1306 < 0)
        #error Invalid argument EXTERNAL_SSD1306
    #endif /*EXTERNAL_SSD1306*/
    #if(EXTERNAL_MPU9250 == 1)
        #include "mpu9250.h"
    #elif(EXTERNAL_MPU9250 > 1 || EXTERNAL_MPU9250 < 0)
    #error Invalid argument EXTERNAL_MPU9250
    #endif/*EXTERNAL_MPU9250*/
    #if(EXTERNAL_TCS3472 == 1)
        #include "TCS3472.h"
    #elif(EXTERNAL_TCS3472 > 1 || EXTERNAL_TCS3472 < 0)
        #error Invalid argument EXTERNAL_TCS3472
    #endif /*EXTERNAL_TCS3472*/
#endif /*FIL_I2C*/
#if(FIL_USART == 1)
    #if(EXTERNAL_ModBus == 1)
        #include "ModBus_conf.h"
    #elif(EXTERNAL_ModBus > 1 || EXTERNAL_ModBus < 0)
        #error Invalid argument EXTERNAL_ModBus
    #endif /*EXTERNAL_ModBus*/
#endif /*FIL_USART*/
    #if(EXTERNAL_MATRIX == 1)
        #include "Matrix.h"
    #elif(EXTERNAL_MATRIX > 1 || EXTERNAL_MATRIX < 0)
        #error Invalid argument EXTERNAL_MATRIX
    #endif /*EXTERNAL_MATRIX*/
    #if(EXTERNAL_REGULATOR == 1)
        #include "Regulators.h"
    #elif(EXTERNAL_REGULATOR > 1 || EXTERNAL_REGULATOR < 0)
        #error Invalid argument EXTERNAL_REGULATOR
    #endif /*EXTERNAL_REGULATOR*/
    #if(EXTERNAL_KINEMATICS == 1)
        #include "KINEMATICS.h"
    #elif(EXTERNAL_KINEMATICS > 1 || EXTERNAL_KINEMATICS < 0)
        #error Invalid argument EXTERNAL_KINEMATICS
    #endif/*EXTERNAL_KINEMATICS*/
    #if(EXTERNAL_FILTERS == 1)
        #include "Filters.h"
    #elif(EXTERNAL_FILTERS > 1 || EXTERNAL_FILTERS < 0)
        #error Invalid argument EXTERNAL_FILTERS
    #endif/*EXTERNAL_FILTERS*/

