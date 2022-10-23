#include <bits/stdc++.h>
using namespace std;
#define MAX 10002

int main()
{
	int i, j, n, contpar, x, y;
	char pe[MAX];
	int tam_pe[MAX];
	while(scanf("%d", &n) != EOF)
	{
		contpar = 0;
		x = MAX;
		y = MAX;
		for(i = 0; i < n; i++)
		{
			scanf("%d %c", &tam_pe[i], &pe[i]);
			for (j = 0; j < i; j++)
			{
				if (tam_pe[i] == tam_pe[j] && ((pe[i] == 'E' && pe[j] == 'D') || (pe[i]== 'D' && pe[j] == 'E')))
				{
					contpar++;
					pe[i] = x++;
					tam_pe[i] = y++;
					pe[j] = x++;
					tam_pe[j] = y++;
				}
			}
		}
		printf("%d\n", contpar);
	}
	return 0;
}