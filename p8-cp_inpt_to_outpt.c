/* Page 8 - Copy Input to Output */

#include <stdio.h>

int main()
{
	int c;
	while((c = getchar()) != EOF)
		putchar(c);

	return 13;
}
