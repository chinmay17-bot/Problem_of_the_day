int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int idx = INT_MAX;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[low] <= nums[mid]){
                idx = min(idx , nums[low]);
                low = mid+1;
            }
            else{
                idx = min(idx , nums[mid]);
                high = mid-1;
            }
        }

        return idx;
    }