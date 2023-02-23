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
char className[M][20]={"국어","영어","사회","과학","프로그래밍","총점","평균"};
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
    printf("       성적계산기         \n");
    printf("--------------------------\n");
    printf("(1) 성적 입력\n");
    printf("(2) 전체 성적 조회\n");
    printf("(3) 성적 검색\n");
    printf("(4) 장학금 수여 학생 조회\n");
    printf("(5) 진급 누락 학생 조회\n");
    printf("(6) 종료\n");
    printf("--------------------------\n");
    printf("메뉴를 선택하세요: ");
}

void InputScore(){
    printf("%d번 학생 성적을 입력하세요.\n",n+1);
    int i,sum=0;
    for(i=0;i<M-2;i++){
        printf("%s: ",className[i]);
        scanf("%d",&point[n][i]);
        sum+=point[n][i];
    }
    point[n][i]=sum;
    point[n][i+1]=sum/5;
    printf("입력완료\n");
    n++;
}

void PrintScore(){
    for(int i=0;i<n;i++){
        printf("%d번 ",i+1);
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
    printf("%d 학생이 %d점으로 장학금 대상자입니다.\n",maxindex,max);
}

void BadStu(){
    for(int i=0;i<n;i++){
        if(point[i][6]<60){
            printf("%d번이 평균%d점으로 진급누락\n",i+1,point[i][6]);
        }
    }
}
