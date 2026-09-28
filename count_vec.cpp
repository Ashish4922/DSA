#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int freq = count(v.begin(),v.end(),20); // v.end() can be replaced by v.begin()+x where x is the length till where we have to search
    cout<<freq;
}