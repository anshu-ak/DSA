//https://leetcode.com/problems/set-matrix-zeroes/
// Brute Force
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        // vector<vector<int>> ans(m, n);
        // vector<vector<int>> ans( m , vector<int> (n, 0));
        
        int ans[m][n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                ans[i][j]=1;
        
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    //row i
                    for(int k=0; k<m; k++)
                        ans[k][j] = 0;
                    //column j
                    for(int l=0; l<n; l++)
                        ans[i][l] = 0;
                }
            }
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(ans[i][j] == 0)
                    matrix[i][j] = ans[i][j];
                else
                    matrix[i][j] = matrix[i][j];
                    
            }
        }
        
        
        
    }
};





