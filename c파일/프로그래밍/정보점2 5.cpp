/*#include<stdio.h>
int main(){
	int a,c,b[20]={0,};

	scanf("%d",&a);

	for(int i=0; i<a; i++){
		scanf("%d", &b[i]);
	}

	for(int i=1; i<=6; i++){
		c=0;
		for(int j=0; j<10; j++){
			c=c+(i==b[j]?1:0);
		}
		printf("%d ",c);
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


/*#include <stdio.h>
int main()
{
	int i,count, temp1, temp2, total=0,b ;
	char discount;
	int p_num[11]={0,1,2,3,4,5,6,7,8,9,10};
	scanf("%c",&discount);
	scanf("%d",&count);

	printf("구매물품\n");
	for(i=0; i<count;i++){
			scanf("%d",&b);
			scanf("%d",&p_num[i]);

			switch(b){
				case 1: printf("샌드위치: %d개\n", p_num[i]) ; break;
				case 2: printf("김밥: %d개\n", p_num[i]) ; break;
				case 3: printf("치킨마요덮밥: %d개\n", p_num[i]) ; break;
				case 4: printf("햄버거: %d개\n", p_num[i]) ; break;
				case 5: printf("아이스아메리카노: %d개\n", p_num[i]) ; break; 
				case 6: printf("카페라떼: %d개\n", p_num[i]) ; break;
				case 7: printf("카페모카: %d개\n", p_num[i]) ; break;
				case 8: printf("우유: %d개\n", p_num[i]) ; break;
				case 9: printf("콜라: %d개\n", p_num[i]) ; break;
				case 10: printf("아이스티: %d개\n", p_num[i]) ; break;
			}
	}
	switch(discount){
				case 'A': printf("경소고 학생할인\n"); break; 
				case 'B': printf("경소고 교직원할인\n");break; 
				case 'C': printf("할인대상아님\n");break; 
				} 
}*/

/*#include<stdio.h>
int main(){
	int max=0;
	int a[10]={0,};
	for(int i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0; i<10; i++)
	{
		max=max<a[i]?a[i]:max;
	}
	printf("%d", max);
}*/

/*#include<stdio.h>
int main(){
	int n, num=0, max=0, min=100;
	int a[50];
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n; i++){
		num=num+a[i];
	}
	printf("총점: %d\n",num);
	printf("평균: %.2f\n",(float)num/n);
	for(int i=0; i<n; i++)
	{
		max=max<a[i]?a[i]:max;
	}
	printf("최고점: %d\n",max);
	for(int i=0; i<n; i++)
	{
		min=min>a[i]?a[i]:min;
	}
	printf("최저점: %d",min);
}*/

#include<stdio.h>
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
		for(int j=0; j<b; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
