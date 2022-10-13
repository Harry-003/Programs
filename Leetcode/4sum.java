// https://leetcode.com/problems/4sum/description/

class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
       ArrayList<List<Integer>> result = new ArrayList<List<Integer>>();

        if(nums == null && nums.length == 0)
            return result;

        int n = nums.length;

        Arrays.sort(nums);

        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                int targetAfterTarget = target - nums[i] - nums[j];
                int first = j+1;
                int last = n-1;

                while (first < last) {
                    int two_sum = nums[first] + nums[last];


                    if (two_sum < targetAfterTarget) first++; //increament first pointer
                    else if (two_sum > targetAfterTarget) last--; //decreament last pointer
                    else {
                        List<Integer> quard = new ArrayList<>();
                        quard.add(nums[i]);
                        quard.add(nums[j]);
                        quard.add(nums[first]);
                        quard.add(nums[last]);
                        result.add(quard);
                        //checking for duplicate from first pointer
                        while (first < last && nums[first] == quard.get(2)) ++first;
                        //checking for duplicate from last pointer
                        while (first < last && nums[last] == quard.get(3)) --last;
                    }

                }
                //checking duplicate for j index
                while (j+1 < n && nums[j] == nums[j+1]) ++j;
            }
            //checking duplicate for i index
            while (i + 1 < n && nums[i] == nums[i+1]) ++i;
        }
        return result; 
    }
}