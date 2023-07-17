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
    int low = 0; int high = a[n-1];
    int ans = -1;
    vector<int> b = a;
    while(low<=high){
        int mid = (low+high)/2;
        int t = 1;
        for(int i = n-1; i>=2; i--){
            int diff = b[i] - mid;
            diff = min(diff,a[i]);
            if(diff<0){
                t = 0; break;
            }
            else{
                diff/=3;
                b[i-1]+=diff;
                b[i-2]+=2*diff;
            }
        }
        if(b[0]<mid or b[1]<mid) t = 0;
        if(t){
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
        b = a;
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