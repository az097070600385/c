#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b;
    printf("請輸入你的身高:   請輸入數: \n");
    scanf("%d%d",&a,&b);
    if(a<120)
    printf("免費!!");
    if(a>=120&&a<=150)
    printf("半票");
    if(a>150){
              
      if(b>=20)        
           printf("團體票");  
      else              
         printf("全票");         
          
          
              }

 
    system("pause");
    return 0;
} 
