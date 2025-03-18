class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st;
        vector<int>arr;
        for(int num:nums)
        {
             st.insert(num);
        }
        auto it =st.rbegin();
        if(st.size()<3)
        {
              return *it; 
        }
        advance(it , 2);
        return *it;
    }
};