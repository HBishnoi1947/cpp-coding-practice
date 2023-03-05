#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int ans=-1;
//         int w=0;
//         int m=0;
//         for(auto i: s){
//             if(i=='W'){
//                 if(m!=0) {
//                     if(w) ans=max(ans,min(m,w));
//                     m=0;w=1;
//                     }
//                 else w++;
//             }
//             else{
//                 m++;
//             }
//         }
//         if(w && m) ans=max(ans,min(m,w));
//         cout<<ans<<endl;
//     }
// } 


// int maxCoins(vector<int> v){
//     if(v.size()==0) return 0;
//     if(v.size()==1) return v[0];
//     int ans=1, a=-1, t=v.size()-2;
//     vector<int> ind(v.size(),1);
//     while(t--){
//         int m = INT_MAX;
//         for(int i=1;i<v.size()-1;i++){
//             if(ind[i] && m>v[i]){
//                 m=v[i];
//                 a=i;
//             }
//         }
//         ind[a]=0;
//         ans+=v[a]*v[a+1]*v[a-1];

//         cout<<v[a]<<" = "<<ans<<endl;
//     }
//     ans+=max(v[0],v[v.size()-1])*(v[0]+v[v.size()-1]);
//     return ans;
// }


int maxCoins(vector<int> v){
    if(v.size()==0) return 0;
    if(v.size()==1) return v[0];
    int ans=0, a=-1, t=v.size()-2;
    while(v.size() && v[0]==0) v.erase(v.begin());
    while(v.size() && v[v.size()-1]==0) v.erase(v.end()-1);
    t=v.size()-2;
    while(t-->0){
        int m = INT_MAX;
        for(int i=1;i<v.size()-1;i++){
            if(m>v[i]){
                m=v[i];
                a=i;
            }
        }
        ans+=v[a]*v[a+1]*v[a-1];
        v.erase(v.begin()+a);
    }
    ans+=max(v[0],v[v.size()-1])*(min(v[0],v[v.size()-1])+1);
    return ans;
}

int main(){
    cout<<maxCoins({3,1,5,8});
}