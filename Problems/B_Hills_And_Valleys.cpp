#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int isp(int i, vector<int> &a){
    if(i==0 or i==a.size()-1) return 0;
    if(a[i]>a[i-1] and a[i]>a[i+1]) return 1;
    else if(a[i]<a[i-1] and a[i]<a[i+1]) return 1;
    return 0;
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n<=4){
        cout<<0<<endl;
        return;
    }
    int ans = 0;
    for(int i = 1; i<n-1; i++){
        ans+=isp(i,a);
    }
    int maxi = 0;
    for(int i = 1; i<n-1; i++){
        int curr = isp(i-1,a)+isp(i,a)+isp(i+1,a);
        int temp = a[i];
        a[i] = a[i-1];
        maxi = max(maxi,curr-isp(i-1,a)-isp(i,a)-isp(i+1,a));
        a[i] = a[i+1];
        maxi = max(maxi,curr-isp(i-1,a)-isp(i,a)-isp(i+1,a));
        a[i] = temp;
    }
    cout<<ans-maxi<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}