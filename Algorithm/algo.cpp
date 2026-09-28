#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int>v1 = {1,3,5,7};      //Can take input of sorted elements only
    vector<int>v2 = {2,4,6,8};      //Can take input of sorted elements only
    int i=0,j=0;
    vector<int>v3;
    int n = v1.size();
    int m = v2.size();
    while(i<n && j<m){
        if(v1[i]<v2[j]){
            v3.push_back(v1[i]);
            i++;
        }
        else{
            v3.push_back(v2[j]);
            j++;
        }
    }
    while(i<n){
        v3.push_back(v1[i]);
        i++;
    }
    while(j<m){
        v3.push_back(v2[j]);
        j++;
    }
    for(auto x:v3)
        cout<<x<<" ";
}