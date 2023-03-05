#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int min_subarray_size(int *a, int sum, int n){
    // cout<<(int)sizeof(a)<<endl;
    int tsum=0,start=0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        tsum+=a[i];
        if(tsum>sum){
            ans=min(ans,i-start+1);
            while(tsum>sum && start<=i){tsum-=a[start]; start++;}
        }
    }
    // cout<<sizeof(a)<<"   ";
    return ans;
}


int main(){
    int a[]={1,4,45,6,10,19};
    int n = sizeof(a)/sizeof(a[0]);
    int sum =51;
    cout<<min_subarray_size(a,sum,n);

}