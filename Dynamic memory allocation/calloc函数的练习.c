#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	int* q = calloc(10, sizeof(int));
	if (q == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int w = 0;
		for (w = 0; w < 10; w++)
		{
			*(q + w) = w;
			printf("%d ", *(q + w));
		}
	}
	printf("\n");
	free(q);
	q = NULL;
	return 0;
}