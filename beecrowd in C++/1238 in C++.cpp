#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i, ref, tam1, tam2, tam3, aux;
    string str1, str2, str3;
    scanf("%d ", &N);
    while(N--){
        cin >> str1 >> str2;
        tam1=str1.size();
        tam2=str2.size();
        if(tam1>tam2){
        	aux=tam2;
        	ref=1;
    	}
        else{
        	aux=tam1;
        	ref=0;
    	}
		for(i=0; i<aux; i++){
			str3+=str1[i];
			str3+=str2[i];
		}
		if(!ref)
			for(; i<tam2;i++)
				str3+=str2[i];
		else
			for(;i<tam1; i++)
				str3+=str1[i];
		cout<<str3 << '\n';
    	str3.clear();
    }
    return 0;
}