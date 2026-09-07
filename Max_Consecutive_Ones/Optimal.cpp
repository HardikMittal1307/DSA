#include<bits/stdc++.h>
using namespace std;
int MaxOnes(int arr[],int n){
    int maxx=0,cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxx=max(cnt,maxx);
        }else{
            cnt=0;
        }
    }
    return maxx;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int max_ones=MaxOnes(arr,n);
cout<<max_ones;
return 0;
}