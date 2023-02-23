#include<stdio.h>
int main(){
	int a,b,c=1,d,e,i;
	scanf("%d %d",&a,&b);
	e=a<b?a:b;
	for(i=1; i<=e; i++)
		{
		if(a%c==0&&b%c==0){
			d=d*c;
			c=1;
		}
		else
		{
		c++;
		}
	}
	printf("%d", d);
}
