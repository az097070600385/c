#include <stdio.h>
#include <stdlib.h>
void square(int a);
int main(void)
{	
	square(5);
	square(20);
	
	system("pause");
    return 0;
}

void square(int a)
{
	for(int k = 0; k < a; k ++)
	{   
	    if(k == 0 || k == a-1 )
	    {
	        for(int i = 0; i < a; i ++)
	            printf("*");
	    }
        else
		{
            for(int i = 0; i < a; i ++)
	        {
	        	if(i == 0 || i == a-1 )
		             printf("*");
		        else
		             printf(" ");
		    }
	    } 
	    printf("\n");
    } 
}
