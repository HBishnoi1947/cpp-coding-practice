#include<iostream>
#include<cmath>
using namespace std;
int main(){

// int n;
// cout<<"Enter: ";
// cin>>n;
// for(int i=n;i>=1;i--){
//     for(int j=1,c=1;j<=i;j++){
//      cout<<c++;   
//     }
//     cout<<endl;
// }


// int n,c;
// cout<<"Enter: ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     if(i%2==0){c=0;}
//     else{c=1;}
//     for(int j=1;j<=i;j++){
//      cout<<c;  
//      if(c==1){
//          c=0;
//      } 
//      else{c=1;}
//     }
//     cout<<endl;
// }


// cout<<"Enter side of rombus";
// int n;
// cin>>n;
// int c=n-1;
// for(int i=n;i>0;i--){
//     for(int k=1;k<=c;k++){
//          cout<<" ";
//      } 
//      c--;
//     for(int j=1;j<=n;j++){
//      cout<<"*";
//     }
//     cout<<endl;
// }

// cout<<"Enter a Integer - ";
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int k=1;k<=i;k++){
//         cout<<k<<" ";
//     }
//     cout<<endl;
// }

cout<<"Enter a number number of rows for palendromic pattern: ";                 //  Palendroe
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
        cout<<" ";
    }
    for(int j=i;j>=2;j--){
        cout<<j;
    }
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
}

// cout<<"enter a value: ";
// int n,c=1;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int k=1;k<=n-i;k++){
//         cout<<" ";
//     }
//     for(int j=1;j<=c;j++){
//         cout<<"*";
//     }
//     c+=2;
//     cout<<endl;
// }
// c-=2;
// for(int i=1;i<=n;i++){
//     for(int k=n-i+1;k<n;k++){
//         cout<<" ";
//     }
//     for(int j=c;j>=1;j--){
//         cout<<"*";
//     }
//     c-=2;
//     cout<<endl;
// }




// cout<<"Enter a number to print zig-zag pattern: ";
// int n,a=0,b=0;
// cin>>n;
// for(int i=1;i<=(n+1)/4;i++){
//     if(a++) {cout<<"   *";}
//     else{cout<<"  *";}
// }
// cout<<endl;
// for(int j=1;j<=(n/2);j++){
//     cout<<" *";
// }
// cout<<endl;
// for(int k=0;k<=(n-1)/4;k++){
//     if(b++) {cout<<"   *";}
//     else{cout<<"*";}
// }

// int a=9;
// cout<<sqrt(a);
// cout<<endl<<pow(a,2);
}