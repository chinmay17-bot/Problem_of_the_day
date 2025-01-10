class Solution {
public:

    int findDays(vector<int>& arr, int cap){
        int days = 1;
        int load = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
        if (load + arr[i] > cap) {
            days += 1; 
            load = arr[i]; 
        }
        else {
            
            load += arr[i];
        }
    }
        return days;
    }
    

    int shipWithinDays(vector<int>& weights, int days) {
        vector<int> temp (weights.begin() , weights.end());
        int maxn = *max_element(weights.begin(), weights.end());
        int sum = accumulate(weights.begin(), weights.end(), 0);
        int low = maxn;
        int high = sum;
        // for(int i = maxn; i < sum; i++)
        while(low <= high){

            int mid = (low+high)/2;

            int daysCnt = findDays(weights , mid);
            if(daysCnt <= days){
                high = mid-1;
            }

            else{
                low = mid+1;
            }
        }
        // if()

        return low;
    }
};