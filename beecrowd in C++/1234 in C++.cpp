#include <bits/stdc++.h>
using namespace std;

int main (){
    int i, aux;
    char s[51];
    while (cin.getline(s,51)){
        aux=1;
        for(i=0; i<strlen(s);i++){
            if(s[i]==' ')
                printf("%c", s[i]);
            else if(s[i]>='a' && s[i]<='z' && aux==1){
                printf("%c", s[i]-32);
                aux=0;
            }
            else if(s[i]>='A' && s[i]<='Z' && aux==1){
                printf("%c", s[i]);
                aux=0;
            }
            else if(s[i]>='a' && s[i]<='z' && aux==0){
                printf("%c", s[i]);
                aux=1;
            }
            else if(s[i]>='A' && s[i]<='Z' && aux==0){
                printf("%c", s[i]+32);
                aux=1;
            }
            else if(s[i]=='\n')
                break;
        }
        printf("\n");
    }
    return 0;
}