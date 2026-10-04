#include <stdio.h>
#include <stdbool.h>

int main() {
    bool module_ready, fault_state;

    printf("Введи два числа: ");
    scanf("%d %d", (int*)&module_ready, (int*)& fault_state);

    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM %d\n", module_ready + fault_state);

    return 0;
}