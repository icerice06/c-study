#include<stdio.h>
#define N 100
#define M 7

void PrintMenu();
void InputScore();
void PrintScore();
void SearchScore();
void GoodStu();
void BadStu();

int point[N][M];
char className[M][20]={"����","����","��ȸ","����","���α׷���","����","���"};
int n=0;
 
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
        }
    }
}

void PrintMenu(){
    printf("--------------------------\n");
    printf("       ��������         \n");
    printf("--------------------------\n");
    printf("(1) ���� �Է�\n");
    printf("(2) ��ü ���� ��ȸ\n");
    printf("(3) ���� �˻�\n");
    printf("(4) ���б� ���� �л� ��ȸ\n");
    printf("(5) ���� ���� �л� ��ȸ\n");
    printf("(6) ����\n");
    printf("--------------------------\n");
    printf("�޴��� �����ϼ���: ");
}

void InputScore(){
    printf("%d�� �л� ������ �Է��ϼ���.\n",n+1);
    int i,sum=0;
    for(i=0;i<M-2;i++){
        printf("%s: ",className[i]);
        scanf("%d",&point[n][i]);
        sum+=point[n][i];
    }
    point[n][i]=sum;
    point[n][i+1]=sum/5;
    printf("�Է¿Ϸ�\n");
    n++;
}

void PrintScore(){
    for(int i=0;i<n;i++){
        printf("%d�� ",i+1);
        for(int j=0;j<M;j++){
            printf("%s : %d ",className[j],point[i][j]);
        }
    }
}

void SearchScore(){
    int num;
    scanf("%d", &num);
    for(int i=0;i<n;i++){
        if(num==i+1){
            for(int j=0;j<M;j++){
                printf("%s : %d ",className[j],point[i][j]);
            }
            printf("\n");
            break;
        }
    }
}

void GoodStu(){
    int max=0;
    int maxindex=0;
    for(int i=0;i<n;i++){
        if(max<point[i][5]){
            max=point[i][5];
            maxindex=i+1;
        }
    }
    printf("%d �л��� %d������ ���б� ������Դϴ�.\n",maxindex,max);
}

void BadStu(){
    for(int i=0;i<n;i++){
        if(point[i][6]<60){
            printf("%d���� ���%d������ ���޴���\n",i+1,point[i][6]);
        }
    }
}
