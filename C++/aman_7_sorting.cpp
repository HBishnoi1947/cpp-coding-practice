#include<iostream>
using namespace std;

int main(){
    int array[5];
    for(int i=0;i<5;i++){
        cin>>array[i];
    }


    // // Nomal sorting
    // for(int i=0;i<4;i++){
    //     for(int j=i+1;j<5;j++){
    //         if(array[i]>array[j]){
    //             int temp = array[i];
    //             array[i] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    // }
    // cout<<endl<<"Normal Sorting: ";
    // for(int i=0;i<5;i++){
    //     cout<<array[i]<<" ";
    // }

    
    
    // //bubble Sort
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4-i;j++){
    //         if (array[j]>array[j+1]){
    //             int temp = array[j];
    //             array[j] = array[j+1];
    //             array[j+1] = temp;
    //         }
    //     }
    // }
    // cout<<endl<<"Bubble Sorting: ";
    // for(int i=0;i<5;i++){
    //     cout<<array[i]<<" ";
    // }


    // //Insertion Sort
    // for(int i = 1;i<5;i++){
    //     int current = array[i];
    //     int j=i;
    //     while(current<array[j-1] && j>0){
    //         array[j]=array[j-1];
    //         j--;
    //     }
    //     array[j]=current;
    // }
    // cout<<endl<<"Insertion Sorting: ";
    // for(int i=0;i<5;i++){
    //     cout<<array[i]<<" ";
    // }



}