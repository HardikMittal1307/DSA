#include<bits/stdc++.h>
using namespace std;
int majorElement(int arr[],int n){
    int cnt=0;
    int major_element;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            major_element=arr[i];
        }
        else if(arr[i]==major_element){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    // for verification if majority element not guaranteed
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==major_element)cnt1++;
    }
    if(cnt1>n/2){
        return major_element;
    }
    return -1;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int major_element=majorElement(arr,n);
cout<<major_element;
return 0;
}