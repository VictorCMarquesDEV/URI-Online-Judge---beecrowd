#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double A,B,C,M;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    A*=2;
    B*=3;
    C*=5;
    M=(A+B+C)/10;
    printf("MEDIA = %.1lf\n", M);
    return 0;
}