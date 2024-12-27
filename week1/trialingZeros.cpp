#include <bits/stdc++.h>
using namespace std;

template<typename T>    istream& operator>>(istream &in, vector<T> &a){for(auto &e : a) cin >> e; return in;}
#define Jai_Shree_Ram   ios_base::sync_with_stdio(false); cin.tie(0);
#define ll              long long
#define nl              cout << endl;
#define yes             cout << "YES" << endl
#define no              cout << "NO" << endl
#define yesno(x)        cout << ((x) ? "YES" : "NO") << endl
#define print(a)        for(auto t:a)   cout << t << " ";cout << endl;   
#define full(a)         a.begin(),a.end()

void solve(){   
    std::cout << setprecision(12);
    ll k,n,a,b,c,d,x,y,z,cnt,mi,mx,sum,temp,ans,mod;char ch = '0';
    mx=LLONG_MIN,mi=LLONG_MAX,sum=0,a=0,b=0,c=0,d=0,x=0,y=0,z=0,cnt=0,temp=0,ans=0,mod=1e9+7;
    string str, s1;

    // int n,a,b,c;
    
    n;
    cin >> n;
    int zeros= 0;

    for (int i = 5; n/i>= 1; i*=5)
    {
        zeros+= (n/ i);
    }
    

    cout << zeros<< endl;

}

int main(){
    Jai_Shree_Ram;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // initNCR(200010);

    // ll t;cin>>t;while(t--)
        solve();
    

    #ifndef ONLINE_JUDGE
    cout << "\nTime : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif

    return 0;
}