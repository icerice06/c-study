#include<stdio.h>
int main(){
	char a[5][30];
	for(int i=0; i<=4; i++){
		printf("%d번 학생의 이름을 입력하세요:",i+1);
		scanf("%s", &a[i]);
	}
	printf("------------\n번호	이름\n------------\n");
	for(int i=0; i<=4; i++){
		printf("%d	%s\n",i+1,a[i]);
	}
	printf("------------");
}
