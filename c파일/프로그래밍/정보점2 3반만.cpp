/*#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	switch(a){
		case'A':printf("ADENINE");break;
		case'T':printf("THYMINE");break;
		case'G':printf("GUANINE");break;
		case'C':printf("CYTOSINE");break;
	}
}*/

/*#include<stdio.h>
int main(){
	int a=1, b[4]={0,},n=0;
	while(a!=0){
		scanf("%d",&a);
		if(a>=65){
			b[0]++;
			n++;
		}
		else if(a>=20){
			b[1]++;
			n++;
		}
		else if(a>=8){
			b[2]++;
			n++;
		}
		else if(a>=1){
			b[3]++;
			n++;
		}
	}
	printf("..조사 종료..\n<귀 댁의 가족 구성>\n");
	printf("총 %d명 : 노인 %d명, 성인 %d명, 청소년 %d명, 아동 %d명",n,b[0],b[1],b[2],b[3]);
}*/

/*#include <stdio.h>

int n;

int f(int);

int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}

int f(int n){
	int a=0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0)
		{
			a++;
		}
	}
	return a;
}*/

#include<stdio.h>

int a;

int b(int);

int main(){
	scanf("%d",&a);
	b(a);
}

b(int a){
	if(a==0){
		return 0;
	}
	b(a-1);
	printf("%d ",a);
}
