#include<iostream>
using namespace std;

const int n = 100;

class stack{
    int arr[n];
    int top;

    public:
    stack(){
        top = -1;
    }
    stack(int val){
        top=0;
        arr[top]=val;
    }
    void push(int val){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack already empty"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No value present"<<endl;
            return -1;
        }
        return arr[top];
    }
    void display(){
        for(int i=0; i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    bool empty(){
        return top==-1; //? true:false;
    }
};

int main(){
    stack s(5);
    s.push(6);
    s.push(7);
    s.push(9);
    cout<<"last value: "<<s.Top()<<endl;
    s.display();
    s.pop();
    s.display();
}