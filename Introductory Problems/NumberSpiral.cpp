/*
A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:
 
 1  2  9  10 25
 4  3  8  11 24
 5  6  7  12 23
 16 15 14 13 22
 17 18 19 20 21 
 
Your task is to find out the number in row y and column x.

Input
The first input line contains an integer t: the number of tests.

After this, there are t lines, each containing integers y and x.

Output
For each test, print the number in row y and column x.

Constraints

    1≤t≤10^5

1≤y,x≤109


Example

Input:
3
2 3
1 1
4 2

Output:
8
1
15
*/

#include<iostream> 
using namespace std;
typedef long long int ll;

ll NumberSpiral(ll x, ll y){
	if(x>=y){
		if(x&1){
			return (x-1)*(x-1) + y;		
		}else{
			return x*x - y+1 ;
		}
	}else{
		if(y&1){
			return y*y - x+1;		
		}else{
			return (y-1)*(y-1) +x;
		}
	}
}


int main(){
	int t;
	cin>>t;
	ll x,y;

	while(t--){
		cin>>x>>y;
		cout<<NumberSpiral(x,y)<<"\n";
	}
}
