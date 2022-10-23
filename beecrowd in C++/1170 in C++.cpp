#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, cont;
	float cmd;
	cin >> n;
	while(n--){
		cont =0;
		cin >> cmd;
		while (cmd>1){
			cmd/=2;
			cont++;
		}
		cout << cont << " dias\n";
	}
    return 0;	
}