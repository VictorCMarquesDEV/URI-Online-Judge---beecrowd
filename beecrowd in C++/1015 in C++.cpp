#include <bits/stdc++.h>
using namespace std;
 
int main() {
    float x1, x2, y1, y2, aux1, aux2, d;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    aux1=pow((x2-x1),2);
    aux2=pow((y2-y1),2);
    d=sqrt(aux1+aux2);
    printf("%.4f\n", d);
    return 0;
}