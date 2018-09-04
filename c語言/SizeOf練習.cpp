#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int getSize(float* ptr);
int main(void)
{
	float array[SIZE];
	printf("aaaaa is %u"
	"\n bbbbb is %u\n",
	sizeof(array), getSize(array));
	
	system("pause");
	return 0;
}
int getSize(float* ptr)
{
	return sizeof(ptr);
}
