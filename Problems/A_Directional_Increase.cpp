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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i = n-1;
    while(i>=0 and a[i]==0) i--;
    if(i==-1){
        cout("YES");
        return;
    }
    vector<int> b(n,0);
    for(int j = 0; j<=i; j++){
        if(j>0) a[j]++;
        int temp = a[j] - b[j];
        if(j==i and temp!=0){
            cout("NO");
            return;
        }
        else if(j==i and temp==0){
            cout("YES");
            return;
        }
        else if(temp<=0){
            cout("NO");
            return;
        }
        b[j+1] = -temp;
        b[j+1]++;
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}