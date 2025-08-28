#include"bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
	string s; cin>>s;
	
	int n=1,l=1;
	
	for(int i=0; i<s.size(); i++){
		if(s[i]==s[i-1])
			l++;
		else
			l=1;
	n=max(n,l);
	} 
	cout<<n;
}
signed main(){
	solve();
}