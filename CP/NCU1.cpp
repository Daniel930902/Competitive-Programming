#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define nl '\n'
 
int n;
long long P;
vector<int>v;
vector<int>a;
 
void sum(int i, int s ){
	if( s+v[i] > P )
		return;
	a.pb( s+v[i] );
	if(i==n-1 ){ // 以免跑出去
		return;
	}
	sum(i+1, s); // 不選
	sum(i+1, s+v[i]); // 選
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>P;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		v.pb(x);
	}
	sort( v.begin(), v.end() );
	sum( 0 , 0 );
	sort( a.begin(), a.end() );
	cout<< a.back();
}
