#include"bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
	int n; cin>>n;
	vector<int>ar(n-1);
	for(int i=0; i<n-1; i++) cin>>ar[i];
		
	int re=n*(n+1)/2;
	int sum=0;
	for(int i=0; i<n-1; i++){
		sum += ar[i];
	}
	cout<<re-sum;
}

signed main(){
	solve();
}