class Solution {
public:
    int countGoodSubstrings(string s) {

        int n =s.size();

        int right=0;
        int left=0;
        int count=0;
        unordered_map<char, int >mp;
        while(right<n)
        {
            
             while(mp.find(s[right])!=mp.end()||mp.size()>=3)
             {
                mp[s[left]]--;
                if(mp[s[left]]==0) mp.erase(s[left]);
                left++;
             }
             mp[s[right]]++;
             right++;
             if(mp.size()==3)
             {
                count++;
             }

        }
        return count;
        
    }
};