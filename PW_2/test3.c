#include <stdio.h>

int main(void){
    int a = 10, b = 010, c = 0x10;
    printf("DEC_10: %d\n", a);
    printf("OCT_10: %d\n", b);
    printf("HEX_10: %d\n", c);
    printf("INT_SUFFIX: %lu %lu %lu %lu\n", sizeof(10), sizeof(10u),sizeof(10LL),sizeof(10ULL));
    printf("FLOAT_SUFFIX: %lu %lu %lu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT_EQ: %d\n", (0.1f==0.1));
    
    char ar = 'A';
    //int ar = 'A';
    printf("CHAR_FORMS: %d %d %d\n", ar, '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %lu %lu %lu\n", sizeof('A'),  sizeof(ar), sizeof("A"));

    return 0;
}
//Y