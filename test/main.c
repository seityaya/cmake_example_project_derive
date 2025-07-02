// Author                 : Seityagiya Terlekchi
// Contacts               : terlekchi.seityaya@gmail.com
// Creation Date          :
// License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
// SPDX-License-Identifier: LGPL-2.1-or-later
// Copyright © Seityagiya Terlekchi. All rights reserved.

#include "cmake_template_derive.h"

#include "stdio.h"

int cmake_template_derive_test(
    int argc, char* argv[])
{
    (void) (argc);
    (void) (argv);

    /*Example Beg*/
    printf("Test %s Beg in %s:%d\n", __FUNCTION__, __FILE__, __LINE__);

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

    printf("Test %s End in %s:%d\n", __FUNCTION__, __FILE__, __LINE__);
    printf("Test Passed!\n");
    /*Example End*/

    return 0;
}

int main(
    int argc, char* argv[])
{
    return cmake_template_derive_test(argc, argv);
}
