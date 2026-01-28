class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n=matrix[0].size();
        int i,j;
        int top = 0,bottom = m-1;
        int left= 0,right = n-1;
        vector<int> result;
        //while loop for controlling the number of executions
        while(top <= bottom && left <=right){
            //top row traversal(right)
            for(j=left;j<=right;j++){
                result.push_back(matrix[top][j]);
            }
            top++;
            //right column traversal(down)
            for(i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            //bottom row traversal(left)
            if(top<=bottom){       //this is the edge case for neglecting duplicate value
                for(j=right;j>=left;j--){
                    result.push_back(matrix[bottom][j]);
                }
            bottom--;
            }
            //left column traversal(up)
            if(left<=right){    //edge case
                for(i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
            left++;
            }
            
        }
        return result;
    }
};