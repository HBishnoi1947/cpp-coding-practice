#include<iostream>
using namespace std;
#include<stack>


void reverse_sentance(string s){
    stack<string>st;
    string temp;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            temp+=s[i];
        }
        else {
            if(!temp.empty()){
            st.push(temp);
            temp.clear();}
        }
    }
    if(!(temp.empty())){
            st.push(temp);
        }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    string s = "Hey! how are you doing                  ";
    cout<<s<<endl;
    reverse_sentance(s);
}