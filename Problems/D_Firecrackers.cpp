#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,x,y; cin>>n>>m>>x>>y;
    vector<int> a(m);
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a.begin(),a.end());
    if(x>y){
        x = n-x+1;
        y = n-y+1;
    }
    int low = 0;
    int high = y-x-1;
    high = min(high,m);
    int ans = 0;
    while(low<=high){
        int mid = (low+high)/2;
        int time = y-1;
        int cnt = 0;
        for(int i = mid-1; i>=0; i--){
            if(time>a[i]){
                cnt++;
                time--;
            }
            else break;
        }
        if(cnt<mid){
            high = mid-1;
        }
        else{
            ans = mid;
            low = mid+1;
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