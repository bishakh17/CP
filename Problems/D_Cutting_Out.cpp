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
    for(int i=0; i<n; i++) cin>>a[i];
    vector<int> temp(2e5+1,0);
    for(int i = 0; i<n; i++){
        temp[a[i]]++;
    }
    int low = 1;
    int high = n;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        int cnt = 0;
        for(int i = 1; i<=2e5; i++){
            cnt += temp[i]/mid;
        }
        if(cnt>=k){
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    vector<int> res;
    for(int i = 1; i<=2e5; i++){
        int cnt = temp[i]/ans;
        while(cnt--){
            res.push_back(i);
        }
    }
    for(int i = 0; i<k; i++) cout<<res[i]<<" ";
    cout<<endl;

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}