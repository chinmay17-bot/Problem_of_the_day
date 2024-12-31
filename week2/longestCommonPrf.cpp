string longestCommonPrefix(vector<string>& strs) {
        string fst = strs[0];
        string snd = strs[1];
        
        if(strs.size() == 1){
            return strs[0];
        }
        
        int cnt = 0;
        for(int i = 0; i < fst.length(); i++){
            if(fst[i] != snd[i]){
                break;
            }   
            cnt++;
        }
        
        for(int i = 2; i < strs.size(); i++){
            for(int j = 0; j < cnt; j++){
                if(strs[i][j] != fst[j]){
                    cnt = j;
                    break;
                }
            }        
        }
        string ans = "";
        
        for(int i = 0; i < cnt; i++){
            ans += fst[i];
        }
        
        return ans;
    }