#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char n[31];
    double s, v, total;
    scanf("%30[^\n]s", n);
    scanf("%lf", &s);
    scanf("%lf", &v);
    total=s+(v*0.15);
    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}