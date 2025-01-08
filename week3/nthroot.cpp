//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        int low= 1;
        int high= m;
        int idx= 1;
        while(low<= high){
            int mid= (low+high)/ 2;
            
            int ans= pow(mid, n);
            if(ans> m){
                high= mid- 1;
            }
            else if(ans< m){
                low= mid+ 1;

            }
            else return mid;
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends