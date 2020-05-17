#include<iostream>
using namespace std;

typedef long long int ll;


ll TrainlingZeros(ll num){
	ll res=0;
	for(int i=5; num/i>=1 ; i*=5){
		res+=(num/i);
	}
	
	return res;
}

int main(){
	ll num;
	cin>>num;
	cout<<TrainlingZeros(num);
}
