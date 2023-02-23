/*nclude<stdio.h>
int main(){
	int i, a=0;
	for(i=1; i<=5; i++){
		 
		for(a=1; a<=i; a++){
		printf("*");		
		}
	printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int i, a,n;
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		for(a=i; a<=n; a++){
		printf("*");		
		}
	printf("\n");
	}
}*/


/*#include<stdio.h>
int main(){
	int c=1,n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		for(int a=i; a<n; a++){
		printf(" ");		
		}	
		for(int b=0; b<c; b++)
		{
		printf("*");
		}
		c+=2;
	printf("\n");
	}
	c=1;
	for(int i=1; i<=n; i++)
	{
		for(int a=0; a<i; a++){
		printf(" ");		
		}	
		for(int b=c+2; b<n*2; b++)
		{
		printf("*");
		}
		c+=2;
	printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int i, a, b, c=1, d;
	scanf("%d", &d);
	for(i=1; i<=d; i++)
	{
		for(a=1; a<i; a++){
		printf(" ");
		}
		for(b=c; b<d*2; b++)
		{
		printf("*");
		}
		c=c+2;
	printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int i, a, b, c=1;
	for(i=1; i<=5; i++)
	{
		for(a=1; a<i; a++){
		printf(" ");
		}
		for(b=c; b<10; b++)
		{
		printf("*");
		}
		c+=2;
	printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int n, a, b;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		for(a=1; a<i; a++){
		printf(" ");
		}
		for(b=a; b<n+1; b++)
		{
		printf("*");
		}
	printf("\n");
	}
}*/
