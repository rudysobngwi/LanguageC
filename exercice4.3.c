#include <stdio.h>



int main()
{

    char caractere;

    //caractere = getchar();
    scanf("%c", &caractere);

    if (caractere == 'a' || caractere == 'e' || caractere == 'i'
	|| caractere == 'o' || caractere == 'u' || caractere == 'y') {
	printf("%c  est une voyelle", caractere);
    }

    else if (caractere == '1' || caractere == '2' || caractere == '3'
	     || caractere == '4' || caractere == '5' || caractere == '6'
	     || caractere == '7' || caractere == '8' || caractere == '9'
	     || caractere == '0') {
	printf("Vous avez rentré: %c  comme chiffrre. ", caractere);
    } else {
	printf("C'est une consonne : %c", caractere);
    }

    return 0;
}
