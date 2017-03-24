#include <iostream>
using namespace std;

int rev(int );

int main(){
    int x, y;
    cin >> x >> y;
    cout << rev(rev(x) + rev(y)) << endl;
    return 0;
}

int rev(int num) {
    int res = 0;
    while (num) {
        res = res * 10 + num % 10;
        num /= 10;
    }
    return res;
}
