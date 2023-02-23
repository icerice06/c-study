/*#include<stdio.h>
int sum(int,int);

int main(){
	int a, b, c;
	scanf("%d %d",&a, &b);
	c=sum(a,b);
	printf("%d", c);
}

int sum(int a,int b){
	int c=a+b;
	return c;
}*/


/*#include<stdio.h>
void swap(int *, int *);

int main(){
	int su1 = 25, su2 = 30;
	printf("	su1 : %d su2 : %d\n",su1,su2);
	swap(&su1,&su2);
	printf("	su1 : %d su2 : %d\n",su1,su2);
	return 0;
}

void swap(int* su1, int* su2){
	int temp;
	temp = *su1;
	*su1 = *su2;
	*su2 = temp;
	printf("main ¹Û su1 : %d su2 : %d\n",*su1,*su2);
}*/

/*#include<stdio.h>
#include<stdlib.h> 
#include<time.h>

int main(){
	int r;
	srand(time(NULL));
	
	for(int i=1;i<=5;i++){
		r=(rand()%6)+1;
		printf("%dÈ¸ %d\n",i,r);
	}
}*/

#include<stdio.h>
int sum(int);
int main(){
	int n=5,result;
	result = sum(5);
	printf("%d",result);
}
int sum(int su){
	if(su==1)return 1;
	else return su+sum(su-1);
}
