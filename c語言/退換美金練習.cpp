#include <stdio.h>
#include <stdlib.h>
#define a 33.09
int main(void)
{
    double W,H,b;
    printf("�ХX�J�A���ɰ�(���m):");
    scanf("%lf",&H);
    printf("�ХX�J�A���魫(���kg):");
    scanf("%lf",&W);
    printf("�A��BMI���O:%lf\n",W/(H*H));
    printf("�ХX�J�I�����B:");
    scanf("%lf",&b);
    printf("�A�I���������ȬO:%lf",b/a); 
    system("pause");
    return 0;
}
     
        
