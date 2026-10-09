#include <stdio.h>
#include <stdint.h>

int main(void){
    int pack;
    int kod;
    float v;
    scanf("%x %o %f", &pack, &kod, &v);
    uint8_t status = (uint8_t)kod;
    uint16_t checksum = pack + status;
    printf("PACKET_ID: %d\n", pack);
    printf("STATUS_CODE: %d\n", status);
    printf("STATUS_CHAR: %c\n", status);
    printf("VOLTAGE: %.2f\n", v);
    printf("CHECKSUM: %d\n", checksum);

    return 0;
}
//Y