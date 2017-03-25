#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> dp(M + 1, INT_MAX - 1);
    dp[N] = 0;
    for (int i = N; i <= M; i++) {
        if (dp[i] == INT_MAX - 1) continue;
        for (int j = 2; j * j <= i; j++) {
            if (i + j <= M && i % j == 0) {
                dp[i + j] = min(dp[i + j], dp[i] + 1);
                if (i + i / j <= M) dp[i + i / j] = min(dp[i + i / j], dp[i] + 1);
            }
        }
    }
    if (dp[M] == INT_MAX - 1) cout << -1 << endl;
    else cout << dp[M] << endl;
    return 0;
}