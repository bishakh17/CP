#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    int m; cin>>m; 
    vector<int> b(m);
    for(int i=0; i<m; i++) cin>>b[i];
    sort(b.begin(), b.end());
    string ans1, ans2;
    int i = n-1;
    int j = m-1;
    if(a[i]>b[j]){
        ans1 = "Alice";
        ans2 = ans1;
    }
    else if(a[i]<b[j]){
        ans1 = "Bob";
        ans2 = ans1;
    }
    else{
        ans1 = "Alice";
        ans2 = "Bob";
    }
    cout(ans1);
    cout(ans2);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}