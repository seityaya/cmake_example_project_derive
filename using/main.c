#include "my_calc.h"

#include "stdio.h"

int main(int argc, char* argv[]){
    printf("%s\n", "Hello, World!");

    int a = my_calculator('*', 1, my_calculator('-', 4, 3));
    printf("%d\n", a);

    return 0;
}
