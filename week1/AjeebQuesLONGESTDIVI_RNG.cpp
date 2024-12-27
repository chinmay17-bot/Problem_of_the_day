void solve(){   
    std::cout << setprecision(12);
    ll k,n,a,b,c,d,x,y,z,cnt,mi,mx,sum,temp,ans,mod;char ch = '0';
    mx=LLONG_MIN,mi=LLONG_MAX,sum=0,a=0,b=0,c=0,d=0,x=0,y=0,z=0,cnt=0,temp=0,ans=0,mod=1e9+7;
    string str, s1;

    // int n,a,b,c;
    
    n;
    cin >> n;
    ans= 0;
    
    ll i=1;
    while(i<= n){
        
        if(n% i== 0){
            temp++;
        }
        else{
            ans= max(ans, temp);
            break;
        }
        i++;
    }

    ans= max(ans, temp);
    cout << ans;
    nl;

}