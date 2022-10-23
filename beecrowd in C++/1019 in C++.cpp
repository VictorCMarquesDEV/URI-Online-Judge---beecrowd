#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, hora, min, seg;
    scanf("%d ", &N);
    hora=N/3600;
    N%=3600;
    min=N/60;
    N%=60;
    seg=N;
    cout << hora << ':' << min << ':' << seg << '\n';
}