
//SOLVED IN LEETCODE

class Solution {
public:
    int scoreOfString(string s) {
        int n= s.length();
        int sum= 0;
        int last= s[0];
        for(int i= 1;i <n; i++){
            int curr= s[i];
            sum+= abs(last- curr);
            last= curr;
        }

        return sum;
    }
};