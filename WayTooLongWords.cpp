#include<bits/stdc++.h>
#define ll              long long 
#define ull             unsigned long long
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x 
#define FIO             ios_base::sync_with_stdio(false)
#define FI              cin.tie(NULL)
#define FO              cout.tie(NULL)
#define endl            '\n'
using namespace std;
void bazinga(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int32_t main(){
	//bazinga();
	FIO;FI;FO;
//	ll t;  cin>>t;  while(t--){
    ll n;
    cin>>n;
    while(n--){
    	string s;
    	cin>>s;
    	if(s.size()<=10) cout<<s<<endl;
    	else cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
    }
//	}
	return 0;
}