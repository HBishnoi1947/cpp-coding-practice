#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={7,5,4,6,8,9};
    int k=3, x=20;
    int i=0,n=sizeof(a)/sizeof(a[0]),j=i+k-1;
    int ans=0, sum[n]={0},ms=0;

    for(int h=i;h<=j;h++){
        sum[i]+=a[h];
    }
    if(ms<sum[i] && sum[i]<x){ms=sum[i]; ans=i;};
    i++,j++;

    while(j<n){
        sum[i]=sum[i-1]+a[j]-a[i-1];
    if(ms<sum[i] && sum[i]<x){ms=sum[i]; ans=i;};
    i++,j++;
    }
    i=ans;
    if(sum[i]>=x) cout<<0;
    else
    while(i<ans+k){
        cout<<a[i++]<<" ";
    }
    cout<<endl<<"max sum = "<<ms;
}