#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	set<int> s;
	int n,val; cin>>n;
	for(int i=0; i<n; i++){
		cin>>val;
		s.insert(val);
	}
	cout<<s.size();
}

signed main(){
	solve();
	return 0;
}