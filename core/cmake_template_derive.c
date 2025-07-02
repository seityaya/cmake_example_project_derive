// Author                 : Seityagiya Terlekchi
// Contacts               : terlekchi.seityaya@gmail.com
// Creation Date          :
// License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
// SPDX-License-Identifier: LGPL-2.1-or-later
// Copyright © Seityagiya Terlekchi. All rights reserved.

#include "cmake_template.h"

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
