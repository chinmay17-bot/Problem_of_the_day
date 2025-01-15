class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < n; i++) nums1.push_back(0);
        

        int i = 0;
        int j;
        for(int k = 0; k < n ; k++){
            j = m+k;
            int num = nums2[k];
            while(i < j){
                if(nums1[i] <= num) i++;

                else{
                    swap(nums1[j] , nums1[j-1]);
                    j--;
                }
            }

            nums1[j] = num;
        }

        nums1.erase(nums1.begin() +m+n , nums1.begin()+m+n+n);
    }
};