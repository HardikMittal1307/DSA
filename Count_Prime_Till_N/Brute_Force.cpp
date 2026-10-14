#include<bits/stdc++.h>
using namespace std;
int countPrimes(int n) {
        int prime=0;
        for(int i=2;i<n;i++){
            int count=0;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    count++;
                    break;
                }
            }
            if(count==0){
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