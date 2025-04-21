class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        vector<int>ans;
        int d=0; 
        ans.push_back(d);
        for(int i=0;i<gain.size();i++)
        {
            d=d+gain[i];
          ans.push_back(d);
        }
        int m =INT_MIN;
        for(int i=0;i<ans.size();i++)
        {
              m=max(m,ans[i]);
        }
        return m;
        
    }
};