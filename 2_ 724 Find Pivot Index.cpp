#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    int pivotIndex(vector<int>& nums)
    {
        int l=0, r=0;
        for(int& v: nums)
        {
            r += v;
        }
        for(int i=0; i<nums.size(); ++i)
        {
            r -= nums[i];
            if(l == r)
            {
                return i;
            }
            else
            {
                l += nums[i];
            }
            return -1;
        }
    }
};

int main()
{
    
    return 0;
}