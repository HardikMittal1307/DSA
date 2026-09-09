#include<bits/stdc++.h>
using namespace std;
int NumberAppearOnce(int arr[],int n){
    int maxx=0;
    for(int i=0;i<n;i++){
        maxx=max(maxx,arr[i]);
    }
    int Hash[maxx+1]={0};
    for(int i=0;i<n;i++){
        Hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(Hash[arr[i]]==1){
            return arr[i];
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