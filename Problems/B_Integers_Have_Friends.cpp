#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
vector<vector<int>> sparseTable;
void buildTable(vector<int>& a){
    int n = a.size();
    int m = log2(n)+10;
    sparseTable.resize(n, vector<int>(m,-1));
    for(int i=0; i<n; i++) sparseTable[i][0] = a[i];
    for(int j=1; j<m; j++){
        for(int i=0; i+(1<<j)-1<n; i++){
            sparseTable[i][j] = __gcd(sparseTable[i][j-1], sparseTable[i+(1<<(j-1))][j-1]);
        }
    }
}
int query(int l, int r){
    int range = r-l+1;
    int j = log2(range);
    return __gcd(sparseTable[l][j], sparseTable[r-(1<<j)+1][j]);
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    if(n==1){
        cout<<n<<endl;
        return;
    }
    vector<int> b(n-1);
    for(int i=0; i<n-1; i++) b[i] = abs(a[i+1] - a[i]);
    buildTable(b);
    int high = n-1;
    int low = 1;
    int ans = 0;
    while(low<=high){
        int mid = (low+high)/2;
        for(int i = 0; i+mid-1<=n-2; i++){
            int j = i+mid-1;
            if(query(i,j) > 1){
                ans = mid;
                low = mid+1;
                break;
            }
        }
        if(ans!=mid) high = mid-1;
    }
    cout<<ans+1<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}