/*#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		a();
	}
}*/

/*#include<stdio.h>

int f(int n){
	int sum=0;
	for(int i=1; i<=n; i++){
         sum=sum+i;
	}
	return sum; 
}

int main(){
   int n;
   scanf("%d",&n);
   printf("%d",f(n));
}*/

/*#include<stdio.h>
#include<string.h>


int max(int n[]){
	int mx=0;
	for(int i=0; i<10; i++){
		mx=mx>n[i]?mx:n[i];
	}
	return mx;
}

int min(int n[]){
	int mn=100;
	for(int i=0; i<10; i++){
		mn=mn<n[i]?mn:n[i];
	}
	return mn;
}

int main(){
   int n[10]={40,30,60,90,100,40,30,80,90,10}; //배열 값 초기화
   char op[5]; //문자열을 입력받기 위해 배열 선언
   scanf("%s",op); //문자열 입력받음
   if(!strcmp(op,"MAX")) //strcmp(A,B) 두문자열을 비교해서 같으면 0 반환 
      printf("%d",max(n)); //최고값 함수 호출
   else if(!strcmp(op,"MIN"))
      printf("%d",min(n)); //최저값 함수 호출
   else
      printf("잘못된 입력값입니다.");
}*/

/*#include <stdio.h>

int n;

int f(int u)
{
	int a=0;
	for(int i=1; i<=u; i++){
		if(u%i==0){
			a++;
		}
	}
	return a;
}

int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}*/

/*#include <stdio.h>

int n, m;

long long int f(int p, int q)
{
  return (long long int)p+q;
}

int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}*/

/*int gcd(int a, int b) {
   int q;
   int w;
   int e = 0;
   if (a > b)
   {
      q = a;
      a = b;
      b = q;
   }
   for (int i = 1; i <= a; i++)
   {
      if (a % i == 0 && b % i == 0)
      {
         w = i;
         if (e < w)
         {
            e = w;
         }
      }
   }
   return e;
}*/

void rev(char str[100]) {
   int k;
   k = strlen(str);
   for (int i = k - 1; i >= 0; i--)
   {
      printf("%c", str[i]);
   }
}
