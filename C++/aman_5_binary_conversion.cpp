#include<iostream>
using namespace std;

int main(){
    cout<<"Enter an postive integer: ";
    int a,b=0,c=0;
    cin>>a;
    cout<<"Decimal: "<<a<<endl<<"Binary: ";
    for(int i=a;i>0;i/=2){
        b=b*10 + i%2 ;
        // cout<<b;
        c++;
    }
    cout<<endl;
    for(int i=1;i<=c;i++){
        cout<<b%10;
        b/=10;
    }
}