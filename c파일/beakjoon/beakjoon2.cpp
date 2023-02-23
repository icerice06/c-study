/*#include <stdio.h>
int main(){
	int r1,s;
	scanf("%d %d",&r1,&s);
	printf("%d",s*2-r1);
}*/

/*#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	if(a>=90){
		printf("A");
	}
	else if(a>=80){
		printf("B");
	}
	else if(a>=70){
		printf("C");
	}
	else if(a>=60){
		printf("D");
	}
	else printf("F");
}*/

/*#include<stdio.h>
int main(){
	int a,b=0;
	for(int i=0; i<5; i++){
		scanf("%d",&a);
		if(a<40){
			b=b+40;
		}
		else b=b+a;
	}
	printf("%d",b/5);
}*/

/*#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d",&d);
	c=c+d%60;
	b=b+d/60;
	if(c>=60){
		b=b+c/60;
		c=c%60;
	}
	if(b>=60){
		a=a+b/60;
		b=b%60;
	}
	if(a>=24){
		a=a%24;
	}
	printf("%d %d %d",a,b,c);
}*/

#include <stdio.h>
#include <string.h>

int main(){
    
    int a=1, n, sum=0;
    char s[80];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        sum=0;
        a=1;
        scanf("%s", s);
        for(int j=0; j<strlen(s); j++){
            if(s[j]=='O'){
                sum+=a;
                a++;
            }
            if(s[j]=='X'){
            	a=1;
			}
        } 
        printf("%d\n", sum);
    }
}

#include <stdio.h>
#include <string.h>

int main() {
	
	int t,r;
	char s[20];
	scanf("%d", &t);
	for(int i=0; i<t; i++){		
		scanf("%d %s", &r, &s);
		for(int j=0; j < strlen(s); j++){
			for(int m=0; m<r; m++) printf("%c", s[j]);
		}
		printf("\n");
	}

}

