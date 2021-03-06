#include <stdint.h>

void mpu_init();
void mpu_writereg( uint8_t address, uint8_t value );
uint8_t mpu_readreg( uint8_t address );
void mpu_readdata( uint8_t address, uint32_t data[], uint8_t size );
