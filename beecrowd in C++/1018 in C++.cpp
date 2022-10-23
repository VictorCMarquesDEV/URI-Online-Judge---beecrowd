#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, aux, i, cont100=0, cont50=0, cont20=0, cont10=0, cont5=0, cont2=0, cont1=0;
    scanf("%d", &A);
    aux=A;
    cont100=A/100;
    A-=(cont100*100);
    cont50=A/50;
    A-=(cont50*50);
    cont20=A/20;
    A-=(cont20*20);
    cont10=A/10;
    A-=(cont10*10);
    cont5=A/5;
    A-=(cont5*5);
    cont2=A/2;
    A-=(cont2*2);
    cont1=A/1;
    printf("%d\n", aux);
    printf("%d nota(s) de R$ 100,00\n", cont100);
    printf("%d nota(s) de R$ 50,00\n", cont50);
    printf("%d nota(s) de R$ 20,00\n", cont20);
    printf("%d nota(s) de R$ 10,00\n", cont10);
    printf("%d nota(s) de R$ 5,00\n", cont5);
    printf("%d nota(s) de R$ 2,00\n", cont2);
    printf("%d nota(s) de R$ 1,00\n", cont1);
    return 0;
}