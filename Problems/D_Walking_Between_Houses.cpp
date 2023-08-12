#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k,s; cin>>n>>k>>s;
    if(s>((n-1)*k) or s<k){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    int t = 0;
    while((s-n+1)>=k-1 and k>0){
        if(t) cout<<1<<" ";
        else cout<<n<<" ";
        t = 1-t;
        s-=n-1;
        k--;
    }
    if(k==0) return;
    if(t){
        int x = s-(k-1);
        cout<<n-x<<" ";
        k--;
        s-=x;
        int gg = 0;
        while(k--){
            if(gg) cout<<n-x<<" ";
            else cout<<n-x+1<<" ";
            gg = 1-gg;
        }
    }
    else{
        int x = s-(k-1);
        cout<<x+1<<" ";
        k--;
        s-=x;
        int gg = 0;
        while(k--){
            if(gg) cout<<x+1<<" ";
            else cout<<x<<" ";
            gg = 1-gg;
        }
    }
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}