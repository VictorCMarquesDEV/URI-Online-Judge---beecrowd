#include <bits/stdc++.h>
using namespace std;

int main(){
    double N, aux;
    int moeda, nota;
    while(cin>>N){
        cout << "NOTAS:\n";
        aux=N*100;
        nota=(int)N/100;
        cout << nota << " nota(s) de R$ 100.00\n";
        nota=((int)N%100)/50;
        cout << nota << " nota(s) de R$ 50.00\n";
        nota=(((int)N%100)%50)/20;
        cout << nota << " nota(s) de R$ 20.00\n";
        nota=((((int)N%100)%50)%20)/10;
        cout << nota << " nota(s) de R$ 10.00\n";
        nota=(((((int)N%100)%50)%20)%10)/5;
        cout << nota << " nota(s) de R$ 5.00\n";
        nota=((((((int)N%100)%50)%20)%10)%5)/2;
        cout << nota << " nota(s) de R$ 2.00\n";
        N=(((((((int)N%100)%50)%20)%10)%5)%2)*100;
        N=N+((int)aux%100);
        cout << "MOEDAS:\n";
        moeda=(int)N/100;
        cout << moeda << " moeda(s) de R$ 1.00\n";
        moeda=((int)N%100)/50;
        cout << moeda<< " moeda(s) de R$ 0.50\n";
        moeda=(((int)N%100)%50)/25;
        cout << moeda << " moeda(s) de R$ 0.25\n";
        moeda=((((int)N%100)%50)%25)/10;
        cout << moeda << " moeda(s) de R$ 0.10\n";
        moeda=(((((int)N%100)%50)%25)%10)/5;
        cout << moeda << " moeda(s) de R$ 0.05\n";
        moeda=((((((int)N%100)%50)%25)%10)%5)/1;
        cout << moeda << " moeda(s) de R$ 0.01\n";
    }
    return 0;
}