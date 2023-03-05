#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string s1="",s2="";
//     cin>>s1>>s2;
//     long long n = s1.size(), a=0,b=0;
//     for(int i=0;i<n;i++){
//         if(s1[i]=='?' || s2[i]=='?') b++;
//         else if(s1[i]!=s2[i]) {a++; b++;}
//     }
//     cout<<a<<" "<<b;
// }


// int main(){
//     int n,bud;
//     cin>>n>>bud;
//     int a[n];
//     for(int i=0;i<n;i++) cin>>a[i];
//     int ans=INT_MAX, l=0,h=n-1, s=0, b1=a[l],b2=a[h];
//     while(l<h){
//         s=bud - a[l]-a[h];
//         if(ans>abs(s)){
//             ans=abs(s);
//             b1=a[l];
//             b2=a[h];
//         }
//         if(s>0) l++;
//         else if (s<0) h--;
//         else break;
//     }
//     cout<<b1<<endl<<b2;
// }


// int main(){
//     int n,sum=0;
//     cin>>n;
//     int p;
//     cin>>p;
//     vector <float> v(n),k(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     vector <float> pre(n,0);
//     for(int i=0;i<p;i++)
//     sum+=v[i];
//     pre[0]=float(sum)/(float)p;
//     k[0]=sum;
//     for(int i=1;i<n-p+1;i++)
//     {
//        k[i]=k[i-1]-v[i-1]+v[i+p-1];
//        pre[i]=(float)k[i]/p;
//     }
//     int indi=0,mini=INT_MAX;
//     for(int i=0;i<n-p+1;i++)
//     {
//         if(pre[i]<mini)
//         {
//             mini=pre[i];
//             indi=i;
//         }
//     }
//     cout<<indi<<endl;
//     cout<<indi+p-1<<endl;
// }


// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n,0);
//     for(int i=0;i<n;i++) cin>>v[i];
//     vector<int> a(n,0),b(n,0);
//     for(int i=1;i<n;i++){
//         if(v[i-1]>v[i]) a[i]=1;
//     }
//     for(int i=n-2;i>0;i--){
//         if(v[i]>v[i+1]) b[i]=1;
//     }
//     int ans=1;
//     for(int i=0;i<n;i++){
//         if(a[i] || b[i]) ans++;
//     }
//     cout<<ans;
// }


int solve(vector<int> &a) {
    priority_queue<int,vector<int>, greater<int>> pq;
    int n=a.size(),s=0;
    for(int i=1;i<n;i++){
        if(a[i]<0) s+=a[i];
        else {
            pq.push(s);s=0;
        }
    }
    for(int i=0;i<n;i++) {s+=a[i]; s%=1000000007;}
    int ans=0;
    int i=3;
    while(!pq.empty() && i--){
        s+=pq.top();
        pq.pop();
    }
    pq.pop();
    return s;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<solve(v);
}