#include<stdio.h>
int main(){
	int j=1;
	for(int i=0; i<=8; i++,j++){
		printf("9 * %d = ",j);
		printf("%d%d\n",i,9-i);
	}
}
