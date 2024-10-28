#include "my_calc.h"

int main(int argc, char* argv[]) {
    if (my_calculator('+', 1, 2) != 3) {
        return -1;
    }
    if (my_calculator('-', 3, 2) != 1) {
        return -1;
    }
    if (my_calculator('*', 1, 2) != 2) {
        return -1;
    }
    if (my_calculator('/', 4, 2) != 2) {
        return -1;
    }
    if (my_calculator('%', 3, 2) != 1) {
        return -1;
    }
    if (my_calculator('@', 3, 2) != -1) {
        return -1;
    }
    return 0;
}
