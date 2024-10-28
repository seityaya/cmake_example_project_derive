#include "my_math.h"

int my_calculator(char op, int a, int b) {
    switch (op) {
    case '+':
        return my_sum(a, b);
        break;
    default:
        break;
    }
    return 0;
}
