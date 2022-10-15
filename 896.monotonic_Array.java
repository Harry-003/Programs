 LEETCODE   QUESTION:      https://leetcode.com/problems/monotonic-array/



CODE:
class Solution {
    public boolean isMonotonic(int[] nums) {
        boolean ans=true;
        
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]>nums[i+1]){
                ans =false;
            }
        }
        boolean ans1=true;
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]<nums[i+1]){
                ans1= false;
            }
        }
        return ans||ans1;
    }
}
