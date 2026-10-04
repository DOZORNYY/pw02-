#include <stdio.h>

int main(void) {
    int dec_10 = 10;
    int oct_10 = 010;
    int hex_10 = 0x10;

    printf("DEC_10: %d\n", dec_10);
    printf("OCT_10: %d\n", oct_10);
    printf("HEX_10: %d\n", hex_10);

    printf("INT_SUFFIX: %zu %zu %zu %zu\n", sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));

    printf("FLOAT_SUFFIX: %zu %zu %zu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));

    printf("FLOAT_EQ: %d", 0.1f == 0.1);

    char ch = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %zu %zu %zu\n", sizeof('A'), sizeof('\x41'), sizeof('\101'));

    return 0;

}