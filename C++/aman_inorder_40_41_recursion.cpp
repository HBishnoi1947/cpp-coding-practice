#include<iostream>
using namespace std;


// void reverse_string(string s,int n){            // printing a string in reverse order using recursion.
//     if(n==-1){
//         return;
//     }
//     n--;
//     cout<<s[n];
//     reverse_string(s,n);
// }
// int main(){             
//     string s;
//     cin>>s;
//     int n = s.length();
//     reverse_string(s,n);
// }


// void no_dublicate_str(string s){         // printing a string 
//     int n=0;
//     if(0==s.length()){return;}
//     while(s[n]==s[n+1]){
//         n++;
//     }
//     cout<<s[n];
//     no_dublicate_str(s.substr(n+1));
// }
// int main(){
//     string s;
//     cin>>s;
//     no_dublicate_str(s);
// }




// string x_inlast(string s){               // make a string by moving all 'x' to the rigth side
//     if(s.length()==0){return "";}
//     char c =s[0];
//     string s_new = x_inlast(s.substr(1));
//     if(c=='x'){
//         return s_new+c;
//     }
//     else{
//         return c+s_new;
//     }
// }
// int main(){
//     string s,s_new;
//     cin>>s;
//     s_new = x_inlast(s);
//     cout<<s_new;
// }



// void all_sub_seq(string s, string ans){             // print all sub-sequence string that can be formed//**Combination
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char c = s[0];
//     string s_new = s.substr(1);
//     all_sub_seq(s_new,ans);
//     all_sub_seq(s_new,ans+c);
// }
// int main(){
//     string s;
//     cin>>s;
//     all_sub_seq(s,"");
// }



// int count=0;                                          //All permutation of the string with no dublicate//**Permutation
// void permutation(string s,string ans){
//     if(s.length()==0){
//         count++;
//         cout<<ans<<endl;
//     }
//     for(int i=0;i<s.length();i++){
//         char c = s[i];
//         string s_new = s.substr(0,i)+s.substr(i+1);
//         permutation(s_new, ans+c);
//     }
// }
// int main(){
//     string st;
//     cin>>st;
//     permutation(st,"");
//     cout<<"total: "<<count;
// }


// int count(int l, int b){                                //Maze problem video 41, time: 13:00
//     if(l==1 && b==1){                                   // You can only move down and right side 
//         return 0;                                       // find total ways to go from left upper corner to right lower corner
//     }
//     else{
//     if(l==1){return 1;}
//     if(b==1){return 1;}
//     }
//     int  ways=0;
//     ways+= count(l-1,b) + count(l,b-1);
//     return ways;
// }
// int main(){
//     cout<<"entter length and breadth: ";
//     int l,b;
//     cin>>l>>b;
//     int c = count(l,b);
//     cout<<"Total ways: "<<c;
// }




