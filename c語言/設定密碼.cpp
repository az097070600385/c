#include <stdio.h>
#include <stdlib.h>
int  main(void)
{
     int i,c ,d ;
     printf("請出入設定密碼\n");
     scanf("%d",&d);        
     for(i=1; i<=3; i++)
     {
      
     printf("請出入密碼\n");
     scanf("%d",&c);
     if(c==d)
     {
             printf("true\n");
     break;
     system("pause");
     }
     printf("false\n");
     }
     system("pause");
     return 0;
     }
          
     
     
     
     
     
     
     
     
     
     
     
     
     

      
