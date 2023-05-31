#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int helper(int r, int lcm, int b){
    int temp = r/lcm;
    int ans = temp*b;
    int rem = lcm*temp;
    ans+=min(r-rem+1,b);
    return ans;
}

void solve(){
    int a,b,q; cin>>a>>b>>q;
    int mini = min(a,b);
    int maxi = max(a,b);
    int lcm = (a*b)/__gcd(a,b);

    for(int i = 0; i<q; i++){
        int l,r; cin>>l>>r;
        if(r<maxi){cout<<0<<" "; continue;}
        if(maxi==lcm) {cout<<0<<" "; continue;}
        int ans = r-l+1;
        int gg = helper(r,lcm,maxi)-helper(l-1,lcm,maxi);
        cout<<ans-gg<<" ";
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}