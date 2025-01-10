

class Solution {
public:
    

    long long chkTime(vector<int> &v , int hourly){
        long long totalH = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            totalH += ceil((double)(v[i]) / (double)(hourly));
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxn = piles[0];

        for(int i = 1; i < piles.size(); i++){
            if(maxn < piles[i]) maxn = piles[i];
        }

        int low = 1;
        int high = maxn;
        while(low <= high){
            int mid = (low + high)/2;

            long long timeTaken = chkTime(piles , mid);
            if(timeTaken <= h) {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};