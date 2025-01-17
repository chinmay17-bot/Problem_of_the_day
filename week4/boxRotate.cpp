class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& grd) {
        int n= grd.size();
        int m= grd[0].size();

        for(int i= 0; i< n; i++){

            int l= m-1;
            while(l>= 0){

                if(grd[i][l]== '#'){
                    int k= l+1;
                    while(k< m && grd[i][k]== '.'){
                        if(k== 0) break;
                        grd[i][k-1]= '.';
                        grd[i][k]='#';
                        k++;
                    }
                }
                l--;

            }
        }

        vector<vector<char>> ans;

        for(int j= 0; j< m; j++){
            vector<char > temp;
            for(int i= n-1; i>= 0; i--){
                temp.push_back(grd[i][j]);
            }

            ans.push_back(temp);
        }

        // for(int i= 0; i< n; i++){
        //     for(int j = 0; j< m; j++){
        //         cout << grd[i][j];
        //     }
        //     cout << endl;
        // }

        return ans;


    }
};