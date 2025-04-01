class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        

        int inc=1;
        int dec=1;
        int result=1;

        for(int i=1;i<nums.size() ;i++)
        {
               if(nums[i]>nums[i-1])
               {
                 inc++;
                 dec=1;
                 result=max(inc ,result);
                 cout<<result<<" ";
               }
               else if(nums[i]<nums[i-1])
               {
                  dec++;
                  inc=1;
                  result=max(result ,dec);
                   cout<<result<<" ";
               }
               else
               {
                 inc =1;
                 dec=1;
               }
        }
        return result;
    }
};