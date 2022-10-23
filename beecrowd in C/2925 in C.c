#include <stdio.h>
#include <stdlib.h>
#define MAX 100

long long fib[MAX];

void preenche();
long long invert(long long);

int main (){
	long long x;
	preenche();
	while (scanf("%lld", &x) != EOF)
		printf("%lld\n", x == 0 ? 0 : fib[x]);
}

void preenche(){
	long long i;
	fib[0] = 1;
 	for (i = 1; i <= 60; ++i)
		fib[i] = invert(fib[i - 1]) + invert(fib[i - 2]);
}

long long invert(long long x){
	int i;
	char string[MAX] = { 0 };
	i = 0;
	while (x)
		string[i++] = (x % 10) + 48, x /= 10;
	return atoll(string);
}