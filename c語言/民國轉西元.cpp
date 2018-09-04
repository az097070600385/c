#include <stdio.h>
#include <stdlib.h>
int year(int);
int main(void)
{
    int a,b;
    printf("請出入民國年:",a);
    scanf("%d",&a);
    printf("西元年為:%d\n", year(a));
    system("pause");
    return 0; 
    
}  
     
  int year (int a)
  {
     return a+1911 ; 
      }   
