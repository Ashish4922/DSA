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
    int max = *max_element(v1.begin(),v1.end());
    int min = *min_element(v1.begin(),v1.end());
    cout<<max-min;
    }
