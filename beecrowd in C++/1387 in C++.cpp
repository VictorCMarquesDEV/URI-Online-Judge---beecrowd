#include <bits/stdc++.h>
using namespace std;

int main (){
    int L, R, acum;
    while(cin >> L >> R && L && R){
        acum=0;
        acum+=(L+R);
        cout << acum << '\n';
    }
    return 0;
}