class Solution {
public:
    int arrangeCoins(int n) {

        int low= 1;
        int high= n;
        int ans= 0;
        while(low<= high){
            int mid= low + (high- low)/ 2;

            long long mx= (mid+1);
            mx= mid*mx;
            mx/= 2;

            if(mx> n){
                high= mid- 1;
            }
            else if(mx< n){
                low= mid+1;
                ans= mid;
            } 
            else{
                return mid;
            }
        }


        return ans;
    }
};