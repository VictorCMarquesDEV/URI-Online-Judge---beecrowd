#include <bits/stdc++.h>
using namespace std;

vector <vector <int> > adj;
vector<int> vis;
int v, imp;

void pathR(int a, int p){
	vis [a]= 1;
	for(int i=0; i<v; i++){
		if(adj[a][i]==1){
			printf("%*s", 2*p, "");
			if(vis[i]){
				printf("%d-%d\n", a, i);
				imp=true;
			}
			else{
				printf("%d-%d pathR(G,%d)\n", a, i, i);
				imp=true;
				pathR(i, p+1);
			}
		}
	}
}

int main(){
	int aux=1, n, e, a, b;
	cin >> n;
	while(n--){
		cin >> v >> e;
		adj = vector<vector<int> >(v, vector<int> (v,0));
		vis = vector<int> (v,0);
		while(e--){
			cin >> a >> b;
			adj[a][b] =1;
		}
		printf("Caso %d:\n", aux);
		for(int i=0; i<v; i++){
			imp=false;
			if(!vis[i]){
				pathR(i,1);
				if(imp)
					printf("\n");
			}
		}
		aux++;
	}
}