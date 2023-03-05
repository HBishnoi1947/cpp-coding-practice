#include<iostream>
using namespace std;

// int main(){ //max element in array
//     int a[5];
//     for(int i=0;i<5;i++){
//         cin>>a[i];
//     }

//     //Print max till i
//     int max=a[0];
//     for(int i=0;i<5;i++){
//             if(max<a[i]){
//                 max=a[i];          
//             }
//         cout<<max<<" ";
    // }
    // }




// // Array Challenge question, video 23, time 15:00;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int length=1, max_length=0;
//     for(int i=0;i<n-1;i++){

//         static int dif=arr[i]-arr[i+1];
//         if(dif==arr[i]-arr[i+1]){
//             length+=1;
//             cout<<"from diff : "<<dif<<"  ";
//         }
//         else{
//             if(max_length<length){
//             max_length=length;
//             }
//             dif=arr[i]-arr[i+1];
//             length =2;
//             cout<<"from start : ";
//         }
        
//     }
//     cout<<"Max. Lenth of Arithmetic subarray = "<<max_length;
// }




//     // Array Challenge question, video 23, time 25:40;
//     int main(){
//     int n,count=0;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         bool t= true;
//         for(int j=0;j<i;j++){
//             if(arr[i]<arr[j]){
//                 t=false;
//             }
//         }
//         if(t && arr[i]>arr[i+1] || n==1){
//             count+=1;
//         }
//     }
//     cout<<"Total recording breaking day = "<<count;
// }


//  // above question with different approch to reduce time complexity
// int main(){
//     int n,count=0;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mx = arr[0];
//     for(int i=0;i<n;i++){
//         if(mx<arr[i] && arr[i]>arr[i+1] || n==1){
//             count+=1;
//         }
//         mx = max(arr[i],mx);
//     }
//     cout<<"Total recording breaking day = "<<count;
// }
