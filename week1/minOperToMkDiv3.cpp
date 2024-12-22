class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt= 0;
        int n= nums.size();
        for(int i=0 ; i <n; i++ ){
            int tomake= nums[i]% 3;
            if(tomake != 0) cnt+= 1;

            
        }
        return cnt;
    }
};