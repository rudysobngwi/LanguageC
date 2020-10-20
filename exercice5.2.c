#include <stdio.h>

int main()
{
    int i = 1;
    do {
	printf(" i=%d \n", i);
	i = i + 1;
	// break ;
	if (i == 2) {
	    break;
	}
    }
    while (i > 0 /*&& i ==1 */ );
    return 0;
}
