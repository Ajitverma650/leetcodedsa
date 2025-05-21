class Solution {
public:
    int m;
    int n;
    bool checkrow(vector < vector<int>> mat, int i) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 0) 
                return true;
            
        }
        return false;
    }
    bool checkcol(vector < vector<int>>mat, int j) {
        for (int i = 0; i < m; i++) {
            if (mat[i][j] == 0) 
                return true;
            
        }
        return false;
    }
    void setZeroes(vector<vector<int>>& mat) {
        m = mat.size();
        n = mat[0].size();
        unordered_map<int , int>row;
         unordered_map<int , int>col;
        for (int i = 0; i < m; i++) {
            if (checkrow(mat, i)) 
                row[i]++;
            
        }
        for (int j = 0; j < n; j++) {
            if (checkcol(mat, j)) 
                col[j]++;
            
        }
        for(int i=0;i<m;i++)
        {
            if(row.find(i)!=row.end())
            {
                for(int j =0;j<n;j++)
                {
                    mat[i][j]=0;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            if(col.find(j)!=col.end())
            {
                for(int i=0;i<m;i++)
                {
                    mat[i][j]=0;
                }
            }
        }
        
    }
};