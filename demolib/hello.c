#include <stdio.h>
#include "hello.h"
// pushd picoc/demolib
// build: gcc -Wall -fPIC -shared -o libhello.so hello.c
// popd
// demo command LD_LIBRARY_PATH=./demolib ./picoc -s load_file_test.c 

int say_myname(char *name, int age) {
    printf("My name is %s\n", name);
    return age;
}

void my_car(struct car_info_t *info) {
    printf("year:%d, wheels: %d, door: %d, brand: %s\n", info->year, info->wheels, info->door, info->brand);
}