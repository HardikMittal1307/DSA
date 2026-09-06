#include<bits/stdc++.h>
using namespace std;
vector<int> Intersection(vector<int> arr1,int n,vector<int> arr2,int m){
    vector<int> visited(m,0);
    vector<int> answer;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j] && visited[j]==0){
                answer.push_back(arr1[i]);
                visited[j]=1;
                break;
            }
            if(arr2[j]>arr1[i])break;
        }
    }
    return answer;
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