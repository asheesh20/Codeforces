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
	    string s,s1;
	    ll i;
	    cin>>s;
	    	for(i=0;i<s.size();i++){
	    		if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'){
	    			continue;
	    		}
	    		else {
	    			s1+='.';
	    			s1+=towlower(s[i]);
	    		}
	    	}
	    	cout<<s1<<endl;
	    
	//	}
		return 0;
	}