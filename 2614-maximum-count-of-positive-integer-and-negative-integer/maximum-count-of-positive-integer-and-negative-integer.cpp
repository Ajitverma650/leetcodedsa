class Solution {
public:
    int maximumCount(vector<int>& nums) {
         int n=nums.size();
         int c=0;
         int count =0;
        for(int num:nums)
        {
             if(num>0)
             {
                break;
             }
             if(num==0)
             {
                c++;
             }
             else
             {
                count++;
             }
        }

        int p=n-c-count;
        return max(count, p);
    }
};