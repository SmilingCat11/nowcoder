// 2017网易游戏雷火盘古实习生笔试 
#include <stdio.h> 
#include <string.h>
#define maxn 10010
char s[maxn] = {};
char s_item[maxn] = {};
int s_num[maxn] = {};
int main()
{
	scanf("%s", s);
	int item = 0;
	for (int i = 0; i < strlen(s);) {
		for (int j = i; ;j++) { 
			if(s[i] != s[j]) { s_item[item] = s[i]; i = j; item++; break; }
			s_num[item]++;
		}
	}
	for(int i = 0; i < strlen(s_item); i++) {
		printf("%d", s_num[i]);
		printf("%c", s_item[i]);
	}
	printf("\n");
}
