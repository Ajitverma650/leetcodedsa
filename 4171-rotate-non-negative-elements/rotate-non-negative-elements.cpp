class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        

        vector<int>pos;

        for( int i=0;i<nums.size();i++)
        {    if(nums[i]>=0)
             pos.push_back(nums[i]);
        }

           int n =pos.size();
           if(n>0){
            k=k%n;
           reverse(pos.begin(),pos.begin()+k);
           reverse(pos.begin()+k,pos.end());
           reverse(pos.begin(),pos.end());

           int j=0;
           for(int i=0;i<nums.size();i++)
           {
                if(nums[i]>=0)
                {
                     nums[i]=pos[j++];
                }
           }
           }
           return nums;
    }
};