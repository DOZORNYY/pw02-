#include <stdio.h>

int main(void) {
    long double ld;
    double d;
    float f;

    printf("Введите число: ");
    scanf("%Lf", &ld);
    d = (double)ld;
    f = (float)ld;

    printf("FLOAT: %.6f\n", (double)f);
    printf("DOUBLE: %.6f\n", d);
    printf("LDOUBLE: %.6Lf\n", ld);

    printf("FLOAT+1: %.6f\n", (double)(f + 1.0f));
    printf("DOUBLE+1: %.6f\n", d + 1.0);
    printf("LDOUBLE+1: %.6Lf\n", ld + 1.0L);

    return 0;
}