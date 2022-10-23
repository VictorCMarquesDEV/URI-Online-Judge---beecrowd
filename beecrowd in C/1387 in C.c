#include <stdio.h>
 
int main (){
    int L, R, acum;
    while(scanf("%d %d ", &L, &R) && L && R){
        acum=0;
        acum+=(L+R);
        printf("%d\n", acum);
    }
    return 0;
}