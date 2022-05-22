#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define phb push_back
#define ppb pop_back

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m;cin>>m;
	long long int n;
	for(int l=0;l<m;l++){
		cin>>n;
		if( n<10 ){
			cout<<n<<nl;
			continue;
		}
		if( n==0 ) cout<<-1<<nl;
		int a=0;
		vector<int>v;
		for( int i=9; i>1 ; i-- ){
			while( n%i==0 ){
				v.phb(i);
				n/=i;
			}
		}
		if(n!=1) {
			cout<<-1<<nl;
			continue;
		}
		sort( v.begin(), v.end() );
		for(int i=0;i<v.size();i++)
			cout<<v[i];
		cout<<nl;
	}
}
