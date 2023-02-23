/*000#include<stdio.h>
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

/*XXX#include<stdio.h>
int main(){
	int a, b, c=0;
	scanf("%d", &a);
	for(int i=0; i<a; i++){
		scanf("%d",&b);
		c=c+(b*3);
	}
	printf("%d", c);
}*/

/*000#include<stdio.h>
int main(){
	int a, b, d;
	scanf("%d %d", &a, &b);
	if(a%b==0){
		printf("%d", a/b);
	}
	else{
		d=a/b;
		printf("%d", d+1);
	}
}*/

#include<stdio.h>
int main(){
	int a, b, c, d;
	scanf("%d %d",&a, &b);
	c=a>b?a:b;
	d=a<b?a:b;
	for(int i=d; i<=c; i++){
		if(i%2!=0){
		 printf("%d ",i);
		}
	}
}

/*000#include<stdio.h>
int main(){
	int a, b, c=0, d=0;
	scanf("%d",&a);
	for(int i=1; i<=a; i++){
		scanf("%d", &b);
		if(b%2==0){
			c=c+1;
		}
		else{
		d=d+1;}
	}
	if(c==d+1||d==c+1){
		printf("Good");
	}
	else printf("Not Good");
}*/


