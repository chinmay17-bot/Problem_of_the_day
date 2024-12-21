
//SOLVED IN GFG

int gcd(int a, int b) {
        // code here
        // if(b> a) return gcd(b, a);
        
        if(a== 0) return b;
        
        return gcd(b%a, a);
    }