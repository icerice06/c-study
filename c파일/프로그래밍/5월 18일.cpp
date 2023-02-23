/*#include<stdio.h>
int main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ",a[i][j]);
		}
	printf("\n");
}
}*/

/*#include<stdio.h>
int main(){
	int a[3][3]={1,2,3,4};
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ",a[i][j]);
		}
	printf("\n");
}
}*/

/*#include<stdio.h>
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ",a[i][j]);
		}
	printf("\n");
}
}*/

/*#include<stdio.h>
int main(){
	int a[3][3]={{1},{4,5},{7,8,9}};
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ",a[i][j]);
		}
	printf("\n");
}
}*/

/*#include<stdio.h>
int main(){
	int a[][3]={{1},{4,5},{7,8,9}};
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ",a[i][j]);
		}
	printf("\n");
}
}*/

/*#include<stdio.h>
int main(){
	int a[][3]={1,4,5,7,8,9};
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(a[i][j]==0){
			break;}
			printf("%d ",a[i][j]);
		}
	printf("\n");
}
}*/

/*#include<stdio.h>
int main(){
	char a[4][5]={"Kim","Lee","Park","Choi"};
	for(int i=0; i<4; i++)
		printf("%s\n",a[i]);
}*/

/*#include<stdio.h>
int main(){
	int a[3][3],b;
	for(int i=0; i<3; i++){
	printf("%d번 학생의 점수를 입력하세요.\n", i+1);
		for(int j=0; j<3; j++){
			printf("과목%d:",j+1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("<출력>\n-----------------------------\n번호");
	for(int i=1; i<=3; i++){
		printf(" 과목%d",i);}
	printf(" 평균\n");
	for(int i=0; i<3; i++){
		printf(" %d",i+1);
		for(int j=0; j<3; j++){
		b=b+a[i][j];
		printf("     %d",a[i][j]);
		}
		b=b/3;
		printf("     %d \n",b);
		b=0;
	}
	printf("-----------------------------");
}*/
