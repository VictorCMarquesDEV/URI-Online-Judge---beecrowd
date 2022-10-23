#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i, cont, tam;
    string str;
    char strV;
    scanf("%d ", &N);
    while(N--){
        getline(cin, str);
        tam = str.size();
        for(cont=0, strV='a'; strV<='z'; strV++){
        	for(i=0; i<tam; i++)
        		if(strV==str[i]){
        			cont++;
        			break;
        		}
        }
	    if(cont<13)
			cout << "frase mal elaborada" << '\n';
		else{
			if(cont<26)
				cout << "frase quase completa" << '\n';
			else
				cout << "frase completa" << '\n';
		}
		str.clear();
    }
    return 0;
}