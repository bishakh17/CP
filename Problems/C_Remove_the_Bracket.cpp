// #include <bits/stdc++.h>
// using namespace std;
// const int N = 200005;
// long long f[N][2],x[N],y[N];
// void get() {
// 	int i,n,s,j;
// 	cin>>n>>s;
// 	for(i=1; i<=n; i++) {
// 		cin>>j;
// 		if(i==1||i==n) x[i]=y[i]=j;
// 		else if(j<=s) x[i]=0,y[i]=j;
// 		else x[i]=s,y[i]=j-s;
// 	}
// 	f[1][0]=f[1][1]=0;
// 	for(i=2; i<=n; i++) {
// 		f[i][0]=min(f[i-1][0]+y[i-1]*x[i],f[i-1][1]+x[i-1]*x[i]);
// 		f[i][1]=min(f[i-1][0]+y[i-1]*y[i],f[i-1][1]+x[i-1]*y[i]);
// 	}
// 	cout<<f[n][0]<<endl;
// }
// int main() {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);
// 	int T; cin>>T;
// 	while(T--) get();
// 	return 0;
// }

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dp(int i, int j, int s, vector<int>& a, vector<vector<int>>& store){
    int n = a.size();
    if(store[i][j]!=-1) return store[i][j];
    int curr;
    if(j==0){
        if(a[i]<=s) curr = a[i];
        else curr = s;
    }
    else{
        if(a[i]<=s) curr = 0;
        else curr = a[i]-s;
    }
    int ans = 0;
    if(i==n-2) return curr*a[n-1];
    if(i==0) curr = a[0];
    int temp1 = curr*(a[i+1]-min(a[i+1],s)) + dp(i+1,0,s,a,store);
    int temp2 = curr*min(a[i+1],s) + dp(i+1,1,s,a,store);
    ans = min(temp1,temp2);
    return store[i][j] = ans;
}

void solve(){
    int n,s; cin>>n>>s;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    vector<vector<int>> store(n, vector<int>(2,-1));
    int ans = dp(0,0,s,a,store);
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