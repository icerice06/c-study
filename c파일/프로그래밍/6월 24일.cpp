#include<stdio.h>
int main(){
	struct stu{
		int bunho;
		char name[20];
		int kor,eng,mat;
		int sum;
		float avg;
	};
	struct stu stu01 = {1,"홍길동",98,82,88,0,0.0};
	
	stu01.sum=stu01.kor + stu01.eng + stu01.mat;
	stu01.avg= stu01.sum / 3.0;
	
	printf("[학생 성적 자료]\n");
	printf("%d번 %s\n",stu01.bunho,stu01.name);
	printf("합계:%d\n",stu01.sum);
	printf("평균:%4.1f\n",stu01.avg);
} 
