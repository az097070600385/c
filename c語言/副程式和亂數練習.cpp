#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define cardSize 13

void RandValue(int val[]);

int main(void) {
	
	int cards[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	
	printf("o val : %d \n", cards[0]);
	//for(int i = 0; i < cardSize; i ++)
	//    printf("%d ", cards[i]);  	
	printf("\n");
	
	RandValue(cards);
	
	printf("o val : %d \n", cards[0]);
	
	return 0;
}

void RandValue(int val[])
{
	srand(time(NULL));

	printf("new val : %d \n", val[0]);
	
	val[0] = rand() % 100;

	printf("new val : %d \n", val[0]);
}
