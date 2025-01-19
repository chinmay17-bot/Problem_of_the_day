//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        
        if(k== 1){
            int n= *max_element(arr.begin(), arr.end());
            return n;
        }
        

        int sum= 0;
        
        for(int i= 0;i < k; i++){
            sum+= arr[i];
        }
        
        int i = k;
        int j = 0;
        int mx= sum;
        while(i < arr.size()){
            sum+= arr[i]- arr[j];
            i++;
            j++;
            
            mx= max(sum, mx);
        }
        
        return mx;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends