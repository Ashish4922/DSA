#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    vector<int>v1 = {1,3,5,7};      //Can take input of sorted elements only
    vector<int>v2 = {2,4,6,8};      //Can take input of sorted elements only
    vector<int>v3(v1.size()+v2.size());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin()); // STL function to merge two sorted arrays
    // size of v3 should be declared
    for(auto x:v3)
        cout<<x<<" ";

    //sort(v3.begin(),v3.end(),greater<int>()); // STL function to sort an array



    reverse(v3.begin(),v3.end()); // STL function to reverse an array
    for(auto x:v3)
        cout<<x<<" ";

        int a = 5 , b = 10;
        swap(a,b); // STL function to swap two arrays
        cout<<a<<" "<<b<<endl;

        cout<<max(a,b)<<endl; // STL function to find maximum of two numbers


        cout<<min(a,b)<<endl; // STL function to find minimum of two numbers


    cout<<*(max_element (v1.begin(),v1.end())); // STL function to find maximum element in an vector
}