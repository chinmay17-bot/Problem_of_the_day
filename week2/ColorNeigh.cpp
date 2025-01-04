bool winnerOfGame(string colors) {
        int n = colors.length();
        int Acnt = 0;
        int Bcnt   = 0;
        
        for(int i = 1; i<n; i++) {
            
            if(colors[i-1] == colors[i] && colors[i] == colors[i+1]) {
                if(colors[i] == 'A')
                    Acnt++;
                else
                    Bcnt++;
            }
        }
        
        if(Acnt > Bcnt) return true;

        return false;
        }