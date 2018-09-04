#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a = 1;
    switch(a)
    {
    	case 0:
    		a = -1;
    		break;
    	case 1:
    		a = -2;
    		break;
    	case 2:
    		a = -3;
    		break;
    }
    printf("a = ", a);
     
    system ("pause");
    return 0;
}


