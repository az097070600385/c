 #include <stdio.h>
 #include <stdlib.h>
  int main (void)
  {
      int i,j;                           /* �]�w�j��X�� */

      for  (i = 1; i <= 6; i++)           /* �~�h�j��M�w���@�C�n�L�P�� */
           {
           	   
                    for (j = 1; j <= i; j++)  /* ���h�j��L�X*�P�� */
                       	    printf ("*");
                            printf("\n"); 
						  
           }
     
           system ("pause");
           return 0;
   }


