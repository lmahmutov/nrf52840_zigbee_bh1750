
#ifndef MA_ADC_H__
#define MA_ADC_H__

#ifdef __cplusplus
extern "C" {
#endif
    #include "nrf_drv_saadc.h"
    void Adc12bitPolledInitialise(void);
    int16_t GetBatteryVoltage( void );
    
#ifdef __cplusplus
}
#endif

#endif
