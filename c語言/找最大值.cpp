#include <stdio.h>
#include <stdlib.h>
void ppp(int a,int b,int c);

int main(void)
{
	int q,w,e;
	
	printf("請出入三個數字:");
	scanf("%d%d%d",&q,&w,&e);
	
	printf("最大值是:%d",ppp(q,w,e));
	
	system ("pause");
    return 0;
}

void ppp(int a,int b,int c)
{
	int max = a;
	
	if(b>a){
		max = b;
	}
	if(c>b){
		max = c;
	}
	return max;
}
