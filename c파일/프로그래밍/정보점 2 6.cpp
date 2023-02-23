/*#include <stdio.h>
int main()
{
	int i,count, temp1, total=0 ;
	float  temp2;
	char discount;
	int p_num[11]={0,0,0,0,0,0,0,0,0,0,0};
	int p_cost[11]={0,2550,2000,3500,2500,2500,2500,2500,550,500,550};
	scanf("%c",&discount);
	scanf("%d",&count);
	
	
	
	
	printf("구매물품\n");
	for(i=1; i<=count;i++){
		scanf("%d",&temp1);
		scanf("%d",&p_num[i]);
		if (p_num[i]){
			switch(temp1){
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
		total=total+p_cost[temp1]*p_num[i];
	}
	printf("구매금액: %d원\n",total); 
	switch(discount){
            case 'A': printf("경소고 학생할인\n"); printf("지급금액: %.0f0원",(total-total*0.10)/10); break; 
            case 'B': printf("경소고 교직원할인\n");printf("지급금액: %.0f0원",(total-total*0.05)/10);break; 
            case 'C': printf("할인대상아님\n %");printf("지급금액: %.0f0원",(total-total)/10);break; 
            }
   
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
}

/*#include<stdio.h>
int main(){
	int a,c,d,q=0;
	int b[100][100]={0,};
	scanf("%d %d",&a,&c);
	
	for(int i=0; i<a; i++){
		for(int j=0; j<c; j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i=0; i<a; i++){
		for(int j=0; j<c; j++){
			for(int f=0; f<=i; f++){
				d=d+b[i-f][j];
			}
			printf("%d ",d);
		}
		d=0;
		printf("\n");
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
