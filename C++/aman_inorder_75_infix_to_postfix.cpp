#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;

string infix_to_postfix(string s){
    string ns="";
    stack <char> st;
    unordered_map <char,int> m;
    m['+']=1, m['-']=1, m['*']=3,m['/']=3;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9') {ns+=s[i];}
        else{
            while (!st.empty() && m[st.top()]>m[s[i]]){
                ns+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ns+=st.top();
        st.pop();
    } 
    return ns;
}

void postfix_to_infix(string s){
    
}

int main(){
    string s = "1+2*3*4-5*6/7";
    cout<<infix_to_postfix(s);
}