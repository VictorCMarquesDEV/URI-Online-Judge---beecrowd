#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    char letra, v[260];
    while(fgets(v, 260, stdin)!=NULL){
        for(i=0; i<strlen(v); i++){
            letra=v[i];
            if (letra == '@')
                printf("a");
            else if (letra == '&')
                printf("e");
            else if (letra == '!')
                printf("i");
            else if (letra == '*')
                printf("o");
            else if (letra == '#')
                printf("u");
            else
                printf("%c", letra);
        }
    }
    printf("\n");
    return 0;
}