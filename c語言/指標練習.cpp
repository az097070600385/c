#include<stdio.h>
#include<stdlib.h>

void TestPtr(int* ptr);
void TestValue(int val);
int a = 8;
int main(void)
{
	
	
	//&a = 2222;
    printf("original val: %d \n", a);   
	//printf("%d \n", *ptr);   
	printf("address : %p \n", &a); 

	TestPtr(&a);
    TestValue(a);

	printf("address : %p \n", &a);   
	//printf("%p \n", ptr);      
	   
	system("pause");
	return 0;
} 

void TestPtr(int* ptr)
{
	*ptr = 10;
}

void TestValue(int val)
{
	val = 20;
}
