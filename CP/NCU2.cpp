#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define phb push_back
#define ppb pop_back
 
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int w,n;cin>>w>>n;
	vector<int> v;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		v.phb(x);
	}
	sort( v.begin(),v.end() );
	int a=0,i=0;
	while( v[i] <= v.back() ) {
		if( i==v.size()-1 ){ //終止條件
			a++;
			break;
		}
		if( v[i]+v.back() <= w ){
			a++;
			v.ppb();
			if( i==v.size()-1 ) break;
			i++;
		}
		else {
			a++;
			v.ppb();
		}
	}
	cout<<a;
}
