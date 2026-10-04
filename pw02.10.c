#include <stdio.h>
#include <stdint.h>   //заголовочный файл с типами фиксированной ширины и их пределами

int main(void) {
    int packet_id;  
    unsigned int status_oct;
    float voltage;
    uint8_t status_code;
    uint16_t checksum;

    printf("Введите ID (hex), статус (oct), напряжение: ");
    scanf("%x %o %f", &packet_id, &status_oct, &voltage);

    status_code = (uint8_t)status_oct;
    checksum = (uint16_t)(packet_id + status_code);

    printf("PACKET_ID: %d\n", packet_id);
    printf("STATUS_CODE: %d\n", status_code);
    printf("STATUS_CHAR: %c\n", status_code);
    printf("VOLTAGE: %.2f\n", voltage);
    printf("CHECKSUM: %u\n", checksum);

    return 0;
}