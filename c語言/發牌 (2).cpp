#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 13*4 牌, 自行選擇遊玩人數, 依照人數平均分配牌.
// 輸入人數
// 發牌副程式
// 輸出: 顯示每個人取得的牌(花色、數值) 
#define type 4
#define cardNum 13

#define valOffsetZero 1
#define valOffsetTwo  2

void ShowCards(int cards[], int cardsType[]);
void GetCard(int personNum, int cards[], int cardsType[]);

int allCards    [] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int allCardsType[] = {0, 1, 2, 3};

int main(void)
{	
    ShowCards(allCards, allCardsType); 

	// persons get cards
    int personNum = 4;
	GetCard(personNum, allCards, allCardsType);
	
	system("pause");
    return 0;
}

void ShowCards(int cards[], int cardsType[])
{
	for(int i = 0; i < type; i ++)
	{
		for(int j = 0; j < cardNum; j ++)
		{
			printf("%d_%d ", allCardsType[i], allCards[j]);
		}
	} 
	printf("\n");
}

void GetCard(int personNum, int cards[], int cardsType[])
{
	//int card = rand() % 10;
	//printf("card = %d", card);
	
	printf("card original sort : ");
	for(int i = 0; i < cardNum; i ++)
	    printf("%d ", cards[i]);
	    
	printf("\n");
	
	//get cards
	int randCards[cardNum];
	for(int i = 0; i < cardNum; i ++)
	    randCards[i] = -1;
	
	int randValueD = cardNum;
	for(int i = 0; i < cardNum; i ++)
	{
		srand(time(NULL));
		int getIndex = rand() % randValueD;
		printf("getIndex = %d ", getIndex);
		//printf("cards = %d ", cards[getIndex]);
		cards[getIndex] = 0;
		
		randValueD --;
	}
	    
	printf("card rand sort : ");
	for(int i = 0; i < cardNum; i ++)
	    printf("%d ", cards[i]);
	
}
