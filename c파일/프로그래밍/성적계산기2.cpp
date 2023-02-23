#include <stdio.h>
#define N 100
#define M 7 
#define LOW 60
int n=0, i=0;

struct stu{
   int bun,k,e,s, so, p, sum;
   float avg;
   char name[20];
};

struct stu A[N];

void PrintMenu(){
    printf("---------------------------------------\n");
    printf("            �������� v3.0\n");
    printf("---------------------------------------\n");
    printf(" (1) ���� �Է� \n");
    printf(" (2) ��ü ���� ��ȸ \n");
    printf(" (3) ���� �˻� \n");
    printf(" (4) ���б� ���� �л� ��ȸ\n");
    printf(" (5) ���� ���� �л� ��ȸ\n");
    printf(" (6) ����\n");
    printf("---------------------------------------\n");
    printf("�޴��� �����ϼ��� : ");
}

void InputScore(){
   int sum=0;
   printf("%d�� �л� ������ �Է��ϼ���\n",n+1);
   printf("�̸� : ");
   scanf("%s", &A[i].name);
   printf("���� : ");
   scanf("%d", &A[i].k);
   printf("����");
   scanf("%d", &A[i].e);
   printf("����");
   scanf("%d", &A[i].s);
   printf("��ȸ");
   scanf("%d", A[i].so);
   printf("���α׷���: ");
   scanf("%d", &A[i].p);
   sum=sum+A[i].k+A[i].e+A[i].so+A[i].p;
   A[i].sum=sum;
   A[i].avg=sum/5;
   printf("�Է¿Ϸ�\n");
   i++;
   n++;
}

void PrintScore(){
   printf("----------------------------------------------------\n");
   printf("��ȣ  �̸�  ����  ����  ����  ��ȸ  ���α׷���  ����\n");
   printf("----------------------------------------------------\n");
   for(int i=0;i<n;i++){
      printf(" %d  %s%5d%7d%7d%7d%8d%9d   %.2f\n", i+1, A[i].name, A[i].k, A[i].k, A[i].e, A[i].s, A[i].so,A[i].p);
   }
}

void SearchScore(){
	int numStu;
	printf("�л� ��ȣ : ");
	scanf("%d",&numStu);
	for(int i=0; i<n;i++){
		if(i+1==numStu){
			printf("----------------------------------------------------\n");
 			printf("��ȣ  �̸�  ����  ����  ����  ��ȸ  ���α׷���  ����\n");
  			printf("----------------------------------------------------\n");
			printf(" %d  %s%5d%7d%7d%7d%8d%9d   %.2f\n", i+1, A[i].name, A[i].k, A[i].k, A[i].e, A[i].s, A[i].so,A[i].p);
			printf("\n");
			break;
		}
	}
}

void GoodStu(){
    int max=0;
    int maxIndex=0;
    for(int i=0;i<n;i++){
        if(max<A[i].sum){
            max=A[i].sum;
            maxIndex=i+1;    
        }    
    }
    printf("%d�� �л��� %d������ ���б� ������Դϴ�. \n",maxIndex,max);
}

void BadStu(){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(LOW>A[i].avg){
            printf("%d���� ��� %.2f������ ���޴���\n",i+1,A[i].avg);
            cnt++;
        }
    }
    if(cnt==0)    printf("���� ���� �л��� �����ϴ�.\n");    
}

int main(){
	int menu;
	while(1){
		PrintMenu();
		scanf("%d",&menu);
		switch(menu){
			case 1: InputScore(); break;
            case 2: PrintScore(); break;
            case 3: SearchScore(); break;
            case 4: GoodStu(); break;
            case 5: BadStu(); break;
            case 6: return 0; break;
            default : printf("�߸��� �Է��Դϴ�\n");
		}
	}
}
