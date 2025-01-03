int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
    
        
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        int i= 0; 
        int j= 0;
        int cnt= 0;
        int mx= 0;
        while(i< arr.size() ){
            if(arr[i]<= dep[j]) {
                cnt++;
                i++;
            }
            
            else {
                cnt--;
                j++;
            }
            
            mx = max(mx, cnt);
        }
        
        
        
        return mx;
    }