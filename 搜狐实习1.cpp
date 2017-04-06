#include <bits/stdc++.h> 
using namespace std;

void dfs(const vector<int>& nums, vector<int>& tmp, int target, int cur) 
{
    if (target < 0) return;
    else if (0 == target) {
        cout << tmp[0];
        for (int i = 1; i < tmp.size(); i++)
            cout << " " << tmp[i];
        cout << endl;
    }
    else for (int i = cur; i < nums.size(); i++) {
        if (i == cur || nums[i] != nums[i-1]) {
			tmp.push_back(nums[i]);
	        dfs(nums, tmp, target - nums[i], i);
    	    tmp.pop_back();
		}
    }
    
}

int main()
{
    int target;
    cin >> target;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sort(nums.begin(), nums.end());
    vector<int> tmp;
    dfs(nums, tmp, target, 0);
	return 0;
}

