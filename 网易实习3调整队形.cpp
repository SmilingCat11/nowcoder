#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> b_num;
    vector<int> g_num;
    int b_sum = 0;
    int g_sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'G') { g_num.push_back(i); g_sum += i; }
        if (s[i] == 'B') { b_num.push_back(i); b_sum += i; }
    }
    int res;
    int b_l = 0, b_r = 0;
    for (int i = 0; i < b_num.size(); i++) {
        b_l += i;
        b_r += s.size() - 1 - i;
    }
    res = min(b_sum - b_l, b_r - b_sum);
    
    int g_l = 0, g_r = 0;
    for (int i = 0; i < g_num.size(); i++) {
        g_l += i;
        g_r += s.size() - 1 - i;
    }
    res = min(res, g_r - g_sum);
    res = min(res, g_sum - g_l);
    
    cout << res << endl;
    return 0;
}
