class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {



        
        
         vector<int> arr;

         for( int i=0;i<nums.size();i++)
         {
             int curr=nums[i];

              int req=target - curr;

              for( int j=i+1;j<nums.size();j++)
              {
                if(req==nums[j])
                {
                    arr.push_back(i);
                    arr.push_back(j);
                }
              }  
         }


          return arr;

        
    }
};