#include<iostream>
using namespace std;

int main(){
    int toffee=0,wrapper=0,money;
    cout<<"Enter amout given by papa for chocalate of Rs.1: "; // Each 3 wrappers gives one chocalate more
    cin>>money;
    toffee=money;
    wrapper=toffee;
    while(wrapper>=3){
        toffee+=wrapper/3;
        wrapper=wrapper%3 + wrapper/3;
    }
    cout<<"Maximum Cocalate: "<<toffee;
    cout<<"\nWrapper left: "<<wrapper;
}