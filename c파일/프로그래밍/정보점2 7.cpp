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
   int n[10]={40,30,60,90,100,40,30,80,90,10}; //�迭 �� �ʱ�ȭ
   char op[5]; //���ڿ��� �Է¹ޱ� ���� �迭 ����
   scanf("%s",op); //���ڿ� �Է¹���
   if(!strcmp(op,"MAX")) //strcmp(A,B) �ι��ڿ��� ���ؼ� ������ 0 ��ȯ 
      printf("%d",max(n)); //�ְ� �Լ� ȣ��
   else if(!strcmp(op,"MIN"))
      printf("%d",min(n)); //������ �Լ� ȣ��
   else
      printf("�߸��� �Է°��Դϴ�.");
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
