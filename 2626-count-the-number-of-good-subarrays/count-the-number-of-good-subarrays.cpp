class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        

        int n =nums.size();
        int right =0;
        int left =0;

        long long result =0;
        unordered_map< int , int > mp;

        long long pair =0;

        while( right< n )
        {
              
              pair+=mp[nums[right]];
               
              mp[nums[right]]++;


              while(pair>=k)
              {
                result+=(n-right) ;
                   mp[nums[left]]--;
                   pair-=mp[nums[left]];
                   left++;
              }
               
             right++;
        }
        return result;
    }
};