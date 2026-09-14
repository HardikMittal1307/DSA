#include<bits/stdc++.h>
using namespace std;
void sort_array(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort_array(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}