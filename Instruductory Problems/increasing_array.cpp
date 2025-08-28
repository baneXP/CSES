#include"bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
	int n; cin>>n;
	vector<int>ar(n);
	for(int i=0; i<n; i++) cin>>ar[i];

	int m=0;
    for(int i=1; i<n; i++){
        if(ar[i]<ar[i-1]){
            m += ar[i-1] - ar[i];
            ar[i]=ar[i-1];
        }
    }
	cout<<m;
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
}