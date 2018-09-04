#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

void bubble(int* const array, size_t size);

int main(void)
{
	int a[SIZE] = {2, 4, 6};
	int i;
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

void bubble(int* const array, size_t size)
{
	void swap(int* b, int* c);
	for(int j = 0; j < size - 1; j ++)
	{
		for(int k = 0; k < size - 1; k ++)
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
	int hold; 
	hold = *b;
	*b = *c;
	*c = hold;
}
