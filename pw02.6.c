#include <stdio.h>
#include <stdint.h>   //заголовочный файл с типами фиксированной ширины и их пределами

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

    // uint8_t занимает 8 бит, то есть хранит 256 значений (0..255).
    // Если результат вычисления выходит за 255, старшие биты отбрасываются,
    // и остаётся только младшие 8 бит.
    // Математически это означает взятие остатка по модулю 2^8 = 256.
    //
    // Пример: 250 * 2 = 500. 500 mod 256 = 244. Это и есть "сворачивание".
    //        250 * 250 = 62500. 62500 mod 256 = 36.
    
    return 0;
}