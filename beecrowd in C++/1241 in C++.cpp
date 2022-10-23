#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, i;
	string x, y;
	scanf("%d ", &n);
	while(n--){
		cin >> x >> y;
		if(y.size()>x.size()){
			printf("nao encaixa\n");
			continue;
		}else if(x.find(y,x.size()-y.size())!=-1)
			printf("encaixa\n");
		else
			printf("nao encaixa\n");
		}	
	return 0;
}