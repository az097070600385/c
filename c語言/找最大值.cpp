#include <stdio.h>
#include <stdlib.h>
void ppp(int a,int b,int c);

int main(void)
{
	int q,w,e;
	
	printf("�ХX�J�T�ӼƦr:");
	scanf("%d%d%d",&q,&w,&e);
	
	printf("�̤j�ȬO:%d",ppp(q,w,e));
	
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
