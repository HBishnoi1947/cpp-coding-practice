#include<iostream>
using namespace std;
#include<vector>




// int count = 0;
// void permutation(string n,string ans){            // Permutation,...with no duplicates
//     if(n.size()==0){
//         cout<<ans<<endl;
//         count++;
//     }
//     for(int i = 0; i<n.size();i++){
//         char ch  = n[i];
//         string n_new = n.substr(0,i)+n.substr(i+1);
//         permutation(n_new,ans+ch);
//         // permutation(n_new,ch+ans);
//     }
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<"''''''''''''''"<<endl;
//     permutation(s,"");
//     cout<<"Total Permutation: "<<count;
// }






// void permutation(string s, vector<string> &a, int idx){                 // Permutation,...with no duplicates
//     if(idx==s.size()){                                                  // better complexity
//         a.push_back(s);
//     }
//     for(int i=idx; i<s.size(); i++){
//         swap(s[i],s[idx]);
//         permutation(s, a, idx+1);
//         swap(s[i],s[idx]);
//     }
// }
// int main(){
//     string s;
//     cin>>s;
//     vector<string> a;
//     permutation(s, a, 0);
//     for(auto i: a){
//         cout<<i<<endl;
//     }
//     cout<<"Total Parmutation: "<<a.size();
// }







// #include<algorithm>
// void permutation(string s, vector<string> &a, int idx){                 // Permutation of any number/characters
//     if(idx==s.size()){
//         a.push_back(s);
//     }
//     for(int i=idx; i<s.size(); i++){
//         if(s[i]==s[idx] && i!=idx){
//             continue;
//         }
//         swap(s[i],s[idx]);
//         permutation(s, a, idx+1);
//         swap(s[i],s[idx]);
//     }
// }
// int main(){
//     string s;
//     cin>>s;
//     sort(s.begin(),s.end());      // sorting a string
//     vector<string> a;
//     permutation(s, a, 0);
//     cout<<"///////////////////"<<endl;
//     for(auto i: a){
//         cout<<i<<endl;
//     }
//     cout<<"Total Parmutation: "<<a.size();
// }


