#include <stdio.h>

int main(void) {    //int main(void) функция строго без параметров
    int unit_id, unit_version, unit_status;

    printf("Введите ID (dec), версию (hex), статус (oct): ");        // dec(10-ая), hex(16-ая), oct(8-ая)
    scanf("%d %x %o", &unit_id, &unit_version, &unit_status);        // dec-"%d",   hex-"%x",   oct-"%o"

    printf("UNIT_ID: %d\n", unit_id);
    printf("UNIT_VERSION: %d\n", unit_version);
    printf("UNIT_STATUS: %d\n", unit_status);
    printf("SUM: %d\n", unit_id + unit_version + unit_status);

    return 0;
}