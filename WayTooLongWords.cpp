#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define FIO ios_base::sync_with_stdio(false)
#define FI cin.tie(NULL)
#define FO cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){
	FIO;FI;FO;
	ll n,i;
	string s,s1,s2;
	cin>>n;
	while(n--){
		cin>>s;
		if(s.size()<=10) cout<<s<<endl;
		else {
			//s1=s[0];
			//i=s.size()-2;
			//s2=s[s.size()-1];
			cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
		}
 	}
}