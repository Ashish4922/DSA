#include<bits/stdc++.h> 
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int>v1;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for(int i=0;i<n;i++){
        bool flag = 0;
        for(int j=i+1;j<n;j++){
            if(v1[i]<v1[j]){
                cout<<v1[j]<<" ";
                flag = 1;
                break;
            }   
        }
        if (flag == 0) cout<<0<<" ";
    }
}
