bool isThree(int n) {
        int cnt= 1;
        for(int i= 2; i<= n; i++){
            if(cnt> 3) return false;

            if(n%i == 0) cnt++;
        }

        if(cnt == 3)
        return true;

        return  false;

    }