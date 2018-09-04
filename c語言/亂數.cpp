#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void getTenNumbers();
void BubbleSort();
void point_device();

int number[SIZE] = {0};

int main(void)
{
	//1. get ten nums. by random to arr
	getTenNumbers();
	//2. sort arr
	BubbleSort();
	//3. scanf a num. and find it in arr.
	point_device();
	
	//system("pause");
	return 0;
} 

void getTenNumbers()
{
	printf("用亂數新增十筆資料\n");
	
	srand(time(NULL));
	for(int i = 0; i < SIZE; i ++)
	{
		number[i] = rand() % 100 + 1;
		printf("%4d", number[i]);
	}	
}

void BubbleSort()
{
	//sort reduce
	for(int i = 0; i < SIZE; i ++)
	{
		for(int j = 0; j < i; j ++)
		{
			if(number[i] > number[j])
			{
				int buf = number[i];
				number[i] = number[j];
				number[j] = buf;
			}
		}
	}
	
	printf("\n由大排到小\n");
	for(int i = 0; i < SIZE; i ++)
	    printf("%4d", number[i]);
}

void point_device()
{
	int goalNum = 0, argGoal = -1;
	
	printf("\n輸入一個數\n");
	scanf("%d", &goalNum);
	
	for(int i = 0;i < SIZE;i ++)
	{
	    if(goalNum == number[i])
	    {
	    	argGoal = i;
	    	break;
	    }		
    }
    
	if(argGoal > 0)
        printf("find num = %d. 在陣列中第幾%d個\n", goalNum, argGoal + 1); 	
	else
	    printf("不在亂數中\n");	
}
