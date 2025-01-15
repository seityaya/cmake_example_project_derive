// Author                 : Seityagiya Terlekchi
// Contacts               : terlekchiseityaya@gmail.com
// Creation Date          : 2024.10
// License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
// SPDX-License-Identifier: LGPL-2.1-or-later
// Copyright © 2024-2025 Seityagiya Terlekchi. All rights reserved.

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
