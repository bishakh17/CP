#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int i = n/2;
    int used = 0;
    int count = 1;
    int ans = a[i];
    while(i<n-1){
        int temp = (a[i+1]-a[i])*count;
        if(used+temp<k){
            used+=temp;
            i++;
            count++;
        }
        else if(used+temp==k){
            ans = a[i+1];
            break;
        }
        else{
            ans = a[i] + (k-used)/count;
            break;
        }
    }
    if(i==n-1 and used<k){
        ans = a[i] + (k-used)/count;
    }
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}