class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        

        int n =nums.size();

        long long result =0;
        for( int i =0;i<n;i++)
        {
               for(  int j =i+1;j<n ;j++)
               {

                    for( int k =j+1;k<n ;k++)
                    {      long long sum =(1LL* (nums[i]-nums[j]))*nums[k];
                           result=max(result , sum);
                    }
               }
        }

        return result ;
    }
};