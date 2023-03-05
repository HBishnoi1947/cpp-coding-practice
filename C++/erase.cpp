#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fn(int *a){
    return sizeof(a)/sizeof(a[0]);
}

int main(){
    int b[]={1,2,3,4,5,6};
    cout<<fn(b);
}