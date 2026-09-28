#include<bits/stdc++.h> // jinti baar 1 aaya hai us position ko delete krna hai
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
    int c = count(v.begin(),v.end(),1);  //to get the cout of 1 
    v.erase(v.begin()+c);  //removing the index element       
    v.insert(v.begin()+3,10);
    for(int i=0;i<v.size();i++){    //if loop is running for n times then their will be a garbage value
        cout << v[i] << " ";
    }
}