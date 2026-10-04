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

    // float хранит ~7 значащих цифр, double ~15, long double ~18.
    // Число 123456789.123457 содержит 15 цифр, поэтому:
    //   float  — округляет до 123456792 (шаг между соседними значениями = 8,
    //            поэтому +1 меньше шага и не меняет результат)
    //   double — хранит точно (15 цифр хватает)
    //   long double — хранит точно с запасом
    //
    // Поэтому FLOAT+1 == FLOAT, а DOUBLE+1 и LDOUBLE+1 отличаются от исходных.

    return 0;
}