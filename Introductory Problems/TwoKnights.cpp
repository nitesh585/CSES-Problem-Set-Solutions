#include<iostream>
using namespace std;
typedef long long int ll;

ll TwoKnights(ll n){
	// number of threatening postions	
	ll threats = 4*(n-1)*(n-2);
	
	//total number of positions
	ll pos = (n*n*(n*n-1))/2;
	
	return pos-threats;
}

int main(){
	ll n;
	cin>>n;
	for(ll i=1; i<=n; i++){
		cout<<TwoKnights(i)<<"\n";
	}
}
