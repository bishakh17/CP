#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
 

#define N 34000

vector<int> prime(N+1,-1);
vector<int> store;
void sieve(){
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i<=N; i++) {
        if (prime[i]==-1) {
            store.push_back(i);
            for (int j = i*i; j <= N; j += i) prime[j] = i;
        }
    }
}


void solve(){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    unordered_map<int, int> m;
    for(int i = 0; i<n; i++){
        int temp = nums[i];
        for(int j = 0; j<store.size(); j++){
            if(store[j]*store[j]>temp) break;
            if(temp%store[j]==0){
                m[store[j]]++;
                if(m[store[j]]>1){
                    cout("YES");
                    return;
                }
                while(temp%store[j]==0){
                    temp/=store[j];
                }
            }
        }
        if(temp>1){
            m[temp]++;
            if(m[temp]>1){
                cout("YES");
                return;
            }
        }
    }
    cout("NO");
}
 
int32_t main(){
    fastio;
    cin>>T;
    sieve();
    while(T--){
        solve();
    }
    return 0;
}

