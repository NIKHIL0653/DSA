class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //matrix ka size lelo pehle
        int n = matrix.size();
        int m = matrix[0].size();

        // fir kidhar se kidhar tk iterate krne ke liye points lelo
        int left = 0, right = m-1;
        int top = 0, bottom = n - 1;
        
        vector<int> ans;

    while(top<= bottom && left <= right){
        //left to right print krne ke liye
            for(int i =left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++; // kyuki [0][0] wala element print hogya hai
            //and repetition nhi chahiye

            //same iss case ke liye bhi karo
            for(int i = top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;// last col print hogya idhar toh ek peehe kardo
            // taaki fisre print na hojaye

            if(top <= bottom){ // if only a single line 1x1 matrix is given
            //agar elements if nhi hai toh print kyu krna hai time bach jayega
                for(int i = right; i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
            bottom --;
            }
            if(left <= right){ // idhar bhi agar elements hi nhi hai 
            // toh print kya karoge
                for(int i = bottom; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};