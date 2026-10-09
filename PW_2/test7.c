#include <stdio.h>

int main(void){\
    float f;
    double d;
    long double ld;
    scanf("%Lf", &ld);
    f = (float)ld;
    d = (double)ld;
    

    

    printf("FLOAT: %.6f\n", f);
    printf("DOUBLE: %.6f\n", d);
    printf("LDOUBLE: %.6Lf\n", ld);
    printf("FLOAT+1: %.6f\n", (f + 1));
    printf("DOUBLE+1: %.6f\n", (d + 1));
    printf("LDOUBLE+1: %.6Lf\n", (ld + 1));
    

    return 0;
}
//Y