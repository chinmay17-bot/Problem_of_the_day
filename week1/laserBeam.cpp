int numberOfBeams(vector<string>& bank) {
        int prev= 0;
        int rows= bank.size();
        int cols= bank[0].size();
        for(int i=0 ;i< cols; i++){
            if(bank[0][i]== '1') prev++;
        }

        int lasers= 0;

        for(int i= 1; i< rows; i++){
            int curr= 0;
            for(int j= 0; j<cols; j ++){
                if(bank[i][j]== '1') curr++;
            }

            if(prev== 0 && curr != 0){
                prev= curr;
            } 

            else if(curr!= 0 && prev!= 0){
                lasers+= (prev* curr);
                prev= curr;
            }


        }

        return lasers;
    }