/*
Your task is to calculate the number of bit strings of length n.
For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

Input
The only input line has an integer n.

Output
Print the result modulo 10^9+7.

Constraints

    1≤n≤10^6

Example
Input:
3

Output:
8

*/


#include<iostream>
using namespace std;

#define MOD 1000000007
typedef long long int ll;

ll BitString(ll n){
	ll res=1;
	while(n){
		res = (res*2)%MOD;
		n--;	
	}

	return res;
}

int main(){
	ll n;
	cin>>n;
	cout<<BitString(n);
}
