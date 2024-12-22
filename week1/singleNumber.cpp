class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<long , int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        int ans;

        for(auto it : mp){
            if(it.second == 1){
                ans = it.second;
            }
        }
        return ans;
    }
};