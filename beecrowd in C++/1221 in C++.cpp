#include <bits/stdc++.h>
using namespace std;

int isPrimo(int n){

	if(n<5 || n%2==0 || n%3==0)
		return (n==2||n==3);
	int maxP = sqrt(n)+2;
	for(int p=5; p<maxP; p+=6)
		if(n%p==0||n%(p+2)==0)
			return 0;
	return 1;
}

int main (){
	int n, ver;
	long long int x;
	scanf("%d ", &n);
	while(n--){
		scanf("%lld ", &x);
		ver=isPrimo(x);
		if(ver)
			cout << "Prime\n";
		else
			cout << "Not Prime\n";
	}
	return 0;
}