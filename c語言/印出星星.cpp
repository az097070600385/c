 #include <stdio.h>
 #include <stdlib.h>
  int main (void)
  {
      int i,j;                           /* 設定迴圈出值 */

      for  (i = 1; i <= 6; i++)           /* 外層迴圈決定哪一列要印星號 */
           {
           	   
                    for (j = 1; j <= i; j++)  /* 內層迴圈印出*星號 */
                       	    printf ("*");
                            printf("\n"); 
						  
           }
     
           system ("pause");
           return 0;
   }


