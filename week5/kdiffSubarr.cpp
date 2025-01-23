class Solution {
public:
    int subarrayCnt(vector<int> &nums, int k){
        int i= 0;
        int j= 0;

        unordered_map<int, int > mpp;

        int freq= 0;

        while(j< nums.size()){
            mpp[nums[j]]++;

            
                while(mpp.size()> k){

                    mpp[nums[i]]--;
                    if(mpp[nums[i]]== 0) mpp.erase(nums[i]);

                    i++;
                }

        
            freq+= (j- i+ 1);
            j++;

        }

        return freq;
    }



    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int res= subarrayCnt(nums, k)- subarrayCnt(nums, k- 1);

        return res;
    }
};