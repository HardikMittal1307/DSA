#include<bits/stdc++.h>
using namespace std;
void rotateArray(vector<int> &arr,int n,int d ){
    d%=arr.size();
    vector<int> temp;
    for(int i=n-d;i<n;i++){
        temp.push_back(arr[i]);
    }
    for(int i=1;i<=n-d;i++){
        arr[n-i]=arr[n-d-i];
    }
    for(int j=0;j<d;j++){
        arr[j]=temp[j];
    }
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