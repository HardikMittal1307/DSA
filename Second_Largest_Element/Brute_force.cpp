#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> arr,int n){
    int largest=arr[n-1];
    int second_largest=-1;
    sort(arr.begin(),arr.end());
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            second_largest=arr[i];
            break;
        }
    }
    return second_largest;
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<secondLargest(arr,n);
return 0;
}