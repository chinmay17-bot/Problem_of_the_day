bool canJump(vector<int>& nums) {
        int maxJump= 0;
        int n= nums.size();
        if(n== 1) return true;

        if(nums[0]== 0) return false;

        for(int i= 0; i< n; i++){

            int m= i+nums[i];
            if(m== i && maxJump<= m){
                return false;
            }

            maxJump= max(m, maxJump);

            if(maxJump>= n-1){
                return true;
            }
        }

        return false;
    }