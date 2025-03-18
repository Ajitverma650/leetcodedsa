class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st;
        vector<int>arr;
        for(int num:nums)
        {
             st.insert(num);
        }
    
        for(auto x:st)
        {
              arr.push_back(x);
        }
        if(arr.size()>=3)
        return arr[arr.size()-3];
        return arr[arr.size()-1];
    }
};