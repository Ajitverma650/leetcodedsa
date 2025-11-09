class Solution {
public:
    int lengthOfLongestSubstring(string s) {

    int left=0;
    int right =0;
      int ans=0;
      int size=s.length();
      unordered_set<char>st;


      while(right<size)
      {
           
           if(left<size&& st.find(s[right])!=st.end())
           {

                st.erase(s[left]);
                left++;
           }
           else{
           st.insert(s[right]);

           ans=max(ans,right-left+1);
             right++;
           }
           
      }
      return ans;
        
    }
};