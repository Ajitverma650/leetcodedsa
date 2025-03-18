class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        unordered_map<int ,int >mp;

        int n =fruits.size();
        int right=0;
        int left=0;
        int ans =0;
           while(right<n)
            {
              

              mp[fruits[right]]++;
               while(mp.size()>2&&left<n)
               {
                     mp[fruits[left]]--;
                     if(mp[fruits[left]]==0)
                     {
                         mp.erase(fruits[left]);
                     }
                     left++;
               }

              
            
              ans=max(ans , right-left+1);
              cout<<ans<<endl;
              right++;
              
        }

        return ans;

    }
};