#include <bits/stdc++.h>
using namespace std;

int main (){
    int i, N;
    string s;
    cin >> N;
    while (N--){
        cin >> s;
        for(i=0; i<s.size();i++){
            if(s[i]=='o' && s[i+1]>='a' && s[i+1]<='z' && s[i+2]=='e'){
                cout << "1\n";
                break;
            }
            else if(s[i]>='a' && s[i]<='z' && s[i+1]=='n' && s[i+2]=='e'){
                cout << "1\n";
                break;
            }
            else if(s[i]=='o' && s[i+1]=='n' && s[i+2]>='a' && s[i+2]<='z'){
                cout << "1\n";
                break;
            }
            else if(s[i]=='t' && s[i+1]>='a' && s[i+1]<='z' && s[i+2]=='o'){
                cout << "2\n";
                break;
            }
            else if(s[i]>='a' && s[i]<='z' && s[i+1]=='w' && s[i+2]=='o'){
                cout << "2\n";
                break;
            }
            else if(s[i]=='t' && s[i+1]=='w' && s[i+2]>='a' && s[i+2]<='z'){
                cout << "2\n";
                break;
            }
            else{
                cout << "3\n";
                break;
            }
        }
    }
    return 0;
}