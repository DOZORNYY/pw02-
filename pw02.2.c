#include <stdio.h>
#include <stdbool.h>  //заголовочный файл, который добавляет в Си логический тип bool- хранит true and false

int main() {
    int a, b;
    bool module_ready, fault_state;

    printf("Введи два числа: ");
    scanf("%d %d", &a, &b);
    
    module_ready = a;
    fault_state = b;

    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM %d\n", module_ready + fault_state);

    return 0;
}