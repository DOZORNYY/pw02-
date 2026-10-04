#include <stdio.h>
#include <stdint.h>

int main(void) {
    unsigned int input;
    uint8_t reg;

    printf("Введите число: ");
    scanf("%u", &input);
    reg = (uint8_t)input;

    uint8_t add = reg + reg;
    uint8_t mul2 = reg * 2;
    uint8_t sqr = reg * reg;

    printf("ADD: %u\n", (unsigned int)add);
    printf("MUL2: %u\n", (unsigned int)mul2);
    printf("SQR: %u\n", (unsigned int)sqr);

    return 0;
}