/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints

    2≤n≤2⋅10^5


Example

Input:
5
2 3 1 5

Output:
4

*/

#include<iostream>
using namespace std;

int missingNumber(int arr[], int size){
	int ans =0;
	for(int i=0; i<size-1;i++){
		ans^=arr[i];
		ans^=(i+1);
	}
	
	ans^=size;
	
	return ans;
}


int main(){
	int n;
	cin>>n;
	int arr[n-1];

	for(int i=0; i<n-1; i++){
		cin>>arr[i];
	}

	cout<<missingNumber(arr, n)<<"\n";
}
