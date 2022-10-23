#include <stdio.h>
#include<math.h>
 
int gcd(int a, int b){
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main(){
	int a, b, c, mdc, maior, menor1, menor2, pit;
	while(scanf("%d %d %d", &a, &b, &c)!=EOF){
		mdc=gcd(a,gcd(b,c));
		maior=a;
		menor1=b;
		menor2=c;
		if(b>a && b>c){
			maior=b;
			menor1=a;
		} else if(c>a && c>b){
			maior=c;
			menor2=a;
		}
		pit=(pow(menor1, 2)+pow(menor2, 2));
		if(pow(maior,2)==pit){
			if(mdc==1)
				printf("tripla pitagorica primitiva\n");
			else
				printf("tripla pitagorica\n");
		}
		else
			printf("tripla\n");
	} 
	return 0;
}