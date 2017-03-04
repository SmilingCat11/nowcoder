//
#include <stdio.h>
#define maxn 105
int a[maxn][maxn] = {};
int main()
{
	int N, D;
	scanf("%d%d", &N, &D);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++){
			scanf("%d", &a[i][j]);
		}
	}

	int max = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
			for (int k = 0; k < D; k++) {
				if ( j + D - 1 < N ) { // 注意边界条件，开还是闭 
					sum1 += a[i][j+k];
					sum2 += a[j+k][i];
				}
				if ( i + D - 1 < N && j + D - 1 < N )
					sum3 += a[i+k][j+k];
				if ( i + D - 1 < N && j - D + 1 >= 0 )
					sum4 += a[i+k][j-k];
			}
			if (sum1 > max) max = sum1;
			if (sum2 > max) max = sum2;
			if (sum3 > max) max = sum3;
			if (sum4 > max) max = sum4;
		}
	}
	printf("%d\n", max);
	return 0;
}
