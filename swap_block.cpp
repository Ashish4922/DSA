#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,k;
    cin>>n>>k;
    
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i=i+(2*k)){
        for(int j=i;j<i+k;j++){
            swap(v[j],v[j+k]);
        }
    }
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
}