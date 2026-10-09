#include <stdio.h>
#include <stdint.h>

int main(void){
    //int int8_t, uint8_t, int16_t, uint16_t, int32_t, uint32_t;
    printf("INT8: size=%lu, min=%d, max=%d, values=%lld\n", sizeof(int8_t), INT8_MIN, INT8_MAX, (long long)INT8_MAX - (long long)INT8_MIN + 1);
    printf("UINT8: size=%lu, min=0, max=%u, values=%llu\n", sizeof(uint8_t), UINT8_MAX, (unsigned long long)UINT8_MAX + 1);
    printf("INT16: size=%lu, min=%d, max=%d, values=%lld\n", sizeof(int16_t), INT16_MIN, INT16_MAX, (long long)INT16_MAX - (long long)INT16_MIN + 1);
    printf("UINT16: size=%lu, min=0, max=%u, values=%llu\n", sizeof(uint16_t), UINT16_MAX, (unsigned long long)UINT16_MAX + 1);
    printf("INT32: size=%lu, min=%d, max=%d, values=%lld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, (long long)INT32_MAX - (long long)INT32_MIN + 1);
    printf("UINT32: size=%lu, min=0, max=%u, values=%llu\n", sizeof(uint32_t), UINT32_MAX, (long long)UINT32_MAX + 1);
    

    return 0;
}
//Y
// Потому что в обычном int место отводится для отрицательных и положительных и для нуля | 
// А в uint отрицательные уходять в положительные, а нолика отрицательного нет | 2**8 - 1