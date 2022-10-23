#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t, vm;
    float l, ln;
    scanf("%d", &t);
    scanf("%d", &vm);
    l=t*vm;
    ln=l/12.0;
    printf("%.3f\n", ln);
    return 0;
}