#include <bits/stdc++.h>
using namespace std;

int main (){
	long long int x, y, res;
	while(scanf("%lld %lld ", &x, &y)!=EOF)
		printf("%lld\n", x>y?x-y:y-x);
	return 0;
}