#include<bits/stdc++.h>
using namespace std;
void rotateArray(vector<int> &arr,int n,int d ){
    d%=arr.size();
    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int j=n-d;j<n;j++){
        arr[j]=temp[j-(n-d)];
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