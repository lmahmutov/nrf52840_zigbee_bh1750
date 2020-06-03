
#ifndef MA_BH1750_H_
#define MA_BH1750_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "stdint.h"
//DEFINES-------------------------------------------------------------------------
#define bh1750_address          0x23                    //адрес датчика
//mode1---------------------------------------------------------------------------

#define one_time                0x00			// Режим после расчета в POWER DOWN
#define contunous               0x01                    // Обычный режим

//mode2---------------------------------------------------------------------------
#define HMode1                  0x00                    // Режим расчета с точностью 1лк время расчета 120мс
#define HMode2                  0x01                    // Режим расчета с точностью 0.5лк время расчета 120мс
#define LMode                   0x02                    // Режим расчета с точностью 4лк время расчета 16мс

//Commands------------------------------------------------------------------------

#define POWER_DOWN              0x00
#define POWER_ON		0x01
#define Reset 			0x07

//REFERENCES-----------------------------------------------------------------------

void init_bh(uint8_t mode1,uint8_t mode2);
uint16_t read_data(void);
void set_mode(uint8_t mode1,uint8_t mode2);

#ifdef __cplusplus
}
#endif

#endif /* MA_BH1750_H_ */