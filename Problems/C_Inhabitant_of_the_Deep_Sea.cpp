#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; 
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 0;
    int i = 0;
    int j = n-1;
    while(i<j){
        int mini = min(a[i],a[j]);
        int maxi = max(a[i],a[j]);
        if(mini==a[i]){
            if(k<2*mini-1){
                cout<<ans<<endl;
                return;
            }
            if(k==2*mini-1){
                ans++;
                cout<<ans<<endl;
                return;
            }
            if(k==2*mini){
                ans++;
                if(a[j]==mini) ans++;
                cout<<ans<<endl;
                return;
            }
            ans++;
            k-=2*mini;
            i++;
            a[j]-=mini;
        }
        else{
            if(k<2*mini){
                cout<<ans<<endl;
                return;
            }
            if(k==2*mini){
                ans++;
                cout<<ans<<endl;
                return;
            }
            ans++;
            k-=2*mini;
            j--;
            a[i]-=mini;
        }
    }
    if(i==j){
        if(k>=a[i]){
            ans++;
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