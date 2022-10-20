#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    ll sum = 0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    if(sum%3!=0){
        cout<<0<<endl;
        return;
    }
    int k = 0;
    int temp = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        temp+=nums[i];
        if(temp==sum/3)k++;
        if(temp==2*sum/3)ans+=k;
    }
    if(!sum) ans = (k-1)*(k-2)/2;
    cout<<ans<<endl;

}
int main(){
    int T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}