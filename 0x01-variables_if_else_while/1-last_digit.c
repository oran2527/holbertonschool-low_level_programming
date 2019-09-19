#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if ( n > 5 ) printf ("Last digit of %i is %c and is greater than 5\n",n,n[strlen(n)-1]);
					if ( n = 0 ) printf ("Last digit of %i is %c and is 0\n",n,n[strlen(n)-1]);
					if ( n < 6 && n != 0 ) printf ("Last digit of %i is %c and is less than 6 and not 0\n",n,n[strlen(n)-1]);
					return (0);
}
