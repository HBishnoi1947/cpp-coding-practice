#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    // vector<int> v(1.0);
    // v.insert(v.begin()+1,1);
    // cout<<(v[0]);
    // int a[1][4];
    // a[0][0]=5;
    // a[0][1]=4;
    // a[0][2]=3;
    // a[0][3]=2;
    // sort(a[0],a[0]+4);
    // for(auto i: a[0]){
    //     cout<<i;
    // }
    // int a ='a';
    // cout<<a;
    
    vector <int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.begin()=v.begin()+1;
    for(auto i:v) cout<<i<<" ";
}
