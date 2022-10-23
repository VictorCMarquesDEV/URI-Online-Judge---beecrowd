#include <bits/stdc++.h>
using namespace std;

int main (){
	long long int n, i, num, res;
	double acum;
	cin >> n;
	while (n--){
		cin >> num;
		acum=pow(2.0,num);
		res=floor(acum/12000);
		printf("%lld kg\n", res);
	}
	return 0;
}