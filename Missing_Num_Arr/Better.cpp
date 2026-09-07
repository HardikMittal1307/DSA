#include<bits/stdc++.h>
using namespace std;
int Missing_Num(int arr[],int n){
    int Hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        Hash[arr[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(Hash[i]==0){
            return i;
        }
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int missing_number=Missing_Num(arr,n);
cout<<missing_number;
return 0;
}