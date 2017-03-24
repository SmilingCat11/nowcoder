// test1_2.cpp -- –Ú¡–∫Õ
 #include <stdio.h>
int main()
{
	int N, L;
	scanf("%d%d", &N, &L);

	for (int i = L; i <= 100; i++) {
		int start = N / i - i/2;
		while (start * i + (i-1)*i/2 - N < 0) {
//			printf("start = %d\n", start);
			start++;
		}
		if (start * i + (i-1)*i/2 - N == 0) {
			printf("%d", start);
			for (int k = 1; k < i; k++) {
				printf(" %d", start+k);
			}
			printf("\n");
			break;
		}
        if (i == 100) printf("No\n");
	}
	return 0;
}
