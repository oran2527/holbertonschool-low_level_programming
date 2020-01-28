#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i = 0, j = 0, num = 0, len = 0, cont = 0;
	char buffer[6];
	
	for (i = 999; i >= 1; i--)
	{
		for (j = 999; j >= 1; j--)
		{
			num = 0;
			cont = 0;
			num = i * j;
			sprintf(buffer, "%d", num);
			len = strlen(buffer);
			if (len % 2 == 0)
			{	
				for (num = 0; num < len / 2; num++)
				{
					if (buffer[num] == buffer[len - 1 - num])
					{
						cont++;
					}		
				}
				if (cont == len / 2)
				{
					printf("palindrome %s", buffer);
					break;
				}				
			}
			else
			{				
				for (num = 0; num < (len - 1) / 2; num++)
				{
					if (buffer[num] == buffer[len - 1 - num])
					{
						cont++;
					}		
				}
				if (cont == (len - 1) / 2)
				{
					printf("palindrome %s", buffer);
					break;
				}				
			}
		}
		if (cont == len / 2)
			break;
	}
	return (0);
}
