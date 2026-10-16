#include<iostream>
using namespace std;
int LCM(int a,int b){
    for(int i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0)return i;
    }
}
int main (){
int a,b;
cin>>a>>b;
cout<<LCM(a,b);
return 0;
}