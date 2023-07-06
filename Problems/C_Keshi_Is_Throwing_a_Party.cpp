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
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    int high = n; int low = 0;
    int ans = 0;
    while(low<=high){
        int mid = (low+high)/2;
        int count = 0;
        for(int i = 0; i<n; i++){
            if(a[i].first>=mid-count-1 && a[i].second>=count){
                count++;
            }
        }
        if(count>=mid){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}