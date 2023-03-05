                             // Video 24

#include<iostream>
using namespace std;

// int main(){ // question apna college 24th video 8:25 min
//     int n;
//     cout<<"size of array : ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter array value : ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
// cout<<"Enter the sum needed from the subarray: ";
// int required;
// cin>>required;
// for(int i=0;i<n;i++){
//     bool t = true;
//     int sum=0;
//     for(int j=i;j<n && t;j++){
//         sum+=a[j];
//         if(sum==required){
//             cout<<"Subarray : ";
//             for(int k=i;k<=j;k++){
//                 cout<<a[k]<<" ";
//             }
//             cout<<endl;
//         }
//         else if(sum>required){
//             t=false;
//         }
//     }
// }
// }



// int main(){ // optimizing above question
//     int n;
//     cout<<"size of array : ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter array value : ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
// cout<<"Enter the sum needed from the subarray: ";
// int required,start=0,end=0;
// cin>>required;
// bool t = true;
// int sum = a[start];
// while(t){
//     while(sum<required && t){
//         if(end==n-1){t=false;continue;}
//         end+=1;
//         sum+=a[end];
//     }
//     while(sum>required && t){
//         if(start==end && end!=n-1){
//         start+=1;
//         end+=1;
//         sum=a[start];continue;
//         }
//         if(start==end && end==n-1){
//             t=false;continue;
//         }
//         sum-=a[start];
//         start+=1;
//     }
//     if(sum==required){
//         t = false;
//         for(int i=start;i<=end;i++){
//             cout<<a[i]<<" ";
//         }       
//     }
// }
// }


// // Array Challenge question, video 24, time 17:00;
// int main(){
//     int n;
//     int min_num =1; 
//     cout<<"Enter lenth of array: ";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<=n;i++){
//         if(a[i]>0){
//             min_num=min(min_num,a[i]);
//         }
//     }
//     cout<<"Minimum number -> "<<min_num+1;
// }
