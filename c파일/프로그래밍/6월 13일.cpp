/*#include<stdio.h>
int main(){
	printf("---------------------\n   �������� v3.0\n---------------------\n (1) ���� �Է�\n (2) wjscp tjdwjr whghl");
}*/

/*#include<stdio.h>
int sum(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}

int main(){
	int a,b;
	char c;
	printf("������� �Է��ϼ���.(��:12 + 4):");
	scanf("%d %c %d",&a, &c, &b);
	switch(c){
		case '+':
			printf("%d %c %d=%d",a,c,b,sum(a,b));
			break;
		case '-':
			printf("%d %c %d = %d",a,c,b,sub(a,b));
			break;
	}
}*/

#include <stdio.h>
int sale(char, int);

int main()
{
   int b, p;
   
   char a;
   printf("�ڽ� ");
   scanf("%c", &a);
   printf("���� ");
   scanf("%d", &b);
   p = sale(a, b);
   printf("���� %d", p);

   return 0;

}
int sale(char a, int b)
{
   int c, p;
      switch(a)
	  {
      case 'A': 
         p = 16000;
         break;
         
      case 'B': 
         p = 12000;
         break;
      case 'C': 
      
         p = 10000;
         break;
   }
   if(b <= 18)
   {
      c = (int)p * 0.8;
   } 
   else if(b <= 14)
   {
      c = (int)p * 0.7;
   } 

   return c;
}
