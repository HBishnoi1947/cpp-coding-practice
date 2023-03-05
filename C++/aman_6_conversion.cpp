#include<iostream>
using namespace std;
#include<cmath>

int main(){
                                                            // Made this programm keeping in mind the binary, octa and decimal to binary 
    cout<<"Enter the digital system number is and in which to converted: ";
    int a,b,n,m=0,temp_10=0,c=0;
    cin>>a>>b;
    cout<<"Enter the number: ";
    cin>>n;



    if(a!=10){
        for(int i=n,j=0;i>0;i/=10,j++){
            temp_10 = temp_10+(i%10)*pow(a,j);
        }
    }
    else{temp_10=n;}

    cout<<"decimal is "<<temp_10<<endl;

    if(b!=10){
        for(int i=temp_10;i>0;i/=b){
            m=m*10+i%b;
            c++;
        }
        cout<<"converiosn => ";
        for(int i=0,j=m;i<c;j/=10,i++){
            cout<<(j%10);
        }
    }
}