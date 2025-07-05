class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map< int, int>mp;

        for(int num :arr)
        {
            mp[num]++;
        }
      //  bool flag=false;
        int ans =-1; 
        for(int num :arr)
        {
              if(num==mp[num]&&num>ans)
              {
                     ans=num;
              }
        }
        
        return ans ;
        
    }
};