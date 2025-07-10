class Solution {
public:
    string multiply(string num1, string num2) {
        
          if(num1=="0"|| num2=="0")
          {

            return "0";
          }

          vector<int>res (num1.size()+num2.size(),0);

          for( int i=num1.size()-1;i>=0;i--)
          {
              for( int j =num2.size()-1;j>=0;j--)
              {
                   int n1=num1[i]-'0';
                   int n2=num2[j]-'0';

                   res[i+j+1]+=n1*n2;
                   int carry=res[i+j+1]/10;
                   int sum=res[i+j+1]%10;

                   res[i+j]+=carry;
                   res[i+j+1]=sum;
              }
          }

          int i=0;
          string ans="";
          while(res[i]==0)i++;
          while(i<res.size())
          {
            ans+=to_string(res[i++]);
          }
         return ans ;
    }
};