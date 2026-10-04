#include <stdio.h>
#include <stdint.h>    //заголовочный файл с типами фиксированной ширины и их пределами

int main(void) {
    printf("INT8: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int8_t), INT8_MIN, INT8_MAX, (long long)INT8_MAX - INT8_MIN + 1);
    printf("UINT8: size=%zu, min=%d, max=%d, values=%llu\n", sizeof(uint8_t), 0, UINT8_MAX, (long long)UINT8_MAX - 0 + 1);

    printf("INT16: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int16_t), INT16_MIN, INT16_MAX, (long long)INT16_MAX - INT16_MIN + 1);
    printf("UINT16: size=%zu, min=%d, max=%d, values=%llu\n", sizeof(uint16_t), 0, UINT16_MAX, (long long)UINT16_MAX - 0 + 1);

    printf("INT32: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, (long long)INT32_MAX - INT32_MIN + 1);
    printf("UINT32: size=%zu, min=%d, max=%d, values=%llu\n", sizeof(uint32_t), 0, UINT32_MAX, (long long)UINT32_MAX - 0 + 1);

    //для UINT_MIN минимальное число 0, а для INT_MIN может быть и отрицательное значение
    
    //%lld long long (количество значений знаковых)
    //%llu unsigned long long (количество значений беззнаковых)
    
    // int8_t и uint8_t оба занимают 8 бит = 256 возможных комбинаций.
    // Поэтому количество значений одинаковое (256).
    // Но распределение разное:
    //   int8_t  — один бит уходит на знак, диапазон от -128 до 127
    //   uint8_t — все биты на число, диапазон от 0 до 255
    // Общее количество вариантов не меняется: просто "сдвигается окно".

    return 0;
}