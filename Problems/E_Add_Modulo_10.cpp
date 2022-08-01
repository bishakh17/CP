#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n;
    cin>>n;
    vector<long long> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    
    long long temp1 = -10;
    long long temp = -10;
    int t1 = -1;
    int t;
    for(int i = 0; i<n; i++){
        int last = nums[i]%10;
        if(last == 1 or last == 2 or last == 4 or last == 8){
            if((nums[i]/10)%2==0) t=0;
            else t=1;
        }
        else if(last == 3 or last == 6 or last == 9 or last == 7){
            if((nums[i]/10)%2==0) t=1;
            else t=0;
        }
        else{
            t=2;
            if(last == 0) temp = nums[i];
            else temp = nums[i]+5;
        }
        if(t1==-1){
            t1 = t;
            temp1 = temp;
        }
        else if(t1!=t or temp1!=temp){
                cout<<"No"<<endl;
                return;
        }
 
    }
    cout<<"Yes"<<endl;
    return;
}
 
int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}