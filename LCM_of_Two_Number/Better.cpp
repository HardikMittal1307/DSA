#include<bits/stdc++.h>
using namespace std;
int LCM(int a,int b){
    for(int i=max(a,b);i<=a*b;i+=max(a,b)){
        if(i%a==0 && i%b==0)return i;
    }
}
int main (){
int a,b;
cin>>a>>b;
cout<<LCM(a,b);
return 0;
}