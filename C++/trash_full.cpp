#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include <iomanip>
#include <stack>
#include <math.h>

// int print(int ap[]){
   
//    cout<<ap[-2];

//     // for(int i=0;i<sizeof(ap)/4;i++){
//         // cout<<ap[i]<<" ";
//     // }
// }
// int main(){
//     int a[6]={99,4,6,3,8,5} ;
//     //  print(a+1);
//     // cout<<a[0]++<<a[0]<<a[0];
//     // cout<<a[0];
//     // bool t = true;
//     // cout<<t;
//     cout<<print(a);
// }


// void ing(int *y){
//     // y=100;
//     // cout<<y[0]<<endl;
//     cout<<*y;y++;
//     cout<<*y;
// }
// int main(){             
//     int s[5] = {6,9};
//     // cin>>s;
//     // int n = s.length();
//     // cout<<s[0]<<endl;
//     ing(s);
//     // cout<<s[0]<<endl;
// }


// void nam(string s){
//     cout<<s;
// }
// int main(){
//     string s = "harsh";
//     nam(s);
// }

// void fn(int &a){
//     cout<<a<<" in function"<<endl;
//     a++;
// }
// int main(){
//     int b = 32;
//     fn(b);
//     cout<<b<<" in main";
// }


// int main(){
//     string s = "harsh";
//     cout<<s.length();
//     cout<<s;
// }

// int main(){
//     int x = 112;
//     string s =to_string(x);
//         bool t = true;
//         for(int i =0; i<s.length()/2 && t;i++){
//             if(s[i]!=s[s.length()-1]){
//                 t = false;
//             }
//         }
//         cout<<t;
// }

// void fn(int a[]){
//     a[1]=4;
// }
// int main(){
//     int a[]={1,2,3};
//     cout<<a[1]<<endl;
//     fn(a);
//     cout<<a[1];
// }



// void fn(int &a){
//     a=4;
// }
// int main(){
//     int a=1;
//     cout<<a<<endl;
//     fn(a);
//     cout<<a;
// }


// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i =0;i<n;i++){cin>>a[i];}
//     for(int i =0;i<n;i++){cout<<a[i]<<endl;}
// }


// int main(){
//     int a =5;
//     int *p =&a;
//     cout<<&a;
//     // cout<<a;
// }


// void fn(int** a){
//     a[1][1]=4;
// }
// int main(){
//     int a[2][2]={{1,2},{2,3}};
//     cout<<a[1][1]<<endl;
//     fn(a);
//     cout<<a[1][1];
// }



// int main(){
//     int a =4;
//     cout<<(a*2)-(--a);
// }



// int main(){
//          vector <int> nums ={5,2,6,3,99};
//         // sort(nums.begin(),nums.end());
//         vector <int> n;
//         int size = nums.size();
//         for(int i =0; i<size-1; i++){
//             if(nums[i]+nums[i+1]!=2*nums[i]){
//                 if(i==0){
//                     n.push_back(nums[0]);
//                 }
//                 else if(nums[i]!=nums[i-1]){
//                     n.push_back(nums[i]);
//                 }
//             }
//             else{
//                 i+=2;
//             }
// }


// int main(){
//     int a =23;
//     string b ="2";
//     cout<<b.size();
//     string num1 = "4", num2 ="3";
//     b = to_string(stoi(num1)*(stoi(num1)));
//     cout<<b.size();
//     b.push_back('s');
//     b.append("dd");
//     cout<<"   "<<b;
// }

// int main(){
//     string s = "ards";
//     cout<<s.substr(0,2);
// }

// int main(){
//     float arr[5];
//     for(auto &a : arr){
//         cin>>a;
//     }
//     for(int a : arr){
//         cout<<a;
//     }
// }


// int main(){
//     int arr[]={1,2,3,4};
//     arr[4]=5;
//     cout<<arr[4];
// }


// int main(){
//     string s = "asd";
//     s.push_back('v');
//     s+="z";
//     cout<<s;
// }


// int main(){
//     string s ="42abcd52";
//     sort(s.begin(),s.end());
//     cout<<s;
//     int t;
//     cin>>t;
//     if(t!=0){
//     main();
//     }
//     }


// int main(){
//     vector <string> strs = {"harsh", "harmar", "haaa"};
//     string s= strs[0];
//         int size = strs.size();
//         for(int i=1; i<size;i++){
//             for(int j=0; j<strs[i].size() && j<s.size();j++){
//                 if(strs[i][j]!=s[j]){s = s.substr(0,j); break;}
//             }
//         }    
//         if(1) cout<<1;
// }




// bool function(string &s, int a){
//         if(s[a]=='('){
//             for(int i=a+1; i<s.size(); i++){
//                 if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//                 if(function(s, i)){
//                     s[i]='0';
//                     continue;   
//                 }
//                 else{
//                     cout<<1<<endl;
//                     return false;
//                 }
//                 }
//                 if(s[i]=='}' || s[i]==']'){
//                     return false;
//                 }
//                 if(s[i]==')'){
//                     s[i]='0';
//                     return true;
//                 }
//             }
//         }
//         else if(s[a]=='['){
//             for(int i=a+1; i<s.size(); i++){
//                 if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//                 if(function(s, i)){
//                     s[i]='0';
//                     continue;   
//                 }
//                 else{                   
//                     return false;
//                 }
//                 }
//                 if(s[i]=='}' || s[i]==')'){
//                     return false;
//                 }
//                 if(s[i]==']'){
//                     s[i]='0';
//                     return true;
//                 }
//             }
            
//         }
//         else if(s[a]=='{'){
//             for(int i=a+1; i<s.size(); i++){
//                 if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//                 if(function(s, i)){
//                     s[i]='0';
//                     continue;   
//                 }
//                 else{
//                     return false;
//                 }
//                 }
//                 if(s[i]==')' || s[i]==']')
//                     return false;
//                 if(s[i]=='}'){
//                     s[i]='0';
//                     return true;
//                 }
//             } 
//         }
//         return false;
//     }
//     bool isValid(string s) {
//         if(s[0]==')' || s[0]=='}' || s[0]==']'){
//             return false;
//         }
//         for(int i=0; i<s.size(); i++){
//             if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//                 if(function(s, i)){
//                     s[i]='0';
//                     continue;   
//                 }
//                 else{
//                     return false;
//                 }
//             }                
//             if(s[i]==')' || s[i]=='}' || s[i]==']'){
//                 return false;
//             }
//         }
//         return true;
//     }
// int main(){
//     string s = "([])";
//     cout<<isValid(s)<<endl;
// }


// void dd(int *h1){
//     h1[0]=0;
// }
// int main(){
//     int ar[]={1,2,3,4};
//     for(int i=0; i<4;i++){
//         cout<<ar[i]<<"  ";
//     }
//     cout<<endl;
//     dd(ar);
//     for(int i=0; i<4;i++){
//         cout<<ar[i]<<"  ";
//     }
// }

// int main(){
    // string s;
    // cin>>s;

    // getline(cin,s);
    // cout<<s.length();
    // cout<<s.substr(2);
    // cin>>s;
    // cout<<s[4];
    // if(s[4]==" "){
    //     cout<<"yes";
    // }
// }


// int lengthOfLastWord(string s) {
//         int c=0;
//         bool t = true;
//         getline(cin, s);
//         while(t && c!=s.length()){
//             if(s[c]==' '){
//                 t=false; break;
//             }
//             c++;
//         }
//         if(t){
//             return c;
//         }
//         else{
//             int d = c++;
//             while(c<=s.length()){
//                 if(s[c]!=' '){
//                     return lengthOfLastWord(s.substr(c));
//                 }
//             }
//             return d;
//         }
// }
// int main(){
//     string s;
//     // cout<<s;
//     // getline(cin,s);
//     cout<<lengthOfLastWord(s);
// }




// int main(){
//     int n=10;
//     if(n == 0) return 1; // Checking for base case
//         int res = 0;
//         int fac = 1; // keep for 2 basically
        
//         while(n != 0){
//             // first we need to check what is our bit in 2 by taking modulo
//             res += fac * (n % 2 == 0 ? 1 : 0);
//             // res is the number convert back to decimal + factor * n % 2 if comes 0 then we take 1 otherwise 0 this is our complement
            
//             fac *= 2;
//             n /= 2;
//         }
//         cout<< res;
//     }

// int main(){
// // // string s = "";
// // // int i = 2;
// // // cout<<(i == 1) ? 1:2;
// // // cout<<endl<<"yes";
// // // s.append(to_string(i));
// // // s.insert(0,"f");
// // // s.insert(0,to_string((i == 1) ? 1:2));
// // // cout<<s;
// int a[]={1,2,3};
// // for(auto i: a){
// //     cout<<i;
// // }
// // cout<<a.size;
// for(int i=0; i<sizeof(a)/4;i++){
//         cout<<a[i]<<endl;
//     }
// }


// int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // int t;
    // cin>>t;
    // int a[t]={0};
    // int n[t]={0};
    // int ans[t]={0};
    // while(t>0){
    //     cin>>n[t-1]>>a[t-1];
    //     ans[t-1]=n[t-1]%a[t-1];
    // }
    // for(auto i: ans){
    //     cout<<i<<endl;
    // }
    
    
    // return 0;
    // cout<<100%9;
// }

// int main(){
//     int t;
//     cin>>t;
//     int a[t]={0};
//     int n[t]={0};
//     int ans[t]={0};
//     int t1=t;
//     while(t>0){
//         cin>>n[t-1]>>a[t-1];
//         if(n[t-1]%a[t-1]!=0){
//         ans[t-1]=a[t-1]-(n[t-1]%a[t-1]);}
//         else{
//             ans[t-1]=0;
    
//         }
//         cout<<"out"<<ans[t-1]<<endl;
//         t--;
//     }

//     cout<<a[t1-1];
//     // for(--t1; t1>=0;t1--){
//     //     cout<<a[t1]<<endl;
//     // }
//     return 0;
// }

// int main(){
//     int i=5;
//     int building[i];
//         for(int i1=0; i1<i;i1++){
//             cin>>building[i1];
//         }
// }

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
//     // int a[]={1,2,3,4};
//     // int m = sizeof(a)/4;
//     // for(int i=0; i<sizeof(a)/4;i++){
//     //     cout<<a[i];
//     // }
//     // return 0;
//     string s1,s2,s3;
//     cin>>s1>>s2>>s3;
//     cout<<s1<<endl<<s2<<s3;
//     cout<<s1.length();
// }

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     string s1,s2;
//     cin>>s1>>s2;
//     int c=0, start=0;
//     bool t = true;
//     while(c<int(s1.length())){
//         if(s1[c]==s2[start]){
//             start++;
//         }
//         else{start = 0;}
//         if(start == int(s2.length())){
//             t=false;
//             start=0;
//                                                 // cout<<"c is "<<c<<endl;
//             cout<<c-s2.length()+2<<" ";
//         }
//         c++;
//     }
//     if(t){
//         cout<<-1;
//     }
//     return 0;
// }


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     string s1,s2;
//     cin>>s1>>s2;
//     int c=0, start=0;
//     bool t = true;
//     while(c<int(s1.length())){
//         if(s1[c]==s2[start]){
//             start++;
//         }
//         else{start = 0;
//             if(s1[c]==s2[0]){
//                 start++;
//             }
//         }
//         if(start == int(s2.length())){
//             t=false;
//             start=0;
//                                                 // cout<<"c is "<<<<endl;
//             cout<<c-s2.length()+2<<" ";
//         }
//         c++;
//     }
//     if(t){
//         cout<<-1;
//     }
//     return 0;
// }

// int main(){
//     vector<int>h1;
//     h1.push_back(2);
//     h1.push_back(3);
//     h1.push_back(4);
//     h1.insert(h1.begin()+1,0);
//     // for(int i=1; i<=5;i++){
//     //     h.push_back(i);
//     // }
//     // for(auto i: h){
//     //     cout<<i<<" ";
//     // }
//     // string h = "abc";
//     // cout<<(h1.at(0));
// //    cout<< endl<<*(h.end())<<endl;
//    for (auto i = h1.begin(); i != h1.end(); ++i){
//         cout << *i << " ";}
//         cout<<endl<<h1.size();
// }


// int main(){
//     vector<int>a={1,4,6,2};
//     cout<<sizeof(a)<<endl;
//     a.erase(1+a.begin());
//     a.shrink_to_fit();
//     cout<<a.size()<<endl;
//     for(auto i: a){
//         cout<<i<<" ";
//     }
//     int i = a.begin();
// }

// int main(){
//     vector<int>a={1,5,2,9,3};
//     cout<<a.size()<<endl;
//     sort(a.begin(), a.end(),greater<int>());

//     for(auto i: a){
//     cout<<i<<" ";
//     }
// }

// int main(){
    // string st;
    // scanf("%s", &st);
    // cout<<endl<<st;
    // cout<<endl<<st.length();
    // int array[3]={1,4,2};
    // int a[3][2]={{3,33},{7,77},{22,22}};
    // for(auto i: a){
    //     cout<<i<<" "
    // ;}

    // vector<pair<int,int>> v(1);
        // v.push_back({2,3});

    // cout<<v.size();
    // v.push_back({2,3});
    // v.push_back({5,55});
    // v.push_back({1,11});
    // sort(v.begin(),v.end());
    // for(auto i: v){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;
    // sort(a,a+3);
    // for(auto i: a){
    //     cout<<i<<" "
    // ;}
// int main(){
    // float a = 20000001;
    // float b = a/2;
    // cout<<b<<endl;
    // cout<<int(b)<<endl;
    // if(b==int(b)){
    //     cout<<true;
    // }
    // else cout<<false;
    // string s= "abc";
    // s=s.substr(3);
    // cout<<s.size();

    // vector<vector<int>>q;
    // int a;
    
    // long long* ar = new long long[q.size()];
    //     for(int i=q.size()-1;i>=0;i--){
    //         int f_i=i+q[i][1]+1;
    //         if(f_i<q.size()){
    //             ar[i] = ar[f_i]+ q[i][0];
    //         }
    //         else ar[i]= q[i][0];
    
    //     if(i<q.size()-1){
    //         ar[i]=max(ar[i],ar[i+1]);
    //     }}
    //     return ar[0];
    //     }




    int main(){
        // int n=8;
        // int arr[n]= {2,3,4,5,6};
        // vector<int> v= {1,2,3,4,5};
        // cout<<v;
        vector <pair<int,int>> v;
        v.push_back(1,2);
        // cout<<v[0];
    }