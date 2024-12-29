vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if(m*n != original.size()) {return ans;}
        int strt = 0;

        
        
        for(int i = 0; i < m; i++){
            vector<int> temp;
            for(int j = 0; j < n; j++){
                temp.push_back(original[strt]);
                strt++;
            }

            ans.push_back(temp);
        }
        return ans;
    }