class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        

           int  n=nums.size();
           int right=0;
           int left=0;
           int ans =0;
           int result=0;
           while(right<n)
           {
                
                while((result&nums[right])!=0)
                {
                    
                     result &= ~nums[left];
                     left++;
                }
                 result=result | nums[right];
                ans=max(ans,right-left+1);
                right++;
           }

           return ans ;
    }
};