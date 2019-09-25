#include "bh1750.h"
#include "I2C.h"

uint8_t Mode=0x00;

//Functions-----------------------------------------------------------------

/**
* @brief  Инициализация датчика света
  * @param  mode1: см. описание в bh.h
  * @param  mode2: см. описание в bh.h
  * @retval None
  */
	
void init_bh(uint8_t mode1,uint8_t mode2)
{
        writebh1750(bh1750_address,Reset);
	writebh1750(bh1750_address,POWER_ON);
	//set_mode(mode1,mode2);
        writebh1750(bh1750_address,0x20);
}
//--------------------------------------------------------------------------
/**
* @brief  Установка режима
  * @param  mode1: см. описание в bh.h
  * @param  mode2: см. описание в bh.h
  * @retval None
  */

void set_mode(uint8_t mode1,uint8_t mode2)
{	
	if(mode1==0x00)
	{
		if(mode2==0x00)
		{
			Mode=0x20;
		}
		if(mode2==0x01)
		{
			Mode=0x21;
		}
		if(mode2==0x02)
		{
			Mode=0x23;
		}		
	}
	if(mode1==0x01)
	{
		if(mode2==0x00)
		{
			Mode=0x10;
		}
		if(mode2==0x01)
		{
			Mode=0x11;
		}
		if(mode2==0x02)
		{
			Mode=0x13;
		}		
	}	
        writebh1750(bh1750_address,Mode);
}

//----------------------------------------------------------------------------
/**
* @brief  Считывание данных
  * @param  none
  * @retval данные
  */
uint16_t read_data()
{
	uint16_t te=readbh1750(bh1750_address);
	return te;
}
