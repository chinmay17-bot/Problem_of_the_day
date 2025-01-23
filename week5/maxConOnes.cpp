class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int temp= 0;
        int right= 0;
        int left= 0;
        int len= 0;
        int fz= 0;

        while(left< nums.size() && right< nums.size()){
            

            if(nums[right]== 0 ){
                temp++;
                if(temp<= k){
                    len= max(len, (right- left +1));
                    right++;
                }

                else{
                    if(nums[left]== 0) temp--;
                    left++;
                    right++;
                }
            }
            else{
                if(temp<= k){
                    len= max(len, (right- left +1));
                    right++;
                }
                else{
                    if(nums[left]== 0) temp--;
                    left++;
                    right++;
                }

            }
        }


        return len;
    }
};