#include<iostream>
#include<stack>
using namespace std;

void display(stack <int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void reverse_stack_using_another_stack(stack <int> &s){
    stack<int> s_new;
    while(!s.empty()){
        s_new.push(s.top());
        s.pop();
    }
    s = s_new;
}

void insert_at_bottom(stack<int>&s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int temp = s.top();
    s.pop();
    insert_at_bottom(s,val);
    s.push(temp);
}
void reverse_stack_using_recursion(stack <int> &s){
    if(s.empty()){
        return;
    }

    int temp = s.top();
    s.pop();
    reverse_stack_using_recursion(s);
    insert_at_bottom(s, temp);
}

int main(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // display(s);
    // reverse_stack_using_another_stack(s);
    // display(s);
    display(s);
    reverse_stack_using_recursion(s);
    display(s);

}