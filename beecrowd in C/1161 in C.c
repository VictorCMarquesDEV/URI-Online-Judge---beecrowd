#include <stdio.h>
 
int main (){
	long long int m, n, acum1, acum2, acumT, i;
	while (scanf("%lld %lld", &m, &n)!=EOF){
		acum1=acum2=1;
		if(m || n){
			for (i=1; i<=m; i++)
				acum1*=i;
			for (i=1; i<=n; i++)
				acum2*=i;
		} else if (!m)
			acum1=1;
		else if (!n)
			acum2=1;
		acumT=acum1+acum2;
		printf("%lld\n", acumT);
	}
}