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
        for(int i=2; i<n; i++){
            int curr = (mid-a[i-2])/2;
            if(mid<a[i-2]) curr = 0;
            else if((mid-a[i-2])%2) curr++;
            if(i==n-1){
                curr = max(curr,(mid-a[i-1]));
            }
            if(3*curr>a[i]){
                curr = (a[i])/3;
                a[i-2]+=2*curr;
                a[i]-=3*curr;
                int curr2 = (mid-a[i-2]);
                if(curr2<0) curr2 = 0;
                if(a[i-1]<3*curr2 or i==2){
                    t = 0;
                    break;
                }
                a[i-2]+=curr2;
                a[i-1]-=3*curr2;
                a[i-1]+=curr;
                continue;
            }
            a[i]-=3*curr;
            a[i-1]+=curr;
            a[i-2]+=2*curr;
        }
        if(a[n-1]<mid) t = 0;
        a = b;
        if(t){
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