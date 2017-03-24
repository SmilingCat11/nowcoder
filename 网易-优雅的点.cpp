#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int Rsq;
	cin >> Rsq;
	int cnt = 0;
	int R = sqrt(Rsq);
//	cout << R << endl;
//	if (R * R == Rsq) cnt++;
	for (int i = 1; i <= R; i++) {
		for (int j = R - i; j <= R; j++) {
			if (i * i + j * j == Rsq) {
				cnt++;
//				cout << i << " " << j << endl; 
			}
		}
	}
	cout << 4 * cnt << endl;
	return 0;
}
