#include<iostream>
using namespace std;
int main(){
    // cout<<"Enter number of rows and coloumn -";
    // int r, c ;
    // cin>>r>>c;
    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=c;j++){        
    //         if(i==1||j==1||i==r||j==c){
    //         cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
// }


    // cout<<"Enter a value - ";
    // int a;
    // cin>>a;
    // for(int i=0;i<a;i++){
    //     int j=a-i;
    //     while(j!=0){
    //         cout<<"*";
    //         j--;
    //     }
    //     cout<<endl;
// }

    // cout<<"Enter a value - ";
    // int a;
    // cin>>a;
    // for(int i=0;i<a;i++){
    //     for(int j=0;j<a;j++){
    //         if(i>=a-1-j){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // cout<<"Enter any number - ";
    // int a,c=1;
    // cin>>a;
    // for(int i=1;i<=a;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<c++<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<"Enter a number to make a butterfly pattern: ";
    int a,c=1;
    cin>>a;
    for(int i=1;i<=2*a;i++){
        for(int j=1;j<=2*a;j++){
            if(i<=a){
                if(j<=i || (j>4 && 2*a-j+1<=i)){
                cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }

            else{
                int r=2*a-i+1;
                if(r>=j || (j>4 && j>=i)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}