class Solution {
public:
    int minimumMoves(string s) {
        int i= 0;
        int n= s.length();
        int cnt= 0;
        while(i< n){
            if(s[i]== 'X'){
                i+=3;
                cnt++;
            }
            else{
                i++;
            }
        }

        return cnt;
    }
};