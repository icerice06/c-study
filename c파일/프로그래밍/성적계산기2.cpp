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
    printf("            성적계산기 v3.0\n");
    printf("---------------------------------------\n");
    printf(" (1) 성적 입력 \n");
    printf(" (2) 전체 성적 조회 \n");
    printf(" (3) 성적 검색 \n");
    printf(" (4) 장학금 수여 학생 조회\n");
    printf(" (5) 진급 누락 학생 조회\n");
    printf(" (6) 종료\n");
    printf("---------------------------------------\n");
    printf("메뉴를 선택하세요 : ");
}

void InputScore(){
   int sum=0;
   printf("%d번 학생 성적을 입력하세요\n",n+1);
   printf("이름 : ");
   scanf("%s", &A[i].name);
   printf("국어 : ");
   scanf("%d", &A[i].k);
   printf("영어");
   scanf("%d", &A[i].e);
   printf("과학");
   scanf("%d", &A[i].s);
   printf("사회");
   scanf("%d", A[i].so);
   printf("프로그래밍: ");
   scanf("%d", &A[i].p);
   sum=sum+A[i].k+A[i].e+A[i].so+A[i].p;
   A[i].sum=sum;
   A[i].avg=sum/5;
   printf("입력완료\n");
   i++;
   n++;
}

void PrintScore(){
   printf("----------------------------------------------------\n");
   printf("번호  이름  국어  영어  과학  사회  프로그래밍  총점\n");
   printf("----------------------------------------------------\n");
   for(int i=0;i<n;i++){
      printf(" %d  %s%5d%7d%7d%7d%8d%9d   %.2f\n", i+1, A[i].name, A[i].k, A[i].k, A[i].e, A[i].s, A[i].so,A[i].p);
   }
}

void SearchScore(){
	int numStu;
	printf("학생 번호 : ");
	scanf("%d",&numStu);
	for(int i=0; i<n;i++){
		if(i+1==numStu){
			printf("----------------------------------------------------\n");
 			printf("번호  이름  국어  영어  과학  사회  프로그래밍  총점\n");
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
    printf("%d번 학생이 %d점으로 장학금 대상자입니다. \n",maxIndex,max);
}

void BadStu(){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(LOW>A[i].avg){
            printf("%d번이 평균 %.2f점으로 진급누락\n",i+1,A[i].avg);
            cnt++;
        }
    }
    if(cnt==0)    printf("진급 누락 학생이 없습니다.\n");    
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
            default : printf("잘못된 입력입니다\n");
		}
	}
}
