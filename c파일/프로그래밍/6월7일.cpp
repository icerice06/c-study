/*#include<stdio.h>
int first(){
	printf("firsl 함수입니다.\n");
	return 1;
}
int second(){
	printf("second 함수입니다.\n");
	return 2;
}
int main(){
	int f,s;
	
	f = first();
	s = second();
		
	printf("firsl 함수의 반환값은 %d,second 함수의 반환값는%d 입니다.\n",f,s);
	return 0;
}*/

#include<stdio.h>

int sum(int,int,int);

int main(){
	int su1,su2,su3,s;
	scanf("%d %d %d",&su1,&su2,&su3);
	s = sum(su1,su2,su3);
	printf("%d",s);
	
	return 0;
}

int sum(int su1, int su2, int su3){
	int result = su1*su2*su3;
	return result;
}
