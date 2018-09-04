#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubble(int*  array, size_t size);

int main(void)
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	size_t i;
	printf("原始資料\n");
	
	for(i = 0; i < SIZE; i ++)
	{
		printf("%4d",a[i]);
	}
	bubble(a, SIZE );
	printf("\n排列過資料\n");
	for(i = 0; i < SIZE; i ++)
	{
		printf("%4d",a[i]);
	}
	system("pause");
	return 0;
}

void bubble(int*  array, size_t size)
{
	void swap(int* b, int* c);
	for(int j = 0; j < size - 2; j ++)
	{
		for(int k = 0; k < size - 2; k ++)
		{
			if(array[k] < array[k + 1])
			{
				swap(&array[k], &array[k + 1]);
			}
		}
	}
}  
void swap(int* b, int* c )
{
	int hold = *b;
	*b = *c;
	*c = hold;
}
