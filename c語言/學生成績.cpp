#include<stdio.h>
#include<stdlib.h>
#define size 4
#define levelA 90
#define levelB 80
#define levelC 70

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
	    printf("�ǥ��`����: ");
		//get init. val
	    sum[i] = 0;
        
        //get sum
		for(int j = 0; j < b; j ++)		
		    sum[i] = sum[i] + score[i][j];
		
		//get ave
		sum[i] = sum[i] / b;
		printf("%d \n", sum[i]);
	}

	//s5 judge level. ex: A, B, C, D 
	for(int i = 0; i < a; i ++)
	{
		printf("�ǥ͵��Ŭ�: ");
		
		if(sum[i] >= levelA)
	        printf("�u�� \n");
		else if(sum[i] >= levelB)
        	printf("�ҵ� \n");
    	else if(sum[i] >= levelC)
        	printf("�A�� \n"); 
    	else
        	printf("���� \n");        
	}
	   
	system("pause");
	return 0;
} 
