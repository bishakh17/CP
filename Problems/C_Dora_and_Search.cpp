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
    for(int i = 0; i<n; i++) cin>>a[i];
    if(n<=3){cout(-1); return;}
    int mini = 1;
    int maxi = n;
    int l = 0; int r = n-1;

    while(r-l>2){
        if(a[l]!=mini and a[l]!=maxi and a[r]!=mini and a[r]!=maxi){
            cout<<l+1<<" "<<r+1<<endl;
            return;
        }
        if(a[l]==mini or a[l]==maxi){
            if(a[l]==mini) mini++;
            else maxi--;
            l++;
        }
        if(a[r]==mini or a[r]==maxi){
            if(a[r]==mini) mini++;
            else maxi--;
            r--;
        }

    }
    cout(-1);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}