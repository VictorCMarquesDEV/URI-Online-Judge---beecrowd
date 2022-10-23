#include <bits/stdc++.h>
using namespace std;

int main (){
	int i, j, tam; 
	char N, D[200];
	cin >> N >> D;
	while(N!='0'){
		tam=strlen(D);
		for(i=0; i<tam; i++)
			if(D[i]==N){
				for(j=i;j<tam;j++)
					D[j]=D[j+1];
				D[j-1]=0;
				tam--;
				i--;
			}
		for(i=0; i<tam-1; i++){
			if(D[i]=='0'){
				for(j=i;j<tam;j++)
					D[j]=D[j+1];
				D[j-1]=0;
				tam--;
				i--;
			} else
				break;
		}
		if(tam==0){
			D[0]='0';
			D[1]='\0';
		}
		printf("%s\n", D);
		cin >> N >> D;
	}
	return 0;
}