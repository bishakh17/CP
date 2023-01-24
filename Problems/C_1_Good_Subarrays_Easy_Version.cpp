#include<iostream>
using namespace std;
signed main(){
	int T,n;
	cin>>T;
	while(T--) {
		cin>>n;
		long long a[200005],sum=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]>a[i-1]) a[i]=a[i-1]+1;
			sum+=a[i];
		}
		cout<<sum<<endl;;
	}
}