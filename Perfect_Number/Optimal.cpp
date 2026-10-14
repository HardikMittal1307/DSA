#include<iostream>
using namespace std;
bool Perfect_Number(int n){
    int sum=1;
    if(n<=1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
        sum+=i;
        if(i!=n/i){
        sum+=n/i;
        }
    }
    if(sum>n)break;
    }
    if (sum == n)
        return true;
    else
        return false;

}
int main (){
int n,sum=1;
cin>>n;
cout<<Perfect_Number(n);
return 0;
}