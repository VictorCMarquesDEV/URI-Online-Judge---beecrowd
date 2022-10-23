#include <bits/stdc++.h>
using namespace std;

int main(){
	char *x, *y, xv[100];
	x = xv + 20;
	y = xv + 40;
	int tamX, aux, ver, tamY, cont, acum, i;
	scanf("%s", x);
	scanf("%s", y);
	while (*x!='0' || *y!='0'){
		ver=cont=0;
		tamX = strlen(x);
		tamY = strlen(y);
		aux=abs(tamX-tamY);
		i=tamX;
		if(tamY>tamX)
			i=tamY;
		memset(x - 8, '0', 8);
		memset(y - 8, '0', 8);
		
		for(; i; i--, tamX--, tamY--){
			acum=x[tamX-1]-'0'+y[tamY-1]-'0'+ver;
			if(acum>9){
				cont++;
				ver=1;
			}
			else if(acum<=9)
				ver=0;
		}
		
		if(!cont)
			printf("No carry operation.\n");
		else if(cont==1)
			printf("%d carry operation.\n", cont);
		else
			printf("%d carry operations.\n", cont);
		
		scanf("%s", x);
		scanf("%s", y);
	}
	return 0;
}