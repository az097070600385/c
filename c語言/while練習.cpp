#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i = 0;
	printf("����1 \n i = ");
	while(i < 10)
	{
		printf("%d ", i);
		i ++;
	}
	
	i = 0;
	printf("\n����2 \n i = ");
	while(i < 10)
	{
		printf("%d ", i);
		if(i == 5)
			break;
			
		i ++;
	}

    system ("pause");
    return 0;
}


