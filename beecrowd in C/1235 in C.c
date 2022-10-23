#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int N, j, tam, mtd;
    char s1[110], s2[110];
    scanf("%d", &N);
    getchar();
    while(N--){
        fgets(s1, 110, stdin);
        tam=strlen(s1)-1;
        mtd=tam/2+tam%2;

        for(j=mtd-1; j>=0; j--)
            s2[mtd-j-1]=s1[j];

        for(j=tam-1; j>=mtd; j--)
            s2[tam-j-1+mtd]=s1[j];
        s2[tam]='\0';
        puts(s2);
    }
}