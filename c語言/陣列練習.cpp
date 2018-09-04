#include <stdio.h>
#include <stdlib.h>
#define SIZE 4 

int main(void)
{
	int b[] = {10, 20, 30, 40};
	int* bPtr;
	bPtr = b;
	
	printf("%d", b);
	 
	printf("\naaaaa\n");
	for(int i = 0; i < SIZE; i ++)
	{
		printf("b[%u] = %d\n", i, b[i]);
	}
	
    printf("\nbbbbb\n");
    for(int offset = 0; offset < SIZE; offset ++)
    {
    	printf("*(b + %u) = %d\n", offset, *(b + offset));
    }
    
    printf("\nccccc\n");
	for(int i = 0; i < SIZE; i ++)
	{
		printf("bPtr[%u] = %d\n", i,* bPtr[i]);
	}
	
	printf("\nddddd\n");
	for(int offset = 0; offset < SIZE; offset ++)
	{
		printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));
	}
	
    system("pause");
    return 0;
}
 
