#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* p = (int*)malloc(5*sizeof(int));
	if (NULL == p)
	{
		perror("malloc");
	}
	int i;//ʹ��
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}
	//������5�����εĿռ�
	int*ptr=(int*)realloc(p, 10 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;
	}
	free(p);
	p = NULL;
	return 0;
}