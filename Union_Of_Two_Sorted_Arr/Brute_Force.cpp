#include<bits/stdc++.h>
using namespace std;
vector<int> Union(vector<int> arr1,vector<int> arr2){
    set<int> st;
    int n1=arr1.size();
    int n2=arr2.size();
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    vector<int> unionn;
    for(auto it :st){
        unionn.push_back(it);
    }
    return unionn;
}
int main(){
int n;
cin>>n;
vector<int> arr1(n);
for(int i=0;i<n;i++){
    cin>>arr1[i];
}
int N;
cin>>N;
vector<int> arr2(N);
for(int i=0;i<N;i++){
    cin>>arr2[i];
}
vector<int> union_array=Union(arr1,arr2);
for(int i=0;i<union_array.size();i++){
    cout<<union_array[i]<<" ";
}
return 0;
}