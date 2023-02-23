#include<stdio.h>
int main(){
	int a,b,max,min,c;
	scanf("%d %d", &a, &b);
	max=a>b?a:b;
	min=a<b?a:b;
	for(int i=1; i<=max; i++){
		if(min<(i*i)&&(i*i)<max){
			printf("%d ", i*i);
			c++;
		}
	}
	printf("°³¼ö:%d",c);
}
