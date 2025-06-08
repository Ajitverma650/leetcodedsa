class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>arr;
        for( int i =1;i<=n;i++)
        {    
            
            string temp=to_string(i);
            arr.push_back(temp);
        }
        
      sort(arr.begin(),arr.end());

      vector<int>ans(n);
      for( int i=0;i<n ;i++) 
      {
           ans[i]=stoi(arr[i]);
      }

      return ans ;
    }
};