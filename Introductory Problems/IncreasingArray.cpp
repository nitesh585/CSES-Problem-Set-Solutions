/*
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each turn, you may increase the value of any element by one. What is the minimum number of turns required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of turns.

Constraints

    1≤n≤2⋅10^5


1≤xi≤10^9


Example

Input:
5
3 2 5 1 7

Output:
5

*/


#include<iostream> 
using namespace std;
typedef long long int ll;

ll IncreasingArray(ll ar[], ll n){
	ll ans=0;

	for(ll i=0; i<n; i++){
		if(ar[i]>ar[i+1]){
			ans+=(ar[i]-ar[i+1]);
			ar[i+1] = ar[i];
		}
	}
	return ans;
}

int main(){
	ll n;
	cin>>n;
	
	ll ar[n];
	for(ll i=0; i<n; i++) cin>>ar[i];

	cout<<IncreasingArray(ar, n)<<"\n";
}
