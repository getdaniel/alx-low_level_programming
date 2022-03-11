#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
  * main-Entry point of the program
  *
  * prints random number wether >5, <6 or =0
  *
  *  Return: Always 0
  */
int main(void)
{
	int n;
	char str[] = "Last digit of";
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;

	if (l > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, l);
	else if (l == 0)
		printf("%s %d is %d and is 0\n", str, n, l);
	else
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, l);

	return (0);
}
