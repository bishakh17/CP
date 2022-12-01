#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define cout(x) cout<<(x)<<endl



void solve(){
    int n,m,d;
    cin>>n>>m>>d;
    vector<int> nums(m*n);

    for(int i = 0; i<n*m; i++){
        cin>>nums[i];
    }

    sort(nums.begin(),nums.end());

    int base = nums[n*m/2];
    int ans = 0;

    for(int i = 0; i<n*m; i++){
        int temp = abs(nums[i]-base);
        if(temp%d!=0){
            cout(-1);
            return;
        }
        else{
            ans+=temp/d;
        }
    }
    cout(ans);



}

int main(){
    int T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}