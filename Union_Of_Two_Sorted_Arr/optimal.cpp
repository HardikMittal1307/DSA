#include<bits/stdc++.h>
using namespace std;
vector<int> Union(vector<int> arr1,vector<int> arr2){
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> unionn;
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(arr1.at(i)<=arr2.at(j)){
            if(unionn.size()==0 || unionn.back()!=arr1.at(i)){
                unionn.push_back(arr1[i]);
            }
            i++;
        }else{
            if(unionn.size()==0 || unionn.back()!=arr2.at(j)){
                unionn.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionn.size()==0 || unionn.back()!=arr1.at(i)){
                unionn.push_back(arr1[i]);
            }
            i++;
    }
    while(j<n2){
        if(unionn.size()==0 || unionn.back()!=arr2.at(j)){
                unionn.push_back(arr2[j]);
            }
            j++;
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