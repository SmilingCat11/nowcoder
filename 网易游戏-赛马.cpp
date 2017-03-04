//
#include <stdio.h> 
#include <math.h>
int main()
{
	int N;
	scanf("%d", &N);
	double en = N - 1 +pow(0.5, N-1);
	printf("%.4lf\n", en);
	return 0;
}
