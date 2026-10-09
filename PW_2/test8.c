#include <stdio.h>
#include <float.h>

int main(void){
    printf("FLOAT: size=%lu, digits=%d, max=%e\n", sizeof(float), FLT_DIG, FLT_MAX);
    printf("DOUBLE: size=%lu, digits=%d, max=%e\n", sizeof(double), DBL_DIG, DBL_MAX);
    printf("LDOUBLE: size=%lu, digits=%d, max=%Le\n", sizeof(long double), LDBL_DIG, LDBL_MAX);


    return 0;
}
//Y


//Количество цифр в показателе степени в выводе %e или %Le может отличаться
//в зависимости от системы и реализации библиотеки C
//На некоторых платформах тип long double является синонимом double,
// поэтому результаты для double и long double могут совпадать

