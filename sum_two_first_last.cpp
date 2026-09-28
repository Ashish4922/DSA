#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\n"<<(arr[0]+arr[1]);
    cout<<"\n"<<(arr[n-1]+arr[n-2]);
}