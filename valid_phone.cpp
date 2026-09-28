#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int n = a * b;

    if(n >= 10000 && n <= 99999){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}