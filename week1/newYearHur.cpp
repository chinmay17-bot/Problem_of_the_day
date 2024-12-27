void solve(){   
    std::cout << setprecision(12);
    ll k,n,a,b,c,d,x,y,z,cnt,mi,mx,sum,temp,ans,mod;char ch = '0';
    mx=LLONG_MIN,mi=LLONG_MAX,sum=0,a=0,b=0,c=0,d=0,x=0,y=0,z=0,cnt=0,temp=0,ans=0,mod=1e9+7;
    string str, s1;
 
    // int n,a,b,c;
    cin >> n;
    cin >> k;
 
    temp= 240- k;
    ans= 0;
    for(int i=1 ; i <= n; i++){
        if(temp <= 0) break;
 
        temp-= (5*i);
        if(temp>= 0)
        ans++; 
    }
 
    cout << ans;
    nl;
 
 
}