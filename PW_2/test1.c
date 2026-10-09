#include <stdio.h>

int main(void){
    int des, hex, oct, sum;
    scanf("%d %x %o", &des, &hex, &oct);
    sum = des + hex + oct;
    printf("UNIT_ID: %d\n", des);
    printf("UNIT_VERSION: %d\n", hex);
    printf("UNIT_STATUS: %d\n", oct);
    printf("SUM: %d\n", sum);

    return 0;
}
//Y