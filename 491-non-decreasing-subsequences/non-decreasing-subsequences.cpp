class Solution {
public:
    int n =0;
    vector<vector<int>>result;
    void solve(vector<int>&nums ,int idx,vector<int>&temp)
    {
          if(temp.size()>=2){
                  
                  result.push_back(temp);
                  
          } 
          
          unordered_set<int>st;
          for( int i=idx;i<n;i++)
          {
             
              if ((temp.empty() || nums[i] >= temp.back()) && st.find(nums[i]) == st.end())

               {

                   temp.push_back(nums[i]);
                   solve(nums, i+1,temp);
                   temp.pop_back();

                   st.insert(nums[i]);
               }

          }


    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {

         n=nums.size();
        
         vector<int>temp;
        solve(nums,0 ,temp);
        return result;
        
    }
};