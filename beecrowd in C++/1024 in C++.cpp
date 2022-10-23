#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, i, tam;
    char M[1002], aux;
    scanf("%d ", &N);
    while(N--){
        fgets(M, 1002, stdin);
        tam=strlen(M)-1;
        for(i=0; i<tam; i++)
            if(M[i]>='a'&&M[i]<='z' || M[i]>='A'&&M[i]<='Z')
                M[i]=(M[i]+3);
        for(i=0; i<(tam/2);i++){
            aux=M[i];
            M[i]=M[(tam-1)-i];
            M[(tam-1)-i]=aux;
        }
        for(i=tam/2; i<tam; i++)
            M[i]=(M[i]-1);
        for(i=0; i<tam;i++)
            printf("%c", M[i]);
        printf("\n");
    }
    return 0;
}