#include<stdio.h>
int main(){
	char a[5][30];
	for(int i=0; i<=4; i++){
		printf("%d�� �л��� �̸��� �Է��ϼ���:",i+1);
		scanf("%s", &a[i]);
	}
	printf("------------\n��ȣ	�̸�\n------------\n");
	for(int i=0; i<=4; i++){
		printf("%d	%s\n",i+1,a[i]);
	}
	printf("------------");
}
