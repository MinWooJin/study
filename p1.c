#include <stdio.h>

int main()
{
	while(1) {
		int i, j, result, count, ii = 0, n = 0;
		scanf("%d %d",&i,&j);
		result = 0;
		for(ii = j; ii > i; ii--) {
			count = 1;
			for(n = ii; n != 1;) {
				if (n % 2 == 0) n = n/2;
				else n = 3*n+1;
				count++;
			}
			if (result < count) result = count;
		}
		printf("%d %d %d\n", i, j, result);
	}
	return 0;
}

    
