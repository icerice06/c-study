/*#include<stdio.h>
int main(){
	float a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%f\n",a+b+c);
	printf("%.1f",(a+b+c)/3);
}*/
/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>=90) {printf("A");}
else if(a>=70) {printf("B");}
else if(a>=40) {printf("C");}
else {printf("D");}
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>0){
		printf("양수");
	}
	if(a<0){
		printf("음수");
	}
	if(a==0){
		printf("0");
	}
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1; i<=9; i++){
		printf("%d * %d = %d\n",a,i,a*i);
	}
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=0; i<a; i++){
		for(int j=a-i; j>=1; j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a=0, max=0;
	for(int i=0; i<10; i++){
		scanf("%d",&a);
		max=max>a?max:a;
	}
	printf("%d",max);
}*/

/*#include<stdio.h>

int f(int n){
	if(n==1){
		return 0;
	}
	return a*f(a-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d", f(n));
}*/

///////////////////////////////

/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", a);
}

#include<stdio.h>
int main(){
	char a;
	scanf("%c", &a);
	printf("%c", a);
}

#include<stdio.h>
int main(){
	float a;
	scanf("%f", &a);
	printf("%f", a);
}

#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d %d", a, b);
}

#include<stdio.h>
int main(){
	char a, b;
	scanf("%c %c", &a, &b);
	printf("%c %c", b, a);
}*/

/*#include<stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    printf("%.2f", a);
}*/

/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d %d %d", a, a, a);
}*/

/*#include<stdio.h>
int main()
{
    long long a;
    scanf("%lld", &a);
    printf("%lld", a);
}*/

/*#include<stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);
    printf("%.11lf", a);
}*/

/*#include<stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a,&b);
    printf("%lld", a+b);
}*/

/*#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%.0f", (float)(a/b));
}*/

/*#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", a%b);
}*/

/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", ++a);
}*/

/*#include<stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a,&b);
    printf("%lld\n", a+b);
    printf("%lld\n", a-b);
    printf("%lld\n", a*b);
    printf("%lld\n", a/b);
    printf("%lld\n", a%b);
    printf("%.2f", (double)a/b);
}*/

/*#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d", a<<b);
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	printf("시간 : %d\n", a/60/60);
	printf("분 : %d\n", a/60%60);
	printf("초 : %d", a%60);
}*/

/*#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a!=b){
		printf("1");
	}
	else{
		printf("0");
	}
} */

/*#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d", a>b?a:b); 
}*/

/*#include<stdio.h>
int main(){
	
}*/

/*#include<stdio.h>
int main(){
	int a ,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a%2==1){
		printf("odd\n");
	}
	else printf("even\n");
	if(b%2==1){
		printf("odd\n");
	}
	else printf("even\n");
	if(c%2==1){
		printf("odd\n");
	}
	else printf("even\n");
}*/

/*#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("%d",a);
	}
	else printf("%d",b);
}*/
/*#include<stdio.h>
int main(){
	int a ,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a%2==0){
		printf("%d\n",a);
	}
	if(b%2==0){
		printf("%d\n",b);
	}
	if(c%2==0){
		printf("%d\n",c);
	}
}*/
/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a<0){
		printf("minus");
	}
	else printf("not minus");
}*/
/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>90) printf("A");
else if(a>80) printf("B");
else if(a>70) printf("C");
else if(a>60)printf("D");
else printf("F");
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%4==0 && a%100!=0||a%400==0){
		printf("%d년은 윤년입니다",a);
	}
	else printf("%d년은 윤년이 아닙니다",a);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>40){
		printf("%0.f",b*40+(a-40)*b*1.5);
	}
	else printf("%d",a*b);
}*/

/*#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b){
		if(a<c){
			printf("%d",a);
		}
		else printf("%d",c);
	}
	else {
		if(b<c){
		printf("%d",b);
		}
		else printf("%d",c);
	}
}*/

/*#include<stdio.h>
int main(){
	int x,y;
	scanf("%d %d", &x,&y);
	if(x>0&&y>0){
		printf("1");
	}
	if(x<0&&y>0){
		printf("2");
	}
	if(x<0&&y<0){
		printf("3");
	}
	if(x>0&&y<0){
		printf("4");
	}
}*/

/*#include<stdio.h>
int main(){
	int a, b, c, d;
	scanf("%d %d %c", &a, &b, &c);
	if(c=='A'){
		d=a+b;
	}
	else if(c=='S'){
		d=(a>b?a:b)-(a>b?b:a);
	}
	else if(c=='M'){
		d=a*b;
	}
	d=d>50?0:d;
	printf("%d", d);
}*/

/*#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		printf(">");
	}
	else if (a<b){
	printf("<");
	}
	else printf("=");
}*/

/*#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("%d", a+b);
	}
	else{
		printf("%.f",b+(double)a/b*10);
	}
}*/

/*#include <stdio.h>

int main (){
	int h,m;
	scanf("%d %d",&h,&m);
	m -= 45;
	if(m < 0)
	{
		m += 60;
		h -= 1;
		if(h < 0)
		{
			h += 24;
		}
	}
	printf("%d %d",h,m);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	float a,b,c,d;
	scanf("%f %f",&a,&b);
	c=(a-100)*0.9;
	d=(b-c)*100/c;
	if(d<=10){
		printf("정상");
	}
	else if(d<=20){
		printf("과체중");
	}
	else printf("비만");
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("winter");
			break;
		case 2:
			printf("winter");
			break;
		case 3:
			printf("spring");
			break;
		case 4:
			printf("spring");
			break;
		case 5:
			printf("spring");
			break;
		case 6:
			printf("summer");
			break;
		case 7:
			printf("summer");
			break;
		case 8:
			printf("summer");
			break;
		case 9:
			printf("fall");
			break;
		case 10:
			printf("fall");
			break;
		case 11:
			printf("fall");
			break;
		case 12:
			printf("winter");
			break;
	}
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	switch(a/10){
		case 6: printf("D"); break;
		case 7: printf("C"); break;
		case 8: printf("B"); break;
		case 9: printf("A"); break;
		case 10: printf("A"); break;
		default : printf("F"); break;
	}
}*/

/*#include<stdio.h>
int main(){
	int a, b;
	char c;
	scanf("%d %d %c",&a,&b,&c);
	switch(c){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%.2f",(float)a/b);
			break;
		case '%':
			printf("%d",a%b);
			break;
		case 'a':
			printf("%d",a&b);
			break;
		case 'o':
			printf("%d",a|b);
			break;
		case 'x':
			printf("%d",a^b);
			break;
	}
}*/

/*#include<stdio.h>
int main(){
	int n,i=1;
	scanf("%d",&n);
	
	while(i<=n){
		if(n%i==0){
		printf("%d\n",i);
		}
		i++;
	}
}

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0; i<=n; i++){
		printf("%d\n",i);
	}
}*/

/*#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	while(1<=n){
		printf("i love c language\n");
		n--;
	}
}*/

/*#include<stdio.h>
int main(){
	int n,num=0;
	scanf("%d",&n);
	for(int i=0; i<=n; i++){
		if(i%2==0){
		num+=i;}
	}
	printf("%d",num);
}*/

/*#include<stdio.h>
int main(){
	int a=0,b=0,c=0,d=0,e;
	while(1){
		scanf("%d",&e);
		if(e>=65){
			a++;
		}
		else if(e>=20){
			b++;
		}
		else if(e>=8){
			c++;
		}
		else if(e>=1){
		d++;}
		else if(e==0) break;
	}
	printf("..조사 종료..\n");
	printf("<귀 댁의 가족 구성>\n");
	printf("총 %d명 : 노인 %d명, 성인 %d명, 청소년 %d명, 아동 %d명",a+b+c+d,a,b,c,d);
}*/

/*#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
 	if(i%3==0 || i%6==0 || i%9==0) printf("X ");
 	else printf("%d ",i);
	}
}*/

/*#include<stdio.h>
int main(){
	int a,b, max ,min;
	scanf("%d %d",&a,&b);
	max=a>b?a:b;
	min=a<b?a:b;
	for(int i=min; i<=max; i++){
		printf("%d ",i);
	}
}*/

/*#include<stdio.h>
int main(){
	int n,i=1,b=0;
	scanf("%d",&n);
	
	while(i<=n){
		if(n%i==0){
		b++;
		}
		i++;
	}
	if(b==2){
		printf("prime");
	}
	else printf("not prime");
}*/

/*#include<stdio.h>
int main(){
	int N, b ,max=0;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d",&b);
		max=max>b?max:b;
	}
	printf("%d",max);
}*/

/*#include<stdio.h>
int main(){
	int N,sum,i;
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		if(sum>=N){
			break;
		}
		sum+=i;
	}
	printf("%d",i-1);
}*/

/*#include<stdio.h>
int main(){
	int N,a=1, i;
	scanf("%d",&N);
	printf("%d!=(",N);
	for(i=1;i<=N; i++){
		printf("%d",i);
		if(i!=N){
			printf("*");
		}
		a*=i;
	}
	printf(")=%d",a);
}*/

/*#include<stdio.h>
int main(){
	int N, sum=1;
	scanf("%d",&N);
	sum=(1*N);
	for(int i=2; i<=N; i++){
		sum+= (i * (N - (i-1)));
	}
	printf("%d",sum);
}*/

/*#include<stdio.h>
int main(){
	int N,X,A;
	scanf("%d %d",&N,&X);
	for(int i=0; i<N; i++){
		scanf("%d",&A);
		if(A>X){
			printf("%d ",A);
		}
	}
}*/

/*#include<stdio.h>
int main(){
	int a,d,n,sum;
	scanf("%d %d %d",&a,&d,&n);
	sum=a;
	for(int i=1; i<n; i++){
		sum+=d;
	}
	printf("%d",sum);
}*/

/*#include<stdio.h>
int main(){
	int N,i=0;
	scanf("%d",&N);
	while(N!=1){
		if(N%2==0){
			N=N/2;
		}
		else N=3*N+1;
		i++;
	}
	printf("%d",i);
}
*/

/*#include<stdio.h>
int main(){
	int n,a,num=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a);
		num+=a*3;
	}
	printf("%d",num);
}*/

/*#include<stdio.h>
int main(){
	int a,b=0;
	scanf("%d",&a);
	for(int i=0; i<a; i++){
			if(i%2==0){
				for(int j=0; j<a; j++){
				b++;
				printf("%d ",b);
				}
			}
			else{
				b=b+a;
				for(int j=0; j<a; j++){
				printf("%d ",b);
				b--;
			}
			b=b+a;
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	for(int i=2; i<=9; i++){
		for(int j=1; j<=9; j++){
			printf("%d * %d = %d\n",i,j,i*j);
		}
	}
}*/

/*#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n; i>=1; i--){
		for(int j=i; j>=1; j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		for(int j=a-1; j>=i; j--){
			printf(" ");
		}
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		for(int j=2; j<=i; j++){
			printf(" ");
		}
		for(int j=i; j<=a; j++){
			printf("*");
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a,b=1;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		for(int j=a-1; j>=i; j--){
			printf(" ");
		}
		for(int j=1; j<=b; j++){
			printf("*");
		}
		b+=2;
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a,b=2;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		for(int j=2; j<=i; j++){
			printf(" ");
		}
		for(int j=b; j<=a*2; j++){
			printf("*");
		}
		b+=2;
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a[100],b;
	scanf("%d",&b);
	for(int i=0; i<b; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=(b-1); i>=0; i--)
	{
		printf("%d ",a[i]);
	}
}*/

/*#include<stdio.h>
int main(){
	int a[6]={0,},b,c;
	scanf("%d",&b);
	for(int i=0; i<b; i++)
	{
		scanf("%d",&c);
		switch(c){
			case 1: a[0]++; break;
			case 2: a[1]++; break;
			case 3: a[2]++; break;
			case 4: a[3]++; break;
			case 5: a[4]++; break;
			case 6: a[5]++; break;
		}
	}
	for(int i=0; i<6; i++)
	{
		printf("%d ",a[i]);
	}
}*/

/*#include<stdio.h>
int main(){
	int a;
	char b[50];
	scanf("%d",&a);
	for(int i=0; i<a; i++){
		scanf("%c",&b[i]);
	}
	for(int i=0; i<a; i++){
		printf("%c",b[i]);
	}
}*/

/*#include<stdio.h>
int main(){
	int n;
	char a[50];
	scanf("%d",n);
	scanf("%s",a);
	printf("%s",a);
}*/

/*#include<stdio.h>
int main(){
	int n,tmp;
	int arr[1000]={0,};
	scanf("%d",&n);
	int i=0;
	while(n!=0){
		arr[i]=n%2;
		n/=2;
		i++;
	}
	for(int j=i-1;j>=0; j--){
		printf("%d",arr[j]);
	}
}*/

/*#include<stdio.h>
int main(){
	char a[100];
	int i=0;
	scanf("%s",a);
	while(a[i]!='\0')i++;
	printf("%s %d",a,i);
}*/

/*#include<stdio.h>
int main(){
	int a[11];
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<10; i++){
		a[11]=a[11]>a[i]?a[11]:a[i];
	}
	printf("%d",a[11]);
}*/

/*#include<stdio.h>
int main(){
	int a[1000];
	int max, min=100,n,num=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		max=max>a[i]?max:a[i];
		min=min<a[i]?min:a[i];
		num+=a[i];
	}
	printf("총점: %d\n",num);
	printf("평균: %.2f\n",(float)num/(float)n);
	printf("최고점: %d\n",max);
	printf("최저점: %d",min);
}*/

/*#include<stdio.h>
int main(){
	int a[1000];
	int max=0, min=300,n,num;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		max=max>a[i]?max:a[i];
		min=min<a[i]?min:a[i];
	}
	num=max-min;
	printf("%d",num);
}*/
/*
#include<stdio.h>
int main(){
	int a[9],max=0,b;
	for(int i=0; i<9; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<9; i++){
		if(max<a[i]){
			max=a[i];
			b=i+1;
		}
	}
	printf("%d\n%d",max,b);
}
*/

/*#include<stdio.h>
int main(){
	int a,b,c,r;
	int arr[10]={0,};
	scanf("%d %d %d",&a,&b,&c);
	r=a*b*c;
	while(r!=0){
		arr[r%10]++;
		r/=10;
	}
	for(int i=0; i<10;i++){
	printf("%d\n",arr[i]);}
}*/

/*#include<stdio.h>
int main(){
	char a[100];
	int b,i=0;
	scanf("%s %d",&a,&b);
	while(a[i]!='\0'){
	printf("%c",a[i]+b);
	i++;
}
}*/

/*#include<stdio.h>
int main(){
	int n, m,c=0;
	int a[100]={0,}, b[100]={0,};
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	scanf("%d",&m);
	for(int i=0; i<m; i++){
		scanf("%d",&b[i]);
	}
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(a[j]==b[i]){
				c=1;
			}
		}
		printf("%d ",c);
		c=0;
	}
}*/

//32

/*#include<stdio.h>
int main(){
	char a[1000];
	int i=0;
	scanf("%s", a);
	while(a[i]!='\0'){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
		else if(a[i]>='A'&&a[i]<='Z'){
			a[i]+=32;
		}
		i++;
	}
	printf("%s", a);
}*/

/*#include<stdio.h>
int main(){
	int n, i, j, x, y;
int a[20][20]={};
scanf("%d", &n);
for(i=1; i<=n; i++)
{
  scanf("%d %d", &x, &y);
  a[x][y]=1;
}
for(i=1; i<=19; i++)
{
  for(j=1; j<=19; j++)
  {
    printf("%d ", a[i][j]);
  }
  printf("\n");
} 
}*/

/*#include<stdio.h>
int main(){
	int a[100][100],b,c=0;
	scanf("%d",&b);
	c=b;
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			a[i][j]=c;
			c--;
		}
		c=b+b*(i+1);
	}
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}*/
////////////////////////////
/*#include<stdio.h>
int main(){
	int a[100][100],b,c=0;
	scanf("%d",&b);
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			c++;
			a[i][j]=c;
		}
	}
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a[100][100],b,c=0;
	scanf("%d",&b);
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			c++;
			a[j][i]=c;
		}
	}
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a[100][100],b,c=0;
	scanf("%d",&b);
	c=b;
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			a[j][i]=c;
			c--;
		}
		c=b+b*(i+1);
	}
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}*/
///////////////////////////////////////////////
/*#include<stdio.h>
int main(){
	int a[100][100]={0,},b=0,d=0,c=0;
	scanf("%d %d",&b,&d);
	for(int i=(b-1); i>=0; i--){
		for(int j=(d-1); j>=0; j--){
			c++;
			a[i][j]=c;
		}
	}
	for(int i=0; i<b; i++){
		for(int j=0; j<d; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a[100][100]={0,},b=0,d=0,c=0;
	scanf("%d %d",&b,&d);
	for(int i=(b-1); i>=0; i--){
		for(int j=0; j<d; j++){
			c++;
			a[i][j]=c;
		}
	}
	for(int i=0; i<b; i++){
		for(int j=0; j<d; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a[100][100]={0,},b=0,d=0,c=0;
	scanf("%d %d",&b,&d);
	for(int i=(d-1); i>=0; i--){
		for(int j=(b-1); j>=0; j--){
			c++;
			a[j][i]=c;
		}
	}
	for(int i=b-1; i>=0; i--){
		for(int j=0; j<d; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a[100][100],b,c=0;
	scanf("%d",&b);
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			scanf("%d",&c);
			a[i][j]=c;
		}
	}
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int b,c=0;
	int a[100][100]={0,};
	scanf("%d",&b);
	for(int i=0; i<b; i++){
		for(int j=0; j<b; j++){
			c++;
			a[i][j]=c;
		}
	}
	
	for(int i=0; i<b; i++){
		if(i%2!=0){
		for(int j=0; j<b; j++){
			printf("%d ",a[i][j]);
		}
		}
		else{
		for(int j=b; j>0; j--){
			printf("%d ",a[i][j-1]);
		}
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a[5][5],b[5],max=0,cut=0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
		scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
		b[i]+=a[i][j];
		}
	}
	for(int i=0; i<5; i++){
		if(max<b[i]){
		cut++;
		max=b[i];
		}
	}
	printf("%d %d",cut,max);
}*/

/*#include <stdio.h>
int main (){
   int a[100];
   int n,e=0,b;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   while(e==0){
      e=1;
      for(int i=1;i<n;i++){
         if(a[i]>a[i-1]){
            b=a[i];
            a[i]=a[i-1];
            a[i-1]=b;
            e=0;
         }
      }
   }
   for(int i=0;i<n;i++){
      printf("%d ",a[i]);
   }
}*/

/*#include <stdio.h>
int main (){
   int a[4]={0,};
   int b,e=0,c;
   for(int i=0;i<4;i++){
      for(int j=0;j<5;j++){
         scanf("%d",&b);
         a[i]+=b;
      }
   }
   for(int i=0;i<4;i++){
      if(e<a[i]){
         e=a[i];
         c=i;
      }
      
   }
   printf("%d %d",c+1,e);
}*/

/*#include<stdio.h>
int a(){ 

printf("*");

}
int main(){
	int g;
	scanf("%d",&g);
	for(int i=0; i<g; i++){
	a();}
}*/
//////////////////////////////
/*#include<stdio.h>

int f(int n){
	int num=0;
	for(int i=0; i<=n; i++){
		num+=i;
	}
	return num;
}

int main(){
   int n;
   scanf("%d",&n);
   printf("%d",f(n));
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
	int a=1;
	for(int i=1; i<n; i++){
		if(n%i==0){
			a++;
		}
	}
	return a;
}*/

/*#include <stdio.h>

int n, m;

long long int f(int, int);

int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}

long long int f(int p, int q)
{
  return (long long int)p+q;
}*/

/*#include <stdio.h>

int a, b;

int gcd(int, int);

int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}

int gcd(int a, int b){
	int gcd;
	for(int i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}*/

/*#include<stdio.h>
#include<string.h>


void rev(char *str){
	int i;
	for(i=strlen(str)-1;i>=0;i--){
		printf("%c",str[i]);
	}
}

int main(){
   char str[100];
   fgets(str,100,stdin);
   rev(str);
}*/


/*#include<stdio.h>
int sum(int a, int b, int c){
	return a+b+c;
}

int main(){
	int x,y,z,num;
	scanf("%d %d %d",&x,&y,&z);
	num=sum(x,y,z);
	printf("%d",num);
}*/

/*#include<stdio.h>

int sum(int n){
	if(n<=1) return n;
	else return n+sum(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
}*/

/*#include<stdio.h>

void sum(int n,int b){
	if(n>b) return n;
	else{
		printf("%d\n",n);
		sum(++n,b);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	sum(1,n);
}*/

/*#include<stdio.h>

int sum(int n){
	if(n<=1) return n;
	else return n+sum(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
}*/
/*
#include<stdio.h>

int sum(int n,int b){
	if(n>b) return n;
	else{
		printf("%d\n",n);
		sum(++n,b);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	sum(1,n);
}*/

/*#include<stdio.h>

int n(int);

int main(){
	int a;
	scanf("%d",&a);
	n(a);
}

int n(int a){
	if(a==0){
		return 0;
	}
	printf("%d\n",a);
	n(a-1);
}*/
///////////////////////////////
/*#include<stdio.h>
int main(){
	char a,b,c;
	scanf("%c %c %c",&a,&b,&c);
	printf("%c%c%c reversed is %c%c%c",a,b,c,c,b,a);
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	printf("시간 : %d\n", a/3600);
	printf("분 : %d\n", a/60%60);
	printf("초 : %d", a%60);
}*/

/*#include<stdio.h>
int main(){
	int a,b,c,min;
	scanf("%d %d %d",&a,&b,&c);
	min=(a>b ? b:a)>c ? c:(a>b ? b:a);
	printf("%d", min);
}*/

/*#include<stdio.h>
int main(){
	int max=0,n,a;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a);
		max=max>a?max:a;
	}
	printf("%d",max);
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=a; i>=1; i--){
		for(int j=i; j>=1; j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int b, c=1, a;
	scanf("%d",&a);
	for(int i=1; i<=a; i++)
	{
		for(int j=i; j<=(a-1); j++){
		printf(" ");		
		}	
		for(int j=1; j<=c; j++)
		{
		printf("*");
		}
		c+=2;
	printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
   int a=0, max=0, c;
   for(int i=1; i< 10; ++i){
      scanf("%d",&a);
      if(a>max){
         max=a;
         c=i;
      }
   }
   printf("%d\n%d", max, c);
}*/

/*#include<stdio.h>
int main(){
	int a[100][100]={0,},b=0,d=0,c=0;
	scanf("%d %d",&b,&d);
	for(int i=(d-1); i>=0; i--){
		for(int j=(b-1); j>=0; j--){
			c++;
			a[j][i]=c;
		}
	}
	for(int i=0; i<b; i++){
		for(int j=0; j<d; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}*/

/*#include <stdio.h>

int a, b;

int gcd(int, int);

int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}

int gcd(int a, int b){
	int gcd;
	for(int i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}*/

/*#include <stdio.h>

int f(long long int a)
{
	int b = a%10;
	if(a <= 1)
		return b;
	return b+f((long long int)(a/10));
}

int main()
{
	long long int n;
	scanf("%lld", &n);
	printf("%d", f(n));
}*/
