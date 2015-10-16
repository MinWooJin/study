#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n, i, j, ii, jj;
	int field = 0;
    char data[101];
    char result[102][102];

    while(1) {
	    scanf("%d %d\n", &m, &n);
		if (m == 0 || n == 0) break;
		field++;

		for(i = 1; i <= m; i++)
			for(j = 1; j <= n; j++)
				result[i][j] = '0';

		for(i = 1; i <= m; i++) {
			scanf("%s",data);
			for(j = 1; j <= n; j++) {
				if (data[j-1] == '*') {
					for (ii = i -1; ii <= i + 1; ii++)
						for (jj = j -1; jj <= j + 1; jj++)
							if (result[ii][jj] != '*')
								result[ii][jj]++;
					result[i][j] = '*';
				}
			}
		}

		printf("Field #%d:\n", field);
		for(i = 1; i <= m; i++) {
			for (j = 1; j <= n; j++)
				printf("%c",result[i][j]);
			printf("\n");
		}
	}

	return 0;
}
