#include<bits/stdc++.h>
using namespace std;
int largestElement(int n,int arr[]){
    int max_number=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max_number)
            max_number=arr[i];
    }
    return max_number;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largestElement(n,arr)<<endl;
}
