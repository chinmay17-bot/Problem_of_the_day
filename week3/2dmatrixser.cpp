class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix.size()*matrix[0].size() - 1;
        int c = matrix[0].size();

        while(low <= high){

            int midi = (low+high) / 2;

            int mid = matrix[midi/c][midi%c];

            if(mid == target) return true;

            if(mid < target){
                low = (midi+1);
            }
            else{
                high = midi-1;
            }

        }

        return false;
    }
};