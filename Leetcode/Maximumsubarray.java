
// It also known as Kadanes Algorithm

class Solution {
    public int maxSubArray(int[] arr) {
//         kadanes Algorithm for largest subarray
      int mx=Integer.MIN_VALUE;
        int n=arr.length;
        int sum=0;
        for(int i=0;i<n;i++){
        sum+=arr[i];
          
            mx=Math.max(mx,sum);
              if(sum<0) sum=0;
            
            
        }
        return mx;
    
    }
}
