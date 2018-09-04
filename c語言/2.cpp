#include <stdio.h>
#include <stdlib.h>

#define cardSize 13

int main(void) {
	
	//define arr kind1
	int cards[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	
	//define arr kind2
	int a[10] = {0};
		
	//define arr kind3
	//int b[]; // => xxx
	
	//define arr kind3.5 == kind2
	int ccc[cardSize] = {100};
	
	//define arr kind4
	int c_size = 10;
	//int c[c_size] = {100}; // => xxx
	int c[c_size];// => ooo
	for(int i = 0; i < c_size; i ++)
		c[i] = 100;
	
	printf("o val : %d \n", c[0]);
	
	int arr2[c_size];
	//arr2 = c;
	
	return 0;
}

