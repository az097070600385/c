#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define cardSize 13

void RandCard(int cards[], int Size);

int main(void) {
	
	int cards[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	
	printf("card o : ");
	for(int i = 0; i < cardSize; i ++)
	    printf("%d ", cards[i]);  	
	printf("\n");
	
	RandCard(cards, cardSize);
	
	return 0;
}

void RandCard(int cards[], int size)
{
	int randCards[cardSize] = {0};
	
	srand(time(NULL));
	
	int indexRange = size;
	for(int i = 0; i < size; i ++)
	{
		int index = rand() % indexRange;
		indexRange --;//***** EX : indexRange = 13 -> index = 0~12(ok), but cards[indexRange(13)](xx): 要減1才是最後一個陣列位置 
		//printf("index = %d ", index);  	
		randCards[i] = cards[index];
		
		cards[index] = cards[indexRange];
		cards[indexRange] = randCards[i];
	}
	
	printf("\ncard rand : ");
	for(int i = 0; i < cardSize; i ++)
	    printf("%d ", randCards[i]);  	
	printf("\n");
	
	printf("card o : ");
	for(int i = 0; i < cardSize; i ++)
	    printf("%d ", cards[i]);  	
	printf("\n");
}
