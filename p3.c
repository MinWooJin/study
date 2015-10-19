#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, i, sub;
	float sum, mid, result;

	float data[1000];

	while(1) {
		scanf("%d", &n);
		if (n <= 0) break;

		result = 0;
		sum = 0;

		for(i = 0; i < n; i++) {
			scanf("%f",&data[i]);
			sum += data[i];
		}
		sub = (float)(sum / n) * 100;
		mid = sub / 100;

		for(i = 0; i < n; i++) {
			if (data[i] < mid) {
				result += mid - data[i];
			}
		}

		printf("$%.2f\n", result);

	}
	return 0;
}
