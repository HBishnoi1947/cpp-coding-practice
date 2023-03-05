#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stack<int> st;
    st.push(s[s.size()-1]-48);
    for(int i=s.size()-2;i>=0;i--){
        if(s[i]>47 && s[i]<57){
            st.push(s[i]-48);
        }
        else{
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
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
    cout<<"total: "<<st.top();
}

