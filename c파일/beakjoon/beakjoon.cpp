/*#include <stdio.h>
int main(){
	printf("Hello World!");
}*/

/*#include <stdio.h>
int main() {
	printf("강한친구 대한육군\n강한친구 대한육군");	
}*/

/*#include <stdio.h>
int main(){
	printf("\\    /\\\n )  ( ')\n(  /  )\n \\(__)|");
}*/

/*#include <stdio.h>
int main(){
	printf("|\\_/|\n|q p|   /}\n( 0 )\"\"\"\\\n|\"^\"`    |\n||_/=\\\\__|");
}*/

/*#include<stdio.h>
int main(){
   printf("         ,r'\"7\nr`-_   ,'  ,/\n \\. \". L_r'\n   `~\\/\n      |\n      |");
}*/

/*#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a+b);
}*/

/*#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a-b);
}*/

/*#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a*b);
}*/

/*#include <stdio.h>
int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.9lf",a/b);
}*/

/*#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d", a+b, a-b, a*b, a/b, a%b);
}*/

/*#include <stdio.h>
int main(){
	char a[51];
	scanf("%s", &a);
	printf("%s??!",a);
}*/

/*#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	printf("%d", a-543);
}*/

/*#include <stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n%d\n%d\n%d", (a+b)%c, ((a%c) + (b%c))%c,  (a*b)%c, ((a%c) * b%c)%c);
}*/

/*#include <stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d %d", &a, &b);
	c = b%10;
	d = b%100/10;
	e = b/100;
	printf("%d\n%d\n%d\n%d", a*c, a*d, a*e, a*b);
}*/

/*#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>b){
		printf(">");
	}
	else if(a<b){
		printf("<");
	}
	else printf("==");
}*/

/*#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	if(a>=90){
		printf("A");
	}
	else if(a>=80){
		printf("B");
	}
	else if(a>=70){
		printf("C");
	}
	else if(a>=60){
		printf("D");
	}
	else printf("F");
}*/

/*#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	if(a%4==0&&a%100!=0){
		printf("1");
	}
	else if (a%400==0){
		printf("1");
	}
	else printf("0");
}*/

/*#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>0&&b>0){
		printf("1");
	}
	if(a<0&&b>0){
		printf("2");
	}
	if(a<0&&b<0){
		printf("3");
	}
	if(a>0&&b<0){
		printf("4");
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

/*#include <stdio.h>


int main() {
    int a, b, c;
    int n = 0, m = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    n = b + c;
    
    m = n/60;
    a = a + m; 
    b = n - m*60;
    
    if(a==24 && b ==0){
        a = 0;
    }
    
    if(a>23)
    a = a - 24;
    printf("%d %d", a, b);

}*/

/*#include<stdio.h>
int main(){
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b&&a==c&&b==c){
		printf("%d",10000+a*1000);
		return 0;}
	else if(a==b&&a!=c){
		printf("%d",1000+a*100);
		return 0;
	}
	else if(a==c&&a!=b){
		printf("%d",1000+a*100);
		return 0;
	}
	else if(b==c&&b!=a){
		printf("%d",1000+b*100);
		return 0;
	}
	else if(a!=b&&a!=c&&c!=b){
		d=(a>b?a:b)>c?(a>b?a:b):c;
		printf("%d",d*100);
		return 0;
	}

	return 0;
}*/

/*#include<stdio.h>
int main(){
	int a, b, i;
	scanf("%d",&a);
	for(i = 1; i<10; i++){
	b=b+1;
	printf("%d * %d = %d\n",a,b,a*b);}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int t,i, a, b;
	scanf("%d",&t);
	for(i = 0; i<t; i++){
		scanf("%d %d",&a, &b);
		printf("%d\n", a+b);
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int i, a, b=0;
	scanf("%d",&a);
	for(i = 1; i<=a; i++)
	{
		b=b+i;
	}
	printf("%d", b);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int t,i, a, b;
	scanf("%d",&t);
	for(i = 0; i<t; i++){
		scanf("%d %d",&a, &b);
		printf("%d\n", a+b);
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int i, a, b=0,c;
	scanf("%d",&a);
	for(i = 1; i<=a; i++)
	{
		c=b+i;
		printf("%d\n", c);
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int i, a, b=0,c;
	scanf("%d",&a);
	for(i = 0; i<a; i++)
	{
		c=a-i;
		printf("%d\n", c);
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int t,i, a, b;
	scanf("%d",&t);
	for(i = 1; i<=t; i++){
		scanf("%d %d",&a, &b);
		printf("Case #%d: %d\n", i, a+b);
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int t,i, a, b;
	scanf("%d",&t);
	for(i = 1; i<=t; i++){
		scanf("%d %d",&a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a,b,a+b);
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int i, a, b=0,c,d;
	scanf("%d",&a);
	for(i = 1; i<=a; i++)
	{
		c=b+i;
		for(d = 1; d<=c; d++){
		printf("*");}
	printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int i,a,d,b;
	scanf("%d",&a);
	for(i = 1; i<=a; i++)
	{
		b=a-i;
		for(d = 1; d<=b; d++){
		printf(" ");}
		for(d = 1; d<=i; d++){
		printf("*");}
	printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int i,a,b,c;
	scanf("%d %d",&a, &b);
	for (i = 0; i<a; i++){
		scanf("%d ",&c);
		if(c<b)
		{
			printf("%d ",c);
		}
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int a, b;
	while(a+b!=0){
		scanf("%d %d",&a,&b);
		if(a+b!=0){
			printf("%d\n",a+b);
		}
		else return 0;
	}
	return 0;
}*/

/*#include<stdio.h>
int main(void){
	int  a, b;
	while(scanf("%d %d",&a,&b)!= EOF){
		printf("%d\n",a+b);
	}
}*/

/*#include<stdio.h>
int main(void)
{
	int  a,b,c,d,e,f=0;
	scanf("%d",&b);
	a=b;
	while(1){
		c=b%10;
		d=b/10;
		e=d+c;
		b=(e%10)+(c*10);
		f=f+1;
		if(a==b)
		{
			printf("%d",f);
			return 0;
		}
	}
}	*/

/*#include<stdio.h>
int main(){
	int n,a,max = -1000000,min = 100000;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		scanf("%d",&a);
		if(a > max)
		{
			max=a;
		}
		if(a < min)
		{
			min=a;
		}	
	}
	printf("%d %d", min,max);
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
	int a,b=10;
	int c[10];
	for (int i=0; i<10; i++){
		scanf("%d",&a);
		c[i]=a%42;
	}
	for(int i=0; i<10; i++){
		for (int j=0; j<10; j++){
			if(c[j]==c[i]){
				b--;
			}
		}
	}
	printf("%d",b);
}*/

/*#include<stdio.h>
int main(){
	int a,b=1;
	scanf("%d",&a);
	for(int i=1; i<=a; i++){
		b=b*i;
	}
	printf("%d",b);
}*/

/*#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	printf("%d",a);
}*/

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
	int pin[6]={0,};
	int a[6]={1,1,2,2,2,8};
	
	for(int i=0; i<6; i++){
		scanf("%d",&pin[i]);
	}
	
	for(int i=0; i<6; i++){
		printf("%d ", a[i]-pin[i]);
	}
}*/

/*#include<stdio.h>
int main(){
	int X,N,a,b,num=0;
	scanf("%d",&X);
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d %d",&a, &b);
		num+= a*b;
	}
	if(num!=X){
		printf("No");
	}
	else printf("Yes");
}*/

/*#include<stdio.h>
int main(){
	int a,num=0,n;
	scanf("%d",&n);
	scanf("%d",&a);
	for(int i=0; i<n;i++){
		num+=a%10;
		a/=10;
	}
	printf("%d",num);
}

#include <stdio.h>
int main() {
    int n, sum=0;
    scanf("%d", &n);
    char num[n];
    scanf("%s", num);
    for(int i=0; i<n; i++) sum += num[i] - '0';
    printf("%d", sum);
}*/

/*#include<stdio.h>
int main(){
	int N,max;
	 double  a[100]={0,};
	scanf("%d",&N);
	for(int i=0; i<N;i++){
		scanf("%d",&a[i]);
		max=max>a[i]?max:a[i];
	}
	for(int i=0; i<N; i++){
		a[N+1]+=a[i];
	}
	printf("%f",a[N+1]/max*100);
}*/

/*#include<stdio.h>
int main(){
	int i;
	scanf("%x",&i);
	printf("%d",i);
}*/

/*#include<stdio.h>
int main(){
	int a[4],min=1000;
	scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
	a[2]-=a[0];
	a[3]-=a[1];
	for(int i=0; i<4; i++){
		min=min<a[i]?min:a[i];
	}
	printf("%d",min);
}*/

/*#include<stdio.h>
int main(){
	char a;
	while(scanf("%c",&a)!=-1){
		printf("%c",a);
	}
	return 0;
}*/

/*#include<stdio.h>

int main(){
	int b=-1;
	char a[100]="";
	scanf("%s",a);
	while (a[++b]){
			printf("%c",a[b]);
			if(b%10==9){
				printf("\n");
		}          
	}
}*/

/*#include<stdio.h>
#include <string.h>//이 헤더파일에는 C 형식 문자열 (널 종료 문자열) 을 다룰 수 있는 함수들을 포함하고 있다.
int main(){
	char a[100]="";
	scanf("%s",a);
	printf("%d",strlen(a));
}*/

/*#include<stdio.h>
int main(){
	int a[5],sum=0;
	for(int i=0; i<5; i++){
		scanf("%d", &a[i]);
		a[i]=a[i]*a[i];
		sum+=a[i];
	}
	sum%=10;
	printf("%d",sum);
}*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
	string a,b;
	cin >> a>>b;
	if(a.length()>=b.length()){
		cout << "go";
	}
	else cout <<"no";
}*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c,d;
	cin >> d;
	while(d--){
		cin >> a>>b>>c;
		cout << min(a, min(b, c))<<"\n";
	}
}*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a=0,num=0;
	cin >> n;
	vector<int> v(n,0);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	for(int i=0; i<n; i++){
		for(int j=1; j<=v[i];j++){
			if(v[i]%j==0){
				a++;
			}
		}
		if(a==2){
			num++;
		}
		a=0;
	}
	cout << num;
}*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	int n,m,num=0;
	cin >> m >> n;
	vector<int> v(n,0);
	for(int i=m; i<=n; i++){
		for(int j=1; j<=i; j++){
			if(i%j==0){
				num++;
			}
		}
		if(num==2){
			cout << i<<"\n";
		}
		num=0;
	}
}*/
/*#include<stdio.h>
int main(){
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld",(a+b)*(a-b));
}*/


/*#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,b=0;
	cin >> a;
	if(a>6){
	for(int i=a; a>0; a-=6){
              		b++;
		}
	}else if(a>1){
		b+=2;
	}else{
		b++;
	}
	cout<<b;
}*/ 

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	vector<int> v(n);
	
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0; i<n; i++){
		cout << v[i]<<'\n';
	}
}
