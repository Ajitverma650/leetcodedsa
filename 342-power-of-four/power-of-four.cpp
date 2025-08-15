class Solution {
public:
    int total(int n )
    {
        int c=0;
        while(n>=1){
    
        c++;
        n=n>>1;
        }
        return c;
    }
    int setbit( int n)
    {
        int c=0;
        while(n>=1){
        n=n &(n-1);
        c++;
        n=n>>1;
        }
        return c;

    }
    bool isPowerOfFour(int n) {
        int c=setbit(n );
         int d=total(n );
         int k =d-c;
        if(k%2==0&&c==1)
        {
            return true;
        }
        return false;
    }
};