#include<stdio.h>
#include<stdlib.h>
#define size 4
#define levelA 90
#define levelB 80
#define levelC 70
#define levelD 60

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
			printf("%d \n", score[i][j]);
		}
	}
	
	//s4 get ave. s4-1 get sum s4-2 get ave by sum
	int sum[a];
	for(int i = 0; i < a; i ++)
	{	
	    printf("�ǥ��`��: ");
		//get init. val
	    sum[i] = 0;
        
        //get sum
		for(int j = 0; j < b; j ++)		
		    sum[i] = sum[i] + score[i][j];
		    printf("%d \n", sum[i]);
	}
	
	//get ave
	int ave[a];
	for(int i = 0; i < a; i ++)
	{
		printf("�ǥ��`����: ");
		ave[i] = 0;
	    ave[i] = sum[i] / b;
	    printf("%d \n", ave[i]);
    }
    
	//s5 judge level. ex: A, B, C, D 
	for(int i = 0; i < a; i ++)
	{
		printf("�ǥ͵��Ŭ�: ");
		
		if(ave[i] >= levelA)
	        printf("�u�� \n");
		else if(ave[i] >= levelB)
        	printf("�ҵ� \n");
    	else if(ave[i] >= levelC)
        	printf("�A�� \n"); 
    	else if(ave[i] >= levelD)
        	printf("���� \n");
		else
		    printf("�A�O��è��!!!\n");       
	}
	   
	system("pause");
	return 0;
} 
