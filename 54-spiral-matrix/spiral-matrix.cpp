class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;
        int top = 0;
        int left = 0;
        int bottom = m - 1;
        int right = n - 1;
       
       

        while (top <= bottom && left <= right) {
             
              for( int j =left ;j<=right;j++)
              {
                  ans.push_back(mat[top][j]);
              }
              top++;
            for (int j = top; j <= bottom; j++) 
                ans.push_back(mat[j][right]);
            
            right--;
            if (top <= bottom) {
                for (int j = right; j >= left; j--)

                    ans.push_back(mat[bottom][j]);

                bottom--;
            }
            if (left <= right) {
                for (int j = bottom; j >= top; j--)

                    ans.push_back(mat[j][left]);

                left++;
            }
        }

        return ans;
    }
};