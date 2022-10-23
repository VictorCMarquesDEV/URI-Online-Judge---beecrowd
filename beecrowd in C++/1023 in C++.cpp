#include <bits/stdc++.h>
using namespace std;

int main (){
    int N, i, j, x=1, q, c, cm, acumq, acumc, v[300];
    double qm;
    bool bo = false;
    while(scanf("%d", &N) && N){
        if(bo)
            cout << '\n';
        bo=true;
        acumq=acumc=0;
        memset(v, 0, sizeof(v));
        
        for(i=0; i<N; i++){
            scanf("%d %d", &q, &c);
            acumq+=q;
            acumc+=c;
            v[c/q]+=q;
        }
        cout << "Cidade# " << x << ":\n";
        x++;

        for(i=0, j=0; i<300; i++){
            if(v[i]>0){
                if(j)
                    cout << ' ';
                cout << v[i] << '-' << i;
                j++;
            }
        }
        cout << '\n';
        cm=(int)(modf((double)acumc/acumq, &qm)*100);
        if(cm < 10) 
            printf("Consumo medio: %d.0%d m3.\n", (int)qm, (int)cm);
        else 
            printf("Consumo medio: %d.%d m3.\n", (int)qm, (int)cm);
    }
    return 0;
}