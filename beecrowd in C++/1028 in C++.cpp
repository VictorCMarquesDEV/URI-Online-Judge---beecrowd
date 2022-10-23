#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, f1, f2, mdc;
	cin >> n;
	while(n--){
		cin >> f1 >> f2;
		mdc=__gcd(f1,f2);
		cout << mdc << '\n';
	}
	return 0;
}