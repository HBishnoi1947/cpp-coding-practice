#include<iostream>
using namespace std;

// int main(){                         // video 42, question at 00.10 min
//     int n, count=1;
//     cin>>n;
//     while (n>=2){
//         count*=2;
//         n-=2;
//     }
//     if(n==0){
//         cout<<"N.A. => 0";
//     }
//     if (n==1){
//         cout<<"Total ways = "<<count+1;
//     }
//     else {
//         cout<<"Total ways = "<<count;
//     }
// }



// int pairing(int n){                         // video 42, question at 5:30 min ... pairing n people may be paired or pariring
//     if(n==1 || n==2 || n==0){
//         return n;
//     }
//     int ways = pairing(n-1) + pairing(n-2)*(n-1);
//     return ways;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"total no of ways to pair = "<<pairing(n);
// }




// int knapsack(int value[], int weight[],int i, int capacity){                                       // 0-1 knap-sack problem, question at 9:05 min ...
//     if(i<0 || capacity <0){return 0;}
//     if(weight[i]>capacity){
//         return 0;
//     }
//     return max((knapsack(value,weight,i-1,capacity-weight[i])+value[i]),knapsack(value,weight,i-1,capacity));
// }
// int main(){
//     int value[] ={100,50,150};
//     int weight[] = {10,20,30};
//     int capacity =50;
//     cout<<knapsack(value,weight,(sizeof(value)/sizeof(value[0])-1),capacity);
// }