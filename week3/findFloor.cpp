int findFloor(vector<int>& nums, int target) {

        // Your code here
    
        int left= 0;
        int right= nums.size()-1;

        while(left<= right){
            int mid= left + (right - left)/ 2;
            if(nums[mid]== target) return mid;

            else if(nums[mid]< target) left= mid+1;

            else right= mid-1;
        }

        return right;
    }