/*#include <stdio.h>
#include <conio.h>
#include <windows.h>

int pan[20][20];
int main()
{
	int x = 0, y = 0;
	pan[x][y] = 1;
	int key;
	int i = 0;

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			printf("%d ", pan[i][j]);
		}
		printf("\n");
	}

	while (1) {
		if (_kbhit()) {
			key = _getch();
			if (key == 224 || key == 0) {
				key = _getch();
				switch (key) {
				case 72:
					if (x == 0) break;
					system("cls");
					pan[x][y] = 0;
					pan[x-1][y] = 1;
					x--;
					for (int i = 0; i < 20; i++) {
						for (int j = 0; j < 20; j++) {
							printf("%d ", pan[i][j]);
						}
						printf("\n");
					}
					break;
				case 75:
					if (y == 0) break;
					system("cls");
					pan[x][y] = 0;
					pan[x][y - 1] = 1;
					y--;
					for (int i = 0; i < 20; i++) {
						for (int j = 0; j < 20; j++) {
							printf("%d ", pan[i][j]);
						}
						printf("\n");
					}
					break;
				case 77:
					if (y == 9) break;
					system("cls");
					pan[x][y] = 0;
					pan[x][y+1] = 1;
					y++;
					for (int i = 0; i < 20; i++) {
						for (int j = 0; j < 20; j++) {
							printf("%d ", pan[i][j]);
						}
						printf("\n");
					}
					break;
				case 80:
					if (x == 9) break;
					system("cls");
					pan[x][y] = 0;
					pan[x + 1][y] = 1;
					x++;
					for (int i = 0; i < 20; i++) {
						for (int j = 0; j < 20; j++) {
							printf("%d ", pan[i][j]);
						}
						printf("\n");
					}
					break;
				}
			}

		}

	}
}*/

#include<stdio.h>
#include<stdlib.h> //랜
#include<time.h>
#include<windows.h> //초 기다리기 함수 

using namespace std;

int main(){
	int a,b;
	while(1){
		b=rand()%10;
		a=rand()%2;
		printf(" %d",a);
		if(b>8){
			printf("\n");
		}
		Sleep(1);
	}
}

/*#define _CRT_SECURE_NO_WARNINGS // 혹은 localtime_s를 사용
#include <stdio.h>
#include <time.h>

int main() {
    time_t timer;
    struct tm* t;
    timer = time(NULL); // 1970년 1월 1일 0시 0분 0초부터 시작하여 현재까지의 초
    t = localtime(&timer); // 포맷팅을 위해 구조체에 넣기
    
    printf("유닉스 타임 (Unix Time): %lld 초\n\n", timer); 
    printf("현재 년: %d\n", t->tm_year + 1900);
    printf("현재 월: %d\n", t->tm_mon + 1);
    printf("현재 일: %d\n", t->tm_mday);
    printf("현재 시: %d\n", t->tm_hour);
    printf("현재 분: %d\n", t->tm_min);
    printf("현재 초: %d\n", t->tm_sec);
    printf("현재 요일: %d\n", t->tm_wday); // 일=0, 월=1, 화=2, 수=3, 목=4, 금=5, 토=6
    printf("올해 몇 번째 날: %d\n", t->tm_yday); // 1월 1일은 0, 1월 2일은 1
    printf("서머타임 적용 여부: %d\n", t->tm_isdst); // 실시 중이면 양수, 미실시면 0, 실시 정보가 없으면 음수
    
    return 0;
}*/

/*#include<stdio.h>
int main
{
	printf("1");
printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
printf("■                                                                                                                                                                        ■\n");
printf("■                                                                                                                                                                        ■\n");
printf("■                                                                                                                                                                        ■\n");
printf("■                                                                                                                                                                        ■\n");
printf("■                                                                                                                                                                        ■\n");
printf("■                                                                                                                                                                        ■\n");
printf("■                                                                                                                                                                        ■\n");
printf("■                                                                                                                                                                        ■\n");
printf("■                                                                                                                                                                        ■\n");
printf("■                                                                                                                                                                        ■\n");
printf("■                                                             ■■■■■■■■■■■■                                                                                   ■\n");
printf("■                                                             ■□□□□□□□□□□■■■■■■                                                                         ■\n");
printf("■                                                           ■■□□□□□□□□□□□□□□□■                                                                         ■\n");
printf("■                                                     ■■■■□□□□□□□□□□□□□□□□■■■                                                                     ■\n");
printf("■                                                     ■□□□□□□□□□□□□□□□□□□□□□■■                                                                   ■\n");
printf("■                                                   ■■□□□□□□□□□□□□□□□□□□□□□□■■                                                                 ■\n");
printf("■                                             ■■■■□□□□□□□□□□□□□□□□□□□□□□□□■■■                                                             ■\n");
printf("■                                             ■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■                                                             ■\n");
printf("■                                           ■■□□    □□□□□□□□□            □□□□□□□□□□■                                                             ■\n");
printf("■                                           ■□        □□□□□□□□              □□□□□□□□□□■■                                                           ■\n");
printf("■                                           ■□        □□□□□□                    □□□□□□□□□□■                                                           ■\n");
printf("■                                         ■■                                            □□□□□□□□□■                                                           ■\n");
printf("■                                         ■                                                  □□□□□□□□■■                                                       ■\n");
printf("■                                         ■                                                  □□□□□□□□■■                                                       ■\n");
printf("■                                         ■                                                  □□□□□□□□□■                                                       ■\n");
printf("■                                         ■                                                  □□□□□□□□□■                                                       ■\n");
printf("■                                         ■                                                  □□□□□□□□□■                                                       ■\n");
printf("■                                         ■                                                  □□□□□□□□□■                                                       ■\n");
printf("■                                         ■                                                        □□□□□□■■■                                                   ■\n");
printf("■                                         ■                                                      □□□□□□□□□■                                                   ■\n");
printf("■                                       ■■                    □                                  □□□□□□□□■                                                   ■\n");
printf("■                                       ■                □    □                                □□□□□□□□□■                                                   ■\n");
printf("■                                       ■□□□          □  □□        □□□                    □□□□□□□□■                                                   ■\n");
printf("■                                       ■□□□□□□□□□  □□□□□□□□□□                □□□□          ■                                                   ■\n");
printf("■                                       ■■■■■■■■■□         ■■■■■■                 □□□    ■      ■                                                   ■\n");
printf("■                                         ■○○■■○○■■       ■○○■■○○■■             □□□  ■■      ■                                                   ■\n");
printf("■                                       ■■              ■                                      □      ■      ■■                                                   ■\n");
printf("■                                       ■                ■                                              ■    ■■                                                     ■\n");
printf("■                                       ■                ■                                      □□      ■■■                                                       ■\n");
printf("■                                       ■                ■                                  □□□    ■■■                                                           ■\n");
printf("■                                       ■■              ■                                □□□□□  □□■                                                           ■\n");
printf("■                                         ■■            ■                                □□□□□  □□■                                                           ■\n");
printf("■                                           ■■          ■          ■                  □□□□□□  □□■                                                           ■\n");
printf("■                                             ■■        ■            ■                □□□□□□  □■■                                                           ■\n");
printf("■                                               ■■      ■    ■■■■■              □  □□□□□  □■                                                             ■\n");
printf("■                                                 ■      ■    ■■                      □□□■■    □■                                                             ■\n");
printf("■                                                 ■      ■■■■■                    □  □■■      □■                                                             ■\n");
printf("■                                                 ■□□□□□□□□□□□                □■■        □■                                                             ■\n");
printf("■                                                 ■□□□□□□□□□□□□□         □□■■         □■■                                                           ■\n");
printf("■                                                 ■■□■■■■■■■■■■□□     □□■■       ■■■■■■                                                         ■\n");
printf("■                                                   ■■                    □□   □□■■       ■■        ■■                                                       ■\n");
printf("■                                                     ■  □□□□□□□   □□□□□■■       ■■            ■■                                                     ■\n");
printf("■                                                     ■□□□□□□□□   □□■■■         ■■                ■■                                                   ■\n");
printf("■                                                 ■■■□□□□□□□□□■■■            ■■                    ■■                                                 ■\n");
printf("■                                               ■■■■■□□□□□□□□■              ■■                        ■■                                               ■\n");
printf("■                                             ■■      ■□□□□□□□■■            ■■                            ■■                                             ■\n");
printf("■                                           ■■        ■■■■■■■■■            ■■                                ■■                                           ■\n");
printf("■                                         ■■            ■○□□□□□            ■■                                    ■■                                         ■\n");
printf("■                                       ■■              ■○□□□□□          ■■                                        ■■                                       ■\n");
printf("■                                     ■■                ■■○○○□□□□□□■■                                            ■■                                     ■\n");
printf("■                                   ■■                    ■○○○□□□□□■■                                                ■■                                   ■\n");
printf("■                                 ■■                      ■○○■○○○○■■                                                    ■■                                 ■\n");
printf("■                               ■■                        ■■○○○○○■■                                                        ■■                               ■\n");
printf("■                             ■■                            ■■■■■■■                                                            ■■                             ■\n");
printf("■                           ■■                                                                                                          ■■                           ■\n");
printf("■                           ■                                                                                                              ■                           ■\n");
printf("■                           ■                                                                                                              ■                           ■\n");
printf("■                           ■                                                                                                              ■                           ■\n");
printf("■                           ■                                                                                                              ■                           ■\n");
printf("■                           ■                                                                                                              ■                           ■\n");
printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}*/

#include<stdio.h>

int main()
{
	int a=4;
  FILE *fp;

  fp = fopen("test.txt", "w");

  fprintf(fp,"%d",a);
  fputc('4', fp);
  fprintf(fp,"아");

  fclose(fp);

  return 0;
}
