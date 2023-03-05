#include<iostream>
using namespace std;

class harsh{
    public:
    int a=0,b=0;
    harsh(){
        cout<<"Default Constructor"<<endl;
    }
    harsh(int g){
        cout<<"not Default Constructor"<<endl;
        a = g;
    }
    harsh(harsh &c){
        cout<<"Copy constructor is called "<<c.a<<endl;
        a = c.a;
        b = c.b;
        c.a = 90;
    }
    void sum(harsh &c){                     // obect is passed by value if '&' is not used...... by making a new object using copy constructor
        cout<<"in sum "<<c.a<<c.b<<endl;
        c.a=80;
        cout<<c.a;
    }
};

int main(){
    harsh a(40);
    // harsh *a = new harsh(40);
    // a.a=4;
    // a.b=5;
    harsh b;
    b.sum(a);
    cout<<endl<<(a).a;
}