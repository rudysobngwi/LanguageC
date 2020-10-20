#include <stdio.h>

int main()
{
    char car = ' ';
    int sortie = 0;
    do {
	printf("Appuyez sur S pour sortir !\n");
	car = getchar();

	sortie = ((car == 's') || (car == 'S'));
    }
    while (sortie == 0);
    return 0;
}
