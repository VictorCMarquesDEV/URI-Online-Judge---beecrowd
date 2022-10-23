#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A1, B1, A2, B2;
    float X1, X2, T;
    scanf("%d %d %f", &A1, &B1, &X1);
    scanf("%d %d %f", &A2, &B2, &X2);
    T=(B1*X1)+(B2*X2);
    printf("VALOR A PAGAR: R$ %.2f\n", T);
    return 0;
}