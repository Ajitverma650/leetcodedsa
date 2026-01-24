class Solution {
public:
    int vowelConsonantScore(string s) {

        int space =0;
        int num=0;
        int vow=0;
        int n=s.size();
        int c=0;
        for( int i=0;i<s.size();i++)
        {
              if(isdigit(s[i]))
              {
                 num++;
              }
             else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                   vow++;
                   }

              else if(s[i]==' ')
              {
                  space++;
              }
              else
              {
                 c++;

              }
        }
        cout<<num<<" "<< vow<< " "<<c;
        if(c>0)
        {
            return floor(vow/c);
        }
        else
        {
            return 0;
        }
        
    }
};