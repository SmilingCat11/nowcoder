#include <iostream>
using namespace std;

int main() {
    int AminusB, BminusC, AplusB, BplusC;
    cin >> AminusB >> BminusC >> AplusB >> BplusC;
	int a, b1, b2, c; 
    bool res = true;
    if ((AminusB + AplusB) % 2 || (AplusB - AminusB) % 2 || (BminusC + BplusC) % 2 || (BplusC - BminusC) % 2)
        res = false;
    else {
    	a = (AminusB + AplusB) / 2;
    	b1 = (AplusB - AminusB) / 2;
    	b2 = (BminusC + BplusC) / 2;
    	c = (BplusC - BminusC) / 2;
        if (b1 != b2) res = false;
    }
    if (res) printf("%d %d %d\n", a, b1, c);
    else printf("No\n");
    return 0;
}
