#include<bits/stdc++.h>
using namespace std;
int longestSubarr(int arr[],int n,long long k){
    map<long long,int>prefixSumMap;
    long long prefix_sum=0;
    int max_len=0;
    for(int i=0;i<n;i++){
        prefix_sum+=arr[i];
        if(prefix_sum==k){
            max_len=max(max_len,i+1);
        }
        long long rem=prefix_sum-k;
        if(prefixSumMap.find(rem)!=prefixSumMap.end()){
            int len=i-prefixSumMap[rem];
            max_len=max(max_len,len);
        }
        if(prefixSumMap.find(prefix_sum)==prefixSumMap.end()){
            prefixSumMap[prefix_sum]=i;
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