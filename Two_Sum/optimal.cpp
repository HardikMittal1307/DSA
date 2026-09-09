#include<bits/stdc++.h>
using namespace std;
vector<int>twoSum(int arr[],int n,int target){
    sort(arr,arr+n);
    int left=0,right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return {left,right};
        }else if(sum<target){
            left++;
        }else{
            right--;
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