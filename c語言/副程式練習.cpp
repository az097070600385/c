#include <stdio.h>
#include <stdlib.h>
int ForSituation1(int i);
int ForSituation2();

int main (void)
{
	int i = 0;
	ForSituation1(1);
	ForSituation2();
	
    system ("pause");
    return 0;
}

int ForSituation1(int i)
{
	//int i = 0;
	printf("情境1 \n i = ");
	
      for(int i = 0; i < 10; i ++)
	  	{
		printf("%d ", i);
		}
}

int ForSituation2()
{
	int i = 0;
	printf("\n情境2 \n i = ");
	for(int i = 0; i < 10; i ++)
	{
		printf("%d ", i);
		if(i == 5)
			break;
    }
}
//for(int i = 0; i < 10; i ++)
//printf("%d ", i);

