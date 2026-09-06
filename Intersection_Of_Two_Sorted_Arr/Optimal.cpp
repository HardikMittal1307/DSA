#include<bits/stdc++.h>
using namespace std;
vector<int> Intersection(vector<int> &arr1,int n,vector<int> &arr2,int m){
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
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
vector<int> intersection_array=Intersection(arr1,n,arr2,N);
for(int i=0;i<intersection_array.size();i++){
    cout<<intersection_array[i]<<" ";
}
return 0;
}