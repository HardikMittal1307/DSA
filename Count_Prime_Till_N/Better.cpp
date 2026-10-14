#include<bits/stdc++.h>
using namespace std;
int countPrimes(int n) {
        int prime=0;
        for(int i=2;i<n;i++){
            bool isprime=true;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    isprime=false;
                    break;
                }
            }
            if(isprime){
                prime++;
            }
        }
        return prime;
    }
int main(){
int n;
cin>>n;
cout<<countPrimes(n);
return 0;
}