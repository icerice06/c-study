#include<stdio.h>
int main(){
	int a,c,d=0,i,max,g=1;
	while(g){
	printf("-------------------\n성적계산기 v1.0\n-------------------\n");
	printf("수강 과목수 : ");
	scanf("%d",&a);
	for(i=1; i<=a; i++){
		printf("-------------------\n%d번째 과목의 점수 : ", i);
		scanf("%d",&c);
		max=max>c?max:c;
		d+=c;
	}
	i-=1;
	printf("\n-------------------\n총 %d 과목의 점수를 입력받았습니다.",i);
	printf("\n총점: %d",d);
	printf("\n평균: %d",d/i);
	printf("\n최고점: %d",max);
	printf("\n다시 성적을 입력하시겠습니까(1 : 계속, 0 : 종료) : ");
	scanf("%d", &g);
}
}
