/*#include<stdio.h>

int a(int);

int main(){
	printf("%d", a(100));
	}

int a(int n){
	if(n%2==0) return a(n-1);
	else if(n==1) return 1;
	else return n+a(n-1);
}*/

#include<stdio.h>

int f1();
int f2();

int main(){
	int f1_result, f2_result;
	f1_result = f1();
	for(int i=0;i<5;i++){
		f2_result = f2();
	}
	f1_result = f1();
	f1_result = f1();
	printf("f1함수:%d번 호출\n",f1_result);
	printf("f2함수:%d번 호출\n",f2_result);
	return 0;
}

int f1(){
	static int f1_count = 0;
	f1_count++;
	return f1_count;
}

int f2(){
	static int f2_count = 0;
	f2_count++;
	return f2_count;
}
