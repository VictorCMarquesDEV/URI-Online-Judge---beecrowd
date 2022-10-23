#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double A, B, M;
    scanf ("%lf", &A);
    scanf ("%lf", &B);
    A *= 3.5;
    B *= 7.5;
    M = (A+B)/11;
    printf ("MEDIA = %.5lf\n", M);
    return 0;
}