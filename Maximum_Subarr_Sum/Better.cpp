#include<bits/stdc++.h>
using namespace std;
long long maxSum(int arr[],int n){
    long long sum;
    long long maxi=LLONG_MIN;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(maxi,sum);
        }
    }
    return maxi;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
long long max_sum=maxSum(arr,n);
cout<<max_sum;
return 0;
}