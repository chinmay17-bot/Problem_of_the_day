void solve(){   
    std::cout << setprecision(12);
    ll k,n,a,b,c,d,x,y,z,cnt,mi,mx,sum,temp,ans,mod;char ch = '0';
    mx=LLONG_MIN,mi=LLONG_MAX,sum=0,a=0,b=0,c=0,d=0,x=0,y=0,z=0,cnt=0,temp=0,ans=0,mod=1e9+7;
    string str, s1;

    // int n,a,b,c;
    
    
    cin >> n;
    vector<int > arr(n);
    cin >> arr;
    temp= 1;

    for(int i= 0; i< n; i++){
        if(arr[i]== 1){
            ans++;
        }
        else if(arr[i] == 0){
            temp*= 2;
        }
    }

    if(ans== 1 && temp > 0){
        cout << temp;nl;
    }
    else if(ans== 1 && temp== 0){
        cout<< 1;nl;
    }

    else if(ans> 1&& temp> 0){
        cout<< temp*ans;nl;
    }

    else if(ans> 1 && temp== 0){
        cout << ans;nl;
    }

    else{
        cout << 0;
        nl;
    }
    
    

}