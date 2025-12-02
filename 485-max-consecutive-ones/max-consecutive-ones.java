class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
      
        int left=0;
        int right=0;
        int size=nums.length;
        int ans=0;
        while(right<size)
        {


            if(nums[right]==0)
            {

                left=right+1;

            }
            
            ans=Math.max(ans,right-left+1);
            right++;
            

        }

        return ans;
          
    }
}