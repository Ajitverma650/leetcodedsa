class Solution {
public:
    bool check(vector<int>& piles, int mid ,int h)
    {     long long  hours=0;
          for(int i=0;i<piles.size();i++)
          {
               hours+=piles[i]/mid;
               if(piles[i]%mid!=0)
               {
                  hours++;
               }
          }

          return hours<=h;  
    }
    int minEatingSpeed(vector<int>& piles, long long h) {
        int n =piles.size();
        int lar=*max_element(piles.begin(),piles.end());
        int start=1;
        int end=lar;
        int ans=lar;
        while(start<=end)
        {

            long long mid =start+(end-start)/2;
            if(check(piles,mid, h))
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