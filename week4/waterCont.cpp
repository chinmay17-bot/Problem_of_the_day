class Solution {
public:
    int maxArea(vector<int>& height) {
        int i= 0;
        int j= height.size()-1;
        int ans= 0;
        while(i<= j){
            if(height[i]< height[j]){
                int ar= height[i]* (j-i);
                ans= max(ans, ar);
                i++;
            }

            else{
                int ar= height[j]* (j-i);
                ans= max(ans, ar);
                j--;
            }
        }

        return ans;
    }
};