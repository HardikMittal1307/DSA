#include<bits/stdc++.h>
using namespace std;
int longestSubarr(int arr[],int n, long long k){
    int left=0,right=0;
    long long sum=arr[0];
    int max_len=0;
    while(right<n){
        while(left<=right&&sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            max_len=max(max_len,right-left+1);
        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
    }
    return max_len;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
long long k;
cin>>k;
int longest_subarr=longestSubarr(arr,n,k);
cout<<longest_subarr;
return 0;
}