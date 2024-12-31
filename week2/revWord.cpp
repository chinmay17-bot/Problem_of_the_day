string reverseWords(string s) {
        stack<string> st;
        string ans= "";
        string temp= "";
        for(int i= 0; i< s.size(); i++){
            if(temp.size()== 0 && s[i]== ' ') continue;

            else if(temp.size()!= 0 && s[i]== ' ') {
                st.push(" ");
                st.push(temp);
                temp.clear();
            }
            else temp+= s[i];


        }
        if(s[s.size()-1] != ' '){
            st.push(" ");
            st.push(temp);
        }

        while(!st.empty()){
            ans+= st.top();
            st.pop();

        }

        if(ans[ans.size()- 1]== ' '){
            ans.erase(ans.begin()+ ans.size()-1);
        }


        return ans;