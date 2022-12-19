#include <bits/stdc++.h>     
using namespace std;
#define ll long long
const ll MOD=998244353;
void solve(){
    ll n; cin>>n;
    string s; cin>>s; s=" "+s;
    ll ans=0,cur=1;
    for(ll i=1;i<=n;i++){
        if(s[i]==s[i-1]){
            cur=(2*cur)%MOD;
        }
        else{
            cur=1;
        }
        ans=(ans+cur)%MOD;
    }
    cout<<ans<<"\n";
}
int main()                                                                                
{  
    ios_base::sync_with_stdio(false);                         
    cin.tie(NULL);  
    ll t; cin>>t;
    while(t--){
        solve();
    }
} 