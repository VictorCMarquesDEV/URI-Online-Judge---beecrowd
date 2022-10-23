#include <bits/stdc++.h>
using namespace std;

int main (){
	int n, i;
	while (cin >> n, n){
		deque <int> v;
		for(i=1; i<=n; i++)
			v.push_back(i);
		for(i=0; i<(n-1); i++){
			if(!i)
				cout << "Discarded cards: " << v.front();
			else
				cout << ", " << v.front();
			v.pop_front();
			v.push_back(v.front());
			v.pop_front();
		}
		cout << "\nRemaining card: " << v[0] << '\n';
	}
	return 0;
}