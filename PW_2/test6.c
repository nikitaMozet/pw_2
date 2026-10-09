#include <stdio.h>
#include <stdint.h>

int main(void){
    int a;
    scanf("%d", &a);
    uint8_t n = (uint8_t)a;

    
    printf("ADD: %d\n", (unsigned int)((uint8_t)(n+10)));
    printf("MUL2: %d\n", (unsigned int)((uint8_t)(n*2)));
    printf("SQR: %d\n", (unsigned int)((uint8_t)(n*n)));

    //  



    return 0;
}
//Y