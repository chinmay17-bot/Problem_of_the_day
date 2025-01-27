class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int i= 0;
        int n= colors.size();
        int cnt= 0;
        int j= 2;
        int k= j;

        while(i< n){
            if(colors[i] != colors[((i+k)/2)%n] && colors[((i+k)/2)%n] != colors[j]){
                cnt++;
            }
            
            k++;
            i++;
            j= (j+1)%n;
        }

        // if(colors[n-1]== colors[n-2]){
        //     if(colors[n-1]!= colors[0]) cnt++;
        // }

        return cnt;
    }
};