#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define cout(x) cout<<(x)<<endl
int T = 1;


void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> nums(n);
    vector<int> q(m);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    for(int i = 0; i<m; i++){
        cin>>q[i];
    }
    vector<int> temp(n);
    unordered_set<int> s;
    for(int i = n-1; i>=0; i--){
        s.insert(nums[i]);
        temp[i] = s.size();
    }
    for(int i = 0; i<m; i++){
        cout(temp[q[i]-1]);
    }
    return;
}

int main(){
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}