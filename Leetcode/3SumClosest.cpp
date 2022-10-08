//This contains solution to the problem 16. 3Sum Closest in CPP
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = INT32_MIN;
        int dif = 100000;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++)// An idex is fixed
        {
            int left = i+1;
            int right = n-1;// Two pointer approach to find the other two indexes
            while(left<right)
            {
                int sum = nums[i]+nums[right]+nums[left];
                if(sum == target)
                    return sum;
                else
                {
                    if(abs(sum-target)<dif)
                    {
                        ans = sum;
                        dif = abs(sum-target);
                    }
                }
                if(sum>target)
                    right--;
                else
                    left++;
            }
        }
        return ans;
    }
};