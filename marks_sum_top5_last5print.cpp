#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,less<int>());
    cout<<accumulate(arr,arr+5,0);

    sort(arr,arr+n,greater<int>());
    cout<<"\n";
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}