/*#include<stdio.h>
int main(){
	int i=1, sum=0;
	while(sum<70){
		sum += i;
		printf("%d %d\n", i, sum);
		i *= 3;
	}
	printf("%d %d", i, sum);
}*/

/*#include<stdio.h>
int main(){
	int a[50]={0,}; 
	int d;
	printf("5자리 수:");
	scanf("%d",&d);
	a[0]=d/10000;
	a[1]=(d%10000)/1000;
	a[2]=(d%1000)/100;
	a[3]=(d%100)/10;
	a[4]=(d%10)/1;
	for(int i=0; i<5; i++){
	printf("%d\n",a[i]);}
}*/

/*#include<stdio.h>
int main(){
	int a[50]={0,};
	int d=1,c,b=1,q=1;
	printf("자리 수:");
	scanf("%d",&c);
	for(int i=1; i<c; i++){
		b=b*10;
	}
	printf("\n%d 수:",b);
	scanf("%d",&d);
	a[0]=d/b;
	for(int i=1; i<c; i++){
		b=b/10;
		a[i]=(d%b)/(b/q);
		b=b/10;
		q=q*10;
	}
	//a[0]=d/b;
//	a[1]=(d%b)/(b/10);
	//a[2]=(d%(b/10))/(b/100);
//	a[3]=(d%(b/100))/(b/1000);
//	a[4]=(d%(b/1000))/(b/b);
//	for(int i=0; i<c; i++){
	printf("%d\n",a[i]);}
}*/

/*#include<stdio.h>
int main(){
	int a[10][10]={0,};
	for(int i=0; i<4; i++){
		for(int j=0; j<5; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	} 
}*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
	int key;
	int a;
	while (1){
	if (_kbhit()) {
	key = _getch();
	if (key == 224 || key == 0) {
		key = _getch();
		switch (key) {
		case 77:
			a++;
			printf("%d ",a);
		break;
		
		case 75:
			a--;
			printf("%d ",a);
		break;
				}
			}
		}
	}
}
