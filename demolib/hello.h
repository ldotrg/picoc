#ifndef __HELLO_H__
#define __HELLO_H__
struct car_info_t {
    int year;
    int wheels;
    int door;
    char brand[16];
};

typedef enum _MY_ENUM{
    ENUM_0,
    ENUM_1,
    ENUM_2,
    ENUM_LAST
}MY_ENUM;

int say_myname(char *name, int age);
void my_car(struct car_info_t *info);
void show_enum(MY_ENUM in);
#endif