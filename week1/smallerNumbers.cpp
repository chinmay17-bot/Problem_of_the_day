class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n= nums.size();
        int num= nums[0];
        vector<int> ans;
        for(int i= 0; i< n; i++){
            int nct= 0;
            for(int j= 0; j < n; j++){
                if(nums[i] > nums[j]){
                    nct++;
                }
            }
            ans.push_back(nct);


        }
        return ans;
    }
};