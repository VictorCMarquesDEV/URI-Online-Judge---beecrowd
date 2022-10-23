#include <stdio.h>

int main (){
	int x, y;
	while(scanf("%d %d ", &x, &y)!=EOF)
		printf("%d\n", x*2*y);
	return 0;
}