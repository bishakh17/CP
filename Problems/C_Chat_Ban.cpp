#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int k,x; cin>>k>>x;
    double temp = 1+8*x;
    temp = sqrt(temp);
    temp--;
    int ans = ceil(temp/2);
    if(ans<=k){
        cout(ans);
        return;
    }
    x-=k*(k+1)/2;
    if(x>=(k*(k-1)/2)){
        cout(2*k-1);
        return;
    }
    int high = k-1;
    int low = 1;
    ans = INT64_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        int temp = mid*k - mid*(mid+1)/2;
        if(temp>=x){
            ans = min(ans,mid);
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout(k+ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}