void solve(){   
    std::cout << setprecision(12);
    ll k,n,a,b,c,d,x,y,z,cnt,mi,mx,sum,temp,ans,mod;char ch = '0';
    mx=LLONG_MIN,mi=LLONG_MAX,sum=0,a=0,b=0,c=0,d=0,x=0,y=0,z=0,cnt=0,temp=0,ans=0,mod=1e9+7;
    string str, s1;

    // int n,a,b,c;
    
    cin >> n;
    vector<int > arr(n);
    cin >> arr;

    
    int num= 0;
    for(int i= 0; i< n; i++){
        
        
        num= __gcd(abs(arr[i]- (i+1)), num);

    }




    cout << num;
    nl;

}