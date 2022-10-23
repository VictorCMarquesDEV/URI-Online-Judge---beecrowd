#include <bits/stdc++.h>
using namespace std;

int main(){
    char uni[10][30] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete" ,"oito", "nove"};
    char dez[10][30] = {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
    char cen[9][30] = {"vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa", "cem"};
    char cen2[9][30] = {"cento", "duzentos" ,"trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos" ,"oitocentos", "novecentos"};
    int n, aux;

    while (scanf("%d", &n) != EOF){
        aux=0;
        if(n>=10000)
            aux=1;
        if(n>=100000){
            if(n<100999)
                cout << "cem";
            else
                cout << cen2 [(n/100000)-1];
            n%=100000;
            if(!n){
                cout << " mil\n";
                continue;
            }else{
                if(n<1000){
                    if(n%100 && n>100)
                        cout << " mil ";
                    else
                        cout << " mil e ";
                }
                else
                    cout << " e ";
            }
        }
        if(n>=20000){
            cout << cen[(n/10000)-2];
            n%=10000;
            if(!n){
                cout << " mil\n";
                continue;
            }else{
                if(n<1000){
                    if(n%100 && n>100)
                        cout << " mil ";
                    else
                        cout << " mil e ";
                }
                else
                    cout << " e ";
            }
        }
        if (n>=10000){
            cout << dez[(n/1000)%10];
            n%=1000;
            if(!n){
                cout << " mil\n";
                continue;
            }else{
                if(n<1000){
                    if(n%100 && n>100)
                        cout << " mil ";
                    else
                        cout << " mil e ";
                }
                else
                    cout << " e ";
            }
        }
        if (n>=1000){
            if(n>=2000 || aux)
                cout << uni[(n/1000)] << ' ';
            n%=1000;
            if(!n){
                cout << "mil\n";
                continue;
            }
            else {
                if(n<100 || (n<1000 && n%100==0))
                    cout << "mil e ";
                else
                    cout << "mil ";
            }
        }
        if(n>=100){
            if(n==100)
                cout << "cem";
            else
                cout << cen2[(n/100)-1];
            n%=100;
            if(!n){
                cout << '\n';
                continue;
            }
            else
                cout << " e ";
        }
        if(n>=20){
            cout << cen[(n/10)-2];
            n%=10;
            if(!n){
                cout << '\n';
                continue;
            } else 
                cout << " e ";
        }
        if(n>=10){
            cout << dez[n%10] << '\n';
            continue;
        }
        if(n<10){
            cout << uni[n] << '\n';
            continue;
        }
    }
}