#include<stdio.h>
#include<stdlib.h>
#define levelA 90
#define levelB 80
#define levelC 70

int Averager(int sum, int length);
char* LevelJudger(int score);

int main(void)
{
	//s1
	int a, b, d;
	printf("�п�J�H��:");
	scanf("%d", &a);
	printf("�п�J�ҴX��:");
	scanf("%d", &b);
	
	//s2
	int score[a][b];
	for(int i = 0; i < a; i ++)
	{
		printf("�п�J���Z:");
		for(int j = 0; j < b; j ++)
		{
			//int c;
			//scanf("%d", &c);
			//score[i][j] = c;
			
			scanf("%d", &score[i][j]);
		}
	}
	
	//s3 print all persons' scores
	printf("\nall persons' scores : \n");
	for(int i = 0; i < a; i ++)
	{	
		for(int j = 0; j < b; j ++)
		{		
			printf("%d ", score[i][j]);
		}
	}
	
	//s4 get ave. s4-1 get sum s4-2 get ave by sum
	int sum[a];
	    
	for(int i = 0; i < a; i ++)
	{	
		//get init. val
	    sum[i] = 0;
        
        //get sum
		for(int j = 0; j < b; j ++)		
		    sum[i] = sum[i] + score[i][j];
		
		//get ave
		sum[i] = Averager(sum[i], b);
		printf("%d ", sum[i]);
	}

	//s5 judge level. ex: A, B, C, D 
	for(int i = 0; i < a; i ++)
	{
	//	char level = LevelJudger(sum[i]);	
		printf("�ǥ͵��Ŭ�: %s", LevelJudger(sum[i]));    
	}
	   
	system("pause");
	return 0;
} 

int Averager(int sum, int size)
{  	
	//get ave
	int ave;
	
	if(size == 0)
		ave = 0;
	else
		ave = sum / size;
	
	return ave;
}

char* LevelJudger(int score)
{  	 
    if(score >= levelA)
	    return "�u";
	else if(score >= levelB)
       	return "��";
    else if(score >= levelC)
       	return "�A";
    else
      	return "��";
}
