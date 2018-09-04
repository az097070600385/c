#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    double W,H;
    printf("請出入你的升高(單位m):");
    scanf("%lf",&H);
    printf("請出入你的體重(單位kg):");
    scanf("%lf",&W);
    printf("你的BMI直是:%lf",W/(H*H));
    system("pause");
    return 0;
}
     
        
