#include<stdio.h>
int main(){
	int g=9.8,t,n;
	char a[50][50]={0,};
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		n=(g*t*t/2)/5;
		for(int j=0; j<t; j++){
			a[i][n]=2;
			printf("%d ",a[i][j]);
			}
		printf("\n");
	}
}
