#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, D, i, tam;
    string str;
    scanf("%d ", &N);
    while(N--){
        cin >> str;
        cin >> D;
        tam=str.size();
        for(i=0; i<tam; i++){
        	str[i]-=D;
        	if(str[i]<65)
        		str[i]+=26;
		}
		cout << str << '\n';
    }
    return 0;
}