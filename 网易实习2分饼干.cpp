#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
//	freopen("test.in", "r", stdin);
//	freopen("test.out", "w", stdout);
    string s;
    cin >> s;
    int n;
    cin >> n;
    int len = s.size();
    vector <int> digit;
    long long k = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'X') digit.push_back(i);
        else k += (s[i] - '0') * pow(10, len - 1 - i);
    }    
//cout << k << endl;
    int res = 0;
    int x_len = digit.size();
    for (int i = 0; i < pow(10, x_len); i++) {
        long long x = 0;
        int num = i;
        for (int j = x_len - 1; j >= 0; j--) {
            x += (num % 10) * pow(10, len - 1 - digit[j]);
            num /= 10;
//			printf("x = %d\n");
        }
        if ((k + x) % n == 0) res++;
//		printf("k + x = %d, n = %d, res = %d\n", k+x, n, res);
    }
    cout << res << endl;
    return 0;
}
