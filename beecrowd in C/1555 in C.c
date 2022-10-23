#include <stdio.h>
#include <math.h>

int main (){
	int n, x, y, R, B, C, acum;
	scanf("%d ", &n);
	while(n--){
		scanf("%d %d", &x, &y);
		R=pow((3*x),2)+pow(y,2);
		B=(2*pow(x,2))+pow((5*y),2);
		C=(-100*x) + pow(y,3);
		if(B>R && B>C)
			printf("Beto ganhou\n");
		else if(C>R && C>B)
			printf("Carlos ganhou\n");
		else
			printf("Rafael ganhou\n");
	}
	return 0;
}