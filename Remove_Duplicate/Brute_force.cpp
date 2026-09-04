#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(vector<int> arr,int n){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }
    return index;
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Number of Unique Elements: "<<removeDuplicate(arr,n);
return 0;
}