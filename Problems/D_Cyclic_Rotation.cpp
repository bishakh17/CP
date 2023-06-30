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
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    int i = n-1, j = n-1;
    vector<int> s(n+1,0);
    while(j>=0 or i>=0){
        if(j>0 and b[j-1]==b[j]){
            s[b[j]]++;
            j--;
        }
        else if(j>=0 and a[i]==b[j]){
            i--;
            j--;
        }
        else{
            if(s[a[i]]>0){
                s[a[i]]--;
                i--;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}