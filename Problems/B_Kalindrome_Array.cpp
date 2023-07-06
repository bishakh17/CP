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
    for(int i=0;i<n;i++) cin>>a[i];
    int i = 0; int j = n-1;
    while(i<=j and a[i]==a[j]) i++,j--;
    if(i>j){
        cout("YES");
        return;
    }
    int temp1 = a[i];
    int temp2 = a[j];
    i = 0; j = n-1;
    int t1 = 1;
    int t2 = 1;
    while(i<=j){
        if(a[i]==a[j]){
            i++; j--;
            continue;
        }
        if(a[i]==temp1){
            i++;
            continue;
        }
        if(a[j]==temp1){
            j--;
            continue;
        }
        if(a[i]!=a[j]){
            t1 = 0;
            break;
        }
    }
    i = 0; j = n-1;
    while(i<=j){
        if(a[i]==a[j]){
            i++; j--;
            continue;
        }
        if(a[i]==temp2){
            i++;
            continue;
        }
        if(a[j]==temp2){
            j--;
            continue;
        }
        if(a[i]!=a[j]){
            t2 = 0;
            break;
        }
    }
    if(t1 or t2) cout("YES");
    else cout("NO");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}