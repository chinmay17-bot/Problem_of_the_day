class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low,mid,high;
        int n = nums.size();
    low = 0; 
    mid = 0;
    high = n-1;

    while (mid <= high)
    {
        if(nums[mid] == 0){
            swap(nums[mid] , nums[low]);
            mid++;
            low++;
        }

        else if(nums[mid] == 1){
            mid++;
        }

        else{
            swap(nums[mid] , nums[high]);
            high--;
        }
    }
    }
}; 