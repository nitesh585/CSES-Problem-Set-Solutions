#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
typedef long long int ll;

string PalindromeReorder(string s){
	unordered_map<char,ll> freq;
	
	string res="";
	for(char c:s) freq[c]++;
	int oddFound = 0;
	string odd="";	
	for(auto i= freq.begin(); i!=freq.end(); i++){
		if(i->second & 1){ 
			oddFound++;
			odd = i->first;		
		}else{
			int tmp = i->second >> 1;
			while(tmp){
				res+=i->first;	
				tmp--;
			} 
		}
		if(oddFound>1) return "NO SOLUTION";		
	}	
	
	string tmp = res;
	reverse(tmp.begin(), tmp.end());
	res = res + odd + tmp ;
	
	return res;
}

int main(){
	string s;
	cin>>s;

	cout<<PalindromeReorder(s);
}
