#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N = 0, K = 0;
	scanf("%d %d", &N, &K);

	int* arr = malloc(N * sizeof(int));
	int* sum = malloc((N-K) * sizeof(int));
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	int max = 0;
	for (int i = 0; i + K <= N; i++) {
		for (int j = 0; j < K; j++)
			sum[i] += arr[j];
		max = ((sum[i] > max) ? sum[i] : max);
	}

	printf("%d", max);
}