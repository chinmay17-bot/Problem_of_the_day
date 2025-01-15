class Solution {
public:
    int compress(vector<char>& chars) {
        int index= 0;
        char prevChr= chars[0];
        int cnt= 1;
        for(int i= 1; i< chars.size(); i++){
            if(prevChr== chars[i]){
                cnt++;
            }

            else{
                
                chars[index++]= prevChr;
                
                //to reverse the number after taking digits
                if(cnt> 1){

                int strt= index;
                while(cnt){
                        chars[index++]= (cnt %10 )+ '0';
                        cnt/=10;
                    } 
                    reverse(chars.begin()+ strt, chars.begin()+ index);
                }

                prevChr= chars[i];
                cnt= 1;
            }
        }

        
        chars[index++]= prevChr;
                
        //to reverse the number after taking digits
        if(cnt> 1){

            int strt= index;
            while(cnt){
                chars[index++]= (cnt %10 )+ '0';
                cnt/=10;
            } 
        reverse(chars.begin()+ strt, chars.begin()+ index);
        }


        return index;
    }
};