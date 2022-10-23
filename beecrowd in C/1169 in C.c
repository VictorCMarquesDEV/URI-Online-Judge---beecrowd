#include <stdio.h>
#include <math.h>

int main (){
	long long int n, i, num, res;
	double acum;
	scanf("%lld", &n);
	while (n--){
		scanf("%lld", &num);
		acum=pow(2.0,num);
		res=floor(acum/12000);
		printf("%lld kg\n", res);
	}
	return 0;
}