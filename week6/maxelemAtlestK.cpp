class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int num= *max_element(nums.begin(), nums.end());
        int cnt= 0;

        for(int i = 0;i < nums.size(); i++){
            if(nums[i]== num) cnt++;
        }

        if(cnt< k){
            return 0;
        }

        long long ans= 0;
        // while(k <= cnt){
            int i= 0;
            int j= 0;
            int counter= 0;
            int strt= 0;
            while(j< nums.size()){

                if(nums[j]== num){
                    counter++;
                }
                while(counter== k){
                    if(nums[i]== num){
                        counter--;
                    }
                    i++;

                }
                j++;
                ans+= (i);
            }
            
            // k++;
        // }
        return ans;
    }
};