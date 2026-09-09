#include<bits/stdc++.h>
using namespace std;
int NumberAppearOnce(int arr[],int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        int num=arr[i];
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                cnt++;
            }
        }
        if(cnt==1){
            return num;
        }
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int number_appear_once=NumberAppearOnce(arr,n);
cout<<number_appear_once;
return 0;
}