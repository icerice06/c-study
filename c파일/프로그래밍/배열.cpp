#include<stdio.h>							//
int main()									//
{											//
	int i;									//변수 선언 
	int num[5] = {0,};						//num 배열 선언 배열의 크기는 5 {0,0,0,0,0}와 {0,}은 같다 
	int score[] = {90,80,70,60,50};			//score 대열 선언 크기를 선언하지않고도 가능 {90,80,70,60,50}선언 
	for(i=0 ; i<3; i++)						//반복문 0에서 시작 2까지 3번반복					배열방num[0,0,0,0,0] 
		num[i]=1;							//num의 크기를 i로 선언 num 에 1을 3번 넣는다 
	printf("num[5]={");						//출력 }nscore[5]={									배열방num[1,1,1,0,0] 
	for(i=0; i<10; i++)						//반목문 0에서 시작 9까지 10번 반복 
		printf("%d,",num[i]);				//출력 [1,1,1,0,0]이지만 10번이라 뒤에 쓰래기 값이 생김 
	printf("\b}nscore[5]={");				//지우고 }nscore[5]={ 출력 
	for(i=0; i<10; i++)						//반목문 0에서 시작 9까지 10번 반복 
		printf("%d,",score[i]);				//출력 [90,80,70,60,50]이지만 10번이라 뒤에 쓰래기 값이 생김 
	printf("\b}\n");						//지우고 열바꿈 
	return 0;								//
}
