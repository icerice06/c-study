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
#include<stdlib.h> //��
#include<time.h>
#include<windows.h> //�� ��ٸ��� �Լ� 

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

/*#define _CRT_SECURE_NO_WARNINGS // Ȥ�� localtime_s�� ���
#include <stdio.h>
#include <time.h>

int main() {
    time_t timer;
    struct tm* t;
    timer = time(NULL); // 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����Ͽ� ��������� ��
    t = localtime(&timer); // �������� ���� ����ü�� �ֱ�
    
    printf("���н� Ÿ�� (Unix Time): %lld ��\n\n", timer); 
    printf("���� ��: %d\n", t->tm_year + 1900);
    printf("���� ��: %d\n", t->tm_mon + 1);
    printf("���� ��: %d\n", t->tm_mday);
    printf("���� ��: %d\n", t->tm_hour);
    printf("���� ��: %d\n", t->tm_min);
    printf("���� ��: %d\n", t->tm_sec);
    printf("���� ����: %d\n", t->tm_wday); // ��=0, ��=1, ȭ=2, ��=3, ��=4, ��=5, ��=6
    printf("���� �� ��° ��: %d\n", t->tm_yday); // 1�� 1���� 0, 1�� 2���� 1
    printf("����Ÿ�� ���� ����: %d\n", t->tm_isdst); // �ǽ� ���̸� ���, �̽ǽø� 0, �ǽ� ������ ������ ����
    
    return 0;
}*/

/*#include<stdio.h>
int main
{
	printf("1");
printf("���������������������������������������������������������������������������������������\n");
printf("��                                                                                                                                                                        ��\n");
printf("��                                                                                                                                                                        ��\n");
printf("��                                                                                                                                                                        ��\n");
printf("��                                                                                                                                                                        ��\n");
printf("��                                                                                                                                                                        ��\n");
printf("��                                                                                                                                                                        ��\n");
printf("��                                                                                                                                                                        ��\n");
printf("��                                                                                                                                                                        ��\n");
printf("��                                                                                                                                                                        ��\n");
printf("��                                                                                                                                                                        ��\n");
printf("��                                                             �������������                                                                                   ��\n");
printf("��                                                             ������������������                                                                         ��\n");
printf("��                                                           �������������������                                                                         ��\n");
printf("��                                                     ������������������������                                                                     ��\n");
printf("��                                                     �������������������������                                                                   ��\n");
printf("��                                                   ���������������������������                                                                 ��\n");
printf("��                                             ��������������������������������                                                             ��\n");
printf("��                                             ��������������������������������                                                             ��\n");
printf("��                                           �����    ����������            ������������                                                             ��\n");
printf("��                                           ���        ���������              �������������                                                           ��\n");
printf("��                                           ���        �������                    ������������                                                           ��\n");
printf("��                                         ���                                            �����������                                                           ��\n");
printf("��                                         ��                                                  �����������                                                       ��\n");
printf("��                                         ��                                                  �����������                                                       ��\n");
printf("��                                         ��                                                  �����������                                                       ��\n");
printf("��                                         ��                                                  �����������                                                       ��\n");
printf("��                                         ��                                                  �����������                                                       ��\n");
printf("��                                         ��                                                  �����������                                                       ��\n");
printf("��                                         ��                                                        ����������                                                   ��\n");
printf("��                                         ��                                                      �����������                                                   ��\n");
printf("��                                       ���                    ��                                  ����������                                                   ��\n");
printf("��                                       ��                ��    ��                                �����������                                                   ��\n");
printf("��                                       �����          ��  ���        ����                    ����������                                                   ��\n");
printf("��                                       �����������  �����������                �����          ��                                                   ��\n");
printf("��                                       �����������         �������                 ����    ��      ��                                                   ��\n");
printf("��                                         ��ۡۡ��ۡۡ��       ��ۡۡ��ۡۡ��             ����  ���      ��                                                   ��\n");
printf("��                                       ���              ��                                      ��      ��      ���                                                   ��\n");
printf("��                                       ��                ��                                              ��    ���                                                     ��\n");
printf("��                                       ��                ��                                      ���      ����                                                       ��\n");
printf("��                                       ��                ��                                  ����    ����                                                           ��\n");
printf("��                                       ���              ��                                ������  ����                                                           ��\n");
printf("��                                         ���            ��                                ������  ����                                                           ��\n");
printf("��                                           ���          ��          ��                  �������  ����                                                           ��\n");
printf("��                                             ���        ��            ��                �������  ����                                                           ��\n");
printf("��                                               ���      ��    ������              ��  ������  ���                                                             ��\n");
printf("��                                                 ��      ��    ���                      ������    ���                                                             ��\n");
printf("��                                                 ��      ������                    ��  ����      ���                                                             ��\n");
printf("��                                                 �������������                ����        ���                                                             ��\n");
printf("��                                                 ���������������         �����         ����                                                           ��\n");
printf("��                                                 ����������������     �����       �������                                                         ��\n");
printf("��                                                   ���                    ���   �����       ���        ���                                                       ��\n");
printf("��                                                     ��  ��������   ��������       ���            ���                                                     ��\n");
printf("��                                                     ����������   ������         ���                ���                                                   ��\n");
printf("��                                                 ����������������            ���                    ���                                                 ��\n");
printf("��                                               ���������������              ���                        ���                                               ��\n");
printf("��                                             ���      �����������            ���                            ���                                             ��\n");
printf("��                                           ���        ����������            ���                                ���                                           ��\n");
printf("��                                         ���            ��ۡ�����            ���                                    ���                                         ��\n");
printf("��                                       ���              ��ۡ�����          ���                                        ���                                       ��\n");
printf("��                                     ���                ���ۡۡۡ��������                                            ���                                     ��\n");
printf("��                                   ���                    ��ۡۡۡ�������                                                ���                                   ��\n");
printf("��                                 ���                      ��ۡۡ�ۡۡۡۡ��                                                    ���                                 ��\n");
printf("��                               ���                        ���ۡۡۡۡۡ��                                                        ���                               ��\n");
printf("��                             ���                            ��������                                                            ���                             ��\n");
printf("��                           ���                                                                                                          ���                           ��\n");
printf("��                           ��                                                                                                              ��                           ��\n");
printf("��                           ��                                                                                                              ��                           ��\n");
printf("��                           ��                                                                                                              ��                           ��\n");
printf("��                           ��                                                                                                              ��                           ��\n");
printf("��                           ��                                                                                                              ��                           ��\n");
printf("���������������������������������������������������������������������������������������\n");
}*/

#include<stdio.h>

int main()
{
	int a=4;
  FILE *fp;

  fp = fopen("test.txt", "w");

  fprintf(fp,"%d",a);
  fputc('4', fp);
  fprintf(fp,"��");

  fclose(fp);

  return 0;
}
