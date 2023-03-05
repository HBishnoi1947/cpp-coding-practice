#include<iostream>
#include<cmath>
using namespace std;



// void prime(int m,int n){
//     for(int x=m+1; x<n;x++){
//         bool t = true;
//         for(int i=2;i<=sqrt(x);i++){
//             if(x%i==0){
//                 t=false;
//             }
//         }
//         if(t){
//         cout<<x<<" ";
//         }
//     }
// }
// int main(){
//     int m,n;
//     cout<<"Enter two number to find prime between them: ";
//     cin>>m>>n;
//     prime(m,n);
// }


int series(int n){
    static int c=1,sum=1;
    cout<<sum<<" , ";
    sum+=c;
    c=sum-c;
    if(n-2>1){
        return n+series(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter number of digits: ";
    cin>>n;
    cout<<"0 , 1 , ";
    series(n);
    cout<<"\b\b";
    // cout<<" ";

}