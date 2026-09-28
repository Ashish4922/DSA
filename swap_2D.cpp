#include<bits/stdc++.h>
using namespace std ;
    int main (){
        int row,cols,k;
        cin>>row>>cols>>k;
        vector<vector<int>>vec(row,vector<int>(cols));
        for(int i=0;i<row;i++){
            for(int j=0;j<cols;j++){
                cin>>vec[i][j];
            }
        }
        for(int i=0;i<row/2;i++){
            for(int j=0;j<k;j++){
                swap(vec[i][cols-k+j],vec[row-1-i][j]);
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<cols;j++){
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
    }