// #include<bits/stdc++.h> 
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     int min = *min_element(v.begin(),v.end());
//     int max = *max_element(v.begin(),v.end());
//     cout<<min<<max;
//     int i1 = find(v.begin(),v.end(),min)-v.begin();
//     int i2 = find(v.begin(),v.end(),max)-v.begin();
//     cout<<i1<<i2;
//     vector<int>v1(v.begin()+i1,v.end()+i2);
    
// }

//given an array having n element.find fst location min and max element.
//split array in 3 part from these location.built another array by concating 
//the second part,fallowed by fst part ,fallowed by 3rd part.print array in single line 
// explain in hindglish que as awell code provide
#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;

    vector<int>v;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int min = *min_element(v.begin(),v.end());
    int max = *max_element(v.begin(),v.end());

    cout<<"Min and max"<<min<<" "<<max<<"\n";

    int i1 = find(v.begin(),v.end(),min)-v.begin();
    int i2 = find(v.begin(),v.end(),max)-v.begin();
    cout<<"Value of i1 and i2"<<i1<<i2;

    // Make sure i1 is before i2
    if(i1 > i2){
        swap(i1,i2);
    }

    vector<int>v1(v.begin(),v.begin()+i1);
    vector<int>v2(v.begin()+i1,v.begin()+i2);
    vector<int>v3(v.begin()+i2,v.end());

    vector<int>ans;

    for(int x : v2){
        ans.push_back(x); //Second part
    }

    for(int x : v1){
        ans.push_back(x); //first part
    }


    for(int x : v3){
        ans.push_back(x); //Third part
    }

    for(int x : ans){
        cout << x << " ";
    }
}