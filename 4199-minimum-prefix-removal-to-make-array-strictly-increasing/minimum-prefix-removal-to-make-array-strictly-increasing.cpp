class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {

        int n =nums.size();

        if(n==2) 
        {
             return nums[0]>=nums[1]?1:0;
        }

        for( int i=n-2;i>=0;i--)
        {
              if(nums[i+1]==nums[i]||nums[i]>nums[i+1])
              {


                return i+1;
                
              }
        }
        return 0;
    }
};