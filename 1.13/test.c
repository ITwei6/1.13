#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* p = (int*)malloc(5*sizeof(int));
	if (NULL == p)
	{
		perror("malloc");
	}
	int i;//使用
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}
	//再增加5个整形的空间
	int*ptr=(int*)realloc(p, 10 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;
	}
	free(p);
	p = NULL;
	return 0;
}