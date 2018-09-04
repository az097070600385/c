#include <stdio.h>
#include <stdlib.h>
void square(int a);
int main(void)
{	
	square(5);
	square(10);
	
	system ("pause");
    return 0;
}
void square(int a)
{
	
	for(int i = 0; i < a; i ++)
	    printf("*");	    
    printf("\n");
    
	for(int k = 0; k < 3; k ++)
	{
	    printf("*");
        for(int i = 0; i < 3; i ++)
	    {
		        printf(" ");
		        
	    }
	    printf("*");
	    printf("\n");
    } 
    	
	for(int i = 0; i < b-1; i ++)
	    printf("*");	    
    printf("\n");
    
	for(int k = 0; k < 7; k ++)
	{
	    printf("*");
        for(int i = 0; i < 7; i ++)
	    {
		        printf(" ");
		        
	    }
	    printf("*");
	    printf("\n");
    } 
    for(int i = 0; i < 10; i ++)
	    printf("*");

}
