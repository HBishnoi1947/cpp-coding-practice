# include<iostream>
using namespace std;

// int raisetopower(int a,int p){                    // calculate a to the power p
//     int num=1;
//     if(a==1 || p==0){return 1;}

//     num =a* raisetopower(a,p-1);
//     return num;
// }
// int main(){
//     int a,p;
//     cin>>a>>p;
//     cout<<raisetopower(a,p);
// }



// int factorial(int n){                        // find factorial of a number n
//     if(n==1){return 1;}
//     return n*factorial(n-1);
// }
// int main(){
//     int num;
//     cin>>num;
//     cout<<"factorial: "<<factorial(num); 
// }



// int Nth_digitof_febunacci(int n){             // print nth digit of febunacci series
//     if(n==0 || n==1){return n;}
//     return Nth_digitof_febunacci(n-1)+Nth_digitof_febunacci(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<Nth_digitof_febunacci(n);
// }



// bool check_sort(int a[],int s){           // check wether the given array is sorted
// if(s==1){return 1;}
//     bool t = check_sort(a+1,s-1);
//     return (a[0]<a[1] && t);
// }
// int main(){
//     int array[5];
//     for(int i=0;i<5;i++)
//     cin>>array[i];
//     cout<<check_sort(array,5);
// }


// void print_dec(int n){           // printing number in increasing and decreasing order till number n  
//     cout<<n<<" ";
//     if(n==0){return;}
//     print_dec(n-1);
// }
// void print_inc(int n){
//     if(n==0){cout<<0<<" ";return;}
//     print_inc(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     print_inc(n);
//     cout<<endl;
//     print_dec(n);
// }



// int first_occurence(int a[],int s,int num, int index){       // find the first and last occurence of a number in a array
//     if(s!=0){index = min(first_occurence(a,s-1,num,index),index);}
//     else{return index;}
//     if(a[s-1]==num){index = min(s-1,index);}
//     return index;
// }
// int first_occurence(int a[],int s,int num,int index){        // 2nd try of fn first_occurence
//     if(s==0){return 1000;}
//     index = min(first_occurence(a,s-1,num,index),index);
//     if(a[s-1]==num){return min(index,s-1);}
//     return index;
// }
// int first_occurence(int a[],int s,int num,int i){            // 3rd try of fn first_occurence
//     if(a[i]==num){return i;}
//     else if (s!=0){return first_occurence(a,--s,num,1+i);}
//     else{return -1;}
// }
// int last_occurence(int a[],int s,int num){
//     if(a[s-1]==num){return s-1;}
//     else{return last_occurence(a,s-1,num);}
// }
// int main(){
//     int array[7] = {4,2,1,2,5,2,7};
//     int num;
//     cin>>num;
//     cout<<"First occurence: "<<first_occurence(array,7,num,0)<<endl;
//     // cout<<"Last occurence: "<<last_occurence(array,7,num);
// }