#include<stdio.h>
int main(){
	int a,c,d=0,i,max,g=1;
	while(g){
	printf("-------------------\n�������� v1.0\n-------------------\n");
	printf("���� ����� : ");
	scanf("%d",&a);
	for(i=1; i<=a; i++){
		printf("-------------------\n%d��° ������ ���� : ", i);
		scanf("%d",&c);
		max=max>c?max:c;
		d+=c;
	}
	i-=1;
	printf("\n-------------------\n�� %d ������ ������ �Է¹޾ҽ��ϴ�.",i);
	printf("\n����: %d",d);
	printf("\n���: %d",d/i);
	printf("\n�ְ���: %d",max);
	printf("\n�ٽ� ������ �Է��Ͻðڽ��ϱ�(1 : ���, 0 : ����) : ");
	scanf("%d", &g);
}
}
