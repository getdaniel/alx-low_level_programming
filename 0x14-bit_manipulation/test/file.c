#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i = 0, temp;
	char pwd[] = "Foob";

	while (i <= 3)
	{
		temp = i << 3;
		pwd[i] = 0xff & 0x46c6f48 >> temp;
		i++;
	}

	puts(pwd);

	return (0);
}
