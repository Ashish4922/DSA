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
        for(int i=1;i<row-2;i++){
            for(int j=1;j<cols-2;j++){
                cout<<vec[i][j]<<" ";
            }
        }
    }