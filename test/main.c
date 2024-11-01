#include "my_calc.h"

#include "stdio.h"

int main(int argc, char* argv[]) {
    if (my_calculator('+', 1, 2) != 3) {
        printf("Test + Failure\n");
        return -1;
    }
    if (my_calculator('-', 3, 2) != 1) {
        printf("Test - Failure\n");
        return -1;
    }
    if (my_calculator('*', 1, 2) != 2) {
        printf("Test * Failure\n");
        return -1;
    }
    if (my_calculator('/', 4, 2) != 2) {
        printf("Test / Failure\n");
        return -1;
    }
    if (my_calculator('%', 3, 2) != 1) {
        printf("Test %% Failure\n");
        return -1;
    }
    if (my_calculator('@', 3, 2) != -1) {
        printf("Test @ Failure\n");
        return -1;
    }
    printf("Test Passed!\n");
    return 0;
}
