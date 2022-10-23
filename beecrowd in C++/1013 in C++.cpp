#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B, C, MaiorAB, MaiorABC;
    scanf("%d %d %d", &A, &B, &C);
    MaiorAB = (A+B+abs(A-B))/2;
    MaiorABC = (MaiorAB+C+abs(MaiorAB-C))/2;
    printf("%d eh o maior\n", MaiorAB>MaiorABC?MaiorAB:MaiorABC);
    return 0;
}