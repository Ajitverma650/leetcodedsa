class Solution {
public:
   vector<int> newarray( vector<int>& nums)
   {    int n =nums.size();
        vector<int>temp(n-1);
        for(int i=1;i<n;i++)
        {
             temp[i-1]=(nums[i]+nums[i-1])%10;    
                 }
       return temp;
   }
      
    int triangularSum(vector<int>& nums) {

           int n= nums.size();
        vector<int>temp;
           while(n!=1)
           {
                 temp=newarray(nums); 
                  n=n-1;
                nums=temp;       
                    
           }
        
        return nums[0];
    }
};