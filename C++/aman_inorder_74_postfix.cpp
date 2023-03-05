#include<iostream>
#include<stack>
using namespace std;


int postfix(string s){
    stack <int> st;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            int total=0;
            switch (s[i]){
                case '+': total=a+b;break;
                case '-': total=a-b;break;
                case '*': total=(a)*(b);break;
                case '/': total =(a)/(b); break;
                default: cout<<"Invalid"<<endl;
            }
            st.push(total);
        }
    }
    return st.top();
}
int main(){
    string s="46+2/5*7+";
    // getline(cin,s);
    cout<<"ans: "<<postfix(s);
}