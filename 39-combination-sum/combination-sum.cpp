class Solution {
public:
  vector<vector<int>>ans;
   void solve(vector<int>& candi, int target,vector<int>&curr,int idx)
   {
       if(idx>=candi.size()||target<0)
       {
        return ;
       }
       if(target==0)
       {
        ans.push_back(curr);
        return ;
       }
        curr.push_back(candi[idx]);
        solve(candi, target-candi[idx],curr,idx);
        curr.pop_back();
        solve(candi,target,curr,idx+1);

}

    vector<vector<int>> combinationSum(vector<int>& candi, int target) {

      vector<int>curr;
      solve(candi, target ,curr,0);

      return ans;
          
    }
};