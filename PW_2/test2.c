#include <stdio.h>
#include <stdbool.h>

int main(void){
    int a, b;
    
    //printf("Введите два числа:");
    scanf("%d %d", &a, &b);

    bool x = a, y = b;

    printf("MODULE_READY: %d\n", x);
    printf("FAULT_STATE: %d\n", y);
    printf("BOOL_SIZE: %lu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", (x+y));


    return 0;
}
//Y