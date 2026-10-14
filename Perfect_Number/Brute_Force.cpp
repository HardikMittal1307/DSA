#include<iostream>
using namespace std;

int main (){
int n,sum=0;
cin>>n;
for(int i=1;i<=n/2;i++){
    if(n%i==0){
        sum+=i;
    }
}
if(n==sum){
    cout<<"number is perfect number";
}
else
cout<<"Number is Not Perfect Number";

return 0;
}