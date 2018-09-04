#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
	int *ptr, count;
	count = 10;
	ptr   = &count;
	
	printf("count value     = %d\n", count);
	printf("count address   = %p\n", &count);
	printf("pointer address = %p\n", ptr);
	printf("pointer value   = %d\n", *ptr);
	
	system("pause");
	return 0;
} 
