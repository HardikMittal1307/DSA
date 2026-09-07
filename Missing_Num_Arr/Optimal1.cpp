#include<bits/stdc++.h>
using namespace std;
int Missing_Num(int arr[],int n){
    int sum=(n*((n+1)/2));
    int s2=0;
    for(int i=0;i<n-1;i++){
        s2+=arr[i];
    }
    return sum-s2;
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