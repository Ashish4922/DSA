#include<bits/stdc++.h> 
using namespace std;
int main (){
    int n,m;
    cin>>n>>m;
    vector<int>v1;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
            if((v1[i]+v1[j])==m){
                cout<<v1[i]<<" "<<v1[j]<<"\n";
            }
        }
    }
}
