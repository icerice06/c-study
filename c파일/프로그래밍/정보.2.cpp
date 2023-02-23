/*#include<stdio.h>
int main(){
	int i, b,c=0,a=0;
	scanf("%d",&b);
	for(i=1; i<=b; i++){
		for(a=1; a<=i; a++){
		c++;
		printf("%d ",c);		
		}
	printf("\n");
	}
}*/

#include<stdio.h>
int main(){
	int n,a=0, b=2;
	scanf("%d",& n);
	for(int i=0; i<n; i++){
		if(b>1){
			for(int q=0; q<n; q++){
			a++;
			printf("%d ",a);
			}
			b=0;
			}
		else{
			a=a+n+1;
			for(int q=0; q<n; q++){
			a--;
			printf("%d ",a);
			}
			b=2;
			a=a+n-1;
			}
			
		printf("\n");
	}
}

/*#include<stdio.h>
int main(){
	for(int i=2; i<=9; i++){
		for(int q=1; q<=9; q++){
			printf("%d * %d = %d\n",i,q,i*q);
		}
	}	
}*/

/*#include<stdio.h>
int main(){
	int i, a, b,c=0;
	scanf("%d", &b);
	for(i=1; i<=b; i++){
		for(a=i; a<=b; a++){
			c=b-a+1;
		printf("%d ",c);		
		}
	printf("\n");
	}
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	char b[a];
	for(int i=1; i<=a; i++){
		scanf("%d", &b[i]);
	}
	for(int i=1; i<=a; i++){
		printf("%d ", b[i]);
	}
}*/

/*#include<stdio.h>
int main(){
	int a=0;
	scanf("%d", &a);
	char b[a];
	for(int i=1; i<=a; i++){
		scanf("%d", &b[i]);
	}
	for(int i=a; i>=1; i--){
		printf("%d ", b[i]);
	}
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	char b[50];
	for(int i=1; i<=a; i++){
		scanf("%s", &b[i]);
	}
	for(int i=1; i<=a; i++){
		printf("%c", b[i]);
	}
}*/
