#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int numMin = INT_MAX;
    for (int x = 0; x * 6 <= n; x++) {
        for (int y = 0; y * 8 <= n; y++) {
            if (x * 6 + y * 8 == n && x + y < numMin) {
                numMin = x + y;
            }
        }
    }
    if (numMin == INT_MIN) cout << -1 << endl;
    else cout << numMin << endl;
    return 0;
}
