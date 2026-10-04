#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);

    // Проверка: (unsigned)INT_MAX + 1 == 0? Нет.
    // RANGE_OK = 1, если (unsigned)INT_MAX + 1 > INT_MAX (в unsigned)
    int range_ok = ((unsigned)INT_MAX + 1u) > (unsigned)INT_MAX;
    printf("RANGE_OK: %d\n", range_ok);

    return 0;
}