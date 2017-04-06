#include <bits/stdc++.h> 
using namespace std;
const int maxn = 10000;
int main()
{
    int n;
    cin >> n;
	vector<int> dp(maxn);
    if (n == 0) cout << 0 << endl;
    else {
        dp[0] = 0;
        dp[1] = 1 % n;
        dp[2] = 10 % n;
        for (int i = 3; i < maxn; i++)
            dp[i] = (dp[2] * dp[i-1])%n;
        int sum = 0;
        for (int i = 1; i < maxn; i++) {
            sum += dp[i];
            if (sum % n == 0) {
                cout << i << endl;
                break;
            }
        }
    }
    
}

