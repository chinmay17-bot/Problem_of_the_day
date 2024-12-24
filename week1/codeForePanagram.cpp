void solve(){   
    std::cout << setprecision(12);
    ll k,n,a,b,c,d,x,y,z,cnt,mi,mx,sum,temp,ans,mod;char ch = '0';
    mx=LLONG_MIN,mi=LLONG_MAX,sum=0,a=0,b=0,c=0,d=0,x=0,y=0,z=0,cnt=0,temp=0,ans=0,mod=1e9+7;
    string str, s1;

    // int n,a,b,c;
    cin >> n;
    cin >> str;

    if(n< 26) cout<< "NO";

    else{
        for(auto s: str){
            s1+= tolower(s);
        }
        map<char, int> mp;

        for(char s: s1){
            mp[s]++;
        }

        a= mp.size();
        if(a!= 26) cout << "NO";
        else cout << "YES";
    }
    nl;


}