#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    while (k--) {
        int tmp = A[0];
        for (int i = 0; i < n - 1; i++) {
            A[i] = A[i] + A[i+1];
            if (A[i] >= 100) A[i] = A[i] % 100;
        }
        A[n-1] = tmp + A[n-1];
        if (A[n-1] >= 100) A[n-1] = A[n-1] % 100;
    }
    cout << A[0];
    for (int i = 1; i < n; i++)
        printf(" %d", A[i]);
    cout << endl;
  
    return 0;
}
