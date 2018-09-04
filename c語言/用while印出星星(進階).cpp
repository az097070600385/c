#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i = 1,j = 1;   
	                        
    while(i <= 5)
    {
		j = 1;
		while(j <= 5-i)
		{  
			printf (" ");
            j ++;
        }
		 
        j = 1;        
		while( j <= 2*i-1) 
        { 
		    printf("*");             
	        j ++;
	    } 
	    
		printf("\n");
		i ++;
	}
    system ("pause");
    return 0;
}


	//for  (i = 1; i <= 5; i++)          
    //{
        
    //}

