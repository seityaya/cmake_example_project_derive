// Author                 : Seityagiya Terlekchi
// Contacts               : terlekchi.seityaya@gmail.com
// Creation Date          :
// License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
// SPDX-License-Identifier: LGPL-2.1-or-later
// Copyright © Seityagiya Terlekchi. All rights reserved.

#include "cmake_template_derive.h"

#include "stdio.h"

int cmake_template_derive_demo(
    int argc, char* argv[])
{
    (void) (argc);
    (void) (argv);

    printf("Demo %s Beg in %s:%d\n", __FUNCTION__, __FILE__, __LINE__);

    int a = my_calculator('*', 1, my_calculator('-', 4, 3));
    printf("Demo result: %d\n", a);

    printf("Demo %s End in %s:%d\n", __FUNCTION__, __FILE__, __LINE__);

    return 0;
}

int main(
    int argc, char* argv[])
{
    return cmake_template_derive_demo(argc, argv);
}
