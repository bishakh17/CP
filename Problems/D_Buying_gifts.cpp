
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;cin>>T;while(T--){
		int n;cin>>n;multiset<int>s;int val=-1e9,ans=1e9;
		vector<pair<int,int>>v(n);
		for(auto&[x,y]:v)cin>>x>>y,s.insert(y);
		sort(v.begin(),v.end(),greater<>());
		for(auto[x,y]:v){
			s.erase(s.find(y));
			if(val>=x)ans=min(ans,val-x);
            else{
				ans=min(ans,x-val);
				auto nt=s.upper_bound(x);
				if(nt!=s.end())ans=min(ans,*nt-x);
				if(nt!=s.begin()&&*prev(nt)>val)ans=min(ans,x-*prev(nt));
			}
			val=max(val,y);
		}
		printf("%d\n",ans);
	}
	return 0;
}