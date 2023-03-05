#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    // vector <int> a ={5,2,6,3,99};
    // a.push_back(9);
    // sort(a.begin(),a.end());
    // for(auto el:a){
    //     cout<<el;
    // }

    // vector <vector<int>> b ={{1,2},{3,4}};
    // for(auto el:b){
    //     for(auto i: el){
    //     cout<<i;
    //     }
    // }
    

    vector <vector<int>> b ={{1,2},{3,4}};
    b.push_back({1});
    for(auto el:b){
        for(auto i: el){
        cout<<i;
        }
    }
    cout<<endl<<b.size()<<endl;
    string s = "harsh";
    s = s.substr(2,0);
    cout<<s;
}