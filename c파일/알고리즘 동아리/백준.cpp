/*#include<stdio.h>
int main(){
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c ,&b);
	if(c=='*'){
		printf("%d",a*b);
	}
	if(c=='+'){
		printf("%d",a+b);
	}
}*/

/*#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	for(int i = 0; i < N/4; i++){
        printf("long ");
        if(i == N/4 - 1){
		printf("int");
    }
}
}*/

/*#include<stdio.h>
int main(){
	char a[1000];
	int i=0;
	scanf("%s", a);
	while(a[i]!='\0'){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
		else if(a[i]>='A'&&a[i]<='Z'){
			a[i]+=32;
		}
		i++;
	}
	printf("%s", a);
}*/

#include<stdio.h>
#include<string.h>
int main(){
	int l,n;
	char a[1000];
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		
		scanf("%s",a);
		l=strlen(a);
		
		if(l>=6&&l<=9) printf("yes\n");
		else printf("no\n");
	}
}


