#include <bits/stdc++.h>
using namespace std;


template<typename T>    istream& operator>>(istream &in, vector<T> &a){for(auto &e : a) cin >> e; return in;}
#define Jai_Shree_Ram   ios_base::sync_with_stdio(false); cin.tie(0);
#define ll              long long
#define nl              cout << endl;
#define yes             cout << "yes" << endl;
#define no              cout << "no" << endl;
#define yesno(x)        cout << ((x) ? "YES" : "NO") << endl
#define print(a)        for(auto t:a)   cout << t << " ";cout << endl;   
#define full(a)         a.begin(),a.end()

ll gcd(ll a, ll b)
    {
        if(b> a) return gcd(b,a);
    return (b==0)?a:gcd(b,a%b);
}


void countFreq(vector<int >& frq,string&str){
    char ch= str[0];

    int cnt= 1;
    for(int i= 1; i< str.size(); i++){
        if(ch!= str[i]){
            frq.push_back(cnt);
            cnt=1 ;
            ch= str[i];


        }
        else{
            cnt++;
        }
    }
    frq.push_back(cnt);
}





void solve(){

    std::cout << setprecision(12);
    ll k,n,a,b,c,d,x,y,z,cnt,mi,mx,sum,temp,ans,mod;char ch = '0';
    mx=LLONG_MIN,mi=LLONG_MAX,sum=0,a=0,b=0,c=0,d=0,x=0,y=0,z=0,cnt=0,temp=0,ans=0,mod=1e9+7;
    string str, s1, s2;
    
    cin >> str;
    cin >> n;
    vector<string > s(n);
    cin >> s;


    vector<int > frq;

    ch= str[0];

    cnt= 1;
    for(int i= 1; i< str.size(); i++){
        if(ch!= str[i]){
            frq.push_back(cnt);
            cnt=1 ;
            ch= str[i];


        }
        else{
            cnt++;
        }
    }
    frq.push_back(cnt);



    for(auto it: s){

        //for string
        int i =0;
        int j =0;


        //for vector
        int x= 0;
        int y= 0;


        vector<int > chr;
        countFreq(chr, it);
        bool chk= true;

        // nl
        // for(auto it: chr){
        //     cout << it<< " ";
        // }

        if(chr.size() != frq.size()) {
            chk= false;
            break;
        }


        while(i< str.size() && j< it.size()){
            if(str[i]== it[j]){
                int diff= frq[x]- chr[y];
                if((diff== 0 || frq[x] > 2) && frq[x]>= chr[y]){
                    i+= frq[x++];
                    j+= chr[y++];
                }

                else{
                    chk= false;
                    break;
                }
            }
            else{
                chk= false;
                break;
            }
        }


        if(chk) ans++;

    }

    cout << ans;
    nl

    

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