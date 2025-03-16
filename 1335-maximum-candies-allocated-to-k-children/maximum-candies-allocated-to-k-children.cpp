class Solution {
public:
    bool check(vector<int>& piles, int mid ,long long k)
    {     long long  count=0;
          for(int i=0;i<piles.size();i++)
          {
               count+=piles[i]/mid;
               
          }

          return count>=k;  
    }

    int maximumCandies(vector<int>& piles, long long k) {
    
    
        int n =piles.size();
        int lar=*max_element(piles.begin(),piles.end());
        int start=1;
        int end=lar;
        int ans=lar;
        long long total=0;
        for(int num:piles)
        {  
            total+=num;

        }
        if(total<k)return 0;
        while(start<=end)
        {

            long long mid =start+(end-start)/2;
            if(check(piles,mid, k))
            {
                 ans=mid;
                 start=mid+1;
            }
            else
            {
                 end=mid-1; 
            }
        }
        return ans;
    
        



    }
};