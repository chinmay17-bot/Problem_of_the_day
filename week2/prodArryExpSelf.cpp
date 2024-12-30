vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prevProd;
        int n= nums.size();
        vector<int> nextProd;

        prevProd.push_back(1);
        int pr= 1;
        for(int i= 1; i< n; i++){
            pr*= nums[i-1];
            prevProd.push_back(pr);
        }

        nextProd.push_back(1);
        pr= 1;
        for(int i= n-2; i>= 0; i--){
            pr*= nums[i+1];
            nextProd.push_back(pr);
        }

        reverse(nextProd.begin(), nextProd.end());

        vector<int >ans;
        for(int i= 0; i< n; i++){
            ans.push_back(nextProd[i]* prevProd[i]);
        }
        return ans;
    }