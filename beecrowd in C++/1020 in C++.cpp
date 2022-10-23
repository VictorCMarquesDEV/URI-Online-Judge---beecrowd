#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, ano, mes, dia;
    scanf("%d ", &N);
    ano=N/365;
    N%=365;
    mes=N/30;
    N%=30;
    dia=N;
    cout << ano << " ano(s)\n";
    cout << mes << " mes(es)\n";
    cout << dia << " dia(s)\n";
}