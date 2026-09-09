#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int tar;
cin>>tar;
vector<int>indices=twoSum(arr,n,tar);
cout<<indices[0]<<" "<<indices[1];
return 0;
}