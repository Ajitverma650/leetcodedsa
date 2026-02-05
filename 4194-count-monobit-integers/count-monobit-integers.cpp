class Solution {
public:
    int countMonobit(int n) {


      int count=1;
      if (n==1)return 2;
        int num=pow(2,count);
            while(num<=n)
            {
                count++;
                num=pow(2,count);
            }
    
     num=pow(2,count)-1;
    return num==n?count+1:count;
    }
};