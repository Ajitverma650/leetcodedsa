class Solution {
public:
   bool check(long long mid , vector<int>& nums, int cars)
   {

         long long  count =0;
         for( int num :nums )
         {
             count+=sqrt(mid/num);
         }
          
        return count>=cars;
   }

    

    long long repairCars(vector<int>& ranks, int cars) {
        

     long long maxe=*max_element(ranks.begin(),ranks.end());

     long long  end=maxe*cars*cars;
     long long start=1;
      long long  ans=0;
     while(start<=end)
     {

        long long  mid=start+(end-start)/2;
        if(check(mid , ranks , cars))
        {
              ans=mid ;
              end =mid-1;
        }
        else
        {
             start=mid+1;
        }
     }

     return ans ;
    }
};