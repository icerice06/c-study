/*#include<stdio.h>
int first(){
	printf("firsl �Լ��Դϴ�.\n");
	return 1;
}
int second(){
	printf("second �Լ��Դϴ�.\n");
	return 2;
}
int main(){
	int f,s;
	
	f = first();
	s = second();
		
	printf("firsl �Լ��� ��ȯ���� %d,second �Լ��� ��ȯ����%d �Դϴ�.\n",f,s);
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
