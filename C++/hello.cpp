#include<stdio.h>
#include<bits/stdc++.h>

#define vec vector <int>
using namespace std;
int main(){
    // printf("Hello World");
    // vec a= {1,2,3};
    // for(auto i: a){
    //     cout<<i<<endl;
    // }

    // int i = log2(5);
    // int i = sqrt(2);
    // cout<<i;

    long long i=200;
    long long ans=1;
    while(i>1){
        if(ans%i) ans*=i;
        i--;
    }
    cout<<ans;
}
