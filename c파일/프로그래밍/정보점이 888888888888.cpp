/*#include <stdio.h>

int n;

int f(int k)
{
  if(k <= 1) return 1;
  else
  return f(k-1)+k;
}

int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}
///////////////////////////////
#include <stdio.h>

int a(long long int );

int main() {
	long long int n;
	scanf("%lld", &n);
	printf("%lld", a(n));
}
int a(long long int n){
	int q;
	q=n%10;
	if(n<=1){
		return n;
	}
	else return q+a(n/10);
}
//////////////////////////////
#include <stdio.h>

int n;

long long int f(int k)
{
  if(k <= 2) return 1;
  return f(k-2)+f(k-1);
}

int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
///////////////////////////////
#include <stdio.h>
 
int a(int);
 
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", a(n));
}
 
int f(int n){
    if(n<=1){
        return 1;
    }
    else    return n*f(n-1);
}
/////////////////////
#include <stdio.h>

int a(long long int );

int main() {
	long long int n;
	scanf("%lld", &n);
	printf("%lld", a(n));
}

int a(long long int n){
	int q;
	q=n%10;
	if(n<=1){
		return n;
	}
	else	return q+a(n/10);
}
///////////////////////////*/
#include<stdio.h>
void q(int,int,int);
  
int n;
 
int main(){
   scanf("%d",&n);
   q(1,1,n);
}
void q(int a,int b,int c)
{
   if(b==c+1) return ;
   else if(a!=b)
   {
      printf("%d ",a);
      q(a+1,b,c);
   }
   else
   {
      printf("%d\n",a);
      q(1,b+1,c);
   }
}
