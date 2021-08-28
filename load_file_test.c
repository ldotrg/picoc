

#include <stdio.h>

struct car_info_t tesla;
tesla.year = 2021;
tesla.wheels = 4;
tesla.door = 4;
tesla.brand = "tesla\0";

my_car(&tesla);

int age1 = say_myname("Dungru", 32);
printf("Age %d\n", age1);

