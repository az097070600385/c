#include <stdio.h>
#include <stdlib.h>
#define a 33.09
int main(void)
{
    double W,H,b;
    printf("請出入你的升高(單位m):");
    scanf("%lf",&H);
    printf("請出入你的體重(單位kg):");
    scanf("%lf",&W);
    printf("你的BMI直是:%lf\n",W/(H*H));
    printf("請出入兌換金額:");
    scanf("%lf",&b);
    printf("你兌換美金的值是:%lf",b/a); 
    system("pause");
    return 0;
}
     
        
