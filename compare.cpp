#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int>v2;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    for(int i=0;i<m;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(v1[j]>v2[i])
            count++;
        }
        cout<<count<<" ";
    }
}

