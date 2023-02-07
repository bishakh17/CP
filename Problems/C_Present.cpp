#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int lowerbs(int l, int r, int m, int w, vector<int>& nums){
    if(l>r) return -1;
    int n = nums.size();
    int mid = (l+r)/2;
    int days = 0;
    queue<int> q;
    int sum = 0;
    for(int i = 0; i<n; i++){

        int temp = mid-(nums[i]+sum);
        if(temp<0) temp = 0;
        q.push(temp);
        sum+=temp;
        if(q.size()==w){
            sum-=q.front();
            q.pop();
        }
        days+=temp;
    }
    if(days<=m){
        int temp = lowerbs(mid+1,r,m,w,nums);
        if(temp!=-1) return temp;
        else return mid;
    }
    else return lowerbs(l,mid-1,m,w,nums);

}

void solve(){
    int n,m,w; cin>>n>>m>>w;
    vector<int> nums(n);
    int mini = INT64_MAX;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        mini = min(mini,nums[i]);
    }
    cout(lowerbs(mini,mini+m,m,w,nums));

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}