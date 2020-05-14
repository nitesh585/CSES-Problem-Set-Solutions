/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints

    1≤n≤10^6


Example

Input:
ATTCGGGA

Output:
3
*/

#include<iostream>
using namespace std;

int repetitions(string str){
	int ans=0;
	int cnt=0;
	char prev=str[0];
	for(int i=0; i<str.length(); i++){
		if(str[i]==prev){
			cnt++;
		}else{				
			ans = max(ans, cnt);
			cnt=1;
			prev = str[i];
		}
	}
	
	ans = max(ans, cnt);
	return ans;
}


int main(){
	string str;
	cin>>str;
	cout<<repetitions(str)<<"\n";
}
