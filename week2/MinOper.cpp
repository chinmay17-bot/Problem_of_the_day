vector<int> minOperations(string boxes) {
        vector<int > arr;
        int n= boxes.size();

        for(int i =0; i < n; i++){
            int dis= 0;
            for(int j= 0; j< n; j++){
                if(i== j) continue;
                if(boxes[j]== '1'){
                    int diff= abs(i- j);
                    dis+= diff;
                }
            }

            arr.push_back(dis);
        }

        return arr;
    }