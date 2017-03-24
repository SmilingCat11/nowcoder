// test1_1.cpp -- DNAºÏ³É
#include <stdio.h> 
#include <string.h>
#define maxn 60
int main()
{
	char s1[maxn], s2[maxn];
	scanf("%s%s",s1, s2);
	int cnt = 0;
	if (strlen(s1) == strlen(s2)) {
		for (int i = 0; i < strlen(s1); i++) {
			if (s1[i] == 'A' && s2[i] != 'T') cnt++;
			if (s1[i] == 'C' && s2[i] != 'G') cnt++;
			if (s1[i] == 'G' && s2[i] != 'C') cnt++;
			if (s1[i] == 'T' && s2[i] != 'A') cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
