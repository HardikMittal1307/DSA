#include<bits/stdc++.h>
using namespace std;
void rotateArray(vector<int> &arr,int n,int d){
    d%=arr.size();
    reverse(arr.begin(),arr.end()-d);
    reverse(arr.end()-d,arr.end());
    reverse(arr.begin(),arr.end());
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int d;
cin>>d;
rotateArray(arr,n,d);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}