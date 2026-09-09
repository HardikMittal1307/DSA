#include<bits/stdc++.h>
using namespace std;
int NumberAppearOnce(int arr[],int n){
    map<long long,int> mppp;
    for(int i=0;i<n;i++){
        mppp[arr[i]]++;
    }
    for(auto it:mppp){
        if(it.second==1){
            return it.first;
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