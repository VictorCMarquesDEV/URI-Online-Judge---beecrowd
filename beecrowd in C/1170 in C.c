#include <stdio.h>

int main (){
	int n, cont;
	float cmd;
	scanf("%d ", &n);
	while(n--){
		cont =0;
		scanf("%f ", &cmd);
		while (cmd>1){
			cmd/=2;
			cont++;
		}
		printf("%d dias\n", cont);
	}
	return 0;
}