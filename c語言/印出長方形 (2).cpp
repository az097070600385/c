#include <stdio.h>
#include <stdlib.h>
void square(int width);

int main(void)
{	
    square(3);
	square(5);
	square(10);
	square(30);
	
	system("pause");
    return 0;
}

void square(int width)
{
	for(int i = 0; i < width; i ++)
	    printf("*");	    
    printf("\n");
    
	for(int k = 0; k < width - 2; k ++)
	{
	    printf("*");
		for(int i = 0; i < width - 2; i ++)
	        printf(" ");	    
		printf("*");
			    
	    printf("\n");
    } 
    	
	for(int i = 0; i < width; i ++)
	    printf("*");	    
    printf("\n");
}
