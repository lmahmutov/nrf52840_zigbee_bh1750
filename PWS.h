
#ifndef MA_PWS_H__
#define MA_PWS_H__

#ifdef __cplusplus
extern "C" {
#endif
    #include "nrf_drv_saadc.h"
    void Adc14bitPolledInitialise(void);
    int16_t GetPWS( void );
    
#ifdef __cplusplus
}
#endif

#endif
