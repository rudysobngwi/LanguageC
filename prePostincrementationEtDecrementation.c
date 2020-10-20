#include <stdio.h>



int main()
{
    int x = 100;
    int y = 1000;
    printf("test 1\n");
    printf("avant: x=%d y =%d \n", x, y);
    x = y++;
    printf("apres x=%d y =%d\n", x, y);

    x = 100;
    y = 1000;
    printf("test 2\n");
    printf("avant: x=%d y =%d \n", x, y);
    x = ++y;
    printf("apres x=%d y =%d\n", x, y);

    x = 100;
    y = 1000;
    printf("test 3\n");
    printf("avant: x=%d y =%d \n", x, y);
    x = y--;
    printf("apres x=%d y =%d\n", x, y);

    x = 100;
    y = 1000;
    printf("test 4\n");
    printf("avant: x=%d y =%d \n", x, y);
    x = --y;
    printf("apres x=%d y =%d\n", x, y);

    return 0;
}
