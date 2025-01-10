class Solution {
public:


    //Can be done by BS also with recursion as we are dividing our matric in smaller parts

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size()-1;

        int row = 0;
        int col = cols;
        while(row < rows && col >= 0){
            int ele = matrix[row][col];

            if(ele == target) return true;

            if(ele > target){
                col--;
            }

            else{
                row++;
            }
        }
        return false;
    }
};