#include <stdio.h>

int main(void) {    //int main(void) функция строго без параметров
    int dec_10 = 10;       // 10-ая
    int oct_10 = 010;      // 8-ая
    int hex_10 = 0x10;     // 16-ая

    printf("DEC_10: %d\n", dec_10);
    printf("OCT_10: %d\n", oct_10);
    printf("HEX_10: %d\n", hex_10);

    printf("INT_SUFFIX: %zu %zu %zu %zu\n",
           sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));

    printf("FLOAT_SUFFIX: %zu %zu %zu\n",
           sizeof(0.1f), sizeof(0.1), sizeof(0.1L));

    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);

    // u - unsigned, LL - long long, f - float,L - long(для целых),L - long double(для вещественных), sizeof - %zu

    char ch = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %zu %zu %zu\n",
           sizeof('A'), sizeof(ch), sizeof("A"));

    // char - переменная
    // 0.1f != 0.1 — разная точность (float 7 цифр, double 15)
    // символьный литерал имеет тип int, а значит 'A' = 4 байта, а char = 1 байт

    return 0;
}