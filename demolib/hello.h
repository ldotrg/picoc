#ifndef __HELLO_H__
#define __HELLO_H__
struct car_info_t {
    int year;
    int wheels;
    int door;
    char brand[16];
};
int say_myname(char *name, int age);
void my_car(struct car_info_t *info);

#endif