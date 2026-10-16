#include<bits/stdc++.h>
using namespace std;
int LCM(int a,int b){
    return (a/__gcd(a,b))*b;
}
int main (){
int a,b;
cin>>a>>b;
cout<<LCM(a,b);
return 0;
}