#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    int count = 0;

    cin >> n;

    while(n > 0){
        sum = sum + (n % 10);
        n = n / 10;
    }

    cout << sum;

    for(int i = 2; i <= sum / 2; i++){
        if(sum % i == 0){
            count++;
        }
    }

    if(count == 0 && sum > 1){
        cout << "\nPrime";
    }
    else{
        cout << "\nNot a prime";
    }
}