 #include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int a,b;
   printf("块计");
   scanf("%d",&a);
   b=a/100;
   switch(b)
   {
           case 0 :
			     printf(ノ筿计%f\n",a*300);
			     break;
		   case 1 :
		  	     printf(ノ筿计%f\n",300+(a-100)*3.2);
		  	     break;
		   case 2 :
         	     printf(ノ筿计%f\n",300+320+(a-200)*3.4);
         	     break;
	default:
		         printf(ノ筿计%f\n",300+320+340+(a-300)*3.6);
		         break;
		     }
		     system("pause");
		 }

