#include <bits/stdc++.h>
using namespace std;

int main (){
    int q, D1, D2, N1, N2, num, den, num2, den2;
    char S1, S2, S;
    cin >> q;
    while(q--){
        cin >> N1 >> S1 >> D1 >> S >> N2 >> S2 >> D2;
        if(S=='+'){
            num=(N1*D2 + N2*D1);
            den=(D1*D2);
        }else{
            if(S=='-'){
                num=(N1*D2 - N2*D1);
                den=(D1*D2);
                if(num<0&&den>0){
                    cout << '-' << abs(num) << '/' << abs(den) << " = -" << abs(num/__gcd(num,den)) << '/' << abs(den/__gcd(num,den)) << '\n';
                    continue;
                }else{
                    if(num>0&&den<0){
                        cout << abs(num) << '/-' << abs(den) << " = " << abs(num/__gcd(num,den)) << '/-' << abs(den/__gcd(num,den)) << '\n';
                        continue;
                    }
                }
            }else{
                if(S=='*'){
                    num=(N1*N2);
                    den=(D1*D2);
                }else{
                    num=(N1*D2);
                    den=(N2*D1);
                }
            }
        }
        cout << num << '/' << den << " = " << num/__gcd(num,den) << '/' << den/__gcd(num,den) << '\n';
    }
    return 0;
}