#include <bits/stdc++.h>
using namespace std;

int main (){
    int N, tam, acum, i;
    char v[1110];
    cin >> N;
    while(N--){
        acum=0;
        scanf("%s", v);
        for(i=0; i<strlen(v); i++){
            if (v[i]=='1')
                acum+=2;
            else if (v[i]=='2' || v[i]=='3' || v[i]=='5')
                acum+=5;
            else if (v[i]=='4')
                acum+=4;
            else if (v[i]=='6' || v[i]=='9' || v[i]=='0')
                acum+=6;
            else if (v[i]=='7')
                acum+=3;
            else if (v[i]=='8')
                acum+=7;
        }
        cout << acum << " leds\n";
    }
    return 0;
}