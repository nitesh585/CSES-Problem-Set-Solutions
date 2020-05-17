#include<iostream>
using namespace std;

typedef long long int ll;

string CoinPiles( ll a, ll b){
	
	if((a+b)%3==0) return "YES";	

	return "NO";
}

int main(){
	int t;
	cin>>t;
	ll a,b;
	while(t--){
		cin>>a>>b;
		cout<<CoinPiles(a,b)<<"\n";
	}
}
