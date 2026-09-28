#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    if (s.size() % 2 ==0){
        if((count(s.begin(),s.end(),'#')>0) && (count(s.begin(),s.end(),'&')>0)){
            cout>>"Yes"
        } 
    }
}