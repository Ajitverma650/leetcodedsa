class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(int n , int idx , vector<int>&nums)
    {
        if(idx==n)
        {
              ans.push_back(nums);
              return ;
        }

        for( int i =idx;i<n ;i++)
        {
               
              swap(nums[i],nums[idx]);

              backtrack(n , idx+1, nums);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        int  n =nums.size();
        backtrack(n ,0,nums);
        return ans ;
    }
};