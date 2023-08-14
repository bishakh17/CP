#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int checksum(vector<int>& a){
    int n = a.size();
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+=(a[i]*(i+1));
    }
    return sum;
}

int checksumi(vector<int>& a, int l){
    int sum = 0;
    int n = a.size();
    int maxi = 0;
    for(int i = 0; i<l; i++){
        sum+=(a[i]*(i+1));
        maxi = max(maxi,(a[i]*(i+1)));
    }
    int j = n;
    for(int i = l; i<n; i++){
        sum+=(a[i]*j);
        maxi = max(maxi,(a[i]*j));
        j--;
    }
    return sum-maxi;
}


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        a[i] = i+1;
    }
    int ans = checksum(a) - n*n;
    for(int i = 0; i<n; i++){
        int temp = checksumi(a,i);
        ans = max(ans,temp);
    }
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}