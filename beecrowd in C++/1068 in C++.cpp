#include <bits/stdc++.h>
using namespace std;

int main (){
	int i, j, b, contA, contB;
	string s;
	START:
	while(cin >> s){
		b=0;
		contA=contB=0;
		for(i=0;i<s.size(); i++){
			if(!b && s[i]==')'){
				cout << "incorrect\n";
				goto START;
			}else if(s[i]=='('){
				contA++;
				b++;
			}else if(b && s[i]==')'){
				contB++;
				b--;
			}
		}
		if(contA==contB)
			cout << "correct\n";
		else
			cout << "incorrect\n";
	}
	return 0;
}