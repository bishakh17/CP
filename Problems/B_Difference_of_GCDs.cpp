#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,l,r; cin>>n>>l>>r;
    
    vector<int> a(n);
    for(int i = 1; i<=n; i++){
        int temp = l-l%i;
        if(temp<l) temp+=i;
        if(temp>r) {cout("NO"); return;}
        a[i-1] = temp;
    }
    cout("YES");
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
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