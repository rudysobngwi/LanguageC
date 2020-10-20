#include <stdio.h>
#include <ctype.h>

int main()
{
    char car;
    char car_min;

    car_min = 'a';
    car = toupper(car_min);
    printf("%c", car);

    return 0;
}
