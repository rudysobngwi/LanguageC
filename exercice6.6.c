#include <stdio.h>
#include <ctype.h>

int main()
{
    char car = '\0';

    printf(" Tape sur une voyelle pour arrêter le programme \n");
    while ((car != 'A') && (car != 'E') && (car != 'I') && (car != 'O')
	   && (car != 'U') && (car != 'Y')) {

	car = getchar();
	car = toupper(car);
    }
    return 0;
}
