/*#include<stdio.h>
int main(){
	int i;
	char a[5]={'k','o','r','e','a'};
	char b[]="KOREA";
	printf("a[5]={");
	for(i=0; i<10; i++)
		printf("%c", a[i]);
	printf("\b}\nb[6]={");
	for(i=0; i<10; i++)
		printf("%c",b[i]);
	printf("\b}\n");
	printf("a���ڿ������:%s\n",a);
	printf("b���ڿ��� ���:%s\n",b);
	return 0;
}*/

#include<stdio.h>
int main(){
	int c=0;
	printf("�ݺ��� ��:");
	scanf("%d", &c);
	int a[c],i,b=0;
	for(i=0; i<c; i++){
		printf("����:");
		scanf("%d", &a[i]);}
	for(i=0; i<c; i++)
		b=b+a[i];
	printf("����:%d ", b);
	b=b/5;
	printf("���:%d", b);
} 
