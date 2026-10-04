#include <stdio.h>
#include <float.h>  //<float.h> — заголовочный файл, в котором лежат характеристики вещественных типов

int main(void) {
    printf("FLOAT: size=%zu, digits=%d, max=%e\n", sizeof(float), FLT_DIG, FLT_MAX);
    printf("DOUBLE: size=%zu, digits=%d, max=%e\n", sizeof(double), DBL_DIG, DBL_MAX);
    printf("LDOUBLE: size=%zu, digits=%d, max=%le\n", sizeof(long double), LDBL_MAX, LDBL_MAX);

    // Количество цифр в показателе степени может отличаться в зависимости
    // от системы. На некоторых платформах long double совпадает по размеру
    // с double (8 байт), тогда LDBL_DIG = 15, а не 18.
    
    return 0;
}