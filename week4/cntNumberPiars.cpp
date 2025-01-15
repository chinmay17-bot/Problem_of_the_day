class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        int cnt= 0;
        map<int, int> fr;
        for(int i =0 ;i < nums.size();i++){
            int diff= (nums[i]- k);

            cnt+= fr[diff];
            int sum= (k+ nums[i]);

            cnt+= fr[sum];

            fr[nums[i]]++;
        }

        return cnt;
    }
};