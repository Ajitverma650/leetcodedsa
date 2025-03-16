class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int >mp;
        set<int>st;
        for(int num:arr)
        {
             mp[num]++;
        }
        for(auto x:mp)
        {
              if(st.find(x.second)!=st.end())
              {
                return false;
              }
              st.insert(x.second);
        }
        return true;
    }
};