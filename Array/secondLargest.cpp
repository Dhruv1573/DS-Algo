#include<bits/stdc++.h>
using namespace std;
int secondLargestBrute(int n,vector<int>arr){
	sort(arr.begin(),arr.end());
	int largest=arr[n-1];
	for(int i=n-2;i>=0;i--){
		if(largest!=arr[i])
			return arr[i];
	}
	return -1;
}
int secondLargestBetter(int n,vector<int>arr){
	
}
int main(){
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//Brute --> O(nlogn)
	cout<<secondLargestBrute(n,arr)<<endl;
	//Better --> O(n)
	cout<<secondLargestBetter(n,arr)<<endl;
}