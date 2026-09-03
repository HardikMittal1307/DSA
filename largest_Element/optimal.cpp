#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> &arr,int n){
    int Largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>Largest){
            Largest=arr[i];
        }
    }
    return Largest;
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