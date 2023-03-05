#include<iostream>
using namespace std;
#include<random>

/*int main(){  // Normal Convinent way
    cout<<"Enter an array of number (5 numbers): ";
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"Enter the number to be searched and to print it's index no. -> ";
    int b;
    cin>>b;
    for(int i=0;i<5;i++){
        if(a[i]==b){
            cout<<"Number is present, at index: "<<i;
        }
    }
}*/





int binarysearch(int array[],int size_array,int num){
    int start=0, end=size_array-1 ;
    size_array/=2;
    while(start<=end){
        if(num==array[size_array]){
            return size_array;
        }
        else if(num>array[size_array]){
            start=1+size_array;
            size_array=(end + start)/2; 
        }
         else if(num<array[size_array]){
            end=size_array - 1;
            size_array=(end + start)/2; 
        }
    }
        if(array[start]!=num){return -1;}
}
int main(){   // Binary Search method
    cout<<"Enter array length: ";
    int n;
    cin>>n;
    cout<<"Array: ";
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=rand() %100 ;
        cout<<a[i]<<" ";
    }

for(int i=0;i<n;i++){
    for(int j=i;j<n-1;j++)
        if(a[i]>a[j+1]){
            int temp;
            temp = a[i];
            a[i]=a[j+1];
            a[j+1]=temp;
        }
    }
cout<<"\nSorted array: ";
for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nEnter the number to be searched and to print it's index no. -> ";
    int num;
    cin>>num;
    int index = binarysearch(a,n,num);
    cout<<"\nIndex is = "<<index;
}