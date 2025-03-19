class Solution {
public:
    bool check(float mid , vector<int>&nums,int threshold)
    {
        long long   sum=0;
        for(int num:nums)
        {
               long long   n =ceil(num/mid);
              sum+=ceil(n);
        }
         cout<<sum<<" "<<mid<<endl;
        return sum<=threshold;
            }
    int smallestDivisor(vector<int>& nums, int threshold) {

       int n =nums.size();
       int start=1;
       int maxE=*max_element(nums.begin(),nums.end());
       int end=maxE;
    
       int ans =0;
       while(start<=end) 
       {
          
            float mid=start+(end-start)/2;

            if(check(mid , nums, threshold))
            {
                  ans=mid;
        
                  end=mid-1;
            }
            else
            {
                start=mid+1;
            }
       }

       return ans;
    }
};