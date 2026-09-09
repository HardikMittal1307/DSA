#include<bits/stdc++.h>
using namespace std;
vector<int>twoSum(int arr[],int n,int target){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int more_require=target-num;
        if(mpp.find(more_require)!=mpp.end()){
            return {mpp[more_require],i};
        }
        mpp[num]=i;
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