#include<bits/stdc++.h>
using namespace std;
int MissingNum(int arr[],int n){
    int XOR1=0;
    int XOR2=0;
    for(int i=0;i<n-1;i++){
        XOR2=XOR2^arr[i];
        XOR1=XOR1^(i+1);
    }
    XOR1=XOR1^n;
    return XOR1^XOR2;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int missing_number=MissingNum(arr,n);
cout<<missing_number;
return 0;
}