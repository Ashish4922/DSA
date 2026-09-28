#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int> v;
    cout<<"Enter numbers"<<endl;
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)
            break;
        v.push_back(n);
    }
    for(auto x:v)
        cout<<x<<" ";
    return 0;
}