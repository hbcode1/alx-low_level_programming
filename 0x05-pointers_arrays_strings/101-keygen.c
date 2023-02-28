#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - generates random valid passwords for the program 101-crackme.
 *  Return: void
 */

int main(void)
{
	int password[58];
	int i, checksum = 0, extra;

	srand(time(NULL));
	for (i = 0; i < 58; i++)
	{
		password[i] = (rand() % ('~' - '0')) + '0';
		checksum += password[i] + 48;
		/* printf("%d\n",checksum);*/
		putchar(password[i]);
		if ((checksum + 126) > 2772)
		{
			extra = 2772 - checksum;
			/* printf("\n %d\n",checksum+extra);*/
			putchar(extra);
			break;
		}
	}
	return (0);
}
