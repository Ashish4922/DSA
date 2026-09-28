#include<bits/stdc++.h>
using namespace std ;
    int main (){
        int row,cols;
        cin>>row>>cols;
        vector<vector<int>>vec(row,vector<int>(cols));
        for(int i=0;i<row;i++){
            for(int j=0;j<cols;j++){
                cin>>vec[i][j];
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<cols;j++){
                cout<<vec[i][j]<<" ";
            }
        }
        for(int i=0;i<row;i++){
            cout<<"\n";
                cout<<accumulate(vec[i].begin(),vec[i].end(),0)<<" ";
                cout<<*max_element(vec[i].begin(),vec[i].end())<<" ";
                cout<<*min_element(vec[i].begin(),vec[i].end())<<" "<<"\n";
        }
    }