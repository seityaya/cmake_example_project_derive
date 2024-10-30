#include "my_math.h"

int my_calculator(char op, int a, int b) {
    switch (op) {
    case '+':
        return my_sum(a, b);
    case '-':
        return my_dif(a, b);
    case '*':
        return my_mul(a, b);
    case '/':
        return my_div(a, b);
    case '%':
        return my_mod(a, b);
    default:
        return -1;
    }
}
