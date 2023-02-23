#include <stdio.h>

#define g 9.8

int main()//g*t*t/2
{
	char a[100][100];
	int t,s,n=1;
	scanf("%d",&t);
	for(int i=0;i<100;i++)
	{
		s=(g*t*t-0.5)/20;
		for(int j=0;j<100;j++)
		{
			
			if(j==s)
			{
				a[i][j]='*';
			}
			else a[i][j]=' '; 		//老胶+副胶=老府胶 
		}
		
	}
	a[0][0]='x';
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			printf("%c",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
