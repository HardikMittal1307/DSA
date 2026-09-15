#include<bits/stdc++.h>
using namespace std;
long long maxSum(int arr[],int n){
    long long sum=0;
    long long maxx=LLONG_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxx){
            maxx=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    if(maxx<0){
        maxx=0;
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
long long max_sum=maxSum(arr,n);
cout<<max_sum;
return 0;
}