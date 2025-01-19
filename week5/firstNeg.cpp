//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        
        queue<int > q;
        
        for(int i= 0; i< k; i++){
            if(arr[i]< 0){
                q.push(arr[i]);
            }
        }
        
        int j= k-1;
        int i= 0;
        vector<int > ans;
        while(j < arr.size()-1){
            
            if(q.empty()) ans.push_back(0);
            
            else ans.push_back(q.front());
            
            if(arr[i]< 0){
                q.pop();
            }
            j++;

            
            if(arr[j]< 0){
                q.push(arr[j]);
            }
            i++;
            
        }
        
        if(q.empty()) ans.push_back(0);
        
        else ans.push_back(q.front());
        
        return ans;
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
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends