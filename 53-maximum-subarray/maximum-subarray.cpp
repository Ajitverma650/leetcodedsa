class Solution {
public:
    int maxSubArray(vector<int>& nums) {

       int sum=nums[0];
       int mx=nums[0];

       for(int i=1;i<nums.size();i++)
       {

          int num=nums[i];

          sum=max(sum+num, num);
          mx=max(sum,mx);

       }
      
         return mx;
    }
};