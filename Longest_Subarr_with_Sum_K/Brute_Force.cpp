#include<bits/stdc++.h>
using namespace std;
int longestSubarr(vector<int> arr,int n,int k){
    int maxLen=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                maxLen=max(maxLen,j-i+1);
            }
        }
    }
    return maxLen;
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;
cin>>k;
int longest_subarr=longestSubarr(arr,n,k);
cout<<longest_subarr;
return 0;
}