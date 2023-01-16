/*
1480. Running Sum of 1d Array
Easy
5.8K
283
Companies
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 

Constraints:

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6
Accepted
1.2M
Submissions
1.4M
Acceptance Rate
88.5%
*/

//#include<bits/stdc++.h>


//CODE:
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
