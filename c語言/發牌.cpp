#include <stdio.h>
#include <stdlib.h>
// 13*4 �P, �ۦ��ܹC���H��, �̷ӤH�ƥ������t�P.
// ��J�H��
// �o�P�Ƶ{��
// ��X: ��ܨC�ӤH���o���P(���B�ƭ�) 
#define type 4
#define cardNum 13

#define valOffsetZero 1
#define valOffsetTwo  2

void GetCard(int personNum);

int allCards    [] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int allCardsType[] = {0, 1, 2, 3};

int main(void)
{	
    int personNum = 3;
	GetCard(personNum);
	
	system("pause");
    return 0;
}

void GetCard(int personNum)
{
	for(int i = 0; i < type; i ++)
	{
		for(int j = 0; j < cardNum; j ++)
		{
			printf("%d_%d ", allCardsType[i], allCards[j]);
		}
	} 
}
