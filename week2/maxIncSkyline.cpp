int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int ans= 0;
        int diff= 0;

        int rows= grid.size();
        int cols= grid[0].size();

        vector<int > east;
        vector<int > north;

        
        int rowmx= 0;
        int colmx= 0;
        for(int i= 0; i< rows; i++){
            for(int j= 0; j< cols; j++){
                rowmx= max(rowmx, grid[i][j]);
                colmx= max(colmx, grid[j][i]);
            }

            north.push_back(colmx);
            east.push_back(rowmx);
            rowmx= 0;
            colmx= 0;
        }

        for(int i= 0; i< rows; i++){
            for(int j= 0; j< cols; j++){

                ans+= abs(grid[i][j] - min(east[i], north[j]));
                
            }

        }

        return ans;
    }