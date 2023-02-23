/*#include<stdio.h>
int main(){
	char b[5];
	for(int i=1; i<=5; i++){
		scanf("%s", &b[i]);
	}
	for(int i=5; i>=1; i--){
		printf("%c ", b[i]);
	}
} */

/*#include<stdio.h>

int main(){
  
   char b[5];
   for(int i=1; i<=5; i++){
      scanf("%s", &b[i]);
   }
   for(int i=5; i>=1; i--){
      printf("%c ", b[i]);
   }
} */

/*#include<stdio.h>
int main()
{
char a[30];
gets(a);
printf("%s",a);
}*/

/*#include<stdio.h>
#include <string.h>
int main()
{
	char a[50];
	int b;
	printf("문자열 입력:");
	scanf("%s",&a);
	b=strlen(a);
	for(int i=0; i<b; i++){
		printf("%c",a[i]);
	}
}*/

/*#include<stdio.h>
int main(){
	int a[5]={0,};
	for(int i=0; i<5; i++)
		printf(" -");
	printf("\n|");
	for(int i=0; i<5; i++)
		printf("%d|", a[i]);
	printf("\n");
	for(int i=0; i<5; i++)
	printf(" -");
}*/

#include<stdio.h>
int main(){ 
	int b;
	printf("반복수:");
	scanf("%d", &b);
	int a[b]={0,};
	for(int i=0; i<b; i++)
		printf(" -");
	printf("\n|");
	for(int i=0; i<b; i++)
		printf("%d|", a[i]);
	printf("\n");
	for(int i=0; i<b; i++)
	printf(" -");
}

