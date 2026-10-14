#include<bits/stdc++.h>
using namespace std;
int CountPrime(int n){
    if(n<2){
        cout<<0;
        return 0;
    }
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;

    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    int count=0;
    for(int i=0;i<=n;i++){
        if(prime[i]){
            count++;
        }
    }
    return count;
}
int main(){
int n;
cin>>n;
cout<<CountPrime(n);
return 0;
}