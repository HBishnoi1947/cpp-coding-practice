#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

    int n=5;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    map<pair<int,int>,bool> m;
    int i=0,j=-1;
    while(1){
        j++;
        if(j>n/2) break;
        bool b = false;
        while(j<n && !m[{i,j}]){
            m[{i,j}]=1;
            cout<<a[i][j++]<<" ";
            b=true;
        }
        if(b) j--;
        i++;
        b = false;
        while(i<n && !m[{i,j}]){
            m[{i,j}]=1;
            cout<<a[i++][j]<<" ";
            b=true;
        }
        if(b) i--;
        j--;
        b = false;
        while(j>=0 && !m[{i,j}]){
            m[{i,j}]=1;
            cout<<a[i][j--]<<" ";
            b=true;
        }
        if(b) j++;
        i--;
        b = false;
        while(i>=0 && !m[{i,j}]){
            m[{i,j}]=1;
            cout<<a[i--][j]<<" ";
            b=true;
        }
        if(b) i++;
    }
}



// int main (){
//     int n=5;
//     int a[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>a[i][j];
//         }
//     }

//     int rs=0, re=n-1, cs=0, ce=n-1;
//     int i=0, j=0;
//     while(rs<=re && cs<=ce){
//         i=rs, j=cs;
//         while(j<=ce){
//             cout<<a[i][j++]<<" ";
//         }
//         j=ce;
//         rs++;
//         i++;
//         while(i<=re){
//             cout<<a[i++][j]<<" ";
//         }
//         i=re;
//         ce--;
//         j--;
//         while(j>=cs){
//             cout<<a[i][j--]<<" ";
//         }
//         j=cs;
//         re--;
//         i--;
//         while(i>=rs){
//             cout<<a[i--][j]<<" ";
//         }
//         cs++;
//     }
// }


// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20