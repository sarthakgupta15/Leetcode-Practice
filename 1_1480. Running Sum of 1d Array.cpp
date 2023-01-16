//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    vector<int> runningSum(vector<int>& nums)
    {
        vector<int> v;
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum = nums[i] + sum;
            v.push_back(sum);
        }
        return v;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    vector<int> ans;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    ans = s.runningSum(nums);
    cout << "{" ;
    for(int i=0; i<ans.size(); i++)
    {
        cout << ans[i] << ", ";
    }
    cout << "}" << endl;
    return 0;
}
