#include<stdio.h>
int main(){
	int a,c=0;
	scanf("%d",&a);						//반목할수 받기 
	for(int i=0; i<a; i++){				//반복 
		if(i%2!=1){						//1줄은>  2줄은<  3줄은>  4줄은<  짝홀로 정리가능 
			for(int j=0; j<a; j++){		//홀수줄 반복 
				c++;					//>>>방향 이라서 ++ 
				printf("%d ",c);        //무튼 프린트 
			}
		}
		else{ 							//엘스
			c+=a;						//줄어들기 위해서 c+=a; 이리도 가능 
				for(int j=0; j<a; j++){ //짝수줄 반복 
					printf("%d ",c);    //무튼 프린트 
					c--;				//<<<방향 이라서-- 
				}
			c+=a;						//다시 지그제그를 위한 무튼 이거 
		}
		printf("\n");					//줄바꿈 
	}
}

