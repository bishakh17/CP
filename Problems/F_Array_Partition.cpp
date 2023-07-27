#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
vector<vector<int>> sparseTable;
void buildTable(vector<int> &a){
    int n = a.size();
    int m = log2(n)+1;
    sparseTable.resize(n, vector<int>(m,INT64_MAX));
    for(int i=0; i<n; i++) sparseTable[i][0] = a[i];
    for(int j=1; j<m; j++){
        for(int i=0; i+(1<<j)-1<n; i++){
            sparseTable[i][j] = min(sparseTable[i][j-1], sparseTable[i+(1<<(j-1))][j-1]);
        }
    }
}
int query(int l, int r){
    int j = log2(r-l+1);
    return min(sparseTable[l][j], sparseTable[r-(1<<j)+1][j]);
}


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    buildTable(a);
    int i = 0, j = n-1;
    int front = a[i], back = a[j];
    while(i+1<j){
        front = max(front, a[i]);
        back = max(back, a[j]);
        if(front==back){
            if(query(i+1, j-1)==front){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<j-i-1<<" "<<n-j<<endl;
                return;
            }
            if(a[i+1]<front) i++;
            else if(a[j-1]<back) j--;
            else if(a[i+1]==front && a[j-1]==back){
                if(i+2<j-2 and a[i+2]<=front and a[j-2]>front) i++;
                else j--;
            }
            else if(a[i+1]==front) i++;
            else j--;

        }
        else if(front<back) i++;
        else j--;
    }
    cout<<"NO"<<endl;


}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}