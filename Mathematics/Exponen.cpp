#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod=1000000007;

long long power(ll a, ll b){
	if(b==0){
		return 1;
	}
	ll ans=1;
	ll x=power(a,b/2);
	if(b%2){
		ans=(x*x)%mod;
		ans=(ans*a)%mod;
	}
	else{
		ans=(x*x)%mod;
	}
	return ans;
	///mod are just for keeping value under control
} 

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	while(n--){
	ll a,b;
	cin>>a>>b;
	cout<<power(a,b)<<"\n";
	}
	}