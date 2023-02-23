#include<stdio.h>
int main(){
	int a, b, i;
	scanf("%d", &a);
	printf("\n%d\n\n", a);
	for (i=1; i<=a; i++)
	{
		if(a%i == 0)
		{
			printf("%d,", i);
			b++;
		}
	}
	printf("\n%d의 약수의 개수는 %d개", a,b);
}
