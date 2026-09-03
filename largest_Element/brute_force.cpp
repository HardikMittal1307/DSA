#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());

    return arr.at(n-1);
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<largest(arr,n);
return 0;
}