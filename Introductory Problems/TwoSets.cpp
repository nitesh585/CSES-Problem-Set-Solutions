#include<iostream>
#include<vector>
using namespace std;

typedef long long int ll;

bool check(ll n){
	ll sum = n*(n+1)/2;
	return sum&1;
}

int main(){
	ll n;
	cin>>n;
	
	if(check(n)){
		cout<<"NO";
	}else{
		cout<<"YES\n";
		
		vector<int> one, two;
		ll sm1 = n, sm2 = n-1;		

		one.emplace_back(sm1);
		two.emplace_back(sm2);
		
		for(int i=n-2;i>0; i--){
			if(sm1>sm2){
				sm2+=i;		
				two.emplace_back(i);
			}else{
				sm1+=i;				
				one.emplace_back(i);
			}		
		}
	
		cout<<one.size()<<"\n";
		for(int n:one) cout<<n<<" ";
		
		cout<<"\n"<<two.size()<<"	\n";
		for(int n:two) cout<<n<<" ";
	}	
}
