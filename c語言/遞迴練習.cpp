#include<stdio.h>
#include<stdlib.h>

int reduceToNagative(int val, int reduceVal);

int main(void)
{
	int val, reduceVal;
	scanf("%d %d", &val, &reduceVal);
	
	val = reduceToNagative(val, reduceVal);
	printf("%d", val);
	
	//while(val > 0)
	//{
	//	val = val - reduceVal;
	//}
	//printf("%d", val);

	system("pause");
	return 0;
} 

int reduceToNagative(int val, int reduceVal)
{
	val = val - reduceVal;
	if(val < 0)
		return val;
	else
		return reduceToNagative(val, reduceVal);
}
