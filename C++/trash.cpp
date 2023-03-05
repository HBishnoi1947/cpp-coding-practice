#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<queue>
#include<algorithm>
#include<stack>
#include<string>
#include<map>
#include<unordered_map>
#include<bits/stdc++.h>
// #include <sys/wait.h>
// #include <unistd.h>

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        long long a[matrix.size()] = {0};
    }
};

    // vector <int> v= new vector;
    // v.push_back(1);
    // v.length-1;
    // int n=5;
    // int a[n];

    // vector<int>v={1,2};
    // vector<int>v1={3,4};
    
    // int a[]={1,2,3,4};
    // cout<<max(a);
//     int i=5;
//     for(i=7;i<6;i++){cout<<"dahh";}
//     cout<<"here "<<i;

    // int x,y;
    // cin>>x>>y;
    // int arr[x][y];
    // for(int i=0;i<x;i++){
    // for(int j=0;j<y;j++){
    //     cin>>arr[i][j];
    // }}
    // for(int i=0;i<x;i++){
    // for(int j=0;j<y;j++){
    //     cout<<arr[i][j]<<"  ";
    // }}
    // vector <int> v;

    // int  main(){
        // list <char> l;
        // l.push_back('h');
        // l.push_back('i');
        // l.push_back('j');
        // l.push_back('k');
        // l.push_back('l');
        // for(auto i: l){
        //     cout<<i;
        // }
        // cout<<endl;
        // l.reverse();
        // for(auto i: l){
        //     cout<<i;
        // }



        // queue <int> q;
        // q.push(2);
        // q.push(3);
        // cout<<"a";

        // char a[5]= {'d','b','a','n','4'};
        // // int a[5]={1,5,2,5,3};
        // sort(a,a+5);
        // for(auto i: a){
        //     cout<<i<<" ";
        // }

        // vector<int> l;
        // l.push_back(1);
        // l.push_back(2);
        // l.push_back(2);
        // l.push_back(3);
        // l.erase(l.begin(),l.begin()+2);
        // cout<<l.size()<<endl;
        // for(int i:l){
        //     cout<<i<<" ";
        // }

        // list<int> l;
        // l.push_back(1);
        // l.push_back(2);
        // l.push_back(2);
        // l.push_back(3);
        // l.remove(2);
        // cout<<l.size()<<endl;
        // for(int i:l){
        //     cout<<i<<" ";
        // }

        // stack <int> s;
        // s.push(1);
        // s.push(2);
        // s.push(3);
        // int x=2,y=3,z=5;
        // cout<<max(x,y);

        // vector <int> v;
        // if(v.empty() && v.front()==3 ) cout<<"dahh"<<endl;
        // v.push_back(2);
        // v.push_back(5);
        // for(auto i: v){
        //     cout<<i<<" ";
        // }

        // char ns[3]={'a'};
        // for(auto i: ns){
        //     cout<<i<<endl;
        // }
        // char c[3];
        // c[0]='a';
        // c[2]='b';
        // c[3]='\0';
        // string s="ha";
        // int i=94;
        // s = to_string(i);
        // cout<<c;
        // if(c[1]=='\0')cout<<4;
        // if(c[2]=='\0') cout<<"noooootrue;;;";
        // cout<<"why";
        // int n=4;
        // char ns[n+1];
		// if(ns[n]=='\0') cout<<"true;";


    //     cout<<50/2*4;
    // }



// int evaluate(string s){
//     stack <int> st;
    
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='0' && s[i]<='9')st.push(s[i]-'0');
//         else{
//             int op2 = st.top();st.pop();
//             int op1 = st.top();st.pop();
//             int res;
//             switch(s[i]){
//                 case '+': res =op1+op2; break;
//                 case '-': res =op1-op2; break;
//                 case '*': res =op1*op2; break;
//                 case '/': res =op1/op2; break;
//             }
//             st.push(res);
//         }
//     }
//     return st.top();
// };
// int main(){
//     string s = "57+2*";
//     cout<<evaluate(s);
// }

// int main(){
    // stack <int> s;
    // s.push(2);
    // s.clear();
    // cout<<char(99);
    // int a[2]={0};
    // int b[2]={0};
    // unordered_map<int,int> m;
    // unordered_map<int,int> m2;
    // m[0]++;
    // m2[0]++;
    // m2[1];
    // cout<<(m==m2);
    // string s = "harsh";
    // for(auto i: s.toChar){
    //     cout<<i<<" ";
    // }
    // int a= 4, b=8,c=2;
    // cout<<__gcd(a,b);
    // vector<int> v;
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.erase(v.begin(),v.end()-1);
    // for(int i:v){
        // cout<<(1-11)%12;
    // }
    //   long long int a = 100000;
    //   long long int b = 100000;
    // cout<<(a*b*4)%998244353;
    // int n;cin>>n;
    //     long long int x[n+1],y[n+1];
    //     for(int i=0;i<n;i++){
    //         cin>>x[i]>>y[i];
    //     }
    //     x[n]=x[0];y[n]=y[0];
    //     long long int s=0;
    //     long long int a=0,b=0;
    //     // cout<<"dahh "<<
    //     for(int i=0;i<n;i++){
    //         a+=x[i]*y[i+1];
    //         cout<<x[i]<<"  "<<y[i+1]<<" => "<<a<<endl;
    //         b+=x[i+1]*y[i];
    //     }
    //     long long int sum_total=abs((a-b));
    //     cout<<a<<endl;
    //     cout<<b<<endl;
    //     cout<<sum_total/2<<endl;
    // list <int> l;
    // l.push_back(2);
    // fork();
    // cout<<9;
// }




// int main(){
    // string s="h",a;
    // a = s*3;
    // cout<<a;
    // map <int,int> m;
    // m[1]=11;
    // m[2]=22;
    // m[3]=33;
    // for(auto i = m.begin()){
    //     cout<<i<<" ";
    // }
    // vector <int> s = {1,2,3,4,5};
    // s->push_back('a');
    // s->pop_back();
    // s.push_back(3);
    // s.push_back(4);
    // s={0};
    // cout<<s[0]<<s[1];
    // string g ="har";
    // g = g.substr(3);
    // cout<<g.size();
    // for(auto i: *s){
    //     cout<<i<<" ";
    // }
    // g+="a"*1;
    // cout<<g;
// }

// class Solution {
// public:
//     void aaa(vector<vector<double>> &v, int poured, int row, double gap){
        
//         vector<double> d;
//         double c=0,s=0;
//         if(gap>0){
//             double req = (row-1)*2.0;
//             if(gap>=req){
//                 s=1,c=1;
//                 gap -= row; 
//             }
//             else{
//                 s=gap/((row-1)*2);
//                 c = gap/(row-1);
//                 gap -= (2*s + (row-2)*c);
//             }
//         }
        
//         while(poured!=0 && s<1){
//         poured--;
//         s += 1.0/((row-1)*2);
//         if(row>2)    c += 1.0/(row-1);
//             // cout<<s<<"   *   "<<c<<endl;
//         }
        
        
//         if(c>1){
//             gap += (c-1)*(row-2);
//             c=1;
//         }
//         if(s>1){
//             gap += (s-1)*(2);
//             s=1;
//         }
//         for(int i=0;i<row;i++){
//             if(i==0 || i==row-1) d.push_back(s);
//             else d.push_back(c);
//         }
//         v.push_back(d);
//         cout<<"glass "<<poured<<" row "<<row<<" gap "<<gap<<endl;
//         if(poured>0 || gap>0) aaa(v,poured, row+1, gap);
//     }
    
//     double champagneTower(int poured, int query_row, int query_glass) {
//         vector<vector<double>> v;
//         if(poured==0) return 0;
//         v.push_back({1});
//         aaa(v,poured-1, 2, 0);
//         // cout<<"size "<<v.size()<<endl;
//         for(auto i: v){
//             for (auto j: i){
//                 cout<<j<<"    ";
//             }
//             cout<<endl;
//         }
//         if(query_row+1>v.size()) return 0;
//         return v[query_row][query_glass];
//     }
// };



// int main(){
//     vector <int> l = {23,54,12,67,28};
//     // vector <int> s = {1,2,3,4,5};

//     for (auto it = l.begin();it != l.end(); ++it) {

//         if (*it != 12) {

// 			l.erase(it++);

// 			break ;

//         }

// 		};// end of for

//         std::cout << "\n";

// 	for (auto it = l.begin();it != l.end(); ++it) {

// 		std::cout << *it << " ";

// 		};// end of for

//         std::cout << "\n";
// }

// void add(int* a){
//     *a=5;
// }
// int main(){
//     int a=1;
//     add(&a);
//     cout<<a;
    // map<int,int> m;
    // map<int,int> n;
    // n[1]=1;
    // if(n==m) cout<<"Hell";
    // else cout<<"No";
    // string s = "10",s1="01";
    // int s=123;
    // int s1=s^1;
    // s1^=1;
    // s1^=1;
    // int n= 20;
    // long long c = pow(2,n);
    // int a=stoi(s,NULL,2);
    // cout<<c;
    // if('a'<'b') cout<<"hell";
    // if('a'>'b') cout<<" also";
// }

// int main() {
	// vector<int> v={1,7,3,5,2};
	// list<int> s={1,7,3,5,2};
    // stack <int> v;
    // v.push(2);
    // v.push(5);
    // v.push(1);
    // v.push(3);
    // string v = "1011011";
    // int a = count(v.begin(),v.end(),"01");
    // cout<<a;
    // sort(v.begin(),v.end());
    // sort(v.begin(),v.end());
    // multiset<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);

    // priority_queue<int, vector<int>, greater<int> > s;
    // s.push(1);
    // s.push(5);
    // s.push(3);
    // s.push(4);

    // s.top()++;
    // cout<<endl;
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }

    // unordered_
    // map<pair<int,int>,int> m;
    // m[{2,2}]=4;
    // cout<<m[{2,2}]<<" "<<m[{1,2}];

//     double d = 2.1;
//     d-=.1;
//     string c=to_string(int (d));
//     // d*=10;
//     cout<<c<<endl;
//     cout<<d<<" "<<int(d);
// }

// int func(string s){
//     int length = s.size();
//     int v[26]={0};
//     unordered_map<char,int> m;
//     for(int i=0;i<s.size();i++){
//         v[s[i]-'a']++;
//         if(v[s[i]-'a']>1)m[s[i]]++;
//     }
//     for(int i=0;i<s.size();i++){
//         for(int j=i+1;j<s.size();j++){
//             string nw =  s.substr(i,j-i+1);
//             unordered_map<char,int> n = m;
//             for(int h=0;h<nw.size();h++){
//                 n[nw[h]]--;
//             }
//             bool b = true;
//             for(auto k = n.begin();k!=n.end() && b;k++){
//                 if(k->second>0) b = false;
//             }
//             if(b) length = min(length, int(nw.size()));
//         }
//     }
//     return length;
// }




// void rec(int i,int c , int &ans, vector<vector<int>> &v, vector<int> visited, vector<int> &status){
//     visited[i]=1;
//     c++;
//     if(c>=ans) return;
//     for(int j=0;j<v[i].size();j++){
//         if(status[v[i][j]]==3){ans = min(ans,c); return;}
//         if(visited[j]==0) {visited[j]++;rec(j,c,ans,v,visited,status);visited[j]--;}
//     }
// }
// int func(int center_nodes, int center_edges, vector<int> nodes_from, vector<int> nodes_to, vector<int> status){
//     int time = 0;
//     vector<vector<int>> v(center_edges, {-1});
//     for(int i=0;i<center_edges;i++){
//         v[nodes_from[i]].push_back(nodes_to[i]);
//     }
//     for(int i=0;i<center_nodes;i++){
//         int ans=INT_MAX;
//         if(status[i]==1) {rec(i,0,ans,v,vector<int>(center_edges,0),status);
//             time = max(time,ans);}
//     }
//     return time;
// }



// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n],b[n];
//         int mi=INT_MAX,ma=-1, x = 0;
//         b[0] = a[n-1]-a[0];
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             if(i!=0) b[i]=a[i-1]-a[i];
//             mi = min(mi, a[i]);
//             ma = max(ma, a[i]);
//             x = max(x,b[i]);
//         }
//         if(mi==a[0] || ma==a[n-1]) cout<<ma-mi<<endl;
//         else {
//             cout<<x<<endl;
//         }
//     }
// }


// int main(){
//     vector <int> arr ={1,1,3,2,1,4,5,4};
//     vector <int> ans;

//     unordered_map<int,int> m;
//     for(int i=0;i<arr.size();i++){
//         if(m[arr[i]]==0){
//             ans.push_back(arr[i]);
//             m[arr[i]]++;
//         }
//     }
//     for(auto i : ans){
//         cout<<i;
//     }
// }


// int funct(string w1,string w2){
//     int b = 0;
//     int n = w1.size();
//     unordered_map<char,vector<int>> m;
//     for(int i=0;i<w1.size();i++){
//         m[w1[i]].push_back(i);
//     }
//     int prev=-1;
//     for(int i=0;i<w2.size();i++){
//         // cout<<"ss "<<i<<w2[i]<<endl;
//         bool found  = true;
//         for(int j=0;j<m[w2[i]].size();j++){
//             if(m[w2[i]][j]>prev){
//                 prev=m[w2[i]][j];
//                 // cout<<"---"<<w2[i]<<prev<<endl;;
//                 m[w2[i]][j]=-10;
//                 found=false;
//                 break;
//             }
//         }
//             if(found && b==0) {b++; i--; prev=-1;}
//             else if(found && b==1) {return -1;}
//     }
//     return 1;
// }

// int main(){
//     cout<<funct("sample","mplesa");
// }


// Create table face_recognition (
//     `Full Name` varchar(100),
//     `Department` varchar(100),
//     Course varchar(100),
//     year varchar(100),
//     Semester varchar(100),
//     Gender varchar(100),
//     DOB varchar(100),
//     Mob_No varchar(100),
//     Address varchar(100),
//     Enrollment varchar(100),
//     Email varchar(100)
// )


// string rev(string s){
//     string a;
//     for(int i=s.size()-1;i>=0;i--){
//         a+=s[i];
//     }
//     return a;
// }
// int main(){
//     string s;
//     cin>>s;
//     string t = s.substr(0,s.size()/2);
//     if(s.size()%2){
//         s= s.substr(0,s.size()/2+1) + rev(t);
//     }
//     else{
//         s = t + rev(t);
//     }
//     cout<<s;
// }


// vector<int> reverse_function(vector<int> v){
//     int n = v.size();
//     vector<int> ans(n,0);
//     unordered_map<int,bool> m;
//     for(int i=n-1;i>=0;i--){
//         if(m[v[i]]==false){
//             ans.push_back(v[i]);
//             m[v[i]]=true;
//         }
//     }
//     return ans;
// }


// string vowel_function(string s){
//     int n = s.size();
//     for(int i=0;i<n;i++){
//         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
//             s[i]=' '; // space at the place of vowel
//         }
//     }
//     return s;
// }



// int palindrome_conversion_changes_required(string s){
//     int ans=0;
//     int l = 0, h = s.size();
//     while(l<h){
//         if(s[l]!=s[h]) {
//             ans++;
//         }
//         l++;
//         h--;
//     }
//     return ans;
// }


// int main() {
//     string s;
//     cin>>s;
//     bool t = true;
//     for(int i=0;t && i<s.size();i++){
//         if(s[i]!=s[s.size()-1-i]) t= false;
//     }
//     cout<<t;
//     return 0;
// }


// select * from table ABC join DEF;
// select * from table ABC inner join DEF;
// select * from table ABC outter join DEF;


string frequencySort(string s) {
        vector<int> v(26,0);
        for(auto i: s){
            v[i-'a']++;
        }
        s="";
        
        while(1){
            int l=0;
            int ind=0;
            for(auto i: v) cout<<i<<" ";
            cout<<endl;
            for(int i=0;i<26;i++){
                if(l<v[i]){
                    l=v[i];
                    ind=i;
                    cout<<i<<"------"<<l<<endl;
                }
            }
            cout<<l<<endl;
            v[ind]=0;
            cout<<ind<<" "<<l<<" "<<s<<endl;
            if(l==0) break;
            while(l--) s+=char('a'+ind);
        }
        return s;
    }

int main(){
    string s="tree";
    cout<<frequencySort(s);
}