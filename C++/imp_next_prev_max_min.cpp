#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> next_max(vector<int> a){
    vector<int> v;
    stack<int> s;
    for(int i=a.size()-1;i>=0;i--){
        while(!s.empty() && a[s.top()]<a[i]) s.pop();
        if(s.empty()) v.push_back(a.size());
        else v.push_back(s.top());
        s.push(i);
    }
    reverse(v.begin(), v.end());
    // for(int i=0;i<a.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    return v;
}
vector<int> prev_max(vector<int> a){
    vector<int> v;
    stack<int> s;
    for(int i=0;i<a.size();i++){
        while(!s.empty() && a[s.top()]<a[i]) s.pop();
        if(s.empty()) v.push_back(-1);
        else v.push_back(s.top());
        s.push(i);
    }
    // for(int i=0;i<a.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    return v;
}
vector<int> next_min(vector<int> a){
    vector<int> v;
    stack<int> s;
    for(int i=a.size()-1;i>=0;i--){
        while(!s.empty() && a[s.top()]>a[i]) s.pop();
        if(s.empty()) v.push_back(a.size());
        else v.push_back(s.top());
        s.push(i);
    }
    reverse(v.begin(),v.end());
    // for(int i=0;i<a.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    return v;
}
vector<int> prev_min(vector<int> a){
    vector<int> v;
    stack<int> s;
    for(int i=0;i<a.size();i++){
        while(!s.empty() && a[s.top()]>a[i]) s.pop();
        if(s.empty()) v.push_back(-1);
        else v.push_back(s.top());
        s.push(i);
    }
    // for(int i=0;i<a.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    return v;
}

int main(){
    // long long a;
    // int b = INT_MAX,c=2343232;
    // cout<<a<<" "<<b;
}