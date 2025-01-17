class Solution {
public:

    int leftBorder(vector<int >& arr, int curr, int n){
        int left= curr-1;
        bool dip= false;
        int mx= arr[curr];
        while(left>= 0){
            mx= max(arr[left], mx);
            left--;

        }

        if(mx> arr[curr]){
            return mx;
        }


        return -1;
        
    }


    int rightBorder(vector<int >& arr, int curr, int n){

        int right= curr+1;
        int mx= arr[curr];
        while(right< n){

            mx= max(mx, arr[right]);
            right++;
        }

        if(mx> arr[curr]){
            return mx;
        }

        return -1;

    }


    int trap(vector<int>& arr) {
        int curr= 1;
        int n= arr.size();
        int ans= 0;
        int left= -1;
        int right= -1;

        while(curr< n-1){
            
            if(left== -1 || arr[curr]>= left ){
                left= leftBorder(arr, curr, n);
            }
            if(right== -1 || arr[curr]>= right ){
                right= rightBorder(arr, curr, n);
            }

            if(left!= -1 && right!= -1){
                ans+= min(left, right)- arr[curr];
            }
            curr++;
            

        }

        return ans;
    }
};