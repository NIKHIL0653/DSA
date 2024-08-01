class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        // empty array track krne ke liye banao
        vector<int> col(m, 0);
        vector<int> row(n, 0);

        // iss iteration me track krke update karega
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        // aur iss iteration me jin indices ka
        // value 1 hai un rows and cols ko 0 krdega
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(row[i] == 1 || col[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};