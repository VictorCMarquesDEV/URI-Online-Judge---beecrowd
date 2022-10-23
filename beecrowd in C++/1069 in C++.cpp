#include <bits/stdc++.h>
using namespace std;

int main (){
	string s;
	int N, i, aux, contA, contB;
	cin >> N;
	getchar();
	while(N--){
		contA=contB=0;
		getline(cin, s);		
		for(i=0,aux=0; aux<s.size();aux++)
			if(s[aux]=='<'){
				i=aux;
				break;
			}
		
		for(;i<s.size();i++){
			if(s[i]=='<')
				contA++;
			else if(s[i]=='>' && contA>contB)
				contB++;
		}
		cout << min(contA, contB) << '\n';
	}
	return 0;
}