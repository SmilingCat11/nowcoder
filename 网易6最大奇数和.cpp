#include <iostream>
#include <cmath>
using namespace std;
int maxOdd(int );
int main(){
    int N;
    cin >> N;
    long res = 0;
    int n = log2(N);
    res = (pow(4, n) - 1) / 3;
//	cout << n << " " << res <<endl;
    for (int i = pow(2, n); i <= N; i++)
        res += maxOdd(i);
	cout << res << endl;
    return 0;
}

int maxOdd(int n)
{
	while (n % 2 == 0)
		n /= 2;
	return n;
}
